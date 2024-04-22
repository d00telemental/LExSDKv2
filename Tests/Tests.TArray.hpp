#pragma once

#include <algorithm>
#include <array>

#include "doctest.h"
#include "./Utilities.hpp"
#include "LESDK/Common/TArray.hpp"


SCENARIO("TArray - empty initialization") {
    GIVEN("an empty array") {
        TArray<int> Array{};

        THEN("its count, capacity and data pointer are null") {
            CHECK_EQ(Array.Count(), 0);
            CHECK_EQ(Array.Capacity(), 0);
            CHECK_EQ(Array.GetData(), nullptr);

            AND_THEN("it is empty") {
                CHECK(Array.Empty());
                CHECK(!Array.Any());
            }
        }

        WHEN("the array is cleared") {
            Array.Clear();

            THEN("its count, capacity and data pointer are still null") {
                CHECK_EQ(Array.Count(), 0);
                CHECK_EQ(Array.Capacity(), 0);
                CHECK_EQ(Array.GetData(), nullptr);
            }
        }

        WHEN("the array is shrunk") {
            Array.Clear();

            THEN("its count, capacity and data pointer are still null") {
                CHECK_EQ(Array.Count(), 0);
                CHECK_EQ(Array.Capacity(), 0);
                CHECK_EQ(Array.GetData(), nullptr);
            }
        }

        WHEN("the array is reserved to zero") {
            Array.Reserve(0);

            THEN("its count, capacity and data pointer are still null") {
                CHECK_EQ(Array.Count(), 0);
                CHECK_EQ(Array.Capacity(), 0);
                CHECK_EQ(Array.GetData(), nullptr);
            }
        }

        WHEN("the array is resized to zero") {
            Array.Resize(0);

            THEN("its count, capacity and data pointer are still null") {
                CHECK_EQ(Array.Count(), 0);
                CHECK_EQ(Array.Capacity(), 0);
                CHECK_EQ(Array.GetData(), nullptr);
            }
        }
    }
}


