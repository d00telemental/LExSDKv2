/**
 * @file        LESDK/Common/FString.hpp
 * @brief       This file implements partial FString, Unreal's dynamic string type.
 */

#pragma once

// #include <cstdarg>
// #include <cwchar>
// #include <string>

#include "LESDK/Common/Core.hpp"
#include "LESDK/Common/TArray.hpp"


namespace LESDK {

    // This functionality must be implemented in .cpp to avoid pulling <Windows.h> throughout the SDK files.

    UINT GetWideLengthAnsi(char const* InAnsiStr, UINT InAnsiLength);
    UINT GetWideLengthUtf8(char const* InUtf8Str, UINT InUtf8Length);

    bool EncodeWideFromAnsi(char const* InAnsiStr, UINT InAnsiLength, WCHAR* OutWideStr, UINT OutWideLength, DWORD* pOutError);
    bool EncodeWideFromUtf8(char const* InUtf8Str, UINT InUtf8Length, WCHAR* OutWideStr, UINT OutWideLength, DWORD* pOutError);

    DWORD WideStringHashCI(WCHAR const* Str) noexcept;

}

class FString;
class FStringRAII;


// ! Hash functions.
// ========================================

DWORD GetTypeHash(FString& Value) noexcept;
DWORD GetTypeHash(FString const& Value) noexcept;

DWORD GetTypeHash(FStringRAII& Value) noexcept;
DWORD GetTypeHash(FStringRAII const& Value) noexcept;


// ! FString implementation.
// ========================================

template<bool WithRAII>
class FStringBase {
    CONTAINER_TYPEDEFS(WCHAR, UINT, INT)

protected:
    TArrayBase<value_type, WithRAII> Storage{};

public:
    FStringBase() {}
    ~FStringBase() noexcept {}

    const_pointer Chars() const noexcept;

    size_type Capacity() const noexcept;
    size_type Length() const noexcept;

    [[nodiscard]] bool Any() const noexcept;
    [[nodiscard]] bool Empty() const noexcept;

    void Clear();
    void Reset();
    void Reserve(size_type Capacity);

    INT FindStr(const_pointer Needle, bool bIgnoreCase = false) const noexcept;
    template<bool ParamWithRAII>
    INT FindStr(FStringBase<ParamWithRAII>& Needle, bool bIgnoreCase = false) const noexcept;
    template<bool ParamWithRAII>
    INT FindStr(FStringBase<ParamWithRAII> const& Needle, bool bIgnoreCase = false) const noexcept;

    bool Contains(const_pointer Needle, bool bIgnoreCase = false) const noexcept;
    bool StartsWith(const_pointer Needle, bool bIgnoreCase = false) const noexcept;

    template<typename InputIt>
    FStringBase<WithRAII>& Append(InputIt InStr, InputIt InEnd);

    FStringBase<WithRAII>& Append(const_pointer InStr);
    FStringBase<WithRAII>& Append(value_type InChar);

    template<bool ParamWithRAII>
    FStringBase<WithRAII>& Append(FStringBase<ParamWithRAII>& InString);
    template<bool ParamWithRAII>
    FStringBase<WithRAII>& Append(FStringBase<ParamWithRAII> const& InString);

    FStringBase<WithRAII>& AppendFormat(const_pointer Format, ...);
    FStringBase<WithRAII>& AppendFormatv(const_pointer Format, std::va_list Args);

    FStringBase<WithRAII>& AppendAnsi(char const* InAnsiStr);
    FStringBase<WithRAII>& AppendUtf8(char const* InUtf8Str);

    template<bool ParamWithRAII>
    bool Equals(FStringBase<ParamWithRAII>& InString, bool bIgnoreCase = false) const noexcept;
    template<bool ParamWithRAII>
    bool Equals(FStringBase<ParamWithRAII> const& InString, bool bIgnoreCase = false) const noexcept;
    bool Equals(const_pointer InStr, bool bIgnoreCase = false) const noexcept;

    const_pointer operator*() const noexcept;

