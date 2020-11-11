#ifndef _LIBIOTYZER_H_
#define _LIBIOTYZER_H_


#ifdef _MSC_VER
#if defined(_IOTYZER_LIB_)
#define IOTZ_DL_EXTERN      __declspec(dllexport) extern
#endif
#if defined(_IOTYZER_CLIENT_)
#define IOTZ_DL_EXTERN      __declspec(dllimport) extern
#endif
#else
#if defined(_IOTYZER_LIB_)
#define IOTZ_DL_EXTERN	    __attribute__((visibility("default"))) extern
#endif
#if defined(_IOTYZER_CLIENT_)
#define IOTZ_DL_EXTERN      extern
#endif
#endif



IOTZ_DL_EXTERN IOTZ_RETURN iotyzer_target_init();
IOTZ_DL_EXTERN IOTZ_RETURN iotyzer_target_terminate();
IOTZ_DL_EXTERN IOTZ_RETURN query_blockcipher_modes(
    IOTZ_UBYTE* out,                                // Byte array(Ciphertext)
    IOTZ_INT* outLen,                               // Length is byte length
    const IOTZ_UBYTE* in,                           // Byte array(Plaintext)
    const IOTZ_INT inLen,                           // Length is byte length
    const IOTZ_UBYTE* iv,                           // Byte array(IV or Nonce for CBC, CFB, OFB, CCM/GCM, if not NULL)
    const IOTZ_INT ivLen,                           // Length is byte length
    const IOTZ_UBYTE* key,                          // Byte array(Key)
    const IOTZ_INT keyLen,                          // Length is bit length, ex) 128, 192, 256
    const IOTZ_BLOCK_CIPHER_MODE_OPERATION mode,    // ECB, CBC, CFB1, CFB8, CFB32, CFB64, CFB128, OFB, CCM, GCM
    const IOTZ_BLOCK_CIPHER_ALG alg                 // ARIA, SEED, LEA
);



#else

#endif /* _LIBIOTYZER_H_ */
