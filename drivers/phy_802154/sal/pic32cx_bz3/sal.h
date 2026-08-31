/**************************************************************************
  Security Abstraction Layer (SAL)

  Company:
    Microchip Technology Inc.

  File Name:
    sal.h

  Summary:
    SAL interface for PIC32CX-BZ6 devices.

  Description:
    This header defines the Security Abstraction Layer (SAL) API for
    PIC32CX-BZ6 devices. The implementation calls the hardware cryptolib
    (cam_aes.h / libcam05354-pic32wm.a) directly, bypassing the Zephyr
    crypto subsystem driver layer.

    The public API (SAL_Aes* function signatures and the Aes context struct)
    is kept identical to the BZ2 variant so that upper-layer consumers
    (ieee802154_mchp_pic32cx_bz.c, phy_ztest) can be compiled unchanged
    against either device family.
**************************************************************************/

/*
 * Copyright (C) 2026 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _SAL_H_
#define _SAL_H_

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------------------------------------------------------------------
 * AES block size constant (matches cam_aes.h AES_BLOCK_SIZE)
 * ---------------------------------------------------------------------------
 */
#define SAL_AES_BLOCK_SIZE  16U


/* ---------------------------------------------------------------------------
 * Aes context
 *
 * Kept layout-compatible with the BZ2 Aes struct so that code calling
 * SAL_AesSetKey / SAL_AesSetIV with a stack-allocated Aes works unchanged.
 *
 * Fields used by the BZ6 implementation:
 *   key[]   – raw key bytes (up to 32 bytes / AES-256)
 *   keylen  – key length in bytes (16, 24 or 32)
 *   reg[]   – IV / CBC chaining vector (16 bytes)
 *
 * Fields retained for binary layout compatibility with BZ2:
 *   rounds, tmp[], invokeCtr[], nonceSz, heap
 * ---------------------------------------------------------------------------
 */
struct Aes {
    uint32_t key[60];                          /**< AES key storage          */
    uint32_t rounds;                           /**< (unused on BZ6)          */
    int      keylen;                           /**< Key length in bytes      */

    uint32_t reg[SAL_AES_BLOCK_SIZE / sizeof(uint32_t)]; /**< IV / CBC vector   */
    uint32_t tmp[SAL_AES_BLOCK_SIZE / sizeof(uint32_t)]; /**< (unused on BZ6)   */

    void    *heap;                             /**< (unused on BZ6)          */
};

#ifndef SAL_AES_TYPE_DEFINED
    typedef struct Aes Aes;
    #define SAL_AES_TYPE_DEFINED
#endif

/* ---------------------------------------------------------------------------
 * Initialisation
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Initialise the SAL AES engine.
 *
 * On BZ6 this resolves the Zephyr crypto device node so that subsequent
 * SAL_Aes* calls can reach the CAM hardware driver. Must be called once
 * before any other SAL function.
 *
 * @param aes  Pointer to caller-allocated Aes context (zeroed by this call).
 * @return     0 on success, -1 if the crypto device is not ready.
 */
int SAL_AesInit(Aes *aes);

/* ---------------------------------------------------------------------------
 * Key and IV management
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Store an AES key in the context.
 *
 * @param aes     Pointer to the Aes context.
 * @param key     Key data as an array of 32-bit words.
 * @param keyLen  Key length in bytes (must be 16, 24 or 32).
 * @return        0 on success, -1 on invalid argument.
 */
int SAL_AesSetKey(Aes *aes, uint32_t *key, uint8_t keyLen);

/**
 * @brief Store an Initialisation Vector in the context.
 *
 * Used by CBC, CTR and CCM helpers that read aes->reg as the IV.
 * Passing NULL sets the IV to all-zeros.
 *
 * @param aes  Pointer to the Aes context.
 * @param iv   IV data as an array of 32-bit words (16 bytes), or NULL.
 * @return     0 on success, -1 on invalid argument.
 */
int SAL_AesSetIV(Aes *aes, uint32_t *iv);

/* ---------------------------------------------------------------------------
 * ECB single-block operations
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Encrypt a single 16-byte AES block (ECB).
 *
 * @param aes       Pointer to the Aes context (key must be set).
 * @param inBlock   Input plaintext block (16 bytes).
 * @param outBlock  Output ciphertext block (16 bytes).
 * @return          0 on success, negative errno on error.
 */
int SAL_AesEncrypt(Aes *aes, const uint8_t *inBlock, uint8_t *outBlock);