SCENARIO("TArray - trivial elements") {
    // Some of these tests may leak memory but that's okay.

    GIVEN("an empty array") {
        TArray<int> Array{};

        WHEN("some elements are reserved") {
            Array.Reserve(5);

            THEN("its count is still zero") {
                CHECK_EQ(Array.Count(), 0);
            }
            THEN("its capacity matches what was reserved") {
                CHECK_EQ(Array.Capacity(), 5);
            }
            THEN("its data pointer is not null") {
                CHECK_NE(Array.GetData(), nullptr);
            }

            AND_WHEN("the array is cleared") {
                Array.Clear();

                THEN("its count is still zero") {
                    CHECK_EQ(Array.Count(), 0);
                }

                AND_WHEN("the array is shrunk") {
                    Array.Shrink();

                    THEN("its capacity is zero again") {
                        CHECK_EQ(Array.Capacity(), 0);
                    }
                    THEN("its data pointer is null again") {
                        CHECK_EQ(Array.GetData(), nullptr);
                    }
                }
            }
        }

        WHEN("the array is resized upwards") {
            Array.Resize(3, 42);

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 3);
                CHECK_GE(Array.Capacity(), 3);

                AND_THEN("its data pointer is not null") {
                    CHECK_NE(Array.GetData(), nullptr);
                }
            }

            THEN("its elements match resize default") {
                std::array<int, 3> const Match = { 42, 42, 42 };
                CHECK(std::equal(Array.begin(), Array.end(), Match.begin()));

                AND_THEN("its elements can be retrieved one-by-one") {
                    CHECK_EQ(Array(0), 42);
                    CHECK_EQ(Array(1), 42);
                    CHECK_EQ(Array(2), 42);
                }
            }

            AND_WHEN("the array is resized further with a different default") {
                Array.Resize(5, 7);

                THEN("its count and capacity increase further") {
                    CHECK_EQ(Array.Count(), 5);
                    CHECK_GE(Array.Capacity(), 5);
                }

                THEN("its new elements match the different default") {
                    std::array<int, 5> const Match = { 42, 42, 42, 7, 7 };
                    CHECK(std::equal(Array.begin(), Array.end(), Match.begin()));

                    AND_THEN("its elements can be retrieved one-by-one") {
                        CHECK_EQ(Array(0), 42);
                        CHECK_EQ(Array(1), 42);
                        CHECK_EQ(Array(2), 42);
                        CHECK_EQ(Array(3), 7);
                        CHECK_EQ(Array(4), 7);
                    }
                }
            }

            AND_WHEN("the array is cleared and shrunk") {
                Array.Clear();
                Array.Shrink();

                THEN("its count, capacity and data pointer are null") {
                    CHECK_EQ(Array.Count(), 0);
                    CHECK_EQ(Array.Capacity(), 0);
                    CHECK_EQ(Array.GetData(), nullptr);
                }
            }
        }

        WHEN("elements are inserted as an iterator pair") {
            std::array<int, 9> const Primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };
            Array.InsertRange(0, Primes.begin(), Primes.begin() + 6);

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 6);
                CHECK_GE(Array.Capacity(), 6);
            }
            THEN("its data pointer is not null") {
                CHECK_NE(Array.GetData(), nullptr);
            }
            THEN("its elements match what was inserted") {
                CHECK(std::equal(Array.GetData(), Array.GetData() + 6, Primes.begin()));

                AND_THEN("its elements can be retrieved one-by-one") {
                    CHECK_EQ(Array(0), 2);
                    CHECK_EQ(Array(1), 3);
                    CHECK_EQ(Array(2), 5);
                    CHECK_EQ(Array(3), 7);
                    CHECK_EQ(Array(4), 11);
                    CHECK_EQ(Array(5), 13);
                }
            }

            AND_WHEN("more elements are inserted at the end") {
                Array.InsertRange(6, Primes.begin() + 6, Primes.end());

                THEN("its count and capacity increase further") {
                    CHECK_EQ(Array.Count(), 9);
                    CHECK_GE(Array.Capacity(), 9);
                }
                THEN("its elements match what was inserted") {
                    CHECK(std::equal(Array.GetData(), Array.GetData() + 9, Primes.begin()));
                }
            }

            AND_WHEN("more elements inserted at the start") {
                Array.InsertRange(0, Primes.begin(), Primes.begin() + 6);
                
                THEN("its count and capacity increase further") {
                    CHECK_EQ(Array.Count(), 12);
                    CHECK_GE(Array.Capacity(), 12);
                }
                THEN("its elements match what was inserted") {
                    CHECK(std::equal(Array.GetData(), Array.GetData() + 6, Primes.begin()));
                    CHECK(std::equal(Array.GetData() + 6, Array.GetData() + 12, Primes.begin()));
                }
            }

            AND_WHEN("more elements are inserted in the middle") {
                std::array<int, 2> const Inserted = { 6, 66 };
                Array.InsertRange(3, Inserted.begin(), Inserted.end());

                THEN("its count and capacity increase further") {
                    CHECK_EQ(Array.Count(), 8);
                    CHECK_GE(Array.Capacity(), 8);
                }
                THEN("its elements match what was inserted") {
                    CHECK(std::equal(Array.GetData(), Array.GetData() + 3, Primes.begin()));
                    CHECK(std::equal(Array.GetData() + 3, Array.GetData() + 5, Inserted.begin()));
                    CHECK(std::equal(Array.GetData() + 5, Array.GetData() + 8, Primes.begin() + 3));
                }
            }
        }

        WHEN("elements are inserted as an initializer list") {
            Array.InsertRange(0, { 2, 3, 5, 7, 11, 13, 17, 19, 23 });

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 9);
                CHECK_GE(Array.Capacity(), 9);
            }
            THEN("its data pointer is not null") {
                CHECK_NE(Array.GetData(), nullptr);
            }
            THEN("its elements match what was inserted") {
                AND_THEN("its elements can be retrieved one-by-one") {
                    CHECK_EQ(Array(0), 2);
                    CHECK_EQ(Array(1), 3);
                    CHECK_EQ(Array(2), 5);
                    CHECK_EQ(Array(3), 7);
                    CHECK_EQ(Array(4), 11);
                    CHECK_EQ(Array(5), 13);
                    CHECK_EQ(Array(6), 17);
                    CHECK_EQ(Array(7), 19);
                    CHECK_EQ(Array(8), 23);
                }
            }
        }

        WHEN("elements are inserted as a repeated value") {
            Array.InsertRange(0, 3u, 6);

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 3);
                CHECK_GE(Array.Capacity(), 3);
            }
            THEN("its data pointer is not null") {
                CHECK_NE(Array.GetData(), nullptr);
            }
            THEN("its elements match what was inserted") {
                CHECK(std::all_of( Array.begin(), Array.end(),
                    [](auto const Value) { return Value == 6; }));
            }
        }

        WHEN("elements are inserted one at a time") {
            std::array<int, 9> const Primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };

            Array.Insert(0, 2);
            Array.Insert(1, 3);
            Array.Insert(2, 5);
            Array.Insert(3, 11);
            Array.Insert(3, 7);
            Array.Insert(5, 13);
            Array.Insert(6, 23);
            Array.Insert(6, 19);
            Array.Insert(6, 17);

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 9);
                CHECK_GE(Array.Capacity(), 9);
            }
            THEN("its data pointer is not null") {
                CHECK_NE(Array.GetData(), nullptr);
            }
            THEN("its elements match what was inserted") {
                CHECK(std::equal(Array.begin(), Array.end(), Primes.begin()));
            }
        }

        WHEN("elements are appended one at a time") {
            std::array<int, 3> const Primes = { 2, 3, 5 };

            Array.Add(2);
            Array.Add(3);
            Array.Add(5);

            THEN("its count and capacity increase") {
                CHECK_EQ(Array.Count(), 3);
                CHECK_GE(Array.Capacity(), 3);
            }
            THEN("its elements match what was inserted") {
                CHECK(std::equal(Array.begin(), Array.end(), Primes.begin()));
            }
        }
    }

    GIVEN("an array of some elements") {
        TArray<int> Array{};

        std::array<int, 10> const Source = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
        Array.InsertRange(0, Source.begin(), Source.end());
        REQUIRE_EQ(Array.Count(), 10);

        auto const OldCount = Array.Count();
        auto const OldCapacity = Array.Capacity();
        auto const OldData = Array.GetData();

        WHEN("smaller number of elements is reserved") {
            Array.Reserve(5);

            THEN("count, capacity and pointer stay the same") {
                CHECK_EQ(Array.Count(), OldCount);
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }
        }

        WHEN("bigger number of elements is reserved") {
            Array.Reserve(100);

            THEN("elements are reallocated") {
                CHECK_GE(Array.Capacity(), 100);
                CHECK_NE(Array.GetData(), OldData);
            }
            THEN("count stays the same") {
                CHECK_EQ(Array.Count(), OldCount);
            }
        }

        WHEN("the array is resized downwards") {
            Array.Resize(5);

            THEN("count decreases") {
                CHECK_EQ(Array.Count(), 5);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }

            AND_WHEN("the array is shrunk") {
                Array.Shrink();

                THEN("count stays the same") {
                    CHECK_EQ(Array.Count(), 5);
                }
                THEN("capacity decreases") {
                    CHECK_EQ(Array.Capacity(), 5);
                }
                THEN("elements are reallocated") {
                    CHECK_NE(Array.GetData(), OldData);
                }
            }
        }

        WHEN("the array is cleared") {
            Array.Clear();

            THEN("count is zero") {
                CHECK_EQ(Array.Count(), 0);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }

            AND_WHEN("the array is shrunk") {
                Array.Shrink();

                THEN("count, capacity and data pointer are null") {
                    CHECK_EQ(Array.Count(), 0);
                    CHECK_EQ(Array.Capacity(), 0);
                    CHECK_EQ(Array.GetData(), nullptr);
                }
            }
        }

        WHEN("some elements are erased at the end") {
            Array.Erase(8, 2);

            THEN("count decreases") {
                CHECK_EQ(Array.Count(), 8);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }
            THEN("remaining elements stay the same") {
                CHECK(std::equal(Array.begin(), Array.begin() + 8, Source.begin()));
            }
        }

        WHEN("some elements are erased at the start") {
            Array.Erase(0, 3);

            THEN("count decreases") {
                CHECK_EQ(Array.Count(), 7);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }
            THEN("remaining elements stay the same") {
                CHECK(std::equal(Array.begin(), Array.end(), Source.begin() + 3));
            }
        }

        WHEN("some elements are removed at the middle") {
            Array.Erase(2, 7);

            THEN("count decreases") {
                CHECK_EQ(Array.Count(), 3);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }
            THEN("remaining elements stay the same") {
                std::array<int, 3> const Check = { 2, 3, 29 };
                CHECK(std::equal(Array.begin(), Array.end(), Check.begin()));
            }
        }

        WHEN("all elements are removed") {
            Array.Erase(0, 10);

            THEN("count decreases to zero") {
                CHECK_EQ(Array.Count(), 0);
            }
            THEN("capacity and pointer stay the same") {
                CHECK_EQ(Array.Capacity(), OldCapacity);
                CHECK_EQ(Array.GetData(), OldData);
            }
        }
    }
}


