/**************************************************************************
  Security Abstraction Layer (SAL)

  Company:
    Microchip Technology Inc.

  File Name:
    sal.c

  Summary:
    SAL implementation for PIC32CX-BZ3 devices.

  Description:
    This file implements the Security Abstraction Layer (SAL) AES API for
    PIC32CX-BZ3 devices. All cryptographic operations are performed directly
    by the on-chip Crypto Accelerator Module (CAM) via the hardware cryptolib
    (cam_aes.h / libcam05354-pic32wm.a).

    CAM call sequence used for each SAL operation:

        DRV_CRYPTO_AES_Initialize()    – mode, direction, key, IV/nonce
        sal_ctx_wait_active()          – poll until context is active/ready
        DRV_CRYPTO_AES_AddHeader()     – CCM only: Additional Auth Data (AAD)
        DRV_CRYPTO_AES_AddInputData()  – plaintext or ciphertext
        DRV_CRYPTO_AES_AddOutputData() – output buffer
        DRV_CRYPTO_AES_Execute()       – start the hardware

    The CCM B0 header block is built per RFC 3610 section 2.2, matching the
    layout required by the CAM hardware.

    The CAM ISR (DRV_CRYPTO_AES_IsrHelper) must be registered and enabled
    before any SAL function is called. This is handled by the Zephyr
    crypto driver (crypto_mchp_g2.c) during POST_KERNEL initialisation.
    If the Zephyr driver is not present in the build, the caller must wire
    the ISR manually.
**************************************************************************/

/*
 * Copyright (C) 2026 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#define LOG_SAL_MODULE_NAME sal_bz3
#define LOG_LEVEL CONFIG_IEEE802154_DRIVER_LOG_LEVEL
#include "sal.h"

#include <string.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <cam_aes.h>

LOG_MODULE_REGISTER(LOG_SAL_MODULE_NAME);

/* ---------------------------------------------------------------------------
 * SAL context buffer.
 *
 * Size matches MCHP_G2_CTX_BUF_SIZE in crypto_mchp_g2.c (512 bytes),
 * which is over-provisioned to cover all ECB/CBC/CCM context sizes for the
 * Must be word-aligned.
 * ---------------------------------------------------------------------------
 */
#define SAL_CRYPTO_CTX_SIZE  512U

static uint32_t sal_crypto_ctx[SAL_CRYPTO_CTX_SIZE / sizeof(uint32_t)];

/* ---------------------------------------------------------------------------
 * CCM helpers – reproduced from crypto_mchp_g2.c
 * ---------------------------------------------------------------------------
 */

/** @brief Flag bit indicating that AAD is present in the CCM data set. */
#define SAL_CCM_AAD_PRESENT_FLAG  (1U << 6)

#define SAL_CCM_MAX_PAYLOAD 127U
#define SAL_CCM_MAX_TAG      16U

/**
 * @brief Calculate the number of padding bytes needed to reach the next
 *        AES block boundary.
 */
static uint32_t sal_aes_pad_bytes(uint32_t len)
{
    uint32_t mask = (SAL_AES_BLOCK_SIZE - 1UL);

    return ((len + mask) & ~mask) - len;
}

/**
 * @brief Build the CCM B0 header block as defined by RFC 3610 section 2.2.
 *
 * @param[out] header     Destination buffer (must be at least 22 bytes).
 * @param[out] header_len Set to the number of bytes written.
 * @param[in]  nonce      Nonce value.
 * @param[in]  nonce_len  Nonce length in bytes (7–13).
 * @param[in]  aad_len    Additional authentication data length in bytes.
 * @param[in]  data_len   Plaintext payload length in bytes.
 * @param[in]  tag_len    Authentication tag length in bytes.
 */
