/**
 * @file        LESDK/Init.hpp
 * @brief       This file provides logic for initializing global variables.
 */

#pragma once


// Forward-declared to avoid pulling SPI.h in a core header.
class ISharedProxyInterface;

namespace LESDK {

    /**
     * @brief
     *   Flag set if it makes sense to enable @c bTestAccess for @ref Initializer methods.
     */
    static constexpr bool kb_testAccess = false;

    /**
     * @brief
     *   Variant for a variable / function address specification that
     *   the @ref Initializer resolves into a typed pointer it may need.
     */
    class Address final {
        enum Mode : int {
            k_modeAbsolute = 1,
            k_modeOffset = 2,
            k_modePattern = 3,
            k_modeInstrRelative = 4,
        };

        union {
            void*       m_address;
            size_t      m_offset;
            char*       m_pattern;
        };
        Mode            m_valueMode{ 0 };
        long long       m_resolveShift{ 0 };

        friend class    Initializer;

    public:

        /** Constructs an @ref Address as an absolute address. */
        static Address FromAbsolute(void* Addr, long long Shift = 0);
        /** Constructs an @ref Address as an RVA offset (to the main game module). */
        static Address FromOffset(size_t Offset, long long Shift = 0);
        /** Constructs an @ref Address as a pattern that initializer must find. */
        static Address FromPattern(char const* Pattern, long long Shift = 0);

        /**
         * @brief
         * Constructs an @ref Address as a pattern to a MOV / LEA instruction
         * which uses RIP-relative addressing in source operand that initializer must find.
         *
         * @remarks
         * Across the previous-generation SDK this was known as "findAddressLeaMov()" (ME3Tweaks)
         * or "post-rip" (PHM-LE1), though the latter would search for an instruction *after* the one
         * actually using RIP-relative addressing.
         */
        static Address FromInstrRelative(char const* Pattern);

        /**
         * @brief
         * Constructs an @ref as a partial pattern that initializer must find
         * in a way that is compatible with the "post-hook" technique.
         *
         * @param[in] Pattern - The partial pattern searched, must have the first five bytes omitted.
         */
        static Address FromPostHook(char const* Pattern);
    };


    /**
     * @brief
     *   Utility type for initializing SDK-required global variables.
     *   Each global variable has an @c Init* method of its own.
     */
    class Initializer final {
    public:

        void* ModuleBase{ nullptr };
        ISharedProxyInterface* ProxyInstance{ nullptr };
        char const* OwnerName{ nullptr };

    public:

        explicit Initializer(ISharedProxyInterface* SPI, char const* Name);

        void* Resolve(Address InAddr) const;
        void* InstallHook(char const* Name, void* Target, void* Detour);
        void  UninstallHook(char const* Name);

        template<typename T>
        T* ResolveTyped(Address const InAddr) const {
            void* const Resolved = Resolve(InAddr);
            return reinterpret_cast<T*>(Resolved);
        }
    };


    /**
     * @brief       Finds base address of the main game module.
     * @return      Base address of the module starting with "MassEffect" as a pointer.
     */
    void* GetMainModuleBase();

}


// ! Patterns for built-in globals.
// ========================================

