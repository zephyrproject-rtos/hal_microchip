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

/* NDRNG */
#ifdef MEC5_ROM_API_NDRNG_ENABLED

#define MEC_NDRNG_GIRQ 16
#define MEC_NDRNG_GIRQ_POS 2
#define MEC_NDRNG_GIRQ_AGGR_NVIC 8
#define MEC_NDRNG_DIRECT_NVIC 67

#define MEC_NDRNG_ECIA_INFO MEC5_ECIA_INFO(MEC_NDRNG_GIRQ, MEC_NDRNG_GIRQ_POS, \
                                           MEC_NDRNG_GIRQ_AGGR_NVIC, MEC_NDRNG_DIRECT_NVIC)

#define MEC_NDRNG_FIFO_MAX_WORDS 32u

#define MEC_NDRNG_DFLT_CLKDIV 0
#define MEC_NDRNG_DFLT_OFF_TIMER_VAL 0
#define MEC_NDRNG_DFLT_FIFO_WAKEUP_LVL 8u
#define MEC_NDRNG_DFLT_INIT_WAIT_VAL 512u
#define MEC_NDRNG_DFLT_NB_128BIT_BLOCKS 4u
// return 0 (success), -4, -2, -99

#define MEC_ROM_API_NDRNG_SOFT_RESET_ADDR       0x1f215u
#define MEC_ROM_API_NDRNG_FIFO_LEVEL_ADDR       0x1f219u
#define MEC_ROM_API_NDRNG_INIT_ADDR             0x1f21du
#define MEC_ROM_API_NDRNG_READ_WORD_ADDR        0x1f221u
#define MEC_ROM_API_NDRNG_ENABLE_ADDR           0x1f225u
#define MEC_ROM_API_NDRNG_INTR_EN_ADDR          0x1f229u
#define MEC_ROM_API_NDRNG_FIFO_LVL_CLR_ADDR     0x1f22du
#define MEC_ROM_API_NDRNG_IS_HEALTHY_ADDR       0x1f231u
#define MEC_ROM_API_NDRNG_READ_BYTES_ADDR       0x1f235u
#define MEC_ROM_API_NDRNG_READ_BYTES_NH_ADDR    0x1f239u
#define MEC_ROM_API_NDRNG_READ_WORD_NH_ADDR     0x1f23du

#if ((MEC_SERIES_ID) == 2)
#define MEC_ROM_API_NDRNG_GET_RAND_WORDS_ADDR   0x1f2adu
#define MEC_ROM_API_NDRNG_INTR_CLR_STS_ADDR     0x1f2d1u
#define MEC_ROM_API_NDRNG_IS_FIFO_FULL_ADDR     0x1f2d5u
#define MEC_ROM_API_NDRNG_EMPTY_FIFO_ADDR       0x1f2d9u
#elif ((MEC_SERIES_ID) == 4) || ((MEC_SERIES_ID) == 5)
#define MEC_ROM_API_NDRNG_GET_RAND_WORDS_ADDR   0x1f265u
#define MEC_ROM_API_NDRNG_INTR_CLR_STS_ADDR     0x1f289u
#define MEC_ROM_API_NDRNG_IS_FIFO_FULL_ADDR     0x1f28du
#define MEC_ROM_API_NDRNG_EMPTY_FIFO_ADDR       0x1f291u
#endif

typedef int (*rom_ndrng_init_td)(bool enable_conditioning,
                                 uint32_t fifo_wake_threshold,
                                 uint32_t ring_pwr_down_delay,
                                 uint32_t nb_cond,
                                 uint32_t rng_clk_div,
                                 uint32_t rng_init_wait);

/* call after init to enable TRNG */
typedef void (*rom_ndrng_enable_td)(bool enable);

/* does not clear enable bit */
typedef void (*rom_ndrng_soft_reset_td)(void);

/* number of 32-bit words available in FIFO */
typedef uint32_t (*rom_ndrng_fifo_level_td)(void);

typedef bool (*rom_ndrng_is_fifo_full_td)(void);

/* clears FIFO full HW status bit */
typedef void (*rom_ndrng_level_clear_td)(void);

/* read and discard FIFO contents */
typedef void (*rom_ndrng_empty_fifo_td)(void);

typedef bool (*rom_ndrng_is_healthy_td)(void);

/* blocking read without health check */
typedef int (*rom_ndrng_read_bytes_nh_td)(uint8_t *dest, int nbytes);