static void sal_ccm_build_header(uint8_t *header, uint32_t *header_len,
                                 const uint8_t *nonce, uint32_t nonce_len,
                                 uint32_t aad_len, uint32_t data_len,
                                 uint32_t tag_len)
{
    uint8_t *p = header;
    uint8_t tag_size   = ((uint8_t)tag_len - 2U) / 2U;
    uint8_t length_sz  = (uint8_t)(0x0FU - (uint8_t)nonce_len);
    uint8_t flags      = 0U;

    flags |= (tag_size & 0x07U) << 3U;
    flags |= (length_sz - 1U) & 0x07U;
    if (aad_len > 0U) {
        flags |= SAL_CCM_AAD_PRESENT_FLAG;
    }

    /* Byte 0: flags */
    *p++ = flags;

    /* Bytes 1..nonce_len: nonce */
    for (uint32_t i = 0U; i < nonce_len; i++) {
        *p++ = nonce[i];
    }

    /* Bytes nonce_len+1..15: big-endian payload length field */
    for (int8_t i = (int8_t)((length_sz - 1U) * 8U); i >= 0; i -= 8) {
        *p++ = (uint8_t)((data_len >> (uint32_t)(unsigned int)i) & 0xFFU);
    }

    /* Bytes 16+: AAD length encoding (2 bytes for aad_len < 0xFF00) */
    p = &header[16];
    if (aad_len > 0U) {
        if (aad_len < 0xFF00UL) {
            *p++ = (uint8_t)((aad_len >> 8U) & 0xFFU);
            *p++ = (uint8_t)(aad_len & 0xFFU);
        } else {
            *p++ = 0xFFU;
            *p++ = 0xFEU;
            *p++ = (uint8_t)((aad_len >> 24U) & 0xFFU);
            *p++ = (uint8_t)((aad_len >> 16U) & 0xFFU);
            *p++ = (uint8_t)((aad_len >>  8U) & 0xFFU);
            *p++ = (uint8_t)(aad_len & 0xFFU);
        }
    }

    *header_len = (uint32_t)(p - header);
}

/* ---------------------------------------------------------------------------
 * sal_ctx_wait_active
 *
 * Poll DRV_CRYPTO_AES_IsActive() until the CAM context becomes ready after
 * DRV_CRYPTO_AES_Initialize(). 
 * ---------------------------------------------------------------------------
 */
#define SAL_CTX_WAIT_TIMEOUT_US  1000U

static int sal_ctx_wait_active(void *crypto_ctx)
{
    AES_ERROR active;
    AES_ERROR err;
    int64_t deadline = k_uptime_ticks() +
                       k_us_to_ticks_ceil64(SAL_CTX_WAIT_TIMEOUT_US);

    do {
        err = DRV_CRYPTO_AES_IsActive(crypto_ctx, &active);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL: CAM IsActive error %d", (int)err);
            return -EIO;
        }
        if (k_uptime_ticks() > deadline) {
            LOG_ERR("SAL: CAM context not active after %u us",
                    SAL_CTX_WAIT_TIMEOUT_US);
            return -ETIMEDOUT;
        }
    } while (active != AES_OPERATION_IS_ACTIVE);

    return 0;
}


/**
 * @brief Initialise the SAL AES engine.
 *
 * On BZ3 this resolves the Zephyr crypto device node so that subsequent
 * SAL_Aes* calls can reach the CAM hardware driver. Must be called once
 * before any other SAL function.
 *
 * @param aes  Pointer to caller-allocated Aes context (zeroed by this call).
 * @return     0 on success, -1 if the crypto device is not ready.
 */
int SAL_AesInit(Aes *aes)
{
    if (aes == NULL) {
        return -1;
    }

    memset(aes, 0, sizeof(*aes));

    /*
     * Zero the shared CAM context so it is in a known state before the
     * first DRV_CRYPTO_AES_Initialize() call.
     */
    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    return 0;
}

