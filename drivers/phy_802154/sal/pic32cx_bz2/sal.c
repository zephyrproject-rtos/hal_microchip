/**************************************************************************
  Crypto Framework Library Source

  Company:
    Microchip Technology Inc.

  File Name:
    aes.c

  Summary:
    Crypto Framework Library source for cryptographic functions.

  Description:
    This source file contains functions that make up the Cryptographic
	Framework Library for PIC32 families of Microchip microcontrollers.
**************************************************************************/

//DOM-IGNORE-BEGIN
/*****************************************************************************
 Copyright (C) 2017-2019 Microchip Technology Inc. and its subsidiaries.

Microchip Technology Inc. and its subsidiaries.

Subject to your compliance with these terms, you may use Microchip software 
and any derivatives exclusively with Microchip products. It is your 
responsibility to comply with third party license terms applicable to your 
use of third party software (including open source software) that may 
accompany Microchip software.

THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR 
PURPOSE.

IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE 
FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN 
ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, 
THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*****************************************************************************/

#include "sal.h"
#include <stddef.h>
#include <string.h>
#include "soc.h"

#undef COMPONENT_TYPEDEF_STYLE
#define COMPONENT_TYPEDEF_STYLE 'N'

/**
 * @brief Loads the AES key into the hardware registers.
 * 
 * @param aes Pointer to the AES context structure.
 * @param key Pointer to the key data (array of 32-bit words).
 */
static void CRYPT_AES_u2238LoadKey(const Aes * aes, uint32_t * key)
{
    uint32_t words = 4;
    switch (aes->hwDesc.ctrla.s.KEYSIZE)
    {
        case CRYPT_AES_U2238_AES192:
            words = 6;
            break;
        case CRYPT_AES_U2238_AES256:
            words = 8;
            break;  
        default:
            break;
    }
    
    int x = 0;
    for (x = 0; x < words; x++)
    {
        AES_REGS->AES_KEYWORD[x] = key[x];
    }    
}

/**
 * @brief Loads the Initialization Vector (IV) into the hardware registers.
 * 
 * @param iv Pointer to the IV data (array of 32-bit words).
 */
static void CRYPT_AES_u2238LoadIV(uint32_t *iv)
{
    AES_REGS->AES_INTVECTV[0] = iv[0];
    AES_REGS->AES_INTVECTV[1] = iv[1];
    AES_REGS->AES_INTVECTV[2] = iv[2];
    AES_REGS->AES_INTVECTV[3] = iv[3];
    
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    ctrlb->s.NEWMSG = 1;
}

/**
 * @brief Handles input and output of a single AES block.
 * 
 * @param in Pointer to the input data block (16 bytes). If NULL, zeros are used.
 * @param out Pointer to the output data block (16 bytes). If NULL, output is discarded.
 */
static void CRYPT_AES_u2238InOutBlock(const uint8_t * in, uint8_t * out)
{
    //volatile CRYPT_AES_U2238_AES_INTFLAG * intFlag = (CRYPT_AES_U2238_AES_INTFLAG *)(&AES_REGS->AES_INTFLAG);
    CRYPT_AES_U2238_AES_CTRLB * volatile ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    uint32_t * ptr = NULL;
    if (in == NULL)
    {
        AES_REGS->AES_INDATA = 0;
        AES_REGS->AES_INDATA = 0;
        AES_REGS->AES_INDATA = 0;
        AES_REGS->AES_INDATA = 0;
    }
    else
    {
        ptr = (uint32_t *)in;
        AES_REGS->AES_INDATA = ptr[0];
        AES_REGS->AES_INDATA = ptr[1];
        AES_REGS->AES_INDATA = ptr[2];
        AES_REGS->AES_INDATA = ptr[3];
    }
    
    ctrlb->s.START = 1;
    while ((AES_REGS->AES_INTFLAG & 0x1) == 0);

    if (out == NULL)
    {
        uint32_t tmp = AES_REGS->AES_INDATA;
        tmp = AES_REGS->AES_INDATA;
        tmp = AES_REGS->AES_INDATA;
        tmp = AES_REGS->AES_INDATA;
        tmp = tmp;
    }
    else
    {
        ptr = (uint32_t *)out;
        ptr[0] = AES_REGS->AES_INDATA;
        ptr[1] = AES_REGS->AES_INDATA;
        ptr[2] = AES_REGS->AES_INDATA;
        ptr[3] = AES_REGS->AES_INDATA;
    }   
}


