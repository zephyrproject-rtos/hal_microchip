/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_rom_api.h"
#include "mec_retval.h"

/* Hash and HMAC */
#if defined(MEC5_ROM_API_HASH_ENABLED)

#define MEC_HASH_GIRQ 16
#define MEC_HASH_GIRQ_POS 3
#define MEC_HASH_GIRQ_AGGR_NVIC 8
#define MEC_HASH_DIRECT_NVIC 68

#define MEC_HASH_ECIA_INFO MEC5_ECIA_INFO(MEC_HASH_GIRQ, MEC_HASH_GIRQ_POS, \
                                           MEC_HASH_GIRQ_AGGR_NVIC, MEC_HASH_DIRECT_NVIC)

#define MEC_ROM_API_HASH_CREATE_SHA1_ADDR 0x0001f179u
#define MEC_ROM_API_HASH_CREATE_SHA224_ADDR 0x0001f17du
#define MEC_ROM_API_HASH_CREATE_SHA256_ADDR 0x0001f181u
#define MEC_ROM_API_HASH_CREATE_SHA384_ADDR 0x0001f185u
#define MEC_ROM_API_HASH_CREATE_SHA512_ADDR 0x0001f189u
#define MEC_ROM_API_HASH_CREATE_SM3_ADDR 0x0001f18du
#define MEC_ROM_API_HASH_INIT_STATE_ADDR 0x0001f191u
#define MEC_ROM_API_HASH_RESUME_STATE_ADDR 0x0001f195u
#define MEC_ROM_API_HASH_SAVE_STATE_ADDR 0x0001f199u
#define MEC_ROM_API_HASH_FEED_DATA_ADDR 0x0001f19du
#define MEC_ROM_API_HASH_COMPUTE_DIGEST_ADDR 0x0001f1a1u
#define MEC_ROM_API_HASH_WAIT_ADDR 0x0001f1a5u
#define MEC_ROM_API_HASH_GET_DIGEST_SZ_ADDR 0x0001f1a9u
#define MEC_ROM_API_HASH_GET_STATUS_ADDR 0x0001f1adu

typedef int (*rom_hash_create_sha1_td)(struct mchphash *c);
typedef int (*rom_hash_create_sha224_td)(struct mchphash *c);
typedef int (*rom_hash_create_sha256_td)(struct mchphash *c);
typedef int (*rom_hash_create_sha384_td)(struct mchphash *c);
typedef int (*rom_hash_create_sha512_td)(struct mchphash *c);
typedef int (*rom_hash_create_sm3_td)(struct mchphash *c);
typedef void (*rom_hash_init_state_td)(struct mchphash *c, struct mchphashstate *h, uint8_t *dmamem);
typedef void (*rom_hash_resume_state_td)(struct mchphash *c, struct mchphashstate *h);
typedef int (*rom_hash_save_state_td)(struct mchphash *c);
typedef int (*rom_hash_feed_td)(struct mchphash *c, const uint8_t *msg, size_t sz);
typedef int (*rom_hash_digest_td)(struct mchphash *c, uint8_t *digest);
typedef int (*rom_hash_wait_td)(struct mchphash *c);
typedef size_t (*rom_hash_get_digestsz_td)(struct mchphash *c);
typedef int (*rom_hash_status_td)(struct mchphash *c);