/**
 * @brief Store an AES key in the context.
 *
 * @param aes     Pointer to the Aes context.
 * @param key     Key data as an array of 32-bit words.
 * @param keyLen  Key length in bytes (must be 16, 24 or 32).
 * @return        0 on success, -1 on invalid argument.
 */
int SAL_AesSetKey(Aes *aes, uint32_t *key, uint8_t keyLen)
{
    if (aes == NULL || key == NULL) {
        return -1;
    }

    if (keyLen != 16U && keyLen != 24U && keyLen != 32U) {
        LOG_ERR("SAL: invalid key length %u", keyLen);
        return -1;
    }

    aes->keylen = (int)keyLen;
    memcpy((uint8_t *)aes->key, key, keyLen);
    return 0;
}

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
int SAL_AesSetIV(Aes *aes, uint32_t *iv)
{
    if (aes == NULL) {
        return -1;
    }

    if (iv != NULL) {
        memcpy((uint8_t *)aes->reg, iv, SAL_AES_BLOCK_SIZE);
    } else {
        memset((uint8_t *)aes->reg, 0, SAL_AES_BLOCK_SIZE);
    }

    return 0;
}

/* ---------------------------------------------------------------------------
 * Helper: run an ECB encrypt or decrypt on one or more blocks.
 *
 * Used by SAL_AesEncrypt, SAL_AesDecrypt, SAL_AesEcbEncrypt,
 * SAL_AesEcbDecrypt.
 * ---------------------------------------------------------------------------
 */
static int sal_ecb_op(Aes *aes,
                      const uint8_t *in, uint8_t *out, uint32_t sz,
                      AESCON_OPERATION op)
{
    AES_ERROR err;

    /*
     * Round up to the nearest AES block boundary as required by the hardware.
     */
    uint32_t pad        = sal_aes_pad_bytes(sz);
    uint32_t full_len   = sz + pad;

    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    err = DRV_CRYPTO_AES_Initialize(sal_crypto_ctx,
                                    MODE_ECB, op,
                                    (void *)aes->key, (uint32_t)aes->keylen,
                                    NULL, 0U);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL ECB: Initialize failed (%d)", (int)err);
        return -EIO;
    }

    if (sal_ctx_wait_active(sal_crypto_ctx) != 0) {
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx, (void *)in, full_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL ECB: AddInputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, out, full_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL ECB: AddOutputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_Execute(sal_crypto_ctx);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL ECB: Execute failed (%d)", (int)err);
        return -EIO;
    }

    return 0;
}

/**
 * @brief Encrypt a single 16-byte AES block (ECB).
 *
 * @param aes       Pointer to the Aes context (key must be set).
 * @param inBlock   Input plaintext block (16 bytes).
 * @param outBlock  Output ciphertext block (16 bytes).
 * @return          0 on success, negative errno on error.
 */
int SAL_AesEncrypt(Aes *aes, const uint8_t *inBlock, uint8_t *outBlock)
{
    if (aes == NULL || inBlock == NULL || outBlock == NULL) {
        return -1;
    }

    return sal_ecb_op(aes, inBlock, outBlock, SAL_AES_BLOCK_SIZE, OP_ENCRYPT);
}

/**
 * @brief Decrypt a single 16-byte AES block (ECB).
 *
 * @param aes       Pointer to the Aes context (key must be set).
 * @param inBlock   Input ciphertext block (16 bytes).
 * @param outBlock  Output plaintext block (16 bytes).
 * @return          0 on success, negative errno on error.
 */
int SAL_AesDecrypt(Aes *aes, const uint8_t *inBlock, uint8_t *outBlock)
{
    if (aes == NULL || inBlock == NULL || outBlock == NULL) {
        return -1;
    }

    return sal_ecb_op(aes, inBlock, outBlock, SAL_AES_BLOCK_SIZE, OP_DECRYPT);
}

