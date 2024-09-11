/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_bdp_api.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#define MEC_BDP_GIRQ      15
#define MEC_BDP_GIRQ_POS  22
#define MEC_BDP_AGGR_NVIC 7
#define MEC_BDP_NVIC      62
#define MEC_BDP_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_BDP_GIRQ, MEC_BDP_GIRQ_POS, MEC_BDP_AGGR_NVIC, MEC_BDP_NVIC)

#define MEC_BDP_INTR_EN_THRES_POS 0

/* BDP Configuration register */
#define MEC_BDP_CFG_REG_FIFO_FIFO_FLUSH_POS 0
#define MEC_BDP_CFG_REG_FIFO_SNAP_CLR_POS   1
#define MEC_BDP_CFG_REG_FIFO_THRH_POS       8
#define MEC_BDP_CFG_REG_FIFO_THRH_MSK       0x700u
#define MEC_BDP_CFG_REG_SRESET_POS          31

/* BDP Interrupt enable register */
#define MEC_BDP_IEN_REG_THRH_POS 0

/* BDP Activate and Alias Activate registers */
#define MEC_BDP_ACTV_REG_EN_POS 0

/* ---- Public API ---- */

/* Initialize BDP */
int mec_hal_bdp_init(struct mec_bdp_regs *regs, uint32_t cfg_flags)
{
    uint32_t temp = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(MEC_BDP_ECIA_INFO, 0); /* disable */
    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_P80BD0); /* clear sleep enable */

    regs->ACTV80 = 0;
    regs->ACTV80A = 0;

    /* soft-reset */
    regs->CONFIG = MEC_BIT(MEC_BDP_CFG_REG_SRESET_POS);

    /* threshold level(defaults to 1) */
    temp = (cfg_flags & MEC5_BDP_CFG_FIFO_THRES_MSK) >> MEC5_BDP_CFG_FIFO_THRES_POS;
    regs->CONFIG = (regs->CONFIG & (uint32_t)~(MEC_BDP_CFG_REG_FIFO_THRH_MSK))
        | ((temp << MEC_BDP_CFG_REG_FIFO_THRH_POS) & MEC_BDP_CFG_REG_FIFO_THRH_MSK);

    /* set byte lane the alias byte is mapped to */
    if (cfg_flags & MEC_BIT(MEC5_BDP_CFG_ALIAS_EN_POS)) {
        regs->BL80A =
            ((cfg_flags & MEC5_BDP_CFG_ALIAS_BYTE_LANE_MSK) >> MEC5_BDP_CFG_ALIAS_BYTE_LANE_POS);
    }

    /* threshold interrupt? */
    if (cfg_flags & MEC_BIT(MEC5_BDP_CFG_THRH_IEN_POS)) {
        regs->IEN |= MEC_BIT(MEC_BDP_IEN_REG_THRH_POS);
    }

    /* activate */
    if (cfg_flags & MEC_BIT(MEC5_BDP_CFG_ALIAS_EN_POS)) {
        if (cfg_flags & MEC_BIT(MEC5_BDP_CFG_ALIAS_ACTV_POS)) {
            regs->ACTV80A |= MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
        }
    }

    if (cfg_flags & MEC_BIT(MEC5_BDP_CFG_ACTV_POS)) {
        regs->ACTV80 |= MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
    }

    return MEC_RET_OK;
}

int mec_hal_bdp_activate(struct mec_bdp_regs *regs, uint8_t enable, uint8_t is_alias)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (!is_alias) {
        if (enable) {
            regs->ACTV80 |= MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
        } else {
            regs->ACTV80 &= (uint8_t)~MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
        }
    } else {
        if (enable) {
            regs->ACTV80A |= MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
        } else {
            regs->ACTV80A &= (uint8_t)~MEC_BIT(MEC_BDP_ACTV_REG_EN_POS);
        }
    }

    return MEC_RET_OK;
}

int mec_hal_bdp_girq_ctrl(struct mec_bdp_regs *regs, uint8_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(MEC_BDP_ECIA_INFO, enable);

    return MEC_RET_OK;
}

int mec_hal_bdp_girq_status_clr(struct mec_bdp_regs *regs)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(MEC_BDP_ECIA_INFO);

    return MEC_RET_OK;
}

int mec_hal_bdp_fifo_thresh_set(struct mec_bdp_regs *regs, uint32_t cfg_thrh)
{
    uint32_t temp;

    if (!regs || (cfg_thrh > MEC5_BDP_CFG_FIFO_THRES_30)) {
        return MEC_RET_ERR_INVAL;
    }

    temp = (cfg_thrh & MEC5_BDP_CFG_FIFO_THRES_MSK) >> MEC5_BDP_CFG_FIFO_THRES_POS;
    regs->CONFIG = (regs->CONFIG & (uint32_t)~(MEC_BDP_CFG_REG_FIFO_THRH_MSK))
        | ((temp << MEC_BDP_CFG_REG_FIFO_THRH_POS) & MEC_BDP_CFG_REG_FIFO_THRH_MSK);

    return MEC_RET_OK;
}

const uint8_t fifo_cfg_xlat[] = {
    1u, 4u, 8u, 16u, 20u, 24u, 28u, 30u
};