/* ---- Public API ---- */
int mec_hal_rom_hash_create_sha1(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sha1_td fp = (rom_hash_create_sha1_td)MEC_ROM_API_HASH_CREATE_SHA1_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_create_sha224(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sha224_td fp = (rom_hash_create_sha224_td)MEC_ROM_API_HASH_CREATE_SHA224_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_create_sha256(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sha256_td fp = (rom_hash_create_sha256_td)MEC_ROM_API_HASH_CREATE_SHA256_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_create_sha384(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sha384_td fp = (rom_hash_create_sha384_td)MEC_ROM_API_HASH_CREATE_SHA384_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_create_sha512(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sha512_td fp = (rom_hash_create_sha512_td)MEC_ROM_API_HASH_CREATE_SHA512_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_create_sm3(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_create_sm3_td fp = (rom_hash_create_sm3_td)MEC_ROM_API_HASH_CREATE_SM3_ADDR;

    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_init_state(struct mchphash *c, struct mchphashstate *h, uint8_t *dmamem)
{
    if (!c || !h || !dmamem) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_init_state_td fp = (rom_hash_init_state_td)MEC_ROM_API_HASH_INIT_STATE_ADDR;

    fp(c, h, dmamem);

    return MEC_RET_OK;
}

int mec_hal_rom_hash_resume_state(struct mchphash *c, struct mchphashstate *h)
{
    if (!c || !h) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_resume_state_td fp = (rom_hash_resume_state_td)MEC_ROM_API_HASH_RESUME_STATE_ADDR;

    fp(c, h);

    return MEC_RET_OK;
}

int mec_hal_rom_hash_save_state(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_save_state_td fp = (rom_hash_save_state_td)MEC_ROM_API_HASH_SAVE_STATE_ADDR;
    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_add_data(struct mchphash *c, const uint8_t *data, size_t datasz)
{
    if (!c || (!data && datasz)) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_feed_td fp = (rom_hash_feed_td)MEC_ROM_API_HASH_FEED_DATA_ADDR;
    int ret = fp(c, data, datasz);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_hash_compute_digest(struct mchphash *c, uint8_t *result)
{
    if (!c || !result) {
        return MEC_RET_ERR;
    }

    rom_hash_digest_td fp = (rom_hash_digest_td)MEC_ROM_API_HASH_COMPUTE_DIGEST_ADDR;
    int ret = fp(c, result);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

/* blocking */
int mec_hal_rom_hash_wait(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_wait_td fp = (rom_hash_wait_td)MEC_ROM_API_HASH_WAIT_ADDR;
    int ret = fp(c);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

size_t mec_hal_rom_hash_get_digest_size(struct mchphash *c)
{
    if (!c) {
        return 0;
    }

    rom_hash_get_digestsz_td fp = (rom_hash_get_digestsz_td)MEC_ROM_API_HASH_GET_DIGEST_SZ_ADDR;

    return fp(c);
}

int mec_hal_rom_hash_get_status(struct mchphash *c)
{
    if (!c) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hash_status_td fp = (rom_hash_status_td)MEC_ROM_API_HASH_GET_STATUS_ADDR;
    int ret = fp(c);

    if (ret == -1) {
        return MEC_RET_ERR_BUSY;
    } else if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}
#endif /* #if defined(MEC5_ROM_API_HASH_ENABLED) */

#if defined(MEC5_ROM_API_HMAC_ENABLED)

#define MEC_ROM_API_HMAC2_INIT_ADDR         0x1f1bdu
#define MEC_ROM_API_HMAC2_ADD_DATA_BLK_ADDR 0x1f1c1u
#define MEC_ROM_API_HMAC2_FINAL_ADDR        0x1f1c5u

typedef int (*rom_hmac2_init_td)(enum mchp_hash_alg_id alg_id, struct mchphmac2 *m,
                                 const uint8_t *key, size_t keysz, uint32_t *k0, size_t k0sz);

typedef int (*rom_hmac2_add_datablk_td)(struct mchphmac2 *m, uint8_t *state, size_t statesz,
                                        uint32_t *k0, size_t k0sz, const uint8_t *datablk,
                                        size_t datablksz, bool last_data);

typedef int (*rom_hmac2_final)(struct mchphmac2 *m, uint8_t *state, size_t statesz, uint32_t *k0,
                               size_t k0sz, uint8_t *hmac, size_t hmacsz);

int mec_hal_rom_hmac2_init(enum mchp_hash_alg_id alg_id, struct mchphmac2 *m,
                           const uint8_t *key, size_t keysz, uint32_t *k0, size_t k0sz)
{
    rom_hmac2_init_td fp = (rom_hmac2_init_td)MEC_ROM_API_HMAC2_INIT_ADDR;

    int ret = fp(alg_id, m, key, keysz, k0, k0sz);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

/* TODO more parameter checks */
int mec_hal_rom_hmac2_add_data_block(struct mchphmac2 *m, uint8_t *state, size_t statesz,
                                     uint32_t *k0, size_t k0sz, const uint8_t *datablk,
                                     size_t datablksz, bool last_data)
{
    if (!m || !state) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hmac2_add_datablk_td fp = (rom_hmac2_add_datablk_td)MEC_ROM_API_HMAC2_ADD_DATA_BLK_ADDR;
    int ret = fp(m, state, statesz, k0, k0sz, datablk, datablksz, last_data);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

/* TODO more parameter checks */
int mec_hal_rom_hmac2_final(struct mchphmac2 *m, uint8_t *state, size_t statesz, uint32_t *k0,
                            size_t k0sz, uint8_t *hmac, size_t hmacsz)
{
    if (!m || !state || !k0 || !hmac) {
        return MEC_RET_ERR_INVAL;
    }

    rom_hmac2_final fp = (rom_hmac2_final)MEC_ROM_API_HMAC2_FINAL_ADDR;
    int ret = fp(m, state, statesz, k0, k0sz, hmac, hmacsz);

    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

#endif /* defined(MEC5_ROM_API_HMAC_ENABLED) */

/* end mec_rom_hash.c */
