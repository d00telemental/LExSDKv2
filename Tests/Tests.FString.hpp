#pragma once

#include <algorithm>
#include <array>

#include "doctest.h"
#include "./Utilities.hpp"
#include "LESDK/Common/FString.hpp"


SCENARIO("FString - default initialization") {
    GIVEN("an empty string") {
        FString String{};

        THEN("its length and capacity are zero") {
            CHECK_EQ(String.Length(), 0);
            CHECK_EQ(String.Capacity(), 0);
        }
        THEN("its chars are empty") {
            CHECK(0 == std::wcscmp(String.Chars(), L""));
        }
        THEN("it is empty") {
            CHECK(String.Empty());
            CHECK(!String.Any());
        }

        WHEN("the string is reset") {
            String.Reset();

            THEN("its length and capacity stay zero") {
                CHECK_EQ(String.Length(), 0);
                CHECK_EQ(String.Capacity(), 0);
            }
            THEN("its chars stay empty") {
                CHECK(0 == std::wcscmp(String.Chars(), L""));
            }
        }

        WHEN("the string is reserved to zero") {
            String.Reserve(0);

            THEN("its length and capacity stay zero") {
                CHECK_EQ(String.Length(), 0);
                CHECK_EQ(String.Capacity(), 0);
            }
            THEN("its chars stay empty") {
                CHECK(0 == std::wcscmp(String.Chars(), L""));
            }
        }

        WHEN("the string is reserved") {
            String.Reserve(1025);

            THEN("capacity increases") {
                CHECK_EQ(String.Capacity(), 1025);
            }
            THEN("length and chars stay the same") {
                CHECK_EQ(String.Length(), 0);
                CHECK(0 == std::wcscmp(String.Chars(), L""));
            }
        }

        THEN("no substring can be found within") {
            CHECK_EQ(String.FindStr(L"", false), 0);
            CHECK_EQ(String.FindStr(L"", true), 0);

            CHECK_EQ(String.FindStr(L"ousabd", false), -1);
            CHECK_EQ(String.FindStr(L"A)SDJAKHN", true), -1);
        }
    }
}


SCENARIO("FString - simple append operations") {
    GIVEN("an empty string") {
        FString String{};

        WHEN("a substring is appended") {
            String.Append(L"Hello");

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 5);
                CHECK_EQ(String.Length(), 5);
            }
            THEN("chars are identical to what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"Hello"));
            }

            AND_WHEN("another character is appended") {
                String.Append(L' ');

                THEN("capacity and length increase") {
                    CHECK_GE(String.Capacity(), 6);
                    CHECK_EQ(String.Length(), 6);
                }
                THEN("chars are identical to what was appended so far") {
                    CHECK(0 == std::wcscmp(String.Chars(), L"Hello "));
                }

                AND_WHEN("another substring is appended") {
                    std::wstring Source = L"there!";
                    String.Append(Source.begin(), Source.end());

                    THEN("capacity and length increase") {
                        CHECK_GE(String.Capacity(), 12);
                        CHECK_EQ(String.Length(), 12);
                    }
                    THEN("chars are identical to what was appended so far") {
                        CHECK(0 == std::wcscmp(String.Chars(), L"Hello there!"));
                    }
                }
            }
        }

        WHEN("another FString is appended") {
            FString Insertee{};
            Insertee.Append(L"General Kenobi!!!");
            REQUIRE(0 == std::wcscmp(Insertee.Chars(), L"General Kenobi!!!"));

            String.Append(Insertee);

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 17);
                CHECK_EQ(String.Length(), 17);
            }
            THEN("chars are identical to what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"General Kenobi!!!"));
            }
        }
    }

    GIVEN("a reserved string") {
        FString String{};
        String.Reserve(5);

        auto const OldCapacity = String.Capacity();
        //auto const OldChars = String.Chars();

        WHEN("a substring within reserved range is appended") {
            String.Append(L"Hi!");

            THEN("capacity stays the same") {
                CHECK_EQ(String.Capacity(), OldCapacity);
            }
            THEN("length increases") {
                CHECK_EQ(String.Length(), 3);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"Hi!"));
            }
        }

        WHEN("a larger substring is appended") {
            auto const Source = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit, "
                L"sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";

            String.Append(Source);

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 123);
                CHECK_EQ(String.Length(), 123);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), Source));
            }
        }

        WHEN("the string is reset") {
            String.Reset();

            THEN("length and capacity are zero") {
                CHECK_EQ(String.Length(), 0);
                CHECK_EQ(String.Capacity(), 0);
            }
            THEN("chars are empty") {
                CHECK(0 == std::wcscmp(String.Chars(), L""));
            }
        }
    }
}


