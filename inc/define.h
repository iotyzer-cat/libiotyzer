#ifndef _DEFINE_H_
#define _DEFINE_H_


#define IOTZ_BUF_SIZE                           1024


#ifdef _MSC_VER
#define iotz_vsprintf(str, ...)                 vsprintf_s(str, IOTZ_BUF_SIZE, format, arg)
#define iotz_sprintf(str, ...)                  sprintf_s(str, IOTZ_BUF_SIZE, __VA_ARGS__)
#define iotz_scanf(...)                         scanf_s(__VA_ARGS__)
#define iotz_fopen(fp, ...)                     fopen_s(&fp, __VA_ARGS__)
#define iotz_fprintf(...)                       fprintf_s(__VA_ARGS__)
#define iotz_null_fscanf(...)		            fscanf_s(__VA_ARGS__)
#define iotz_str_fscanf(...)			        fscanf_s(__VA_ARGS__, IOTZ_BUF_SIZE)
#define iotz_lstr_fscanf(len, ...)	            fscanf_s(__VA_ARGS__, len)
#define iotz_num_fscanf(...)			        fscanf_s(__VA_ARGS__)
#else
#define iotz_vsprintf(str, ...)                 vsprintf(str, format, arg)
#define iotz_sprintf(str, ...)                  sprintf(str, __VA_ARGS__)
#define iotz_scanf(...)                         scanf(__VA_ARGS__)
#define iotz_fprintf(...)                       fprintf(__VA_ARGS__)
#define iotz_fopen(fp, ...)                     fp = fopen(__VA_ARGS__)
#define iotz_strncpy(str, ...)		            strncpy(str, __VA_ARGS__)
#define iotz_null_fscanf(...)		            fscanf(__VA_ARGS__)
#define iotz_str_fscanf(...)			        fscanf(__VA_ARGS__)
#define iotz_lstr_fscanf(len, ...)	            fscanf(__VA_ARGS__)
#define iotz_num_fscanf(...)			        fscanf(__VA_ARGS__)
#endif