/**
 * @brief Encrypt a buffer in AES-ECB mode.
 *
 * @param aes  Pointer to the Aes context.
 * @param out  Output ciphertext buffer.
 * @param in   Input plaintext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesEcbEncrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz)
{
    if (aes == NULL || out == NULL || in == NULL) {
        return -1;
    }

    if (sz == 0U || (sz % SAL_AES_BLOCK_SIZE) != 0U) {
        LOG_ERR("SAL ECB enc: size %u not a non-zero multiple of %u",
                sz, SAL_AES_BLOCK_SIZE);
        return -1;
    }

    return sal_ecb_op(aes, in, out, sz, OP_ENCRYPT);
}

/**
 * @brief Decrypt a buffer in AES-ECB mode.
 *
 * @param aes  Pointer to the Aes context.
 * @param out  Output plaintext buffer.
 * @param in   Input ciphertext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesEcbDecrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz)
{
    if (aes == NULL || out == NULL || in == NULL) {
        return -1;
    }

    if (sz == 0U || (sz % SAL_AES_BLOCK_SIZE) != 0U) {
        LOG_ERR("SAL ECB dec: size %u not a non-zero multiple of %u",
                sz, SAL_AES_BLOCK_SIZE);
        return -1;
    }

    return sal_ecb_op(aes, in, out, sz, OP_DECRYPT);
}

/**
 * @brief Encrypt a buffer in AES-CBC mode.
 *
 * @param aes  Pointer to the Aes context (key and IV must be set).
 * @param out  Output ciphertext buffer.
 * @param in   Input plaintext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesCbcEncrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz)
{
    if (aes == NULL || out == NULL || in == NULL) {
        return -1;
    }

    if (sz == 0U || (sz % SAL_AES_BLOCK_SIZE) != 0U) {
        LOG_ERR("SAL CBC enc: size %u not a non-zero multiple of %u",
                sz, SAL_AES_BLOCK_SIZE);
        return -1;
    }

    AES_ERROR err;

    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    err = DRV_CRYPTO_AES_Initialize(sal_crypto_ctx,
                                    MODE_CBC, OP_ENCRYPT,
                                    (void *)aes->key, (uint32_t)aes->keylen,
                                    (const void *)aes->reg, SAL_AES_BLOCK_SIZE);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC enc: Initialize failed (%d)", (int)err);
        return -EIO;
    }

    if (sal_ctx_wait_active(sal_crypto_ctx) != 0) {
        return -EIO;
    }

    /*
     * Round up to the nearest AES block boundary.
     */
    uint32_t pad      = sal_aes_pad_bytes(sz);
    uint32_t full_len = sz + pad;

    err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx, (void *)in, full_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC enc: AddInputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, out, full_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC enc: AddOutputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_Execute(sal_crypto_ctx);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC enc: Execute failed (%d)", (int)err);
        return -EIO;
    }

    /* Update chaining vector to last ciphertext block */
    memcpy(aes->reg, out + sz - SAL_AES_BLOCK_SIZE, SAL_AES_BLOCK_SIZE);
    return 0;
}

/**
 * @brief Decrypt a buffer in AES-CBC mode.
 *
 * @param aes  Pointer to the Aes context (key and IV must be set).
 * @param out  Output plaintext buffer.
 * @param in   Input ciphertext buffer.
 * @param sz   Data length in bytes (must be a non-zero multiple of 16).
 * @return     0 on success, negative errno on error.
 */