int SAL_AesInit(Aes* aes)
{
    //Enable AES Engine Clock here
	/* Disable PMD lock */
	CFG_REGS->CFG_CFGCON0 &= ~CFG_CFGCON0_PMDLOCK_Msk;
	CFG_REGS->CFG_PMD3 &= ~CFG_PMD3_AESMD_Msk;
    
    aes = aes;
    return 0;
}

/**
 * @brief Sets the AES key in the AES context.
 * 
 * @param aes Pointer to the AES context structure.
 * @param key Pointer to the key data (array of 32-bit words).
 * @param keyLen Length of the key in bytes (must be 16, 24, or 32).
 * @return 0 on success, -1 on error.
 */
int SAL_AesSetKey(Aes* aes, uint32_t * key, uint8_t keyLen )
{
    if (keyLen == 16 || keyLen == 24 || keyLen == 32)
    {
        aes->keylen = keyLen;
    }
    else
    {
        return -1;
    }

    if(aes != NULL && key != NULL )
    {
        memcpy((uint8_t *)&aes->key, key, keyLen );
    }
    else
    {
        return -1;
    }

    return 0;
}

/**
 * @brief Sets the Initialization Vector (IV) in the AES context.
 * 
 * @param aes Pointer to the AES context structure.
 * @param iv Pointer to the IV data (array of 32-bit words). If NULL, IV is set to zero.
 * @return 0 on success, -1 on error.
 */
int SAL_AesSetIV(Aes* aes, uint32_t * iv)
{
    if (aes == NULL)
        return -1;

    if (iv)
        memcpy((uint8_t *)&aes->reg, iv, AES_BLOCK_SIZE );
    else
        memset((uint8_t *)&aes->reg, 0, AES_BLOCK_SIZE );

    return 0;
    
}

/**
 * @brief Encrypts a single AES block.
 * 
 * @param aes Pointer to the AES context structure.
 * @param inBlock Pointer to the input data block (16 bytes).
 * @param outBlock Pointer to the output data block (16 bytes).
 * @return 0 on success, -1 on error.
 */
int SAL_AesEncrypt(Aes* aes, const uint8_t* inBlock, uint8_t* outBlock)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);
    
    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;
    ctrla->s.AESMODE = CRYPT_AES_U2238_ECB;
    ctrla->s.CIPER = CRYPT_AES_U2238_ENCRYPTION;
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    
    uint8_t * outPtr = outBlock;
    const uint8_t * inPtr = inBlock;
    
    CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
    return 0;
    
}

/**
 * @brief Decrypts a single AES block.
 * 
 * @param aes Pointer to the AES context structure.
 * @param inBlock Pointer to the input data block (16 bytes).
 * @param outBlock Pointer to the output data block (16 bytes).
 * @return 0 on success, -1 on error.
 */
int SAL_AesDecrypt(Aes* aes, const uint8_t* inBlock, uint8_t* outBlock)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);
    
    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;
    ctrla->s.AESMODE = CRYPT_AES_U2238_ECB;
    ctrla->s.CIPER = CRYPT_AES_U2238_DECRYPTION;
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    
    uint8_t * outPtr = outBlock;
    const uint8_t * inPtr = inBlock;
    
    CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
    return 0;
    
}

/**
 * @brief Encrypts data in ECB mode.
 * 
 * @param aes Pointer to the AES context structure.
 * @param out Pointer to the output buffer.
 * @param in Pointer to the input buffer.
 * @param sz Size of the data in bytes (must be a multiple of 16).
 * @return 0 on success, -1 on error.
 */
int SAL_AesEcbEncrypt(Aes* aes, uint8_t* out, const uint8_t* in, uint32_t sz)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);
    
    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;
    ctrla->s.AESMODE = CRYPT_AES_U2238_ECB;
    ctrla->s.CIPER = CRYPT_AES_U2238_ENCRYPTION;
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    
    uint8_t * outPtr = out;
    const uint8_t * inPtr = in;
    
    uint32_t blocks = sz >> 4;
    for (int x = 0; x < blocks; x++)
    {
        CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
        inPtr+=16;
        outPtr+=16;
    }
    return 0;
}

/**
 * @brief Decrypts data in ECB mode.
 * 
 * @param aes Pointer to the AES context structure.
 * @param out Pointer to the output buffer.
 * @param in Pointer to the input buffer.
 * @param sz Size of the data in bytes (must be a multiple of 16).
 * @return 0 on success, -1 on error.
 */
int SAL_AesEcbDecrypt(Aes* aes, uint8_t* out, const uint8_t* in, uint32_t sz)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);

    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;    
    ctrla->s.AESMODE = CRYPT_AES_U2238_ECB;
    ctrla->s.CIPER = CRYPT_AES_U2238_DECRYPTION;
    
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    
    uint8_t * outPtr = out;
    const uint8_t * inPtr = in;
    
    uint32_t blocks = sz >> 4;
    for (int x = 0; x < blocks; x++)
    {
        CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
        inPtr+=16;
        outPtr+=16;
    }
    return 0;
}