SCENARIO("TArray - non-trivial elements") {
    // Some of these tests may leak memory but that's okay.

    GIVEN("an empty array of copyable") {
        Counters Counters{};
        TArray<Copyable> Array{};

        REQUIRE_EQ(Counters.Construct, 0);
        REQUIRE_EQ(Counters.Destroy, 0);
        REQUIRE_EQ(Counters.Copy, 0);
        REQUIRE_EQ(Counters.Move, 0);

        WHEN("items are added to a pre-allocated array") {
            Array.Reserve(5);

            Array.Add(Copyable{ Counters });
            Array.Add(Copyable{ Counters });
            Array.Add(Copyable{ Counters });
            Array.Add(Copyable{ Counters });
            Array.Add(Copyable{ Counters });

            THEN("items call their constructors, copy-constructors and destructors once") {
                CHECK_EQ(Counters.Construct, 5);
                CHECK_EQ(Counters.Destroy, 5);
                CHECK_EQ(Counters.Copy, 5);
                CHECK_EQ(Counters.Move, 0);
            }

            AND_WHEN("a higher capacity is reserved") {
                Array.Reserve(15);

                THEN("items call their copy-constructors and destructors once") {
                    CHECK_EQ(Counters.Construct, 5);
                    CHECK_EQ(Counters.Destroy, 10);
                    CHECK_EQ(Counters.Copy, 10);
                    CHECK_EQ(Counters.Move, 0);
                }

                AND_WHEN("the array is cleared") {
                    Array.Clear();

                    THEN("items call their destructors once") {
                        CHECK_EQ(Counters.Construct, 5);
                        CHECK_EQ(Counters.Destroy, 15);
                        CHECK_EQ(Counters.Copy, 10);
                        CHECK_EQ(Counters.Move, 0);
                    }
                }
            }
        }
    }

    GIVEN("an empty array of movable") {
        Counters Counters{};
        TArray<Movable> Array{};

        REQUIRE_EQ(Counters.Construct, 0);
        REQUIRE_EQ(Counters.Destroy, 0);
        REQUIRE_EQ(Counters.Copy, 0);
        REQUIRE_EQ(Counters.Move, 0);

        WHEN("items are added to a pre-allocated array") {
            Array.Reserve(5);

            Array.Add(Movable{ Counters });
            Array.Add(Movable{ Counters });
            Array.Add(Movable{ Counters });
            Array.Add(Movable{ Counters });
            Array.Add(Movable{ Counters });

            THEN("items call their constructors, move-constructors and destructors once") {
                CHECK_EQ(Counters.Construct, 5);
                CHECK_EQ(Counters.Destroy, 5);
                CHECK_EQ(Counters.Copy, 0);
                CHECK_EQ(Counters.Move, 5);
            }

            AND_WHEN("a higher capacity is reserved") {
                Array.Reserve(15);

                THEN("items call their move-constructors and destructors once") {
                    CHECK_EQ(Counters.Construct, 5);
                    CHECK_EQ(Counters.Destroy, 10);
                    CHECK_EQ(Counters.Copy, 0);
                    CHECK_EQ(Counters.Move, 10);
                }

                AND_WHEN("the array is cleared") {
                    Array.Clear();

                    THEN("items call their destructors once") {
                        CHECK_EQ(Counters.Construct, 5);
                        CHECK_EQ(Counters.Destroy, 15);
                        CHECK_EQ(Counters.Copy, 0);
                        CHECK_EQ(Counters.Move, 10);
                    }
                }
            }
        }
    }
}


