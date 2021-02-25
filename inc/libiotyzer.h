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
IOTZ_RETURN query_blockcipher(
	IOTZ_UBYTE* out,                    // Byte array(Ciphertext)
	IOTZ_INT* outLen,                   // Length is byte length
	const IOTZ_UBYTE* in,               // Byte array(Plaintext)
	const IOTZ_INT inLen,               // Length is byte length
	const IOTZ_UBYTE* iv,               // Byte array(IV or Nonce for CBC, CTR, OFB, if not NULL)
	const IOTZ_INT ivLen,               // Length is byte length
	const IOTZ_UBYTE* key,              // Byte array(Key)
	const IOTZ_INT keyLen,              // Length is bit length, ex) 128, 192, 256
	const IOTZ_BC_MODE mode,            // use define.h "IOTZ_BC_MODE" variables
                                        // IOTZ_ECB : ECB
                                        // IOTZ_CBC : CBC
                                        // IOTZ_CTR : CTR
                                        // IOTZ_OFB : OFB
    const IOTZ_BC_ALG alg,              // use define.h "IOTZ_BC_ALG" variables
                                        // IOTZ_ARIA : ARIA
                                        // IOTZ_SEED : SEED
                                        // IOTZ_LEA : LEA
    const IOTZ_BC_ENC_DEC oper          // Encryt(IOTZ_ENC), Decrypt(IOTZ_DEC)
);

IOTZ_RETURN query_secure_hash(
    IOTZ_UBYTE* hash,                   // Byte array(Message Digest)
    const IOTZ_INT hashLen,             // Length is bit length ex) SHA2-224 : 224
                                        // only support full hash size, not suport truncated size.
    const IOTZ_UBYTE* in,               // Byte array(Plaintext)
    const IOTZ_INT inLen,               // Length is byte length
    const IOTZ_BC_ALG alg               // use define.h "IOTZ_HASH_ALG" variables, combinate hashLen variable.
                                        // IOTZ_SHA2 : SHA2(224/256/384/512)
                                        // IOTZ_SHA3 : SHA3(224/256/384/512)
                                        // IOTZ_LSH256 : LSH(LSH256-224/LSH256-256)
                                        // IOTZ_LSH512 : LSH(LSH512-224/LSH512-256/LSH512-384/LSH512-512)
                                        // ex) SHA2-224 : hashLen(28), alg(IOTZ_SHA2)
);

IOTZ_RETURN query_message_authentication(
	IOTZ_UBYTE* out,                    // Byte array(Ciphertext), only for CCM, GCM not HMAC, CMAC
	IOTZ_INT* outLen,                   // Length is byte length
	IOTZ_UBYTE* tag,                    // Byte array(Message Authentication Code)
	const IOTZ_INT tagLen,              // Length is byte length
	const IOTZ_UBYTE* in,               // Byte array(Plaintext)
	const IOTZ_INT inLen,               // Length is byte length
	const IOTZ_UBYTE* nonce,            // Byte array(IV or Nonce for CCM, GCM)
	const IOTZ_INT nonceLen,            // Length is byte length
	const IOTZ_UBYTE* auth,             // Byte array(Additional Authentication Data for CCM, GCM)
	const IOTZ_INT authLen,             // Length is byte length
	const IOTZ_UBYTE* key,              // Byte array(Key)
	const IOTZ_INT keyLen,              // Length is bit length, ex) 128, 192, 256
	const IOTZ_MAC_MODE mode,           // use define.h "IOTZ_MAC_MODE" variables
                                        // IOTZ_HMAC : HMAC
                                        // IOTZ_CMAC : CMAC
                                        // IOTZ_CCM : CCM
                                        // IOTZ_GCM : GCM
    const IOTZ_MAC_ALG alg,             // use define.h "IOTZ_MAC_ALG" variables
                                        // alg.hash(HMAC)
                                        // IOTZ_SHA2 : SHA2
                                        // IOTZ_SHA3 : SHA3
                                        // IOTZ_LSH256 : LSH
                                        // IOTZ_LSH512 : LSH
                                        // alg.bc(CMAC, CCM, GMAC/GCM)
                                        // IOTZ_ARIA : ARIA
                                        // IOTZ_SEED : SEED
                                        // IOTZ_LEA : LEA
    const IOTZ_MAC_KEY_SIZE keySize,    // use define.h "IOTZ_MAC_KEY_SIZE" variables
                                        // keySize.hashKey(HMAC)
                                        // IOTZ_HASH_224_BIT_KEY : 224
                                        // IOTZ_HASH_256_BIT_KEY : 256
                                        // IOTZ_HASH_384_BIT_KEY : 384
                                        // IOTZ_HASH_512_BIT_KEY : 512
                                        // keySize.bc(CMAC, CCM, GMAC/GCM)
                                        // IOTZ_BC_128_BIT_KEY : 128
                                        // IOTZ_BC_192_BIT_KEY : 192
                                        // IOTZ_BC_256_BIT_KEY : 256
    const IOTZ_MAC_GEN_VER oper         // MAC Generate(IOTZ_GENERATE), MAC Verify(IOTZ_VERIFY)
);



#else

#endif /* _LIBIOTYZER_H_ */
