#ifndef _DEFINE_H_
#define _DEFINE_H_


#define IOTZ_BUF_SIZE                           1024

#define IOTZ_SYMMETRIC_KEY_128_BIT_SIZE         128
#define IOTZ_SYMMETRIC_KEY_192_BIT_SIZE         192
#define IOTZ_SYMMETRIC_KEY_256_BIT_SIZE         256
#define IOTZ_SYMMETRIC_KEY_128_BYTE_SIZE        16
#define IOTZ_SYMMETRIC_KEY_192_BYTE_SIZE        24
#define IOTZ_SYMMETRIC_KEY_256_BYTE_SIZE        32
#define IOTZ_SYMMETRIC_KEY_128_WORD_SIZE        4
#define IOTZ_SYMMETRIC_KEY_192_WORD_SIZE        6
#define IOTZ_SYMMETRIC_KEY_256_WORD_SIZE        8
#define IOTZ_SYMMETRIC_128_BIT_SIZE             128
#define IOTZ_SYMMETRIC_128_BYTE_SIZE            16
#define IOTZ_SYMMETRIC_128_WORD_SIZE            4

#ifdef _MSC_VER
#define iotz_sprintf(str, ...)                  sprintf_s(str, IOTZ_BUF_SIZE, __VA_ARGS__)
#define iotz_scanf(...)                         scanf_s(__VA_ARGS__)
#define iotz_fopen(fp, ...)                     fopen_s(&fp, __VA_ARGS__)
#define iotz_fprintf(...)                       fprintf_s(__VA_ARGS__)
#define iotz_fscanf(...)                        fscanf_s(__VA_ARGS__, IOTZ_BUF_SIZE)
#else
#define iotz_sprintf(str, ...)                  sprintf(str, __VA_ARGS__)
#define iotz_scanf(...)                         scanf(__VA_ARGS__)
#define iotz_fprintf(...)                       fprintf(__VA_ARGS__)
#define iotz_fopen(fp, ...)                     fp = fopen(__VA_ARGS__)
#define iotz_fscanf(...)                        fscanf(__VA_ARGS__)
#endif


typedef enum _IOTZ_BLOCK_CIPHER_ALG
{
    IOTZ_ARIA = 1,
    IOTZ_SEED,
    IOTZ_LEA,
    IOTZ_AES,
} IOTZ_BLOCK_CIPHER_ALG;

typedef enum _IOTZ_BLOCK_ENC_DEC
{
    IOTZ_ENC = 0,
    IOTZ_DEC
} IOTZ_BLOCK_ENC_DEC;

typedef enum _IOTZ_BLOCK_CIPHER_KEY_SIZE
{
    IOTZ_128BIT_KEY = 128,
    IOTZ_192BIT_KEY = 192,
    IOTZ_256BIT_KEY = 256,
} IOTZ_BLOCK_CIPHER_KEY_SIZE;

typedef enum _IOTZ_BLOCK_CIPHER_MODE_OPERATION
{
    IOTZ_ECB = 1,
    IOTZ_CBC,
    IOTZ_CTR,
    IOTZ_OFB,
} IOTZ_BLOCK_CIPHER_MODE_OPERATION;

typedef enum _IOTZ_HASH_ALG
{
    IOTZ_SHA2_224 = 0,
    IOTZ_SHA2_256,
    IOTZ_SHA2_384,
    IOTZ_SHA2_512,
    IOTZ_LSH_256_224,
    IOTZ_LSH_256_256,
    IOTZ_LSH_512_224,
    IOTZ_LSH_512_256,
    IOTZ_LSH_512_384,
    IOTZ_LSH_512_512,
    IOTZ_SHA3_224,
    IOTZ_SHA3_256,
    IOTZ_SHA3_384,
    IOTZ_SHA3_512,
} IOTZ_HASH_ALG;

typedef enum _IOTZ_MAC_ALG
{
    IOTZ_HMAC = 0,
    IOTZ_CMAC,
    IOTZ_CCM = 5,
    IOTZ_GCM,
} IOTZ_MAC_ALG;



#else

#endif /* _DEFINE_H_ */
