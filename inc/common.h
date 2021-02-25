#ifndef _COMMON_H_
#define _COMMON_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define IOTZ_ENABLE     1
#define IOTZ_DISABLE    0

#define IOTZ_NONE       0


typedef void            IOTZ_VOID;
typedef char            IOTZ_CHAR;
typedef int             IOTZ_INT;
typedef unsigned char   IOTZ_UCHAR;
typedef unsigned int    IOTZ_UINT;

typedef float           IOTZ_FLOAT;
typedef double          IOTZ_DOUBLE;

typedef int8_t          IOTZ_BYTE;
typedef int16_t         IOTZ_DBYTE;
typedef int32_t         IOTZ_WORD;
typedef int64_t         IOTZ_DWORD;
typedef uint8_t         IOTZ_UBYTE;
typedef uint16_t        IOTZ_UDBYTE;
typedef uint32_t        IOTZ_UWORD;
typedef uint64_t        IOTZ_UDWORD;

typedef IOTZ_INT        IOTZ_RETURN;

typedef FILE            IOTZ_FILE;



#else

#endif /* _COMMON_H_ */