    explicit operator std::basic_string_view<wchar_t, std::char_traits<wchar_t>>() const {
        return std::basic_string_view<wchar_t, std::char_traits<wchar_t>>{
            Storage.GetData(), Storage.GetData() + this->Length()
        };
    }

    template<typename Alloc = std::allocator<wchar_t>>
    explicit operator std::basic_string<wchar_t, std::char_traits<wchar_t>, Alloc>() const {
        std::basic_string<wchar_t, std::char_traits<wchar_t>, Alloc> Output{};
        Output.append(Storage.GetData(), Storage.GetData() + this->Length());
        return Output;
    }

    explicit operator std::span<wchar_t>() const {
        return static_cast<std::span<wchar_t>>(Storage);
    }

    template<typename Alloc = std::allocator<wchar_t>>
    explicit operator std::vector<wchar_t, Alloc>() const {
        return static_cast<std::vector<wchar_t, Alloc>>(Storage);
    }
};


template<bool WithRAII>
FStringBase<WithRAII>::const_pointer
FStringBase<WithRAII>::Chars() const noexcept {
    return Storage.Count() > 0 ? Storage.GetData() : L"";
}

template<bool WithRAII>
FStringBase<WithRAII>::size_type
FStringBase<WithRAII>::Capacity() const noexcept {
    return Storage.Capacity() > 0 ? Storage.Capacity() - 1 : Storage.Capacity();
}

template<bool WithRAII>
FStringBase<WithRAII>::size_type
FStringBase<WithRAII>::Length() const noexcept {
    return Storage.Count() > 0 ? Storage.Count() - 1 : Storage.Count();
}

template<bool WithRAII>
bool FStringBase<WithRAII>::Any() const noexcept {
    return Storage.Count() != 0;
}

template<bool WithRAII>
bool FStringBase<WithRAII>::Empty() const noexcept {
    return Storage.Count() == 0;
}

template<bool WithRAII>
void FStringBase<WithRAII>::Clear() {
    Storage.Clear();
    if (Storage.Capacity() > 0) {
        *Storage.GetData() = L'\0';
    }
}

template<bool WithRAII>
void FStringBase<WithRAII>::Reset() {
    if (Storage.Count() > 0) {
        Storage.Clear();
    }
    if (Storage.Capacity() > 0) {
        Storage.Shrink();
    }
}

template<bool WithRAII>
void FStringBase<WithRAII>::Reserve(size_type const Capacity) {
    if (Capacity > 0) {
        Storage.Reserve(Capacity + 1);
    }
}

template<bool WithRAII>
INT FStringBase<WithRAII>::FindStr(const_pointer const Needle, bool const bIgnoreCase) const noexcept {
    LESDK_CHECK(Needle != nullptr, "");

    auto const wcsstri = [](const_pointer Haystack, const_pointer const Needle) -> const_pointer
        {
            size_t const Length = wcslen(Needle);
            if (Length == 0) {
                return Haystack;
            }
            while (*Haystack != L'\0') {
                if (_wcsnicmp(Haystack, Needle, Length) == 0) {
                    return Haystack;
                }
                Haystack++;
            }
            return nullptr;
        };

    const_pointer const Chars = this->Chars();
    const_pointer const Pointer = (!bIgnoreCase) ? wcsstr(Chars, Needle) : wcsstri(Chars, Needle);

    return (Pointer != nullptr) ? static_cast<INT>(Pointer - Chars) : -1;
}

template<bool WithRAII>
template<bool ParamWithRAII>
INT FStringBase<WithRAII>::FindStr(FStringBase<ParamWithRAII>& Needle, bool const bIgnoreCase) const noexcept {
    return this->FindStr(Needle.Chars(), bIgnoreCase);
}

template<bool WithRAII>
template<bool ParamWithRAII>
INT FStringBase<WithRAII>::FindStr(FStringBase<ParamWithRAII> const& Needle, bool const bIgnoreCase) const noexcept {
    return this->FindStr(Needle.Chars(), bIgnoreCase);
}

