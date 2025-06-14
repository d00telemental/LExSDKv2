#pragma once

#include "doctest.h"
#include "LESDK/Common/FString.hpp"
#include "LESDK/Common/TMap.hpp"


// These tests only check that all public methods on TSet / TMap build without errors.


TEST_SUITE("TMap") {
    TEST_CASE("hashing equality for some key types") {
        CHECK_EQ(GetTypeHash(int(42)), GetTypeHash(int(42)));
        CHECK_NE(GetTypeHash(int(41)), GetTypeHash(int(43)));

        CHECK_EQ(GetTypeHash(L""), GetTypeHash(L""));
        CHECK_EQ(GetTypeHash(L"HELLO THERE"), GetTypeHash(L"hello there"));
        CHECK_NE(GetTypeHash(L"123"), GetTypeHash(L"321"));

        CHECK_EQ(GetTypeHash(FString(L"abcdef")), GetTypeHash(FString(L"abcdef")));
        CHECK_EQ(GetTypeHash(FString(L"abcdef")), GetTypeHash(FString(L"ABCDEF")));
        CHECK_NE(GetTypeHash(FString(L"!abcdef")), GetTypeHash(FString(L"ABCDEFalsdhb")));
    }

    TEST_CASE("integer to literal") {
        TMap<int, wchar_t const*> Map{};

        int FirstKey = 1;
        wchar_t const* FirstValue = L"Hello there";

        Map.Set(FirstKey, FirstValue);
        CHECK_EQ(*Map.Find(std::move(FirstKey)), FirstValue);
    }

    TEST_CASE("string to pointer") {
        TMap<FString, void*> Map{};

        FString FirstKey{};
        void* FirstValue = (void*)1;

        Map.Set(FirstKey, FirstValue);
        CHECK_EQ(*Map.Find(std::move(FirstKey)), FirstValue);
    }
}
