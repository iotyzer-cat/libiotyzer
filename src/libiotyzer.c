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

IOTZ_RETURN query_blockcipher_modes(
    IOTZ_UBYTE* out,                                // Byte array(Ciphertext)
    IOTZ_INT* outLen,                               // Length is byte length
    const IOTZ_UBYTE* in,                           // Byte array(Plaintext)
    const IOTZ_INT inLen,                           // Length is byte length
    const IOTZ_UBYTE* iv,                           // Byte array(IV or Nonce, Counter for CBC, OFB, CTR, if not, NULL)
    const IOTZ_INT ivLen,                           // Length is byte length
    const IOTZ_UBYTE* key,                          // Byte array(Key)
    const IOTZ_INT keyLen,                          // Length is bit length, ex) 128, 192, 256
    const IOTZ_BLOCK_CIPHER_MODE_OPERATION mode,    // ECB, CBC, OFB, CTR
    const IOTZ_BLOCK_CIPHER_ALG alg                 // ARIA, SEED, LEA
)
{
    // Call block cipher modes function
    
    return IOTZ_OK;
}