template<bool WithRAII>
bool FStringBase<WithRAII>::Contains(const_pointer const Needle, bool const bIgnoreCase) const noexcept {
    return this->FindStr(Needle, bIgnoreCase) != -1;
}

template<bool WithRAII>
bool FStringBase<WithRAII>::StartsWith(const_pointer const Needle, bool const bIgnoreCase) const noexcept {
    auto const NeedleLength = wcslen(Needle);
    return (NeedleLength <= this->Length())
        && (this->FindStr(Needle, bIgnoreCase) == 0);
}

template<bool WithRAII>
template<typename InputIt>
FStringBase<WithRAII>&
FStringBase<WithRAII>::Append(InputIt const InStr, InputIt const InEnd) {
    LESDK_CHECK(InStr < InEnd, "");

    if (InStr != InEnd) {
        size_type const SizeWithoutNull = static_cast<size_type>(InEnd - InStr);
        pointer NullTerminatorIter = nullptr;

        if (this->Any()) {
            // If this string has characters, we don't need to allocate space for a null-terminator,
            // since we can just reuse the space occupied by it currently.
            pointer const Inserted = Storage.DoInsertUninit(Storage.Count(), SizeWithoutNull);
            NullTerminatorIter = std::copy_n(InStr, SizeWithoutNull, Inserted - 1);
        } else {
            // If the string is currently empty, a null-terminator needs to be allocated.
            pointer const Inserted = Storage.DoInsertUninit(0, SizeWithoutNull + 1);
            NullTerminatorIter = std::copy_n(InStr, SizeWithoutNull, Inserted);
        }

        *NullTerminatorIter = L'\0';
    }

    return *this;
}

template<bool WithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::Append(const_pointer const InStr) {
    LESDK_CHECK(InStr != nullptr, "");
    auto const Size = wcslen(InStr);
    return this->Append(InStr, InStr + Size);
}

template<bool WithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::Append(value_type const InChar) {
    LESDK_CHECK(InChar != L'\0', "");
    value_type const Buffer[2] = { InChar, L'\0' };
    return this->Append(Buffer, Buffer + 1);
}

template<bool WithRAII>
template<bool ParamWithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::Append(FStringBase<ParamWithRAII>& InString) {
    if (InString.Any()) {
        auto const Ptr = InString.Chars();
        return this->Append(Ptr, Ptr + InString.Length());
    } else {
        return *this;
    }
}

template<bool WithRAII>
template<bool ParamWithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::Append(FStringBase<ParamWithRAII> const& InString) {
    if (InString.Any()) {
        auto const Ptr = InString.Chars();
        return this->Append(Ptr, Ptr + InString.Length());
    } else {
        return *this;
    }
}

template<bool WithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::AppendFormat(const_pointer const Format, ...) {
    std::va_list Args;
    va_start(Args, Format);
    auto& ThisRef = this->AppendFormatv(Format, Args);
    va_end(Args);
    return ThisRef;
}

template<bool WithRAII>
FStringBase<WithRAII>&
FStringBase<WithRAII>::AppendFormatv(const_pointer const Format, std::va_list Args) {
    std::va_list CountArgs;
    va_copy(CountArgs, Args);
    int const FormatCount = _vscwprintf(Format, CountArgs);
    va_end(CountArgs);

    // Do not include present null-terminator in new length calculation.
    LESDK_CHECK(FormatCount >= 0, "invalid _vscwprintf format");
    size_type const NewLength = this->Length() + FormatCount;

    // Reserve space for a new null-terminator too.
    Storage.Reserve(NewLength + 1);

    // Write 'FormatCount' characters + null-terminator, overwriting the present null-terminator.
    int const CheckCount = _vsnwprintf(Storage.GetData() + this->Length(), static_cast<size_t>(-1), Format, Args);
    LESDK_CHECK(CheckCount == FormatCount, "unknown _vsnwprintf failure");

    Storage.CountItems = NewLength + 1;
    return *this;
}