#define IOTZ_SYMMETRIC_128_BIT_SIZE             128
#define IOTZ_SYMMETRIC_192_BIT_SIZE             192
#define IOTZ_SYMMETRIC_256_BIT_SIZE             256
#define IOTZ_SYMMETRIC_128_BYTE_SIZE            16
#define IOTZ_SYMMETRIC_192_BYTE_SIZE            24
#define IOTZ_SYMMETRIC_256_BYTE_SIZE            32
#define IOTZ_SYMMETRIC_128_WORD_SIZE            4
#define IOTZ_SYMMETRIC_192_WORD_SIZE            6
#define IOTZ_SYMMETRIC_256_WORD_SIZE            8
#define IOTZ_SYMMETRIC_KEY_128_BIT_SIZE         128
#define IOTZ_SYMMETRIC_KEY_192_BIT_SIZE         192
#define IOTZ_SYMMETRIC_KEY_256_BIT_SIZE         256
#define IOTZ_SYMMETRIC_KEY_128_BYTE_SIZE        16
#define IOTZ_SYMMETRIC_KEY_192_BYTE_SIZE        24
#define IOTZ_SYMMETRIC_KEY_256_BYTE_SIZE        32
#define IOTZ_SYMMETRIC_KEY_128_WORD_SIZE        4
#define IOTZ_SYMMETRIC_KEY_192_WORD_SIZE        6
#define IOTZ_SYMMETRIC_KEY_256_WORD_SIZE        8
#define IOTZ_HASH_224_BIT_SIZE                  224
#define IOTZ_HASH_256_BIT_SIZE                  256
#define IOTZ_HASH_384_BIT_SIZE                  384
#define IOTZ_HASH_512_BIT_SIZE                  512
#define IOTZ_HASH_224_BYTE_SIZE                 28
#define IOTZ_HASH_256_BYTE_SIZE                 32
#define IOTZ_HASH_384_BYTE_SIZE                 48
#define IOTZ_HASH_512_BYTE_SIZE                 64
#define IOTZ_HASH_224_WORD_SIZE                 7
#define IOTZ_HASH_256_WORD_SIZE                 8
#define IOTZ_HASH_384_WORD_SIZE                 12
#define IOTZ_HASH_512_WORD_SIZE                 16
#define IOTZ_HASH_KEY_224_BIT_SIZE              224
#define IOTZ_HASH_KEY_256_BIT_SIZE              256
#define IOTZ_HASH_KEY_384_BIT_SIZE              384
#define IOTZ_HASH_KEY_512_BIT_SIZE              512
#define IOTZ_HASH_KEY_224_BYTE_SIZE             28
#define IOTZ_HASH_KEY_256_BYTE_SIZE             32
#define IOTZ_HASH_KEY_384_BYTE_SIZE             48
#define IOTZ_HASH_KEY_512_BYTE_SIZE             64
#define IOTZ_HASH_KEY_224_WORD_SIZE             7
#define IOTZ_HASH_KEY_256_WORD_SIZE             8
#define IOTZ_HASH_KEY_384_WORD_SIZE             12
#define IOTZ_HASH_KEY_512_WORD_SIZE             16
#define IOTZ_ASYMMETRIC_KEY_2048_BIT_SIZE       2048
#define IOTZ_ASYMMETRIC_KEY_3072_BIT_SIZE       3072
#define IOTZ_ASYMMETRIC_KEY_224_BIT_SIZE        224
#define IOTZ_ASYMMETRIC_KEY_256_BIT_SIZE        256
#define IOTZ_ASYMMETRIC_KEY_2048_BYTE_SIZE      256
#define IOTZ_ASYMMETRIC_KEY_3072_BYTE_SIZE      384
#define IOTZ_ASYMMETRIC_KEY_224_BYTE_SIZE       28
#define IOTZ_ASYMMETRIC_KEY_256_BYTE_SIZE       32
#define IOTZ_ASYMMETRIC_KEY_2048_WORD_SIZE      64
#define IOTZ_ASYMMETRIC_KEY_3072_WORD_SIZE      96
#define IOTZ_ASYMMETRIC_KEY_224_WORD_SIZE       7
#define IOTZ_ASYMMETRIC_KEY_256_WORD_SIZE       8


typedef enum _IOTZ_BC_MODE
{
    IOTZ_BC_MODE_NONE = IOTZ_NONE,
    IOTZ_ECB,
    IOTZ_CBC,
    IOTZ_CTR,
    IOTZ_OFB,
} IOTZ_BC_MODE;

typedef enum _IOTZ_BC_ALG
{
    IOTZ_BC_ALG_NONE = IOTZ_NONE,
    IOTZ_ARIA,
    IOTZ_SEED,
    IOTZ_LEA,
    IOTZ_AES,
} IOTZ_BC_ALG;

typedef enum _IOTZ_BC_KEY_SIZE
{
    IOTZ_BC_KEY_SIZE_NONE = IOTZ_NONE,
    IOTZ_BC_128_BIT_KEY = IOTZ_SYMMETRIC_KEY_128_BIT_SIZE,
    IOTZ_BC_192_BIT_KEY = IOTZ_SYMMETRIC_KEY_192_BIT_SIZE,
    IOTZ_BC_256_BIT_KEY = IOTZ_SYMMETRIC_KEY_256_BIT_SIZE,
} IOTZ_BC_KEY_SIZE;

typedef enum _IOTZ_BC_ENC_DEC
{
    IOTZ_ENC = 0,
    IOTZ_DEC
} IOTZ_BC_ENC_DEC;

typedef enum _IOTZ_MAC_GEN_VER
{
    IOTZ_GENERATE = 0,
    IOTZ_VERIFY
} IOTZ_MAC_GEN_VER;

typedef enum _IOTZ_HASH_ALG
{
    IOTZ_HASH_ALG_NONE = IOTZ_NONE,
    IOTZ_SHA2,
    IOTZ_SHA3,
    IOTZ_LSH256,
    IOTZ_LSH512
} IOTZ_HASH_ALG;

