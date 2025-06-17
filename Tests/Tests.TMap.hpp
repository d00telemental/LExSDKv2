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

        {
            FString FirstKey{};
            void* FirstValue = (void*)1;

            Map.Set(FirstKey, FirstValue);
            CHECK_EQ(*Map.Find(std::move(FirstKey)), FirstValue);
        }

        {
            FString SecondKey{ L"cheers" };
            void* SecondValue = (void*)2;

            Map.Set(SecondKey, SecondValue);
            CHECK_EQ(*Map.Find(std::move(SecondKey)), SecondValue);
        }

        {
            FString ThirdKey{ L"s.kSDjdbgfYTdhf" };
            void* ThirdValue = (void*)3;

            Map.Set(ThirdKey, ThirdValue);
            CHECK_EQ(*Map.Find(std::move(ThirdKey)), ThirdValue);
        }

        {
            FString FourthKey{ L"91123286" };
            void* FourthValue = (void*)4;

            Map.Set(FourthKey, FourthValue);
            CHECK_EQ(*Map.Find(std::move(FourthKey)), FourthValue);
        }

        {
            FString FifthKey{ L";SDJFOSADHF" };
            void* FifthValue = (void*)5;

            Map.Set(FifthKey, FifthValue);
            CHECK_EQ(*Map.Find(std::move(FifthKey)), FifthValue);
        }

        {
            FString SixthKey{ L"sadllamas" };
            void* SixthValue = (void*)6;

            Map.Set(SixthKey, SixthValue);
            CHECK_EQ(*Map.Find(std::move(SixthKey)), SixthValue);
        }
    }

    TEST_CASE("string to string")
    {
        // kudos for amazing test strings, mgamerz

        TMap<FString, FString> Map{};

        for (int i = 1; i < 12; i++)
        {
            auto KeyValSet = FString::Printf(L"Poop%d", i);

            Map.Set(KeyValSet, KeyValSet);
            CHECK_NE(Map.Find(FString::Printf(L"Poop%d", i)), nullptr);
            CHECK_EQ(*Map.Find(FString::Printf(L"Poop%d", i)), FString::Printf(L"Poop%d", i));
        }

        for (int i = 8; i < 12; i++)
        {
            auto KeyValSet = FString::Printf(L"Poop%d", i);

            Map.Set(KeyValSet, KeyValSet);
            CHECK_NE(Map.Find(FString::Printf(L"Poop%d", i)), nullptr);
            CHECK_EQ(*Map.Find(FString::Printf(L"Poop%d", i)), FString::Printf(L"Poop%d", i));
        }

    }
}