template<bool WithRAII>
FStringBase<WithRAII>& FStringBase<WithRAII>::AppendAnsi(char const* const InAnsiStr) {
    LESDK_CHECK(InAnsiStr != nullptr, "");
    if (InAnsiStr != nullptr) {
        auto const InAnsiLength = static_cast<size_type>(std::strlen(InAnsiStr));
        auto const OutWideLength = LESDK::GetWideLengthAnsi(InAnsiStr, InAnsiLength);

        size_type const NewLength = this->Length() + OutWideLength;
        Storage.Reserve(NewLength + 1);

        DWORD WinError = 0u;
        bool const bEncodeOkay = LESDK::EncodeWideFromAnsi(InAnsiStr, InAnsiLength,
                Storage.GetData() + this->Length(), OutWideLength, &WinError);
        LESDK_CHECK(bEncodeOkay, "failure encoding ansi as wide string");

        Storage.GetData()[NewLength] = L'\0';
        Storage.CountItems = NewLength + 1;
    }
    return *this;
}

template<bool WithRAII>
FStringBase<WithRAII>& FStringBase<WithRAII>::AppendUtf8(char const* const InUtf8Str) {
    LESDK_CHECK(InUtf8Str != nullptr, "");
    if (InUtf8Str != nullptr) {
        auto const InUtf8Length = static_cast<size_type>(std::strlen(InUtf8Str));
        auto const OutWideLength = LESDK::GetWideLengthUtf8(InUtf8Str, InUtf8Length);

        size_type const NewLength = this->Length() + OutWideLength;
        Storage.Reserve(NewLength + 1);

        DWORD WinError = 0u;
        bool const bEncodeOkay = LESDK::EncodeWideFromUtf8(InUtf8Str, InUtf8Length,
            Storage.GetData() + this->Length(), OutWideLength, &WinError);
        LESDK_CHECK(bEncodeOkay, "failure encoding utf-8 as wide string");

        Storage.GetData()[NewLength] = L'\0';
        Storage.CountItems = NewLength + 1;
    }
    return *this;
}

template<bool WithRAII>
template<bool ParamWithRAII>
bool FStringBase<WithRAII>::Equals(FStringBase<ParamWithRAII>& InString, bool const bIgnoreCase) const noexcept {
    return this->Length() == InString.Length() && 0 == this->FindStr(InString, bIgnoreCase);
}

template<bool WithRAII>
template<bool ParamWithRAII>
bool FStringBase<WithRAII>::Equals(FStringBase<ParamWithRAII> const& InString, bool const bIgnoreCase) const noexcept {
    return this->Length() == InString.Length() && 0 == this->FindStr(InString, bIgnoreCase);
}

template<bool WithRAII>
bool FStringBase<WithRAII>::Equals(const_pointer const InStr, bool const bIgnoreCase) const noexcept {
    auto const InLength = InStr != nullptr ? std::wcslen(InStr) : static_cast<size_type>(-1);
    return this->Length() == InLength && 0 == this->FindStr(InStr, bIgnoreCase);
}

template<bool WithRAII>
FStringBase<WithRAII>::const_pointer
FStringBase<WithRAII>::operator*() const noexcept {
    return this->Chars();
}


/**
 * @brief   Dynamic string managed by Unreal Engine.
 */
class FString final : public FStringBase<false> {
    CONTAINER_TYPEDEFS(WCHAR, UINT, INT)

public:
    FString() : FStringBase{} {}
    ~FString() noexcept {}

    // Copy operations make a field-wise copy, and move operations
    // are disabled, just like with TArray. Same warnings apply.

    FString(FString const& Other);
    FString& operator=(FString const& Other);
    FString(FString&& Other) = delete;
    FString& operator=(FString&& Other) = delete;

    friend inline bool operator==(FString const& Lhs, FString const& Rhs) noexcept;
    friend inline bool operator!=(FString const& Lhs, FString const& Rhs) noexcept;
};

static_assert(std::is_copy_assignable_v<FString>);
static_assert(std::is_copy_constructible_v<FString>);
static_assert(! std::is_move_assignable_v<FString>);
static_assert(! std::is_move_constructible_v<FString>);

inline FString::FString(FString const& Other) {
    Storage = Other.Storage;
}

