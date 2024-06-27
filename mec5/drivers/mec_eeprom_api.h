/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_EEPROM_API_H
#define _MEC_EEPROM_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 Controller for accessing the internal EEPROM */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* Maximum transfer size is 32 bytes */
#define MEC_HAL_EEPROM_MAX_XFR_LEN      32u

#define MEC_HAL_EEPROM_CFG_SRST         MEC_BIT(0)
#define MEC_HAL_EEPROM_CFG_ENABLE       MEC_BIT(1)
#define MEC_HAL_EEPROM_CFG_DONE_IEN     MEC_BIT(2)
#define MEC_HAL_EEPROM_CFG_EXE_ERR_IEN  MEC_BIT(3)
#define MEC_HAL_EEPROM_CFG_LOAD_PSWD    MEC_BIT(4)
#define MEC_HAL_EEPROM_CFG_LOCK_ON_PSWD MEC_BIT(5)
#define MEC_HAL_EEPROM_CFG_LOCK_ON_JTAG MEC_BIT(6)

enum mec_hal_eeprom_intr_flags {
    MEC_HAL_EEPROM_INTR_DONE_POS = 0,
    MEC_HAL_EEPROM_INTR_ERR_POS,
};

enum mec_hal_eeprom_status {
    MEC_HAL_EEPROM_STS_DONE_POS = 0,
    MEC_HAL_EEPROM_STS_ERR_POS,
    MEC_HAL_EEPROM_STS_ACTIVE_RO_POS = 8,
};

enum mec_hal_eeprom_ops {
    MEC_HAL_EEPROM_OP_READ_DATA = 0,
    MEC_HAL_EEPROM_OP_WRITE_DATA,
    MEC_HAL_EEPROM_OP_READ_STATUS,
    MEC_HAL_EEPROM_OP_WRITE_STATUS,
};

/* 8-bit status from internal EEPROM device */
#define MEC_HAL_EEPROM_FABRIC_WR_BUSY_POS   0
#define MEC_HAL_EEPROM_FABRIC_WR_EN_POS     1
#define MEC_HAL_EEPROM_FABRIC_WR_PROT_POS   2
#define MEC_HAL_EEPROM_FABRIC_WR_PROT_MSK0  0x3u
#define MEC_HAL_EEPROM_FABRIC_WR_PROT_MSK   \
    (MEC_HAL_EEPROM_FABRIC_WR_PROT_MSK0 << MEC_HAL_EEPROM_FABRIC_WR_PROT_POS)

int mec_hal_eeprom_init(struct mec_eeprom_ctrl_regs *regs, uint32_t flags, uint32_t password);
int mec_hal_eeprom_activate(struct mec_eeprom_ctrl_regs *regs, uint8_t enable);

int mec_hal_eeprom_girq_ctrl(struct mec_eeprom_ctrl_regs *regs, uint8_t enable);
int mec_hal_eeprom_girq_status_clr(struct mec_eeprom_ctrl_regs *regs);

uint32_t mec_hal_eeprom_status(struct mec_eeprom_ctrl_regs *regs);
int mec_hal_eeprom_status_clr(struct mec_eeprom_ctrl_regs *regs, uint32_t clrmsk);
bool mec_hal_eeprom_is_busy(struct mec_eeprom_ctrl_regs *regs);

int mec_hal_eeprom_intr_en(struct mec_eeprom_ctrl_regs *regs, uint8_t enable, uint32_t flags);

int mec_hal_eeprom_set_password(struct mec_eeprom_ctrl_regs *regs, uint32_t password);
int mec_hal_eeprom_lock(struct mec_eeprom_ctrl_regs *regs);
int mec_hal_eeprom_unlock(struct mec_eeprom_ctrl_regs *regs, uint32_t password);
bool mec_hal_eeprom_is_locked(struct mec_eeprom_ctrl_regs *regs);

int mec_hal_eeprom_buffer_rd(struct mec_eeprom_ctrl_regs *regs, uint8_t *dest, uint32_t nbytes);
int mec_hal_eeprom_buffer_wr(struct mec_eeprom_ctrl_regs *regs, const uint8_t *src,
                             uint32_t nbytes);

int mec_hal_eeprom_xfr_start(struct mec_eeprom_ctrl_regs *regs, uint8_t op,
                             uint32_t offset, uint32_t nbytes);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_EEPROM_API_H */
