/*******************************************************************************
 * This is shared library linked IoTyzer Client
 * Input funcion within below funcions
 * 
 * Do not edit below files.
 * - common.h
 * - define.h
 * - return.h
 * - libiotyzer.h
 * - libiotyzer.c(funcion APIs)
 * 
 * You can figure out parameter of below APIs in <define.h> header.
 * If you need more source and header file, source file located in "src" folder 
 * and header file located in "inc" folder
 ******************************************************************************/

#include <stdio.h>

#include <common.h>
#include <define.h>
#include <return.h>

#include <libiotyzer.h>

// include additional header here.


IOTZ_RETURN iotyzer_target_init()
{
    printf("  Init iot device.\n");

    // If you need to work before load target, input methond here.

    return IOTZ_OK;
}

IOTZ_RETURN iotyzer_target_terminate()
{
    printf("  Terminate iot device.\n");

    // If you need to work after release target, input methond here.
    
    return IOTZ_OK;
}

IOTZ_RETURN query_blockcipher(
    IOTZ_UBYTE* out,            // Byte array(Ciphertext)
    IOTZ_INT* outLen,           // Length is byte length
    const IOTZ_UBYTE* in,       // Byte array(Plaintext)
    const IOTZ_INT inLen,       // Length is byte length
    const IOTZ_UBYTE* iv,       // Byte array(IV or Nonce, Counter for CBC, OFB, CTR, if not, NULL)
    const IOTZ_INT ivLen,       // Length is byte length
    const IOTZ_UBYTE* key,      // Byte array(Key)
    const IOTZ_INT keyLen,      // Length is bit length, ex) 128, 192, 256
    const IOTZ_BC_MODE mode,    // ECB, CBC, OFB, CTR
    const IOTZ_BC_ALG alg       // ARIA, SEED, LEA
)
{
    // Call block cipher modes function
    
    return IOTZ_OK;
}

IOTZ_RETURN query_secure_hash(
    IOTZ_UBYTE* hash,           // Byte array(Message Digest)
    const IOTZ_INT hashLen,     // Length is byte length ex) SHA2-224 : 28, only support full hash size, not truncated.
    const IOTZ_UBYTE* in,       // Byte array(Plaintext)
    const IOTZ_INT inLen,       // Length is byte length
    const IOTZ_BC_ALG alg       // use define.h "IOTZ_HASH_ALG" variables, combinate hashLen variable.
                                // IOTZ_SHA2 : SHA2(224/256/384/512)
                                // IOTZ_SHA3 : SHA3(224/256/384/512)
                                // IOTZ_LSH256 : LSH(LSH256-224/LSH256-256)
                                // IOTZ_LSH512 : LSH(LSH512-224/LSH512-256/LSH512-384/LSH512-512)
                                // ex) SHA2-224 : hashLen(28), alg(IOTZ_SHA2)
)
{
    // Call block cipher modes function
    
    return IOTZ_OK;
}