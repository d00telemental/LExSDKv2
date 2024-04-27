/**
 * @file        LESDK/Common/Types.hpp
 * @brief       This file implements core scalar typedefs in a re-includable manner.
 */


#if !defined(_WINDEF_) && !defined(LESDK_NO_BASIC_TYPES) && !defined(LESDK_INTERNAL_BASIC_TYPES)

typedef signed char             INT8;
typedef unsigned char           UINT8;
typedef signed short            INT16;
typedef unsigned short          UINT16;
typedef signed int              INT32;
typedef unsigned int            UINT32;
typedef signed long long        INT64;
typedef unsigned long long      UINT64;

typedef float                   FLOAT;
typedef double                  DOUBLE;

typedef char                    CHAR;
typedef wchar_t                 WCHAR;

typedef UINT8                   BYTE;
typedef UINT16                  WORD;
typedef UINT32                  DWORD;

typedef INT32                   INT;
typedef UINT32                  UINT;

// Mark this block as "done".
#define LESDK_INTERNAL_BASIC_TYPES 1

#endif