typedef enum _IOTZ_HASH_KEY_SIZE
{
    IOTZ_HASH_KEY_SIZE_NONE = IOTZ_NONE,
    IOTZ_HASH_224_BIT_KEY = IOTZ_HASH_KEY_224_BIT_SIZE,
    IOTZ_HASH_256_BIT_KEY = IOTZ_HASH_KEY_256_BIT_SIZE,
    IOTZ_HASH_384_BIT_KEY = IOTZ_HASH_KEY_384_BIT_SIZE,
    IOTZ_HASH_512_BIT_KEY = IOTZ_HASH_KEY_512_BIT_SIZE,
} IOTZ_HASH_KEY_SIZE;

typedef enum _IOTZ_MAC_MODE
{
    IOTZ_MAC_MODE_NONE = IOTZ_NONE,
    IOTZ_HMAC,
    IOTZ_CMAC,
    IOTZ_CCM,
    IOTZ_GCM,
} IOTZ_MAC_MODE;

typedef union _IOTZ_MAC_ALG
{
    IOTZ_HASH_ALG hash;
    IOTZ_BC_ALG bc;
} IOTZ_MAC_ALG;

typedef union _IOTZ_MAC_KEY_SIZE
{
    IOTZ_HASH_KEY_SIZE hashKey;
    IOTZ_BC_KEY_SIZE bcKey;
} IOTZ_MAC_KEY_SIZE;

typedef enum _IOTZ_RNG_MODE
{
    IOTZ_RNG_MODE_NONE = IOTZ_NONE,
    IOTZ_HASH_DRBG,
    IOTZ_HMAC_DRBG,
    IOTZ_CTR_DRBG,
} IOTZ_RNG_MODE;

typedef union _IOTZ_RNG_ALG
{
    IOTZ_HASH_ALG hash;
    IOTZ_BC_ALG bc;
} IOTZ_RNG_ALG;

typedef union _IOTZ_RNG_KEY_SIZE
{
    IOTZ_HASH_KEY_SIZE hashKey;
    IOTZ_BC_KEY_SIZE bcKey;
} IOTZ_RNG_KEY_SIZE;

typedef enum _IOTZ_PK_ALG
{
    IOTZ_PK_ALG_NONE = IOTZ_NONE,
    IOTZ_RSA,
    IOTZ_DSA,
    IOTZ_ECC
} IOTZ_PK_ALG;

typedef enum _IOTZ_PK_KEY_SIZE
{
    IOTZ_PK_KEY_SIZE_NONE = IOTZ_NONE,
    IOTZ_PK_RSA_2048BIT_KEY = IOTZ_ASYMMETRIC_KEY_2048_BIT_SIZE,
    IOTZ_PK_RSA_3072BIT_KEY = IOTZ_ASYMMETRIC_KEY_3072_BIT_SIZE,
    IOTZ_PK_DSA_224BIT_KEY = IOTZ_ASYMMETRIC_KEY_224_BIT_SIZE,
    IOTZ_PK_DSA_256BIT_KEY = IOTZ_ASYMMETRIC_KEY_256_BIT_SIZE,
    IOTZ_PK_ECC_P224BIT_KEY = IOTZ_ASYMMETRIC_KEY_224_BIT_SIZE,
    IOTZ_PK_ECC_P256BIT_KEY = IOTZ_ASYMMETRIC_KEY_256_BIT_SIZE,
} IOTZ_PK_KEY_SIZE;

typedef enum _IOTZ_KAS_ALG
{
    IOTZ_KAS_ALG_NONE = IOTZ_NONE,
    IOTZ_DH ,
    IOTZ_ECDH
} IOTZ_KAS_ALG;

typedef enum _IOTZ_KDF_ALG
{
    IOTZ_KDF_ALG_NONE = IOTZ_NONE,
} IOTZ_KDF_ALG;



#else

#endif /* _DEFINE_H_ */
