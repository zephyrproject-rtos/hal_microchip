/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_BDP_API_H
#define _MEC_BDP_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 BIOS debug I/O port capture.
 * BDG can be configure to capture x86 system I/O writes to
 * 1. One, two, and four byte writes to a 4-byte aligned I/O address range
 * 2. One byte writes to an address alias of the first byte of the 4-byte range.
 */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

enum mec5_bdp_status {
    MEC5_BDP_STS_NOT_EMPTY = MEC_BIT(0), /* FIFO contains data */
    MEC5_BDP_STS_OVERRUN   = MEC_BIT(1), /* FIFO has been overrun */
    MEC5_BDP_STS_THRES     = MEC_BIT(2), /* FIFO contains >= threshold entries */
};

#define MEC5_BDP_CFG_FIFO_THRES_POS         0
#define MEC5_BDP_CFG_FIFO_THRES_MSK         0x7
#define MEC5_BDP_CFG_FIFO_THRES_1           0
#define MEC5_BDP_CFG_FIFO_THRES_4           1
#define MEC5_BDP_CFG_FIFO_THRES_8           2
#define MEC5_BDP_CFG_FIFO_THRES_16          3
#define MEC5_BDP_CFG_FIFO_THRES_20          4
#define MEC5_BDP_CFG_FIFO_THRES_24          5
#define MEC5_BDP_CFG_FIFO_THRES_28          6
#define MEC5_BDP_CFG_FIFO_THRES_30          7

#define MEC5_BDP_CFG_THRH_IEN_POS           4
#define MEC5_BDP_CFG_ALIAS_EN_POS           5
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_POS    6
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_MSK    (3u << 6)
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_0      0
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_1      (1u << 6)
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_2      (2u << 6)
#define MEC5_BDP_CFG_ALIAS_BYTE_LANE_3      (3u << 6)

#define MEC5_BDP_CFG_ACTV_POS               12
#define MEC5_BDP_CFG_ALIAS_ACTV_POS         13

/* BDP FIFO contains 32 16-bit entries */
#define MEC_BDP_FIFO_MAX_ENTRIES            32

/* 16-bit FIFO entry */
#define MEC_BDP_FIFO_DATA_POS               0
#define MEC_BDP_FIFO_DATA_MSK               0xffu
#define MEC_BDP_FIFO_ATTR_POS               8
#define MEC_BDP_FIFO_ATTR_MSK               0x7fu

#define MEC_BDP_FIFO_ATTR_BYTE_LANE_POS     8
#define MEC_BDP_FIFO_ATTR_BYTE_LANE_MSK     0x300u
#define MEC_BDP_FIFO_ATTR_BYTE_LANE_0       0
#define MEC_BDP_FIFO_ATTR_BYTE_LANE_1       0x100u
#define MEC_BDP_FIFO_ATTR_BYTE_LANE_2       0x200u
#define MEC_BDP_FIFO_ATTR_BYTE_LANE_3       0x300u

#define MEC_BDP_FIFO_ATTR_SIZE_POS          10
#define MEC_BDP_FIFO_ATTR_SIZE_MSK          0xc00u
#define MEC_BDP_FIFO_ATTR_SIZE_1            0
#define MEC_BDP_FIFO_ATTR_SIZE_2            0x400u
#define MEC_BDP_FIFO_ATTR_SIZE_4            0x800u
#define MEC_BDP_FIFO_ATTR_SIZE_INVAL        0xc00u

/* read-only copy of FIFO Not Empty from the STATUS register */
#define MEC_BDP_FIFO_ATTR_NOT_EMPTY_POS     12

/* read-only copy of FIFO Overrun from the STATUS register */
#define MEC_BDP_FIFO_ATTR_OVERRUN_POS       13

/* read-only copy of FIFO Threshold status from the STATUS register */
#define MEC_BDP_FIFO_ATTR_THRES_POS         14

/* forward reference */
struct mec_bdp_regs;

int mec_hal_bdp_init(struct mec_bdp_regs *regs, uint32_t cfg_flags);

#define MEC_BDP_SELECT_ALIAS 1
int mec_hal_bdp_activate(struct mec_bdp_regs *regs, uint8_t enable, uint8_t is_alias);

void mec_hal_bdp_intr_en(struct mec_bdp_regs *regs, uint8_t enable);

int mec_hal_bdp_girq_ctrl(struct mec_bdp_regs *regs, uint8_t enable);
int mec_hal_bdp_girq_status_clr(struct mec_bdp_regs *regs);

/* set threshold level based on encoded value */
int mec_hal_bdp_fifo_thresh_set(struct mec_bdp_regs *regs, uint32_t cfg_thrh);

/* return configured threshold level in bytes */
uint32_t mec_hal_bdp_fifo_thresh_get(struct mec_bdp_regs *regs);

uint32_t mec_hal_bdp_status(struct mec_bdp_regs *regs);
uint32_t mec_hal_bdp_snapshot(struct mec_bdp_regs *regs);

/* Captured Host I/O cycle
 * flags[3:0] = start byte lane
 * flags[7:4] = size = 1, 2, or 4 bytes
 */
#define MEC_BDP_IO_LANE_POS 0
#define MEC_BDP_IO_LANE_MSK 0x3
#define MEC_BDP_IO_SIZE_POS 4
#define MEC_BDP_IO_SIZE_MSK 0x70

struct mec_bdp_io {
    uint32_t data;
    uint8_t flags;
};

int mec_hal_bdp_get_host_io(struct mec_bdp_regs *regs, struct mec_bdp_io *capio);


inline static uint32_t mec_hal_bdp_fifo_not_empty(struct mec_bdp_regs *regs)
{
    return (regs->STATUS & MEC_BIT(0));
}

/* FIFO 16-bit data and attributes read as a 32-bit value.
 * b[7:0] = data only valid if FIFO not empty
 * b[15:8] = attributes, always valid
 * b[31:16] = 0 rsvd
 */
inline static uint32_t mec_hal_bdp_fifo_read(struct mec_bdp_regs *regs)
{
    return regs->DATRB;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_BDP_API_H */