#if defined(SDK_TARGET_LE1)

    #define BUILTIN_CALLFUNCTION_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 53 56 57 */ "41 54 41 55 41 56 41 57 48 81 EC A8 04 00 00 48 8D 6C 24 20 48 C7 45 68 FE FF FF FF")
    #define BUILTIN_GENGINE_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 A0 ?? ?? ?? ?? DF E8")
    #define BUILTIN_GMALLOC_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? 48 8B 01 44 8B C3 48 8B D7")
    #define BUILTIN_GNATIVES_RIP                    ::LESDK::Address::FromInstrRelative("48 8D 0D ?? ?? ?? ?? 48 8B 04 ?? E9")
    #define BUILTIN_GOBOBJECTS_RIP                  ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 4D 8B 0C ?? 4D 85 C9")
    #define BUILTIN_GSYS_RIP                        ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 B8 ?? ?? ?? ?? 00 74 ?? 48 8B B8 ?? ?? ?? ?? 48 8D 05")
    #define BUILTIN_GWORLD_RIP                      ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 0F 84 ?? ?? ?? ?? 33 D2")
    #define BUILTIN_PROCESSEVENT_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 41 56 41 */ "57 48 81 EC 90 00 00 00 48 8D 6C 24 ?? 48 C7 45 ?? FE FF FF FF")
    #define BUILTIN_PROCESSINTERNAL_PHOOK           ::LESDK::Address::FromPostHook(/* 40 53 55 56 57 */ "48 81 EC 88 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 44 24 ?? 48 8B 01")
    #define BUILTIN_SFXNAMEINIT_PHOOK               ::LESDK::Address::FromPostHook(/* 40 55 56 57 41 */ "54 41 55 41 56 41 57 48 81 EC 00 07 00 00")
    #define BUILTIN_SFXNAMEPOOLS_RIP                ::LESDK::Address::FromInstrRelative("4C 8D 25 ?? ?? ?? ?? 33 F6 49 8B E9")
    #define BUILTIN_STATICALLOCATEOBJECT_PHOOK      ::LESDK::Address::FromPostHook(/* 4C 89 44 24 ?? */ "55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ?? ?? ?? ?? 48 81 EC 80 05 00 00")
    #define BUILTIN_STATICCONSTRUCTOBJECT_PHOOK     ::LESDK::Address::FromPostHook(/* 48 8B C4 4C 89 */ "40 ?? 56 57 41 54 41 56 41 57 48 83 EC 70")
    #define BUILTIN_UWORLDSPAWNACTOR_PHOOK          ::LESDK::Address::FromPostHook(/* 48 8B C4 55 41 */ "54 41 55 41 56 41 57 48 8D 68 ?? 48 81 EC B0 00 00 00 48 C7 45 ?? FE FF FF FF 48 89 58 ?? 48 89 70 ?? 48 89 78 ?? 49 8B F9")


#elif defined(SDK_TARGET_LE2)

    #define BUILTIN_CALLFUNCTION_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 53 56 57 */ "41 54 41 55 41 56 41 57 48 81 EC A8 04 00 00 48 8D 6C 24 20 48 C7 45 68 FE FF FF FF")
    #define BUILTIN_GENGINE_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 A0 ?? ?? ?? ?? DF")
    #define BUILTIN_GMALLOC_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? 48 8B 01 44 8B C3 48 8B D7")
    #define BUILTIN_GNATIVES_RIP                    ::LESDK::Address::FromInstrRelative("48 8D 0D ?? ?? ?? ?? 48 8B 04 ?? E9")
    #define BUILTIN_GOBOBJECTS_RIP                  ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 4D 8B 0C ?? 4D 85 C9")
    #define BUILTIN_GSYS_RIP                        ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 B8 ?? ?? ?? ?? 00 74 ?? 48 8B B8 ?? ?? ?? ?? 48 8D 05")
    #define BUILTIN_GWORLD_RIP                      ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 0F 84 ?? ?? ?? ?? 33 D2 48 8B 4B")
    #define BUILTIN_PROCESSEVENT_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 41 56 41 */ "57 48 81 EC 90 00 00 00 48 8D 6C 24 ?? 48 C7 45 ?? FE FF FF FF")
    #define BUILTIN_PROCESSINTERNAL_PHOOK           ::LESDK::Address::FromPostHook(/* 40 53 55 56 57 */ "48 81 EC 88 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 44 24 ?? 48 8B 01")
    #define BUILTIN_SFXNAMEINIT_PHOOK               ::LESDK::Address::FromPostHook(/* 40 55 56 57 41 */ "54 41 55 41 56 41 57 48 81 EC 00 07 00 00")
    #define BUILTIN_SFXNAMEPOOLS_RIP                ::LESDK::Address::FromInstrRelative("4C 8D 25 ?? ?? ?? ?? 33 F6 49 8B E9")
    #define BUILTIN_STATICALLOCATEOBJECT_PHOOK      ::LESDK::Address::FromPostHook(/* 4C 89 44 24 ?? */ "55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ?? ?? ?? ?? 48 81 EC 80 05 00 00")
    #define BUILTIN_STATICCONSTRUCTOBJECT_PHOOK     ::LESDK::Address::FromPostHook(/* 48 8B C4 48 89 */ "50 ?? 56 57 41 55 41 56 41 57 48 83 EC 70")
    #define BUILTIN_UWORLDSPAWNACTOR_PHOOK          ::LESDK::Address::FromPostHook(/* 48 8B C4 55 41 */ "54 41 55 41 56 41 57 48 8D 68 ?? 48 81 EC A0 00 00 00 48 C7 45 ?? FE FF FF FF 48 89 58 ?? 48 89 70 ?? 48 89 78 ?? 49 8B F9")

