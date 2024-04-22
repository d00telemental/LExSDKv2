/**
 * @file        LESDK/Headers.hpp
 * @brief       This file is the primary public header for the SDKs.
                It checks some core definitions and includes generated headers as required.
 */

#pragma once


// The SDK_TARGET_LE? is defined in the versioned project configuration
// so that shared SDK sources may differentiate between what their actual
// game is. So, first thing, we check that there's only one such definition.

#if defined(SDK_TARGET_LE1)
    #define SDK_TARGET 1
    #if defined(SDK_TARGET_LE2) || defined(SDK_TARGET_LE3)
        #error Conflicting SDK_TARGET definitions.
    #endif
#endif

#if defined(SDK_TARGET_LE2)
    #define SDK_TARGET 2
    #if defined(SDK_TARGET_LE1) || defined(SDK_TARGET_LE3)
        #error Conflicting SDK_TARGET definitions.
    #endif
#endif

#if defined(SDK_TARGET_LE3)
    #define SDK_TARGET 3
    #if defined(SDK_TARGET_LE1) || defined(SDK_TARGET_LE2)
        #error Conflicting SDK_TARGET definitions.
    #endif
#endif

#if !defined(SDK_TARGET_LE1) && !defined(SDK_TARGET_LE2) && !defined(SDK_TARGET_LE3)
    #error No SDK_TARGET definition set.
#endif


// There are some common definitions which may originate in <Windows.h>
// which conflict with reflected properties in Mass Effect SDKs. Disable them here.

#if defined(lst1)

#undef lst1
#undef lst2
#undef lst3
#undef lst4
#undef lst5
#undef lst6
#undef lst7
#undef lst8
#undef lst9
#undef lst10
#undef lst11
#undef lst12
#undef lst13
#undef lst14
#undef lst15
#undef lst16

#endif


// Include common type implementations like array, names, etc.

#include "LESDK/Common/Common.hpp"


// With all the preparations done, conditionally include generated SDK headers.
// If rebuilding the SDKs, the included files should *usually* be left untouched,
// but do check the original generated <SdkHeaders.h> for each target just in case.

#if defined(SDK_TARGET_LE1)
    #include "LESDK/Includes.LE1.hpp"
#endif

#if defined(SDK_TARGET_LE2)
    #include "LESDK/Includes.LE2.hpp"
#endif

#if defined(SDK_TARGET_LE3)
    #include "LESDK/Includes.LE3.hpp"
#endif