inline FString& FString::operator=(FString const& Other) {
    if (this != &Other) {
        Storage = Other.Storage;
    }
    return *this;
}

inline bool operator==(FString const& Lhs, FString const& Rhs) noexcept {
    return Lhs.Equals(Rhs, true);
}

inline bool operator!=(FString const& Lhs, FString const& Rhs) noexcept {
    return !(Lhs == Rhs);
}


/**
 * @brief   Dynamic string managed by plugin-side code.
 * @remarks Essentially it is an @ref FString with RAII support.
 */
class FStringRAII final : public FStringBase<true> {
    CONTAINER_TYPEDEFS(WCHAR, UINT, INT)

public:
    FStringRAII() : FStringBase{} {}
    ~FStringRAII() noexcept {}

    FStringRAII(const_pointer InStr);
    FStringRAII& operator=(const_pointer InStr);


    // Copy / move semantics for FStringRAII mirror those of TArrayRAII.

    FStringRAII(FStringRAII const& Other);
    FStringRAII& operator=(FStringRAII const& Other);
    FStringRAII(FStringRAII&& Other) noexcept;
    FStringRAII& operator=(FStringRAII&& Other) noexcept;

    inline FStringRAII Printf(const_pointer Format, ...);
    inline FStringRAII Printfv(const_pointer Format, std::va_list Args);

    friend inline bool operator==(FStringRAII const& Lhs, FStringRAII const& Rhs) noexcept;
    friend inline bool operator!=(FStringRAII const& Lhs, FStringRAII const& Rhs) noexcept;
};

static_assert(std::is_copy_assignable_v<FStringRAII>);
static_assert(std::is_copy_constructible_v<FStringRAII>);
static_assert(std::is_move_assignable_v<FStringRAII>);
static_assert(std::is_move_constructible_v<FStringRAII>);

inline FStringRAII::FStringRAII(const_pointer const InStr)
    : FStringBase{}
{
    this->Append(InStr);
}

inline FStringRAII& FStringRAII::operator=(const_pointer const InStr) {
    this->Reset();
    this->Append(InStr);
}

inline FStringRAII::FStringRAII(FStringRAII const& Other)
    : FStringBase{}
{
    this->Append(Other);
}

inline FStringRAII& FStringRAII::operator=(FStringRAII const& Other) {
    if (this != &Other) {
        this->Reset();
        this->Append(Other);
    }
    return *this;
}

inline FStringRAII::FStringRAII(FStringRAII&& Other) noexcept
    : FStringBase{}
{
    Storage.Data = std::exchange(Other.Storage.Data, nullptr);
    Storage.CountItems = std::exchange(Other.Storage.CountItems, 0);
    Storage.CountMax = std::exchange(Other.Storage.CountMax, 0);
}

inline FStringRAII& FStringRAII::operator=(FStringRAII&& Other) noexcept {
    if (this != &Other) {
        this->Reset();
        Storage.Data = std::exchange(Other.Storage.Data, nullptr);
        Storage.CountItems = std::exchange(Other.Storage.CountItems, 0);
        Storage.CountMax = std::exchange(Other.Storage.CountMax, 0);
    }
    return *this;
}

inline FStringRAII FStringRAII::Printf(const_pointer const Format, ...) {
    FStringRAII Instance{};
    std::va_list Args;
    va_start(Args, Format);
    Instance.AppendFormatv(Format, Args);
    va_end(Args);
    return Instance;
}

inline FStringRAII FStringRAII::Printfv(const_pointer const Format, std::va_list Args) {
    FStringRAII Instance{};
    Instance.AppendFormatv(Format, Args);
    return Instance;
}

inline bool operator==(FStringRAII const& Lhs, FStringRAII const& Rhs) noexcept {
    return Lhs.Equals(Rhs, true);
}

inline bool operator!=(FStringRAII const& Lhs, FStringRAII const& Rhs) noexcept {
    return !(Lhs == Rhs);
}


static_assert(sizeof(FString) == 0x10);
static_assert(sizeof(FStringRAII) == 0x10);