SCENARIO("TArray - conversion to standard containers") {
    // Some of these tests may leak memory but that's okay.

    GIVEN("an empty array") {
        TArray<int> Array{};

        WHEN("the array is converted to unbounded std::span") {
            std::span<int> Span = Array.AsSpan();

            THEN("span is empty") {
                CHECK(Span.empty());
            }
        }

        WHEN("the array is converted to default std::vector") {
            std::vector<int> Vector = Array.AsVec();

            THEN("vector is empty") {
                CHECK(Vector.empty());
            }
        }
    }

    GIVEN("an array of some elements") {
        TArray<int> Array{};

        Array.Add(3);
        Array.Add(4);
        Array.Add(5);

        WHEN("the array is converted to unbounded std::span") {
            std::span<int> Span = Array.AsSpan();

            THEN("span has the same count") {
                CHECK_EQ(Span.size(), Array.Count());
            }
            THEN("span has the same elements") {
                CHECK(std::equal(Span.begin(), Span.end(), Array.begin()));
            }
        }

        WHEN("the array is converted to default std::vector") {
            std::vector<int> Vector = Array.AsVec();

            THEN("vector has the same count") {
                CHECK_EQ(Vector.size(), Array.Count());
            }
            THEN("vector has the same elements") {
                CHECK(std::equal(Vector.begin(), Vector.end(), Array.begin()));
            }
        }
    }
}


