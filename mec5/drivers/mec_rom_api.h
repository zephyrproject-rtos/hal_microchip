/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ROM_API_H
#define _MEC_ROM_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* Boot-ROM API */

uint32_t mec_hal_rom_version(void);

int mec_hal_rom_otp_read_byte(uint16_t otp_index, uint8_t *data);
int mec_hal_rom_otp_write_byte(uint16_t otp_index, uint8_t data);

/* enable all crypto blocks */
void mec_hal_rom_crypto_enable(uint8_t enable);

/* NDRNG */

#define MEC_RNG_FIFO_SIZE_BYTES 128u

int mec_hal_rom_rng_init(void);
void mec_hal_rom_rng_enable(bool enable);

bool mec_hal_rom_rng_is_healthy(void);

uint32_t mec_hal_rom_rng_fifo_level(void);
bool mec_hal_rom_rng_is_fifo_full(void);
void mec_hal_rom_rng_fifo_full_status_clear(void);
void mec_hal_rom_rng_fifo_discard(void);

int mec_hal_rom_rng_read_bytes_nh(uint8_t *dest, uint16_t nbytes_req, uint16_t *nbytes_supplied);
int mec_hal_rom_rng_get_rand_words(void *dest, uint16_t req_nw, uint16_t *actual_nw);

/* Hash */
enum mchp_hash_alg_id {
    MCHP_HASH_ALG_NONE = 0,
    MCHP_HASH_ALG_SHA1,
    MCHP_HASH_ALG_SHA224,
    MCHP_HASH_ALG_SHA256,
    MCHP_HASH_ALG_SHA384,
    MCHP_HASH_ALG_SHA512,
    MCHP_HASH_ALG_SM3,
    MCHP_HASH_ALG_MAX,
};

#define MEC5_HASH_USE_OPAQUE_STRUCTS

/* redefine structures for a 32-bit target CPU */
#if 0 /* TODO remove */
struct mchpdesc {
    uint8_t *addr;
    struct mchpdesc *next;
    uint32_t sz;
    uint32_t dmatag;
};
#endif

#ifdef MEC5_HASH_USE_OPAQUE_STRUCTS
struct mchphashstate {
    uint32_t d[2];
};
#else
struct mchphashstate {
    uint8_t *m;
    size_t sz;
};
#endif

#if 0 /* TODO remove */
struct hashalgo {
    uint32_t cfgword;
    size_t digestsz;
    size_t blocksz;
    size_t statesz;
    const uint8_t *initstate;
};
#endif

struct mchp_regs {
    uint8_t *base;
};

#if 0 /* TODO remove */
struct mchp_dmaslot {
    uint32_t cfg;
    uint8_t extramem[26]; /* length = 0x1a */
    struct mchpdesc indescs[6]; /* gcc puts this at offset 0x20. Two bytes of padding before it */
    struct mchpdesc outdescs[5];
};
#endif

#if 0 /* TODO remove */
struct mchp_dmactl {
    struct mchp_regs *regs;
    struct mchpdesc *mapped_in;
    struct mchpdesc *mapped_out;
    struct mchp_dmaslot dmamem;
};
#endif

#ifdef MEC5_HASH_USE_OPAQUE_STRUCTS
struct mchphash {
    uint32_t d[240 / 4];
};
#else
struct mchphash { /* 240 bytes */
    struct mchpdesc *d;
    struct mchphashstate *h;
    const struct hashalgo *algo;
    uint32_t cntindescs;
    struct mchp_dmactl dma;
    uint32_t feedsz;
};
#endif

struct mchphmac2 { /* 256 bytes */
    enum mchp_hash_alg_id id; /* 4 bytes */
    uint8_t hms;            /* 4 bytes */
    uint8_t rsvd[3];
    struct mchphash c;      /* 240 bytes */
    struct mchphashstate s; /* 8 bytes */
};

int mec_hal_rom_hash_create_sha1(struct mchphash *c);
int mec_hal_rom_hash_create_sha224(struct mchphash *c);
int mec_hal_rom_hash_create_sha256(struct mchphash *c);
int mec_hal_rom_hash_create_sha384(struct mchphash *c);
int mec_hal_rom_hash_create_sha512(struct mchphash *c);
int mec_hal_rom_hash_create_sm3(struct mchphash *c);
int mec_hal_rom_hash_init_state(struct mchphash *c, struct mchphashstate *h, uint8_t *dmamem);
int mec_hal_rom_hash_resume_state(struct mchphash *c, struct mchphashstate *h);
int mec_hal_rom_hash_save_state(struct mchphash *c);
int mec_hal_rom_hash_add_data(struct mchphash *c, const uint8_t *data, size_t datasz);
int mec_hal_rom_hash_compute_digest(struct mchphash *c, uint8_t *result);
int mec_hal_rom_hash_wait(struct mchphash *c);
int mec_hal_rom_hash_get_status(struct mchphash *c);
size_t mec_hal_rom_hash_get_digest_size(struct mchphash *c);

/* HMAC */
int mec_hal_rom_hmac2_init(enum mchp_hash_alg_id alg_id, struct mchphmac2 *m,
                           const uint8_t *key, size_t keysz, uint32_t *k0, size_t k0sz);

int mec_hal_rom_hmac2_add_data_block(struct mchphmac2 *m, uint8_t *state, size_t statesz,
                                     uint32_t *k0, size_t k0sz, const uint8_t *datablk,
                                     size_t datablksz, bool last_data);

int mec_hal_rom_hmac2_final(struct mchphmac2 *m, uint8_t *state, size_t statesz, uint32_t *k0,
                            size_t k0sz, uint8_t *hmac, size_t hmacsz);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ROM_API_H */