SCENARIO("FString - formatting append operations") {
    GIVEN("an empty string") {
        FString String{};

        WHEN("a format is appended without arguments") {
            String.AppendFormat(L"Hello");

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 5);
                CHECK_EQ(String.Length(), 5);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"Hello"));
            }

            AND_WHEN("a single-character format is appended without arguments") {
                String.AppendFormat(L" ");

                THEN("capacity and length increase") {
                    CHECK_GE(String.Capacity(), 6);
                    CHECK_EQ(String.Length(), 6);
                }
                THEN("chars match what was appended") {
                    CHECK(0 == std::wcscmp(String.Chars(), L"Hello "));
                }

                AND_WHEN("another format is appended without arguments") {
                    String.AppendFormat(L"there!");

                    THEN("capacity and length increase") {
                        CHECK_GE(String.Capacity(), 12);
                        CHECK_EQ(String.Length(), 12);
                    }
                    THEN("chars match what was appended") {
                        CHECK(0 == std::wcscmp(String.Chars(), L"Hello there!"));
                    }
                }
            }
        }

        WHEN("a format is appended with arguments") {
            String.AppendFormat(L"- Hello %s... - General %s!", L"there", L"Kenobi");

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 34);
                CHECK_EQ(String.Length(), 34);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"- Hello there... - General Kenobi!"));
            }
        }

        WHEN("a bunch of formats are appended in a chain") {
            String
                .AppendFormat(L"byte: %02hhx", 0xf).AppendFormat(L"; ")
                .AppendFormat(L"int: %d", 42).AppendFormat(L"; ")
                .AppendFormat(L"char: %c", L'a').AppendFormat(L"; ")
                .AppendFormat(L"string: %s", L"cheers");

            THEN("capacity and length increase") {
                CHECK_GE(String.Capacity(), 42);
                CHECK_EQ(String.Length(), 42);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"byte: 0f; int: 42; char: a; string: cheers"));
            }
        }
    }

    GIVEN("a reserved string") {
        FString String{};
        String.Reserve(10);

        REQUIRE_EQ(String.Capacity(), 10);

        WHEN("a format is appended within reserved range") {
            String.AppendFormat(L"%.1f ms", 16.6f);

            THEN("capacity stays the same") {
                CHECK_EQ(String.Capacity(), 10);
            }
            THEN("length increases") {
                CHECK_EQ(String.Length(), 7);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"16.6 ms"));
            }

            AND_WHEN("another format is appended beyond reserved range") {
                String.AppendFormat(L" / %.1f frames", 60.f);

                THEN("capacity and length increase") {
                    CHECK_EQ(String.Capacity(), 21);
                    CHECK_EQ(String.Length(), 21);
                }
                THEN("chars match what was appended") {
                    CHECK(0 == std::wcscmp(String.Chars(), L"16.6 ms / 60.0 frames"));
                }
            }
        }

        WHEN("a format is appended beyond reserved range") {
            String.AppendFormat(L"Hello, %dst century world!", 21);

            THEN("capacity and length increase") {
                CHECK_EQ(String.Capacity(), 26);
                CHECK_EQ(String.Length(), 26);
            }
            THEN("chars match what was appended") {
                CHECK(0 == std::wcscmp(String.Chars(), L"Hello, 21st century world!"));
            }
        }
    }
}