/*
 * Reads nwords from FIFO and stores in dest. Returns actual number
 * of words read or if < 0 and error.
 */
typedef uint32_t (*rom_ndrng_get_random_words_td)(void *dest, uint32_t nwords);

/* ---- Public API ---- */
int mec_hal_rom_rng_init(void)
{
    rom_ndrng_init_td fp = (rom_ndrng_init_td)MEC_ROM_API_NDRNG_INIT_ADDR;
    uint32_t fifo_wake_threshold = MEC_NDRNG_DFLT_FIFO_WAKEUP_LVL;
    uint32_t rng_power_down_delay = MEC_NDRNG_DFLT_OFF_TIMER_VAL;
    uint32_t nb_cond = MEC_NDRNG_DFLT_NB_128BIT_BLOCKS;
    uint32_t rng_clk_div = MEC_NDRNG_DFLT_CLKDIV;
    uint32_t rng_init_wait = MEC_NDRNG_DFLT_INIT_WAIT_VAL;
    int ret = 0;

    ret = fp(true, fifo_wake_threshold, rng_power_down_delay, nb_cond,
             rng_clk_div, rng_init_wait);
    if (ret != 0) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

void mec_hal_rom_rng_enable(bool enable)
{
    rom_ndrng_enable_td fp = (rom_ndrng_enable_td)MEC_ROM_API_NDRNG_ENABLE_ADDR;

    fp(enable);
}


bool mec_hal_rom_rng_is_healthy(void)
{
    rom_ndrng_is_healthy_td fp = (rom_ndrng_is_healthy_td)MEC_ROM_API_NDRNG_IS_HEALTHY_ADDR;

    return fp();
}

uint32_t mec_hal_rom_rng_fifo_level(void)
{
    rom_ndrng_fifo_level_td fp = (rom_ndrng_fifo_level_td)MEC_ROM_API_NDRNG_FIFO_LEVEL_ADDR;

    return fp();
}

bool mec_hal_rom_rng_is_fifo_full(void)
{
    rom_ndrng_is_fifo_full_td fp = (rom_ndrng_is_fifo_full_td)MEC_ROM_API_NDRNG_IS_FIFO_FULL_ADDR;

    return fp();
}

void mec_hal_rom_rng_fifo_full_status_clear(void)
{
    rom_ndrng_level_clear_td fp = (rom_ndrng_level_clear_td)MEC_ROM_API_NDRNG_FIFO_LVL_CLR_ADDR;

    fp();
}

void mec_hal_rom_rng_fifo_discard(void)
{
    rom_ndrng_empty_fifo_td fp = (rom_ndrng_empty_fifo_td)MEC_ROM_API_NDRNG_EMPTY_FIFO_ADDR;

    fp();
}

int mec_hal_rom_rng_read_bytes_nh(uint8_t *dest, uint16_t nbytes_req, uint16_t *nbytes_supplied)
{
    rom_ndrng_read_bytes_nh_td fp =
        (rom_ndrng_read_bytes_nh_td)MEC_ROM_API_NDRNG_READ_BYTES_NH_ADDR;
    int rc = 0;

    if (!dest) {
        return MEC_RET_ERR_INVAL;
    }

    if (nbytes_req) {
        rc = fp(dest, nbytes_req);
        if (rc < 0) {
            return MEC_RET_ERR;
        }
    }

    if (nbytes_supplied) {
        *nbytes_supplied = (uint16_t)(rc & 0xffffu);
    }

    return MEC_RET_OK;
}

/* fill a word (32-bit) buffer with requested number of words.
 * This routine may block.
 * return >= 0 is the number of words actually written to the buffer.
 * return < 0 is an error.
 */
int mec_hal_rom_rng_get_rand_words(void *dest, uint16_t req_nw, uint16_t *actual_nw)
{
    rom_ndrng_get_random_words_td fp =
        (rom_ndrng_get_random_words_td)MEC_ROM_API_NDRNG_GET_RAND_WORDS_ADDR;

    if (!dest || ((uint32_t)dest & 0x3u)) {
        return MEC_RET_ERR_INVAL;
    }

    int rc = fp(dest, req_nw);

    if (rc >= 0) {
        if (actual_nw) {
            *actual_nw = (uint16_t)(rc & 0xffffu);
        }
        return MEC_RET_OK;
    }

    return MEC_RET_ERR;
}

#endif /* MEC5_ROM_API_NDRNG_ENABLED */

/* end mec_rom.c */