/**
 * @brief Encrypts data in CBC mode.
 * 
 * @param aes Pointer to the AES context structure.
 * @param out Pointer to the output buffer.
 * @param in Pointer to the input buffer.
 * @param sz Size of the data in bytes (must be a multiple of 16).
 * @return 0 on success, -1 on error.
 */
int SAL_AesCbcEncrypt(Aes* aes, uint8_t* out, const uint8_t* in, uint32_t sz)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);
    
    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;
    ctrla->s.AESMODE = CRYPT_AES_U2238_CBC;
    ctrla->s.CIPER = CRYPT_AES_U2238_ENCRYPTION;
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    CRYPT_AES_u2238LoadIV((uint32_t*)aes->reg);

    uint8_t * outPtr = out;
    const uint8_t * inPtr = in;
    
    uint32_t blocks = sz >> 4;
    for (int x = 0; x < blocks; x++)
    {
        CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
        inPtr+=16;
        outPtr+=16;
    }
    memcpy(aes->reg, out + sz - AES_BLOCK_SIZE, AES_BLOCK_SIZE);
    return 0;
}

/**
 * @brief Decrypts data in CBC mode.
 * 
 * @param aes Pointer to the AES context structure.
 * @param out Pointer to the output buffer.
 * @param in Pointer to the input buffer.
 * @param sz Size of the data in bytes (must be a multiple of 16).
 * @return 0 on success, -1 on error.
 */
int SAL_AesCbcDecrypt(Aes* aes, uint8_t* out, const uint8_t* in, uint32_t sz)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);

    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;    
    ctrla->s.AESMODE = CRYPT_AES_U2238_CBC;
    ctrla->s.CIPER = CRYPT_AES_U2238_DECRYPTION;
    
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    CRYPT_AES_u2238LoadIV((uint32_t*)aes->reg);

    uint8_t * outPtr = out;
    const uint8_t * inPtr = in;
    
    uint32_t blocks = sz >> 4;
    for (int x = 0; x < blocks; x++)
    {
        CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
        inPtr+=16;
        outPtr+=16;
    }
    memcpy(aes->reg, in + sz - AES_BLOCK_SIZE, AES_BLOCK_SIZE);
    return 0;
}

/**
 * @brief Encrypts data in CTR mode.
 * 
 * @param aes Pointer to the AES context structure.
 * @param out Pointer to the output buffer.
 * @param in Pointer to the input buffer.
 * @param sz Size of the data in bytes (must be a multiple of 16).
 * @return 0 on success, -1 on error.
 */
int SAL_AesCtrEncrypt(Aes* aes, uint8_t* out, const uint8_t* in, uint32_t sz)
{
    volatile CRYPT_AES_U2238_AES_CTRLB * ctrlb = (CRYPT_AES_U2238_AES_CTRLB  *)(&AES_REGS->AES_CTRLB);
    volatile CRYPT_AES_U2238_AES_CTRLA * ctrla = (CRYPT_AES_U2238_AES_CTRLA  *)(&AES_REGS->AES_CTRLA);
    
    ctrla->s.SWRST = 1;
    ctrla->s.ENABLE = 0;
    ctrla->v = 0;
    ctrlb->v = 0;
    ctrla->s.AESMODE = CRYPT_AES_U2238_CTR;
    ctrla->s.CIPER = CRYPT_AES_U2238_ENCRYPTION;
    switch (aes->keylen)
    {
        case 16:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES128;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES128;
            break;
        case 24:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES192;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES192;
            break;
        case 32:
            ctrla->s.KEYSIZE = CRYPT_AES_U2238_AES256;
            aes->hwDesc.ctrla.s.KEYSIZE = CRYPT_AES_U2238_AES256;
            break;
    }
    CRYPT_AES_u2238LoadKey(aes, (uint32_t*)aes->key);
    ctrla->s.ENABLE = 1;
    CRYPT_AES_u2238LoadIV((uint32_t*)aes->reg);

    uint8_t * outPtr = out;
    const uint8_t * inPtr = in;
    
    uint32_t blocks = sz >> 4;
    for (int x = 0; x < blocks; x++)
    {
        CRYPT_AES_u2238InOutBlock(inPtr, outPtr);
        inPtr+=16;
        outPtr+=16;
    }
    memcpy(aes->reg, out + sz - AES_BLOCK_SIZE, AES_BLOCK_SIZE);
    return 0;
}

