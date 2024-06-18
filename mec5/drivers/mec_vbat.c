/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_vbat_api.h"
#include "mec_retval.h"
#include "device_mec5.h"

/* -------- VBAT API -------- */

/* VBAT powered reset and status register */
uint32_t mec_hal_vbat_pfrs(void)
{
    return MEC_VBATR->PFRS;
}

void mec_hal_vbat_pfrs_clear(uint32_t clrmsk)
{
    MEC_VBATR->PFRS = clrmsk;
}

/* Lower word of 64-bit monotonic counter is read-only.
 * A read causes it to increment by 1.
 */
uint32_t mec_hal_read_monotonic_counter32(void)
{
    return MEC_VBATR->MCNTL;
}

uint64_t mec_hal_read_monotonic_counter64(void)
{
    uint64_t counter = MEC_VBATR->MCNTH;

    counter <<= 32;
    counter |= MEC_VBATR->MCNTL; /* increments on read */

    return counter;
}

/* Upper word of 64-bit monotonic counter is read/write.
 * Read/write does not cause it to increment.
 */
void mec_hal_set_monotonic_counter_msw(uint32_t msw)
{
    MEC_VBATR->MCNTH = msw;
}

/* ---- VBAT Memory ---- */
uint32_t mec_hal_bbram_size(void)
{
    uint32_t bbram_size = MEC_VBAT_MEM_SIZE;

#ifndef MEC5_FAM2_ID
    if (MEC_ECS->FEAT_LOCK & MEC_BIT(MEC_ECS_FEAT_LOCK_BBRAM_SIZE_Pos)) {
        bbram_size >>= 1u;
    }
#endif

    return bbram_size;
}

uintptr_t mec_hal_bbram_base_address(void)
{
    return (uintptr_t)(MEC_VBATM_BASE);
}

int mec_hal_bbram_rd8(uint16_t byte_ofs, uint8_t *val)
{
    if (!val || (byte_ofs >= MEC_VBAT_MEM_SIZE)) {
        return MEC_RET_ERR_INVAL;
    }

    *val = MEC_VBATM->VBMEM[byte_ofs];

    return MEC_RET_OK;
}

int mec_hal_bbram_wr8(uint16_t byte_ofs, uint8_t val)
{
    if (byte_ofs >= MEC_VBAT_MEM_SIZE) {
        return MEC_RET_ERR_INVAL;
    }

    MEC_VBATM->VBMEM[byte_ofs] = val;

    return MEC_RET_OK;
}

int mec_hal_bbram_rd32(uint16_t byte_ofs, uint32_t *val)
{
    uint32_t r = 0;

    if (!val || (byte_ofs >= MEC_VBAT_MEM_SIZE)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!(byte_ofs & 0x3u)) {
        r = MEC_MMCR32(&MEC_VBATM->VBMEM[byte_ofs]);
    } else {
        for (uint16_t i = 0; i < 4u; i++) {
            r <<= 8;
            r |= MEC_VBATM->VBMEM[byte_ofs + 3 - i];
        }
    }

    *val = r;

    return MEC_RET_OK;
}

int mec_hal_bbram_wr32(uint16_t byte_ofs, uint32_t val)
{
    if (byte_ofs >= MEC_VBAT_MEM_SIZE) {
        return MEC_RET_ERR_INVAL;
    }

    if (!(byte_ofs & 0x3u)) {
        MEC_MMCR32(&MEC_VBATM->VBMEM[byte_ofs]) = val;
    } else {
        for (uint16_t i = 0; i < 4u; i++) {
            MEC_VBATM->VBMEM[byte_ofs + i] = val & 0xffu;
            val >>= 8;
        }
    }

    return MEC_RET_OK;
}

int mec_hal_bbram_rd(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nread)
{
    if (!data || (byte_ofs >= MEC_VBAT_MEM_SIZE)) {
        return MEC_RET_ERR_INVAL;
    }

    for (uint16_t idx = byte_ofs; idx < (uint16_t)MEC_VBAT_MEM_SIZE; idx++) {
        if ((size_t)idx >= datasz) {
            break;
        }

        *data++ = MEC_VBATM->VBMEM[idx];
        if (nread) {
            *nread += 1u;
        }
    }

    return 0;
}

int mec_hal_bbram_wr(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nwritten)
{
    if (!data || (byte_ofs >= MEC_VBAT_MEM_SIZE)) {
        return MEC_RET_ERR_INVAL;
    }

    for (uint16_t idx = byte_ofs; idx < (uint16_t)MEC_VBAT_MEM_SIZE; idx++) {
        if ((size_t)idx >= datasz) {
            break;
        }

        MEC_VBATM->VBMEM[idx] = *data++;
        if (nwritten) {
            *nwritten += 1u;
        }
    }

    return 0;
}

/* end mec_vbat.c */