int SAL_AesCbcDecrypt(Aes *aes, uint8_t *out, const uint8_t *in, uint32_t sz)
{
    if (aes == NULL || out == NULL || in == NULL) {
        return -1;
    }

    if (sz == 0U || (sz % SAL_AES_BLOCK_SIZE) != 0U) {
        LOG_ERR("SAL CBC dec: size %u not a non-zero multiple of %u",
                sz, SAL_AES_BLOCK_SIZE);
        return -1;
    }

    /*
     * Capture the last ciphertext block before decryption so that aes->reg
     * can be updated even when in == out (in-place operation).
     */
    uint8_t next_iv[SAL_AES_BLOCK_SIZE];
    memcpy(next_iv, in + sz - SAL_AES_BLOCK_SIZE, SAL_AES_BLOCK_SIZE);

    AES_ERROR err;

    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    err = DRV_CRYPTO_AES_Initialize(sal_crypto_ctx,
                                    MODE_CBC, OP_DECRYPT,
                                    (void *)aes->key, (uint32_t)aes->keylen,
                                    (const void *)aes->reg, SAL_AES_BLOCK_SIZE);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC dec: Initialize failed (%d)", (int)err);
        return -EIO;
    }

    if (sal_ctx_wait_active(sal_crypto_ctx) != 0) {
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx, (void *)in, sz);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC dec: AddInputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, out, sz);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC dec: AddOutputData failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_Execute(sal_crypto_ctx);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CBC dec: Execute failed (%d)", (int)err);
        return -EIO;
    }

    /* Update chaining vector to last ciphertext block */
    memcpy(aes->reg, next_iv, SAL_AES_BLOCK_SIZE);
    return 0;
}

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
                      uint8_t *tag,          uint32_t tag_len)
{
    if (aes == NULL || nonce == NULL || output == NULL || tag == NULL) {
        return -1;
    }

    if (nonce_len < 7U || nonce_len > 13U) {
        LOG_ERR("SAL CCM enc: invalid nonce_len %u (must be 7-13)", nonce_len);
        return -1;
    }

    if (tag_len < 4U || tag_len > 16U || (tag_len & 1U) != 0U) {
        LOG_ERR("SAL CCM enc: invalid tag_len %u (must be even, 4-16)", tag_len);
        return -1;
    }


    if (input_len > SAL_CCM_MAX_PAYLOAD) {
        LOG_ERR("SAL CCM enc: input_len %u exceeds max %u",
                input_len, SAL_CCM_MAX_PAYLOAD);
        return -1;
    }

    AES_ERROR err;

    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    err = DRV_CRYPTO_AES_Initialize(sal_crypto_ctx,
                                    MODE_CCM, OP_ENCRYPT,
                                    (void *)aes->key, (uint32_t)aes->keylen,
                                    NULL, 0U);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM enc: Initialize failed (%d)", (int)err);
        return -EIO;
    }

    if (sal_ctx_wait_active(sal_crypto_ctx) != 0) {
        return -EIO;
    }

    /* Build and submit the CCM B0 header block (RFC 3610 section 2.2). */
    uint8_t  header_buf[22];
    uint32_t header_len;

    sal_ccm_build_header(header_buf, &header_len,
                         nonce, nonce_len,
                         aad_len, input_len, tag_len);

    err = DRV_CRYPTO_AES_AddRawHeader(sal_crypto_ctx, header_buf,
                                      header_len, AES_HEADER_DO_NOT_ALIGN);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM enc: AddRawHeader (B0) failed (%d)", (int)err);
        return -EIO;
    }

    if (aad_len > 0U) {
        err = DRV_CRYPTO_AES_AddRawHeader(sal_crypto_ctx, aad,
                                          aad_len, AES_HEADER_ALIGN);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: AddRawHeader (AAD) failed (%d)", (int)err);
            return -EIO;
        }
    }

    /*
     * Mark trailing pad bytes of the header + AAD region as 'ignore'
     * so the hardware skips them in the MAC computation.
     */
    {
        uint32_t pad = sal_aes_pad_bytes(header_len + aad_len);

        err = DRV_CRYPTO_AES_IgnoreData(sal_crypto_ctx, pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: IgnoreData (header pad) failed (%d)", (int)err);
            return -EIO;
        }

        /*
         * The hardware also emits the header + AAD region as output.
         * Discard it so only ciphertext follows in the output stream.
         */
        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx,
                                         header_len + aad_len + pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: DiscardData (header+AAD) failed (%d)", (int)err);
            return -EIO;
        }
    }

    if (input_len > 0U) {
        err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx,
                                          (void *)input, input_len);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: AddInputData failed (%d)", (int)err);
            return -EIO;
        }

        /* Register the ciphertext output buffer. */
        err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, output, input_len);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: AddOutputData (ciphertext) failed (%d)", (int)err);
            return -EIO;
        }

        /*
         * Discard hardware-appended padding to round ciphertext to
         * a full AES block.
         */
        uint32_t cipher_pad = sal_aes_pad_bytes(input_len);

        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx, cipher_pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: DiscardData (ciphertext pad) failed (%d)", (int)err);
            return -EIO;
        }
    }

    /* Register the authentication tag output buffer. */
    err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, tag, tag_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM enc: AddOutputData (tag) failed (%d)", (int)err);
        return -EIO;
    }

    /*
     * Discard any output padding appended after the tag to complete
     * the final AES block.
     */
    {
        uint32_t tag_pad = sal_aes_pad_bytes(tag_len);

        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx, tag_pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM enc: DiscardData (tag pad) failed (%d)", (int)err);
            return -EIO;
        }
    }

    err = DRV_CRYPTO_AES_Execute(sal_crypto_ctx);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM enc: Execute failed (%d)", (int)err);
        return -EIO;
    }

    return 0;
}