// Helper: Format B0 block for CCM
static void ccm_format_b0(uint8_t *b0, uint8_t flags, const uint8_t *nonce, uint32_t nonce_len, uint32_t payload_len, uint8_t q)
{
    b0[0] = flags;
    memcpy(&b0[1], nonce, nonce_len);
    for (int i = 0; i < q; i++) {
        b0[1 + nonce_len + i] = (uint8_t)(payload_len >> (8 * (q - 1 - i)));
    }
}

// Helper: Format Ai block for CTR
static void ccm_format_ai(uint8_t *ai, uint8_t flags, const uint8_t *nonce, uint32_t nonce_len, uint32_t counter, uint8_t q)
{
    ai[0] = flags;
    memcpy(&ai[1], nonce, nonce_len);
    for (int i = 0; i < q; i++) {
        ai[1 + nonce_len + i] = (uint8_t)(counter >> (8 * (q - 1 - i)));
    }
}

// Helper: CBC-MAC calculation for CCM
static void ccm_cbc_mac(Aes *aes, const uint8_t *aad, uint32_t aad_len,
                        const uint8_t *input, uint32_t input_len,
                        const uint8_t *b0, uint8_t *mac)
{
    uint8_t block[AES_BLOCK_SIZE] = {0};
    uint8_t tmp[AES_BLOCK_SIZE] = {0};
    uint32_t i, j, offset = 0;

    // Start with B0
    memcpy(block, b0, AES_BLOCK_SIZE);
    SAL_AesEncrypt(aes, block, tmp);
    memcpy(block, tmp, AES_BLOCK_SIZE);

    // Format and process AAD
    if (aad_len > 0) {
        // Encode AAD length (2 bytes)
        block[0] ^= (aad_len >> 8) & 0xFF;
        block[1] ^= aad_len & 0xFF;
        for (i = 0; i < ((aad_len < (AES_BLOCK_SIZE - 2)) ? aad_len : (AES_BLOCK_SIZE - 2)); i++) {
            block[2 + i] ^= aad[i];
        }
        SAL_AesEncrypt(aes, block, tmp);
        memcpy(block, tmp, AES_BLOCK_SIZE);
        offset = (AES_BLOCK_SIZE - 2);
        for (i = offset; i < aad_len; i += AES_BLOCK_SIZE) {
            memset(tmp, 0, AES_BLOCK_SIZE);
            for (j = 0; j < AES_BLOCK_SIZE && (i + j) < aad_len; j++) {
                tmp[j] = aad[i + j];
            }
            for (j = 0; j < AES_BLOCK_SIZE; j++) {
                block[j] ^= tmp[j];
            }
            SAL_AesEncrypt(aes, block, tmp);
            memcpy(block, tmp, AES_BLOCK_SIZE);
        }
    }

    // Process payload
    for (i = 0; i < input_len; i += AES_BLOCK_SIZE) {
        memset(tmp, 0, AES_BLOCK_SIZE);
        for (j = 0; j < AES_BLOCK_SIZE && (i + j) < input_len; j++) {
            tmp[j] = input[i + j];
        }
        for (j = 0; j < AES_BLOCK_SIZE; j++) {
            block[j] ^= tmp[j];
        }
        SAL_AesEncrypt(aes, block, tmp);
        memcpy(block, tmp, AES_BLOCK_SIZE);
    }
    memcpy(mac, block, AES_BLOCK_SIZE);
}

// Helper: CTR mode for CCM
static void ccm_ctr_crypt(Aes *aes, const uint8_t *nonce, uint32_t nonce_len, uint8_t q,
                          uint8_t *data, uint32_t data_len, uint32_t initial_counter)
{
    uint8_t ai[AES_BLOCK_SIZE] = {0};
    uint8_t stream[AES_BLOCK_SIZE] = {0};
    uint32_t i, j, counter = initial_counter;

    for (i = 0; i < data_len; i += AES_BLOCK_SIZE) {
        ccm_format_ai(ai, q - 1, nonce, nonce_len, counter, q);
        SAL_AesEncrypt(aes, ai, stream);
        for (j = 0; j < AES_BLOCK_SIZE && (i + j) < data_len; j++) {
            data[i + j] ^= stream[j];
        }
        counter++;
    }
}

/**
 * AES-CCM Authenticated Encryption
 * @param aes         Initialized AES context (key set)
 * @param nonce       Nonce (7-13 bytes)
 * @param nonce_len   Length of nonce
 * @param aad         Additional Authenticated Data
 * @param aad_len     Length of AAD
 * @param input       Plaintext input buffer
 * @param input_len   Length of input
 * @param output      Output buffer for ciphertext (same length as input)
 * @param tag         Output buffer for authentication tag
 * @param tag_len     Length of tag (4, 6, 8, 10, 12, 14, or 16)
 * @return 0 on success, -1 on error
 */
