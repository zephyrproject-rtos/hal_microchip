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

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ROM_API_H */
