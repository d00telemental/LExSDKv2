#include <cstring>
#include <string>

#include <Windows.h>
#include <tlhelp32.h>

#include "SPI.h"

#include "LESDK/Headers.hpp"
#include "LESDK/Init.hpp"


namespace LESDK {

    // ! Address implementation.
    // ========================================

    Address Address::FromAbsolute(void* const Addr, long long const Shift) {
        Address OutAddr{};
        OutAddr.m_address = Addr;
        OutAddr.m_valueMode = k_modeAbsolute;
        OutAddr.m_resolveShift = Shift;
        return OutAddr;
    }

    Address Address::FromOffset(size_t const Offset, long long const Shift) {
        Address OutAddr{};
        OutAddr.m_offset = Offset;
        OutAddr.m_valueMode = k_modeOffset;
        OutAddr.m_resolveShift = Shift;
        return OutAddr;
    }

    Address Address::FromPattern(char const* const Pattern, long long const Shift) {
        LESDK_CHECK(Pattern != nullptr, "");
        LESDK_CHECK(std::strlen(Pattern) < 300, "");

        Address OutAddr{};
        OutAddr.m_pattern = const_cast<char*>(Pattern);
        OutAddr.m_valueMode = k_modePattern;
        OutAddr.m_resolveShift = Shift;
        return OutAddr;
    }

    Address Address::FromInstrRelative(char const* const Pattern) {
        LESDK_CHECK(Pattern != nullptr, "");
        LESDK_CHECK(std::strlen(Pattern) < 300, "");

        Address OutAddr{};
        OutAddr.m_pattern = const_cast<char*>(Pattern);
        OutAddr.m_valueMode = k_modeInstrRelative;
        OutAddr.m_resolveShift = 0;
        return OutAddr;
    }

    Address Address::FromPostHook(char const* const Pattern) {
        return FromPattern(Pattern, -5);
    }


    // ! Initializer implementation.
    // ========================================

    Initializer::Initializer(ISharedProxyInterface* const SPI, char const* const Name) {
        LESDK_CHECK(SPI != nullptr, "");
        LESDK_CHECK(Name != nullptr, "");
        ModuleBase = GetMainModuleBase();
        ProxyInstance = SPI;
        OwnerName = Name;
    }

    void* Initializer::Resolve(Address const InAddr) const {
        void* OutAddr = nullptr;
        SPIReturn SpiReturn = SPIReturn::Success;

        switch (InAddr.m_valueMode) {
        case Address::k_modeAbsolute:
            OutAddr = reinterpret_cast<BYTE*>(InAddr.m_address);
            break;
        case Address::k_modeOffset:
            LESDK_CHECK(ModuleBase != nullptr, "failed to resolve rva offset");
            OutAddr = reinterpret_cast<BYTE*>(ModuleBase) + InAddr.m_offset;
            break;
        case Address::k_modePattern:
            SpiReturn = ProxyInstance->FindPattern(&OutAddr, InAddr.m_pattern);
            LESDK_CHECK(SpiReturn == SPIReturn::Success, "failed to find pattern or it is invalid");
            break;
        case Address::k_modeInstrRelative:
            SpiReturn = ProxyInstance->FindPattern(&OutAddr, InAddr.m_pattern);
            LESDK_CHECK(SpiReturn == SPIReturn::Success, "failed to find pattern or it is invalid");
            OutAddr = (reinterpret_cast<BYTE*>(OutAddr) + 7) + *reinterpret_cast<INT*>(reinterpret_cast<BYTE*>(OutAddr) + 3);
            break;
        }

        LESDK_CHECK(OutAddr != nullptr, "invalid mode of resolved address");
        if (OutAddr != nullptr) {
            OutAddr = reinterpret_cast<BYTE*>(OutAddr) + InAddr.m_resolveShift;
        }
        return OutAddr;
    }

    void* Initializer::InstallHook(char const* const Name, void* const Target, void* const Detour) {
        LESDK_CHECK(Name != nullptr, "");
        LESDK_CHECK(Target != nullptr, "");
        LESDK_CHECK(Detour != nullptr, "");

        std::string HookName{};
        void* pOutOriginal = nullptr;

        HookName.reserve(127);
        HookName.append(OwnerName).append("_").append(Name);

        SPIReturn const rc = ProxyInstance->InstallHook(HookName.c_str(), Target, Detour, &pOutOriginal);
        if (rc != SPIReturn::Success) {
            LESDK_CHECK(rc == SPIReturn::Success, "failed to install hook");
            return nullptr;
        }

        return pOutOriginal;
    }

    void Initializer::UninstallHook(char const* const Name) {
        LESDK_CHECK(Name != nullptr, "");

        std::string HookName{};
        HookName.reserve(127);
        HookName.append(OwnerName).append("_").append(Name);

        SPIReturn const rc = ProxyInstance->UninstallHook(HookName.c_str());
        if (rc != SPIReturn::Success) {
            LESDK_CHECK(rc == SPIReturn::Success, "failed to uninstall hook");
        }
    }


    // ! Global functions.
    // ========================================

    void* GetMainModuleBase() {
        DWORD const CurrentProcess = GetCurrentProcessId();
        HANDLE const ProcessSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, CurrentProcess);

        BYTE* BaseAddress = nullptr;

        if (ProcessSnapshot != INVALID_HANDLE_VALUE) {
            MODULEENTRY32 ModuleEntry{};
            ModuleEntry.dwSize = sizeof ModuleEntry;

            if (Module32First(ProcessSnapshot, &ModuleEntry)) {
                do {
                    char const* const ModuleName = ModuleEntry.szModule;
                    if (ModuleName == std::strstr(ModuleName, "MassEffect")) {
                        BaseAddress = ModuleEntry.modBaseAddr;
                        break;
                    }
                } while (Module32Next(ProcessSnapshot, &ModuleEntry));
            }

            CloseHandle(ProcessSnapshot);
        }

        LESDK_CHECK(BaseAddress != nullptr, "failed to locate main module");
        return BaseAddress;
    }

}