SCENARIO("FString - transcoding append operations") {
    GIVEN("an empty string") {
        FString String{};

        // We test for UTF-8 here because SDK-TESTS target specifies utf-8 source encoding.

        WHEN("a utf-8 substring within ascii range is appended") {
            String.AppendUtf8("Hello there!");

            THEN("the contents match what was appended") {
                CHECK_GE(String.Capacity(), 12);
                CHECK_EQ(String.Length(), 12);
                CHECK(0 == std::wcscmp(*String, L"Hello there!"));
            }

            AND_WHEN("another utf-8 substring is appended") {
                String.AppendUtf8(" - Bye!");

                THEN("the contents match what was appended") {
                    CHECK_GE(String.Capacity(), 19);
                    CHECK_EQ(String.Length(), 19);
                    CHECK(0 == std::wcscmp(*String, L"Hello there! - Bye!"));
                }
            }
        }

        WHEN("a utf-8 substring beyond ascii range is appended") {
            String.AppendUtf8("абвгдеёжз");

            THEN("the contents match what was appended") {
                CHECK_GE(String.Capacity(), 9);
                CHECK_EQ(String.Length(), 9);
                CHECK(0 == std::wcscmp(*String, L"абвгдеёжз"));
            }

            AND_WHEN("another utf-8 substring is appended") {
                String.AppendUtf8(" - ий .. эюя");

                THEN("the contents match what was appended") {
                    CHECK_GE(String.Capacity(), 21);
                    CHECK_EQ(String.Length(), 21);
                    CHECK(0 == std::wcscmp(*String, L"абвгдеёжз - ий .. эюя"));
                }
            }
        }
    }

    GIVEN("a reserved string") {
        FString String{};
        String.Reserve(6);

        WHEN("a utf-8 substring within reserved range is appended") {
            String.AppendUtf8("абв");

            THEN("capacity stays the same") {
                CHECK_EQ(String.Capacity(), 6);
            }
            THEN("length and chars match what was appended") {
                CHECK_EQ(String.Length(), 3);
                CHECK(0 == std::wcscmp(*String, L"абв"));
            }
        }

        WHEN("a utf-8 substring beyond reserved range is appended") {
            String.AppendUtf8("абвгдеёжзийклмн");

            THEN("capacity increases") {
                CHECK_GE(String.Capacity(), 15);
            }
            THEN("length and chars match what was appended") {
                CHECK_EQ(String.Length(), 15);
                CHECK(0 == std::wcscmp(*String, L"абвгдеёжзийклмн"));
            }
        }
    }
}


SCENARIO("FString - assigning repeated value")
{
    GIVEN("an empty string") {
        FString Empty{};

        WHEN("a number (n) of non-zero characters is assigned") {
            Empty.Assign(L'a', 12);

            THEN("new string equals the assigned character repeated (n) times") {
                CHECK_EQ(Empty.Length(), 12);
                CHECK_GE(Empty.Capacity(), 12);

                CHECK(std::all_of(Empty.Chars(), Empty.Chars() + 12, [](wchar_t const Ch) { return Ch == L'a'; }));
                CHECK_EQ(Empty.Chars()[12], L'\0');
            }
        }
    }

    GIVEN("a string with some characters") {
        FString String{};
        String.Append(L"Hello world!");

        WHEN("a smaller number of non-zero characters is assigned") {
            String.Assign(L'9', 6);

            THEN("new string equals the assigned character repeated (n) times") {
                CHECK_EQ(String.Length(), 6);
                CHECK_GE(String.Capacity(), 6);

                CHECK(std::all_of(String.Chars(), String.Chars() + 6, [](wchar_t const Ch) { return Ch == L'9'; }));
                CHECK_EQ(String.Chars()[6], L'\0');
            }
        }

        WHEN("a bigger number of non-zero characters is assigned") {
            String.Assign(L'-', 127);

            THEN("new string equals the assigned character repeated (n) times") {
                CHECK_EQ(String.Length(), 127);
                CHECK_GE(String.Capacity(), 127);

                CHECK(std::all_of(String.Chars(), String.Chars() + 127, [](wchar_t const Ch) { return Ch == L'-'; }));
                CHECK_EQ(String.Chars()[127], L'\0');
            }
        }
    }
}