uint32_t mec_hal_bdp_fifo_thresh_get(struct mec_bdp_regs *regs)
{
    if (!regs) {
        return 0;
    }

    uint32_t val =
        (regs->CONFIG & MEC_BDP_CFG_REG_FIFO_THRH_MSK) >> MEC_BDP_CFG_REG_FIFO_THRH_POS;

    return fifo_cfg_xlat[val];
}

/* The only interrupt is THRES_STAT. */
void mec_hal_bdp_intr_en(struct mec_bdp_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->IEN |= MEC_BIT(MEC_BDP_INTR_EN_THRES_POS);
    } else {
        regs->IEN &= (uint8_t)~MEC_BIT(MEC_BDP_INTR_EN_THRES_POS);
    }
}

/* All BDP status bits are read-only
 * STATUS bit[0] NOT_EMPTY is 1 if data in FIFO. 0 if FIFO empty.
 * STATUS bit[1] OVERRUN is 1 when Host writes data while FIFO is full.
 *               Cleared by reading or flushing FIFO.
 * STATUS bit[2] THRES_STAT is 1 when number of FIFO entries is >= threshold
 *              Cleared by reading FIFO to below threshold,
 *              OR flushing FIFO
 *              OR increasing FIFO threshold
 */
uint32_t mec_hal_bdp_status(struct mec_bdp_regs *regs)
{
    return regs->STATUS;
}

uint32_t mec_hal_bdp_snapshot(struct mec_bdp_regs *regs)
{
    return regs->SNAP;
}

/* BDP breaks up each 16-bit and 32-bit Host I/O write into separate
 * FIFO entries for each byte lane. Each FIFO entry is 16-bits composed of
 * 8-bit data from the byte lane and 8-bits of flags indicating the byte lane
 * and other info. We don't want to expose this directly to the application.
 * Processing: Reading the HW FIFO removes the entry.
 * Len:Lane b[3:2, 1:0]
 * 0000b 8-bit at lane 0
 * 0001b 8-bit at lane 1 may be continuation of multi-byte
 * 0010b 8-bit at lane 2 may be continuation of multi-byte
 * 0011b 8-bit at lane 3 may be continuation of multi-byte
 * 0100b 16-bit first byte, starting at lane 0
 * 0101b 16-bit first byte, starting at lane 1 (misaligned)
 * 0110b 16-bit first byte, starting at lane 2
 * 0111b 16/32-bit first byte at lane 3 misaligned, upper bytes lost.
 * 1000b 32-bit first byte at lane 0
 * 1001b 32-bit first byte at lane 1 misaligned, byte 3 lost.
 * 1010b 32-bit first byte at lane 2, upper two bytes lost.
 * 1011b 32-bit first byte at lane 3, upper three bytes lost.
 * 11xxb Invalid byte, discard.
 * If OVERRUN status set, discard any multi-byte value being constructed.
 *
 * 16-bit write to lane 0
 * 0x54_xx, 0x51_xx
 *
 * 16-bit write to lane 2
 * 0x56_xx, 0x53_xx
 *
 * 32-bit write to lane 0: 4 FIFO entries
 * 0x58_xx, 0x51_xx, 0x52_xx, 0x53_xx
 *
 *
 * API to get Host I/O cycles: data and bitmap of byte lanes
 *
 */
int mec_hal_bdp_get_host_io(struct mec_bdp_regs *regs, struct mec_bdp_io *capio)
{
    uint32_t iodata[4] = {0};
    uint32_t da = 0u;
    uint8_t iosize = 0u, blane = 0u, ioflags = 0u, iowidth = 0u;

    if (!regs || !capio) {
        return MEC_RET_ERR_INVAL;
    }

    capio->data = 0;
    capio->flags = 0;

    da = regs->DATRB;

    while (da & MEC_BIT(MEC_BDP_DATRB_NOT_EMPTY_Pos)) {
        iosize = (uint8_t)((da & MEC_BDP_DATRB_LEN_Msk) >> MEC_BDP_DATRB_LEN_Pos);
        blane = (uint8_t)((da & MEC_BDP_DATRB_LANE_Msk) >> MEC_BDP_DATRB_LANE_Pos);

        if (iosize == MEC_BDP_DATRB_LEN_IO8) {
            iodata[blane] = da & 0xffu;
            ioflags |= MEC_BIT(blane);
            if (iowidth == 0) { /* single 8-bit I/O write */
                iowidth = 1;
                break;
            } else if (iowidth == 2) {
                break;
            } else if ((iowidth == 4) && (blane == 3u)) {
                break;
            }
        } else if (iosize == MEC_BDP_DATRB_LEN_IO16B0) { /* first byte of 16-bit Host I/O write */
            iowidth = 2u;
            iodata[blane] = da & 0xffu;
            ioflags |= MEC_BIT(blane);
        } else if (iosize == MEC_BDP_DATRB_LEN_IO32B0) { /* first byte of 32-bit Host I/O write */
            iowidth = 4u;
            iodata[blane] = da & 0xffu;
            ioflags |= MEC_BIT(blane);
        } else { /* invalid and discard */
            ioflags &= (uint8_t)~MEC_BIT(blane);
            break;
        }

        da = regs->DATRB;
    }

    for (uint8_t n = 0; n < 4; n++) {
        capio->data <<= 8;
        capio->data |= iodata[3u - n];
    }

    capio->flags = ioflags & 0xfu;
    capio->flags |= ((iowidth << 4) & 0xf0);

    return 0;
}

/* end mec_bdp.c */
