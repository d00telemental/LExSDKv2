#pragma once

#include <type_traits>


struct Counters final {
    int Construct = 0;
    int Destroy = 0;
    int Copy = 0;
    int Move = 0;

    void Reset() {
        Construct = 0;
        Destroy = 0;
        Copy = 0;
        Move = 0;
    }
};

struct Copyable final {
    Counters* counters{ nullptr };
    Copyable(Counters& inCounters) { counters = &inCounters; counters->Construct++; }
    ~Copyable() noexcept { counters->Destroy++; counters = nullptr; }
    Copyable(Copyable const& other) { counters = other.counters; counters->Copy++; }
    Copyable& operator=(Copyable const& other) { counters = other.counters; counters->Copy++; return *this; }
    Copyable(Copyable&&) = delete;
    Copyable& operator=(Copyable&&) = delete;
};

static_assert(std::is_copy_constructible_v<Copyable>);
static_assert(std::is_copy_assignable_v<Copyable>);

struct Movable final {
    Counters* counters{ nullptr };
    Movable(Counters& inCounters) { counters = &inCounters; counters->Construct++; }
    ~Movable() noexcept { counters->Destroy++; counters = nullptr; }
    Movable(Movable const& other) { counters = other.counters; counters->Copy++; }
    Movable& operator=(Movable const& other) { counters = other.counters; counters->Copy++; return *this; }
    Movable(Movable&& other) noexcept { counters = other.counters; counters->Move++; };
    Movable& operator=(Movable&& other) noexcept { counters = other.counters; counters->Move++; return *this; };
};

static_assert(std::is_move_constructible_v<Movable>);
static_assert(std::is_move_assignable_v<Movable>);
