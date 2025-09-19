/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_VBAT_H
#define _MEC_VBAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* VBAT Power-Fail and Status */
enum mec_vbat_pfrs {
    MEC_VBAT_PFRS_RSVD_BIT_0 = 0,
    MEC_VBAT_PFRS_RSVD_BIT_1,
    MEC_VBAT_PFRS_PCR_SOFT_RESET_POS,
    MEC_VBAT_PFRS_JTAG_RESET_POS,
    MEC_VBAT_PFRS_RESET_IN_PIN_POS,
    MEC_VBAT_PFRS_WDT_RST_POS,
    MEC_VBAT_PFRS_ARM_SYSRSTREQ_POS,
    MEC_VBAT_PFRS_VBAT_RST_POS
};

uint32_t mec_hal_vbat_pfrs(void);
void mec_hal_vbat_pfrs_clear(uint32_t clrmsk);

/* Lower word of 64-bit monotonic counter is read-only.
 * A read causes it to increment by 1.
 */
uint32_t mec_hal_read_monotonic_counter32(void);

/* Obtain full 64-bit monotonic counter value
 * Read causes lower 32-bits to increment by 1.
 */
uint64_t mec_hal_read_monotonic_counter64(void);

/* Upper word of 64-bit monotonic counter is read/write.
 * Read/write does not cause it to increment.
 */
void mec_hal_set_monotonic_counter_msw(uint32_t msw);

/* Battery backed memory size in bytes */
uint32_t mec_hal_bbram_size(void);
/* Battery backed memory base address */
uintptr_t mec_hal_bbram_base_address(void);

/* Access battery backed memory */
int mec_hal_bbram_rd8(uint16_t byte_ofs, uint8_t *val);
int mec_hal_bbram_wr8(uint16_t byte_ofs, uint8_t val);

int mec_hal_bbram_rd32(uint16_t byte_ofs, uint32_t *val);
int mec_hal_bbram_wr32(uint16_t byte_ofs, uint32_t val);

int mec_hal_bbram_rd(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nread);
int mec_hal_bbram_wr(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nwritten);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_VBAT_H */
