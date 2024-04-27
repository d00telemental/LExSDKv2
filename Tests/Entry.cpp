#include <cstdlib>

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

#include "LESDK/Common/Core.hpp"


// Bogus FMalloc-like type required by the containers.
class FMallocTest final : public FMallocLike {
public:

    void* Malloc(DWORD const Count, DWORD const Alignment) override {
        assert(Alignment % 8 == 0); (void)Alignment;
        return std::malloc(Count);
    }

    void* Realloc(void* const Orig, DWORD const Count, DWORD const Alignment) override {
        assert(Alignment % 8 == 0); (void)Alignment;
        return std::realloc(Orig, Count);
    }

    void Free(void* const Orig) override {
        std::free(Orig);
    }

    UBOOL Exec(WCHAR const* const Cmd, void* const Ar) override { (void)Cmd; (void)Ar; return FALSE; }
    void Tick(FLOAT const Delta) override { (void)Delta; }
    UBOOL IsThreadSafe() override { return TRUE; }
    void GetAllocationInfo(SIZE_T* const Virt, SIZE_T* const Phys) override { (void)Virt; (void)Phys; }
};


#include "./Tests.FString.hpp"
#include "./Tests.TArray.hpp"
#include "./Tests.TMap.hpp"


int main(int const argc, char** const argv) {
    doctest::Context TestContext{};
    TestContext.applyCommandLine(argc, argv);

    // Initialize test-local allocator.
    FMallocTest Allocator{};
    FMallocLike* GlobalAllocator = &Allocator;
    GMalloc = &GlobalAllocator;

    int const Result = TestContext.run();
    if (TestContext.shouldExit())
        return Result;

    return Result;
}