SCENARIO("FString - substring search") {
    GIVEN("an empty string") {
        FString String{};

        THEN("an empty string can be found") {
            CHECK_EQ(0, String.FindStr(L"", false));
            CHECK_EQ(0, String.FindStr(L"", true));
        }

        THEN("a non-empty string cannot be found") {
            CHECK_EQ(-1, String.FindStr(L"a", false));
            CHECK_EQ(-1, String.FindStr(L"a", true));

            CHECK_EQ(-1, String.FindStr(L"HELLO THERE", false));
            CHECK_EQ(-1, String.FindStr(L"HELLO THERE", true));
        }

        THEN("the string contains and starts with an empty substring") {
            CHECK(String.Contains(L"", false));
            CHECK(String.Contains(L"", true));

            CHECK(String.StartsWith(L"", false));
            CHECK(String.StartsWith(L"", true));
        }
    }

    GIVEN("a string of some chars in ascii range") {
        FString String{};
        String.Append(L"Hello there!");

        THEN("an empty string can be found") {
            CHECK_EQ(0, String.FindStr(L"", false));
            CHECK_EQ(0, String.FindStr(L"", true));
        }

        THEN("the entire string in correct case can be found") {
            CHECK_EQ(0, String.FindStr(L"Hello there!", false));
            CHECK_EQ(0, String.FindStr(L"Hello there!", true));

            AND_THEN("the entire string in the wrong case cannot be found") {
                CHECK_EQ(-1, String.FindStr(L"HELLO THERE!", false));
                CHECK_EQ(0, String.FindStr(L"HELLO THERE!", true));
            }
        }

        THEN("parts of the string in correct case can be found") {
            CHECK_EQ(0, String.FindStr(L"Hello", false));
            CHECK_EQ(0, String.FindStr(L"Hello", true));

            CHECK_EQ(5, String.FindStr(L" ", false));
            CHECK_EQ(5, String.FindStr(L" ", true));

            CHECK_EQ(9, String.FindStr(L"re!", false));
            CHECK_EQ(9, String.FindStr(L"re!", true));

            AND_THEN("parts of the string in the wrong case cannot be found") {
                CHECK_EQ(-1, String.FindStr(L"HELLO", false));
                CHECK_EQ(0, String.FindStr(L"HELLO", true));

                CHECK_EQ(-1, String.FindStr(L"RE!", false));
                CHECK_EQ(9, String.FindStr(L"RE!", true));
            }
        }
    }
}


SCENARIO("FString - equality checks") {
    GIVEN("an empty string") {
        FString String{};

        CHECK(String.Equals(L"", false));
        CHECK(String.Equals(L"", true));

        CHECK(!String.Equals(L"a", false));
        CHECK(!String.Equals(L"a", true));

        CHECK(!String.Equals(L"Hello there", false));
        CHECK(!String.Equals(L"Hello there", true));
    }

    GIVEN("a string of some characters in ascii range") {
        FString String{};
        String.Append(L"Hello there");

        CHECK(!String.Equals(L"", false));
        CHECK(!String.Equals(L"", true));

        CHECK(!String.Equals(L"Hello", false));
        CHECK(!String.Equals(L"Hello", true));

        CHECK(!String.Equals(L"Hell0 there", false));
        CHECK(!String.Equals(L"Hell0 there", true));

        CHECK(!String.Equals(L"hello THERE", false));
        CHECK(String.Equals(L"hello THERE", true));

        CHECK(String.Equals(L"Hello there", false));
        CHECK(String.Equals(L"Hello there", true));
    }

    GIVEN("a string of some characters beyond ascii range") {
        FString String{};
        String.AppendUtf8("абвгдеёжз");

        CHECK(!String.Equals(L"", false));
        CHECK(!String.Equals(L"", true));

        CHECK(!String.Equals(L"абвг", false));
        CHECK(!String.Equals(L"абвг", true));

        CHECK(!String.Equals(L"абвгдейжз", false));
        CHECK(!String.Equals(L"абвгдейжз", true));

        // TODO: Fix case-insensitive equality comparison for the case below.

        CHECK(!String.Equals(L"АБВГДЕЁЖЗ", false));
        //CHECK(String.Equals(L"АБВГДЕЁЖЗ", true));

        CHECK(String.Equals(L"абвгдеёжз", false));
        CHECK(String.Equals(L"абвгдеёжз", true));
    }
}


