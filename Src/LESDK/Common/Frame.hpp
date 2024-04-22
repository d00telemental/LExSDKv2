/**
 * @file        LESDK/Common/Frame.hpp
 * @brief       This file implements some core virtual machine types.
 */

#pragma once

#include "LESDK/Common/Core.hpp"
#include "LESDK/Common/TArray.hpp"


#pragma pack(push, 4)

struct FFrame {
    struct FOutParmRec final {
        UProperty* Property;
        BYTE* PropAddr;
        FOutParmRec* NextOutParm;
    };

    void* Vfptr;
    DWORD                   Unknown1;
    DWORD                   Unknown2;
    DWORD                   Unknown3;
#ifdef SDK_TARGET_LE3
    DWORD                   Unknown4;
#endif
    UStruct*                Node;
    UObject*                Object;
    BYTE*                   Code;
    BYTE*                   Locals;
    FFrame*                 PreviousFrame;
    FOutParmRec*            OutParms;

    void Step(UObject* Context, void* Result);
};

struct FStateFrame : public FFrame {
    struct FPushedState final {
        UState* State;
        UStruct* Node;
        BYTE* Code;
    };

    UState*                 StateNode;
    QWORD                   ProbeMask;
    WORD                    LatentAction;
    BYTE                    ContinuedState;
    TArray<FPushedState>    StateStack;
};

#if defined(SDK_TARGET_LE1) || defined(SDK_TARGET_LE2)
static_assert(sizeof(FStateFrame) == 0x68);
static_assert(offsetof(FStateFrame, StateNode) == 0x44);
static_assert(offsetof(FStateFrame, ProbeMask) == 0x4C);
static_assert(offsetof(FStateFrame, ContinuedState) == 0x56);
static_assert(offsetof(FStateFrame, StateStack) == 0x58);
#endif

#if defined(SDK_TARGET_LE3)
static_assert(sizeof(FStateFrame) == 0x6C);
static_assert(offsetof(FStateFrame, StateNode) == 0x48);
static_assert(offsetof(FStateFrame, ProbeMask) == 0x50);
static_assert(offsetof(FStateFrame, ContinuedState) == 0x5A);
static_assert(offsetof(FStateFrame, StateStack) == 0x5C);
#endif

#pragma pack(pop)


using tProcessInternal = void (UObject* Context, FFrame* Stack, void* Result);
using tProcessEvent = void (UObject* Context, UFunction* Function, void* Parms, void* Result);
using tCallFunction = void (UObject* Context, FFrame* Stack, void* Result, UFunction* Function);

using tNative = void (UObject* Context, FFrame* Stack, void* Result);

extern tNative** GNatives;
