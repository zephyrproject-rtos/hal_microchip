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
#include "mec_rom_api.h"
#include "mec_retval.h"

#define MEC5_ROM_VERSION_ADDR 0xf001u
#define MEC5_ROM_OTP_RD8_ADDR 0xf009u
#define MEC5_ROM_OTP_WR8_ADDR 0xf00du
#define MEC5_ROM_CRYPT_SLEEP_CTRL_ADDR 0x0001f299u

typedef uint32_t (*rom_ver_td)(void);
typedef uint8_t (*rom_otp_rd8_td)(uint16_t otp_index, uint8_t *data);
typedef uint8_t (*rom_otp_wr8_td)(uint16_t otp_index, uint8_t data);
typedef void (*rom_crypt_sleep_ctrl_td)(bool sleep_en);

uint32_t mec_hal_rom_version(void)
{
    rom_ver_td fp = (rom_ver_td)(MEC5_ROM_VERSION_ADDR);

    return (*fp)();
}

int mec_hal_rom_otp_read_byte(uint16_t otp_index, uint8_t *data)
{
    rom_otp_rd8_td fp = (rom_otp_rd8_td)(MEC5_ROM_OTP_RD8_ADDR);
    uint8_t rval = 0u;

    if (!data) {
        return MEC_RET_ERR_INVAL;
    }

    rval = (*fp)(otp_index, data);
    if (!rval) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

int mec_hal_rom_otp_write_byte(uint16_t otp_index, uint8_t data)
{
    rom_otp_wr8_td fp = (rom_otp_wr8_td)(MEC5_ROM_OTP_WR8_ADDR);

    uint8_t rval = (*fp)(otp_index, data);

    if (!rval) {
        return MEC_RET_ERR;
    }

    return MEC_RET_OK;
}

void mec_hal_rom_crypto_enable(uint8_t enable)
{
    rom_crypt_sleep_ctrl_td fp = (rom_crypt_sleep_ctrl_td)MEC5_ROM_CRYPT_SLEEP_CTRL_ADDR;
    bool sleep_en = (enable) ? true: false;

    fp(sleep_en);
}

/* end mec_rom.c */