/* ---------------------------------------------------------------------------
 * SAL_AesCcmDecrypt
 *
 * Decrypts the ciphertext and verifies the authentication tag using the
 * CAM hardware in CCM mode.
 * A successful authentication yields
 * all-zeros in the generated tag buffer, which is verified by
 * sal_ccm_tag_ok() after Execute() completes.
 *
 * Returns -1 if authentication fails.
 * ---------------------------------------------------------------------------
 */

/**
 * @brief Check that all bytes of a tag verification buffer are zero.
 *
 * @param buf  Tag verification buffer.
 * @param len  Number of bytes to check.
 * @return true if all bytes are zero (authentication passed).
 */
static bool sal_ccm_tag_ok(const uint8_t *buf, uint32_t len)
{
    for (uint32_t i = 0U; i < len; i++) {
        if (buf[i] != 0U) {
            return false;
        }
    }
    return true;
}

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
                      uint8_t *output)
{
    if (aes == NULL || nonce == NULL || input == NULL ||
        tag == NULL || output == NULL) {
        return -1;
    }

    if (nonce_len < 7U || nonce_len > 13U) {
        LOG_ERR("SAL CCM dec: invalid nonce_len %u (must be 7-13)", nonce_len);
        return -1;
    }

    if (tag_len < 4U || tag_len > 16U || (tag_len & 1U) != 0U) {
        LOG_ERR("SAL CCM dec: invalid tag_len %u (must be even, 4-16)", tag_len);
        return -1;
    }

    if (input_len > SAL_CCM_MAX_PAYLOAD) {
        LOG_ERR("SAL CCM dec: input_len %u exceeds max %u",
                input_len, SAL_CCM_MAX_PAYLOAD);
        return -1;
    }

    /*
     * Buffer to receive the hardware XOR output (computed_tag XOR received_tag).
     * Initialized to zero: a successful authentication leaves all bytes as zero.
     */
    uint8_t gen_tag[SAL_CCM_MAX_TAG] = {0};

    AES_ERROR err;

    memset(sal_crypto_ctx, 0, sizeof(sal_crypto_ctx));

    /*
     * For CCM decrypt the CAM requires OP_ENCRYPT at Initialize time, then
     * a SetOperation(OP_DECRYPT) call — matching the crypto_mchp_g2.c pattern.
     */
    err = DRV_CRYPTO_AES_Initialize(sal_crypto_ctx,
                                    MODE_CCM, OP_ENCRYPT,
                                    (void *)aes->key, (uint32_t)aes->keylen,
                                    NULL, 0U);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: Initialize failed (%d)", (int)err);
        return -EIO;
    }

    if (sal_ctx_wait_active(sal_crypto_ctx) != 0) {
        return -EIO;
    }

    err = DRV_CRYPTO_AES_SetOperation(sal_crypto_ctx, OP_DECRYPT);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: SetOperation failed (%d)", (int)err);
        return -EIO;
    }

    /* Build and submit the CCM B0 header block (RFC 3610 section 2.2). */
    uint8_t  header_buf[22];
    uint32_t header_len;

    sal_ccm_build_header(header_buf, &header_len,
                         nonce, nonce_len,
                         aad_len, input_len, tag_len);

    err = DRV_CRYPTO_AES_AddRawHeader(sal_crypto_ctx, header_buf,
                                      header_len, AES_HEADER_DO_NOT_ALIGN);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: AddRawHeader (B0) failed (%d)", (int)err);
        return -EIO;
    }

    if (aad_len > 0U) {
        err = DRV_CRYPTO_AES_AddRawHeader(sal_crypto_ctx, aad,
                                          aad_len, AES_HEADER_ALIGN);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: AddRawHeader (AAD) failed (%d)", (int)err);
            return -EIO;
        }
    }

    /*
     * Mark trailing pad bytes of the header + AAD region as 'ignore'.
     */
    {
        uint32_t pad = sal_aes_pad_bytes(header_len + aad_len);

        err = DRV_CRYPTO_AES_IgnoreData(sal_crypto_ctx, pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: IgnoreData (header pad) failed (%d)", (int)err);
            return -EIO;
        }

        /*
         * Discard the header + AAD output region from the output stream.
         */
        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx,
                                         header_len + aad_len + pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: DiscardData (header+AAD) failed (%d)", (int)err);
            return -EIO;
        }
    }

    if (input_len > 0U) {
        err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx,
                                          (void *)input, input_len);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: AddInputData failed (%d)", (int)err);
            return -EIO;
        }

        /* Register the plaintext output buffer. */
        err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, output, input_len);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: AddOutputData (plaintext) failed (%d)", (int)err);
            return -EIO;
        }

        /*
         * Discard output padding bytes appended by the hardware to round
         * the plaintext up to a full AES block.
         */
        uint32_t plain_pad = sal_aes_pad_bytes(input_len);

        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx, plain_pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: DiscardData (plaintext pad) failed (%d)", (int)err);
            return -EIO;
        }
    }

    /*
     * Supply the caller-provided tag as input; the hardware XORs it with the
     * computed tag and writes the result to gen_tag.
     */
    err = DRV_CRYPTO_AES_AddInputData(sal_crypto_ctx, (void *)tag, tag_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: AddInputData (tag) failed (%d)", (int)err);
        return -EIO;
    }

    err = DRV_CRYPTO_AES_AddOutputData(sal_crypto_ctx, gen_tag, tag_len);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: AddOutputData (tag verify) failed (%d)", (int)err);
        return -EIO;
    }

    /*
     * Discard output padding after the generated tag.
     */
    {
        uint32_t tag_pad = sal_aes_pad_bytes(tag_len);

        err = DRV_CRYPTO_AES_DiscardData(sal_crypto_ctx, tag_pad);
        if (err != AES_NO_ERROR) {
            LOG_ERR("SAL CCM dec: DiscardData (tag pad) failed (%d)", (int)err);
            return -EIO;
        }
    }

    err = DRV_CRYPTO_AES_Execute(sal_crypto_ctx);
    if (err != AES_NO_ERROR) {
        LOG_ERR("SAL CCM dec: Execute failed (%d)", (int)err);
        return -1;
    }

    /* Verify authentication: all-zeros means tag matched. */
    if (!sal_ccm_tag_ok(gen_tag, tag_len)) {
        LOG_ERR("SAL CCM dec: authentication tag mismatch");
        return -1;
    }

    return 0;
}
