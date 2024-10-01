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

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ROM_API_H */
