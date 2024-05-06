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

/* Battery backed memory size in bytes */
uint32_t mec_bbram_size(void);
/* Battery backed memory base address */
uintptr_t mec_bbram_base_address(void);

/* Access battery backed memory */
int mec_bbram_rd8(uint16_t byte_ofs, uint8_t *val);
int mec_bbram_wr8(uint16_t byte_ofs, uint8_t val);

int mec_bbram_rd32(uint16_t byte_ofs, uint32_t *val);
int mec_bbram_wr32(uint16_t byte_ofs, uint32_t val);

int mec_bbram_rd(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nread);
int mec_bbram_wr(uint16_t byte_ofs, uint8_t *data, size_t datasz, size_t *nwritten);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_VBAT_H */