/**
 * @brief Decrypt a single 16-byte AES block (ECB).
 *
 * @param aes       Pointer to the Aes context (key must be set).
 * @param inBlock   Input ciphertext block (16 bytes).
 * @param outBlock  Output plaintext block (16 bytes).
 * @return          0 on success, negative errno on error.
 */
int SAL_AesDecrypt(Aes *aes, const uint8_t *inBlock, uint8_t *outBlock);

/* ---------------------------------------------------------------------------
 * ECB multi-block operations
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Encrypt a buffer in AES-ECB mode.
 *
 * @param aes  Pointer to the Aes context.
 * @param out  Output ciphertext buffer.
 * @param in   Input plaintext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesEcbEncrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz);

/**
 * @brief Decrypt a buffer in AES-ECB mode.
 *
 * @param aes  Pointer to the Aes context.
 * @param out  Output plaintext buffer.
 * @param in   Input ciphertext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesEcbDecrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz);

/* ---------------------------------------------------------------------------
 * CBC multi-block operations
 *
 * The IV is taken from aes->reg (set by SAL_AesSetIV).
 * After each call aes->reg is updated to the last ciphertext block so
 * that the context can be reused for chained operations.
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Encrypt a buffer in AES-CBC mode.
 *
 * @param aes  Pointer to the Aes context (key and IV must be set).
 * @param out  Output ciphertext buffer.
 * @param in   Input plaintext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesCbcEncrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz);

/**
 * @brief Decrypt a buffer in AES-CBC mode.
 *
 * @param aes  Pointer to the Aes context (key and IV must be set).
 * @param out  Output plaintext buffer.
 * @param in   Input ciphertext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesCbcDecrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz);

/* ---------------------------------------------------------------------------
 * CCM authenticated encryption / decryption
 *
 * Nonce length must be 7–13 bytes; tag length must be an even value
 * in the range 4–16.
 * ---------------------------------------------------------------------------
 */

/**
 * @brief AES-CCM authenticated encryption.
 *
 * Encrypts @p input and generates an authentication tag. The ciphertext
 * is written to @p output (same length as @p input). The tag is written
 * to @p tag.
 *
 * @param aes        Aes context with key set.
 * @param nonce      Nonce buffer (7–13 bytes).
 * @param nonce_len  Length of @p nonce in bytes.
 * @param aad        Additional Authenticated Data buffer (may be NULL).
 * @param aad_len    Length of @p aad in bytes.
 * @param input      Plaintext input buffer.
 * @param input_len  Length of @p input in bytes.
 * @param output     Output buffer for ciphertext (at least @p input_len bytes).
 * @param tag        Output buffer for authentication tag.
 * @param tag_len    Desired tag length in bytes (even, 4–16).
 * @return           0 on success, -1 on invalid parameter.
 */
int SAL_AesCcmEncrypt(Aes *aes,
                      const uint8_t *nonce,  uint32_t nonce_len,
                      const uint8_t *aad,    uint32_t aad_len,
                      const uint8_t *input,  uint32_t input_len,
                      uint8_t *output,
                      uint8_t *tag,          uint32_t tag_len);

/**
 * @brief AES-CCM authenticated decryption.
 *
 * Decrypts @p input and verifies the authentication tag. Plaintext is
 * written to @p output only if authentication succeeds.
 *
 * @param aes        Aes context with key set.
 * @param nonce      Nonce buffer (7–13 bytes).
 * @param nonce_len  Length of @p nonce in bytes.
 * @param aad        Additional Authenticated Data buffer (may be NULL).
 * @param aad_len    Length of @p aad in bytes.
 * @param input      Ciphertext input buffer (does NOT include the tag).
 * @param input_len  Length of @p input in bytes.
 * @param tag        Authentication tag to verify.
 * @param tag_len    Length of @p tag in bytes (even, 4–16).
 * @param output     Output buffer for plaintext (at least @p input_len bytes).
 * @return           0 on success, -1 on authentication failure or invalid parameter.
 */
int SAL_AesCcmDecrypt(Aes *aes,
                      const uint8_t *nonce,  uint32_t nonce_len,
                      const uint8_t *aad,    uint32_t aad_len,
                      const uint8_t *input,  uint32_t input_len,
                      const uint8_t *tag,    uint32_t tag_len,
                      uint8_t *output);

#ifdef __cplusplus
}
#endif

#endif /* _SAL_H_ */