SCENARIO("TArray - copy / move semantics") {

    GIVEN("an array of some trivial elements") {
        TArray<int> Source{ { 1, 2, 3, 4 } };

        WHEN("the array is used to copy-construct another array") {
            TArray<int> Destination{ Source };

            THEN("the new array has exact same fields") {
                CHECK_EQ(Destination.GetData(), Source.GetData());
                CHECK_EQ(Destination.Count(), Source.Count());
                CHECK_EQ(Destination.Capacity(), Source.Capacity());
            }
        }

        WHEN("the array is used to copy-construct another array") {
            TArray<int> Destination = Source;

            THEN("the new array has exact same fields") {
                CHECK_EQ(Destination.GetData(), Source.GetData());
                CHECK_EQ(Destination.Count(), Source.Count());
                CHECK_EQ(Destination.Capacity(), Source.Capacity());
            }
        }
    }

}


SCENARIO("TArrayRAII - copy / move semantics") {

    GIVEN("an array of some trivial elements") {
        TArrayRAII<int> Source{ { 1, 2, 3, 4 } };

        WHEN("the array is used to copy-construct another array") {
            TArrayRAII<int> Destination{ Source };

            THEN("the new array has same contents") {
                CHECK_EQ(Destination.Count(), Source.Count());
                CHECK(std::equal(Destination.begin(), Destination.end(), Source.begin()));

                AND_THEN("the allocation is different") {
                    CHECK_NE(Destination.GetData(), Source.GetData());
                }
            }
        }

        WHEN("the array is used to copy-assign another array") {
            TArrayRAII<int> Destination = Source;

            THEN("the new array has same contents") {
                CHECK_EQ(Destination.Count(), Source.Count());
                CHECK(std::equal(Destination.begin(), Destination.end(), Source.begin()));

                AND_THEN("the allocation is different") {
                    CHECK_NE(Destination.GetData(), Source.GetData());
                }
            }
        }

        WHEN("the array is used to move-construct another array") {
            auto const OldData = Source.GetData();
            auto const OldCount = Source.Count();
            auto const OldCapacity = Source.Capacity();

            TArrayRAII<int> Destination{ std::move(Source) };

            THEN("the new array has exact same fields") {
                CHECK_EQ(Destination.GetData(), OldData);
                CHECK_EQ(Destination.Count(), OldCount);
                CHECK_EQ(Destination.Capacity(), OldCapacity);
            }
        }

        WHEN("the array is used to move-assign another array") {
            auto const OldData = Source.GetData();
            auto const OldCount = Source.Count();
            auto const OldCapacity = Source.Capacity();

            TArrayRAII<int> Destination = std::move(Source);

            THEN("the new array has exact same fields") {
                CHECK_EQ(Destination.GetData(), OldData);
                CHECK_EQ(Destination.Count(), OldCount);
                CHECK_EQ(Destination.Capacity(), OldCapacity);
            }
        }
    }

}


SCENARIO("TArrayRAII - raii semantics") {

    GIVEN("an array of some non-trivial elements") {
        Counters counters{};

        WHEN("the array leaves scope") {

            {
                TArrayRAII<Movable> Array{ 4 };
                for (int i = 0; i < 4; ++i) {
                    Array.Add(Movable{ counters });
                }

                counters.Reset();
            }

            THEN("the elements call destructors exactly once") {
                CHECK_EQ(counters.Construct, 0);
                CHECK_EQ(counters.Destroy, 4);
                CHECK_EQ(counters.Copy, 0);
                CHECK_EQ(counters.Move, 0);
            }

        }

        WHEN("the array leaves scope after being cleared") {

            {
                TArrayRAII<Movable> Array{ 4 };
                for (int i = 0; i < 4; ++i) {
                    Array.Add(Movable{ counters });
                }

                Array.Clear();
                Array.Shrink();

                counters.Reset();
            }

            THEN("there are no elements to call destructors") {
                CHECK_EQ(counters.Construct, 0);
                CHECK_EQ(counters.Destroy, 0);
                CHECK_EQ(counters.Copy, 0);
                CHECK_EQ(counters.Move, 0);
            }

        }
    }

}