SCENARIO("FString - conversion to standard containers") {
    GIVEN("an empty string") {
        FString const String{};

        WHEN("the string is converted to std::wstring_view") {
            auto const WView = static_cast<std::wstring_view>(String);

            THEN("std::wstring_view is empty") {
                CHECK(WView.empty());
            }
        }

        WHEN("the string is converted to std::wstring") {
            auto const WString = static_cast<std::wstring>(String);

            THEN("std::wstring is empty") {
                CHECK(WString.empty());
            }
        }
    }

    GIVEN("a string of some elements") {
        FString String{};
        String.Append(L"Hello there!");

        WHEN("the string is converted to std::wstring_view") {
            auto const WView = static_cast<std::wstring_view>(String);

            THEN("std::wstring_view matches the original string") {
                CHECK(WView == L"Hello there!");
            }
        }

        WHEN("the string is converted to std::wstring") {
            auto const WString = static_cast<std::wstring>(String);

            THEN("std::wstringmatches the original string") {
                CHECK(WString == L"Hello there!");
            }
        }
    }
}


SCENARIO("FStringView - copy / move semantics") {
    GIVEN("a string of some characters") {
        FStringView Source{};
        Source.Append(L"Hello there");

        WHEN("the string is used to copy-construct another string") {
            FStringView Destination{ Source };

            THEN("the new string has same characters in same allocation") {
                CHECK_EQ(Destination.Chars(), Source.Chars());
                CHECK(Destination.Equals(Source));
            }
        }

        WHEN("the string is used to copy-construct another string") {
            FStringView Destination = Source;

            THEN("the new string has same characters in same allocation") {
                CHECK_EQ(Destination.Chars(), Source.Chars());
                CHECK(Destination.Equals(Source));
            }
        }
    }
}


SCENARIO("FString - copy / move semantics") {
    GIVEN("a string of some characters") {
        FString Source{};
        Source.Append(L"Hello there");

        WHEN("the string is used to copy-construct another string") {
            FString Destination{ Source };

            THEN("the new string has same characters in a different allocation") {
                CHECK_NE(Destination.Chars(), Source.Chars());
                CHECK(Destination.Equals(Source));
            }
        }

        WHEN("the string is used to copy-construct another string") {
            FString Destination = Source;

            THEN("the new string has same characters in a different allocation") {
                CHECK_NE(Destination.Chars(), Source.Chars());
                CHECK(Destination.Equals(Source));
            }
        }

        auto const OldChars = Source.Chars();
        auto const OldLength = Source.Length();
        auto const OldCapacity = Source.Capacity();

        WHEN("the string is used to move-construct another string") {
            FString Destination{ std::move(Source) };

            THEN("the new string has exact same fields") {
                CHECK_EQ(Destination.Chars(), OldChars);
                CHECK_EQ(Destination.Length(), OldLength);
                CHECK_EQ(Destination.Capacity(), OldCapacity);
            }
        }

        WHEN("the string is used to move-construct another string") {
            #pragma warning(disable: 26800)
            FString Destination = std::move(Source);
            #pragma warning(default: 26800)

            THEN("the new string has exact same fields") {
                CHECK_EQ(Destination.Chars(), OldChars);
                CHECK_EQ(Destination.Length(), OldLength);
                CHECK_EQ(Destination.Capacity(), OldCapacity);
            }
        }
    }
}