int SAL_AesCcmEncrypt(Aes *aes, const uint8_t *nonce, uint32_t nonce_len,
                     const uint8_t *aad, uint32_t aad_len,
                     const uint8_t *input, uint32_t input_len,
                     uint8_t *output, uint8_t *tag, uint32_t tag_len)
{
    if (nonce_len < 7 || nonce_len > 13 || tag_len < 4 || tag_len > 16 || (tag_len & 1))
        return -1;

    uint8_t b0[AES_BLOCK_SIZE] = {0};
    uint8_t mac[AES_BLOCK_SIZE] = {0};
    uint8_t ctr0[AES_BLOCK_SIZE] = {0};
    uint8_t q = 15 - nonce_len;
    uint8_t flags = 0;

    // Flags for B0: [Reserved(3), Adata(1), M'(3), L'(3)]
    flags |= ((aad_len > 0) ? 0x40 : 0x00); // Adata
    flags |= (((tag_len - 2) / 2) << 3);    // M'
    flags |= (q - 1);                       // L'

    // Format B0
    ccm_format_b0(b0, flags, nonce, nonce_len, input_len, q);

    // CBC-MAC
    ccm_cbc_mac(aes, aad, aad_len, input, input_len, b0, mac);

    // Format initial counter block (CTR0)
    ccm_format_ai(ctr0, q - 1, nonce, nonce_len, 0, q);

    // Encrypt input using CTR mode
    memcpy(output, input, input_len);
    ccm_ctr_crypt(aes, nonce, nonce_len, q, output, input_len, 1);

    // Encrypt MAC to get tag
    uint8_t s0[AES_BLOCK_SIZE] = {0};
    SAL_AesEncrypt(aes, ctr0, s0);
    for (uint32_t i = 0; i < tag_len; i++) {
        tag[i] = mac[i] ^ s0[i];
    }
    return 0;
}

/**
 * AES-CCM Authenticated Decryption
 * @param aes         Initialized AES context (key set)
 * @param nonce       Nonce (7-13 bytes)
 * @param nonce_len   Length of nonce
 * @param aad         Additional Authenticated Data
 * @param aad_len     Length of AAD
 * @param input       Ciphertext input buffer
 * @param input_len   Length of input
 * @param tag         Authentication tag to verify
 * @param tag_len     Length of tag
 * @param output      Output buffer for plaintext (same length as input)
 * @return 0 on success, -1 on authentication failure
 */
int SAL_AesCcmDecrypt(Aes *aes, const uint8_t *nonce, uint32_t nonce_len,
                     const uint8_t *aad, uint32_t aad_len,
                     const uint8_t *input, uint32_t input_len,
                     const uint8_t *tag, uint32_t tag_len,
                     uint8_t *output)
{
    if (nonce_len < 7 || nonce_len > 13 || tag_len < 4 || tag_len > 16 || (tag_len & 1))
        return -1;

    uint8_t b0[AES_BLOCK_SIZE] = {0};
    uint8_t mac[AES_BLOCK_SIZE] = {0};
    uint8_t ctr0[AES_BLOCK_SIZE] = {0};
    uint8_t q = 15 - nonce_len;
    uint8_t flags = 0;

    // Flags for B0: [Reserved(3), Adata(1), M'(3), L'(3)]
    flags |= ((aad_len > 0) ? 0x40 : 0x00); // Adata
    flags |= (((tag_len - 2) / 2) << 3);    // M'
    flags |= (q - 1);                       // L'

    // Format B0
    ccm_format_b0(b0, flags, nonce, nonce_len, input_len, q);

    // Format initial counter block (CTR0)
    ccm_format_ai(ctr0, q - 1, nonce, nonce_len, 0, q);

    // Decrypt input using CTR mode
    memcpy(output, input, input_len);
    ccm_ctr_crypt(aes, nonce, nonce_len, q, output, input_len, 1);

    // CBC-MAC on decrypted plaintext
    ccm_cbc_mac(aes, aad, aad_len, output, input_len, b0, mac);

    // Encrypt MAC to get tag
    uint8_t s0[AES_BLOCK_SIZE] = {0};
    SAL_AesEncrypt(aes, ctr0, s0);

    // Compare tag
    for (uint32_t i = 0; i < tag_len; i++) {
        if ((mac[i] ^ s0[i]) != tag[i])
            return -1;
    }
    return 0;
}


//#endif

// #endif /* NO_AES */

// #endif