#elif defined(SDK_TARGET_LE3)

    #define BUILTIN_CALLFUNCTION_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 53 56 57 */ "41 54 41 55 41 56 41 57 48 81 EC A8 04 00 00 48 8D 6C 24 20 48 C7 45 68 FE FF FF FF")
    #define BUILTIN_GENGINE_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 A0 ?? ?? ?? ?? DF")
    #define BUILTIN_GMALLOC_RIP                     ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? 48 8B 01 44 8B C3 48 8B D7")
    #define BUILTIN_GNATIVES_RIP                    ::LESDK::Address::FromInstrRelative("48 8D 0D ?? ?? ?? ?? 48 8B 04 ?? E9")
    #define BUILTIN_GOBOBJECTS_RIP                  ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? 48 8B 05 ?? ?? ?? ?? 4C 8B 43")
    #define BUILTIN_GSYS_RIP                        ::LESDK::Address::FromInstrRelative("48 8B 05 ?? ?? ?? ?? 83 B8 ?? ?? ?? ?? 00 74 ?? 48 8B B8 ?? ?? ?? ?? 48 8D 05")
    #define BUILTIN_GWORLD_RIP                      ::LESDK::Address::FromInstrRelative("48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 0F 84 ?? ?? ?? ?? 33 D2")
    #define BUILTIN_PROCESSEVENT_PHOOK              ::LESDK::Address::FromPostHook(/* 40 55 41 56 41 */ "57 48 81 EC 90 00 00 00 48 8D 6C 24 ?? 48 C7 45 ?? FE FF FF FF")
    #define BUILTIN_PROCESSINTERNAL_PHOOK           ::LESDK::Address::FromPostHook(/* 40 53 55 56 57 */ "48 81 EC 88 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 44 24 ?? 48 8B 01")
    #define BUILTIN_SFXNAMEINIT_PHOOK               ::LESDK::Address::FromPostHook(/* 40 55 56 57 41 */ "54 41 55 41 56 41 57 48 81 EC 00 07 00 00")
    #define BUILTIN_SFXNAMEPOOLS_RIP                ::LESDK::Address::FromInstrRelative("4C 8D 0D ?? ?? ?? ?? 66 66 0F 1F 84 ?? 00 00 00 00 48 8B 16")
    #define BUILTIN_STATICALLOCATEOBJECT_PHOOK      ::LESDK::Address::FromPostHook(/* 4C 89 44 24 ?? */ "55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ?? ?? ?? ?? 48 81 EC 80 05 00 00")
    #define BUILTIN_STATICCONSTRUCTOBJECT_PHOOK     ::LESDK::Address::FromPostHook(/* 48 8B C4 48 89 */ "50 ?? 56 57 41 55 41 56 41 57 48 83 EC 70")
    #define BUILTIN_UWORLDSPAWNACTOR_PHOOK          ::LESDK::Address::FromPostHook(/* 48 8B C4 55 41 */ "54 41 55 41 56 41 57 48 8D 68 ?? 48 81 EC A0 00 00 00 48 C7 45 ?? FE FF FF FF 48 89 58 ?? 48 89 70 ?? 48 89 78 ?? 49 8B F9")

#endif
