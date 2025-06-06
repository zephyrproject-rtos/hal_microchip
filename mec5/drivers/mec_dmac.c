/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_dmac_api.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

/* #define MEC_DMAC_DEBUG_REGS */

#define MEC_DMA_CHAN_REGS_SIZE 0x40u

#define MEC_DMA_CHAN_ALL_STATUS (MEC_BIT(MEC_DMA_CHAN_ISTATUS_BERR_Pos) \
                                 | MEC_BIT(MEC_DMA_CHAN_ISTATUS_HFCREQ_Pos) \
                                 | MEC_BIT(MEC_DMA_CHAN_ISTATUS_DONE_Pos) \
                                 | MEC_BIT(MEC_DMA_CHAN_ISTATUS_HFCTERM_Pos))

#define MEC_DMA_CHAN_STOP_WAIT 256u

#define MEC_DMAC_GIRQ           14
#define MEC_DMAC_GIRQ_IDX       6
#define MEC_DMAC_GIRQ_NVIC_NUM  6

#define MEC_DMAC_CHAN0_ECIA_INFO  MEC5_ECIA_INFO(14, 0, 6, 24)
#define MEC_DMAC_CHAN1_ECIA_INFO  MEC5_ECIA_INFO(14, 1, 6, 25)
#define MEC_DMAC_CHAN2_ECIA_INFO  MEC5_ECIA_INFO(14, 2, 6, 26)
#define MEC_DMAC_CHAN3_ECIA_INFO  MEC5_ECIA_INFO(14, 3, 6, 27)
#define MEC_DMAC_CHAN4_ECIA_INFO  MEC5_ECIA_INFO(14, 4, 6, 28)
#define MEC_DMAC_CHAN5_ECIA_INFO  MEC5_ECIA_INFO(14, 5, 6, 29)
#define MEC_DMAC_CHAN6_ECIA_INFO  MEC5_ECIA_INFO(14, 6, 6, 30)
#define MEC_DMAC_CHAN7_ECIA_INFO  MEC5_ECIA_INFO(14, 7, 6, 31)
#define MEC_DMAC_CHAN8_ECIA_INFO  MEC5_ECIA_INFO(14, 8, 6, 32)
#define MEC_DMAC_CHAN9_ECIA_INFO  MEC5_ECIA_INFO(14, 9, 6, 33)
#define MEC_DMAC_CHAN10_ECIA_INFO MEC5_ECIA_INFO(14, 10, 6, 34)
#define MEC_DMAC_CHAN11_ECIA_INFO MEC5_ECIA_INFO(14, 11, 6, 35)
#define MEC_DMAC_CHAN12_ECIA_INFO MEC5_ECIA_INFO(14, 12, 6, 36)
#define MEC_DMAC_CHAN13_ECIA_INFO MEC5_ECIA_INFO(14, 13, 6, 37)
#define MEC_DMAC_CHAN14_ECIA_INFO MEC5_ECIA_INFO(14, 14, 6, 38)
#define MEC_DMAC_CHAN15_ECIA_INFO MEC5_ECIA_INFO(14, 15, 6, 39)
#if MEC5_DMAC_NUM_CHANNELS == 20
#define MEC_DMAC_CHAN16_ECIA_INFO MEC5_ECIA_INFO(14, 16, 6, 194)
#define MEC_DMAC_CHAN17_ECIA_INFO MEC5_ECIA_INFO(14, 17, 6, 195)
#define MEC_DMAC_CHAN18_ECIA_INFO MEC5_ECIA_INFO(14, 18, 6, 196)
#define MEC_DMAC_CHAN19_ECIA_INFO MEC5_ECIA_INFO(14, 19, 6, 197)
#endif

const uint32_t dmac_ecia_info_table[MEC5_DMAC_NUM_CHANNELS] = {
    MEC_DMAC_CHAN0_ECIA_INFO, MEC_DMAC_CHAN1_ECIA_INFO,
    MEC_DMAC_CHAN2_ECIA_INFO, MEC_DMAC_CHAN3_ECIA_INFO,
    MEC_DMAC_CHAN4_ECIA_INFO, MEC_DMAC_CHAN5_ECIA_INFO,
    MEC_DMAC_CHAN6_ECIA_INFO, MEC_DMAC_CHAN7_ECIA_INFO,
    MEC_DMAC_CHAN8_ECIA_INFO, MEC_DMAC_CHAN9_ECIA_INFO,
    MEC_DMAC_CHAN10_ECIA_INFO, MEC_DMAC_CHAN11_ECIA_INFO,
    MEC_DMAC_CHAN12_ECIA_INFO, MEC_DMAC_CHAN13_ECIA_INFO,
    MEC_DMAC_CHAN14_ECIA_INFO, MEC_DMAC_CHAN15_ECIA_INFO,
#if MEC5_DMAC_NUM_CHANNELS == 20
    MEC_DMAC_CHAN16_ECIA_INFO, MEC_DMAC_CHAN17_ECIA_INFO,
    MEC_DMAC_CHAN18_ECIA_INFO, MEC_DMAC_CHAN19_ECIA_INFO,
#endif
};

#ifdef MEC_DMAC_DEBUG_REGS
struct mec_dma_chan_regs_save {
    uint32_t  actv;
    uint32_t  mstart;
    uint32_t  mend;
    uint32_t  dstart;
    uint32_t  ctrl;
    uint32_t  istatus;
    uint32_t  ien;
    uint32_t  fsm;
};

struct mec_dma_chan_regs_save dbg_mec_dma[MEC5_DMAC_NUM_CHANNELS];
#endif

static uint32_t dmac_get_ecia_info(uint32_t channel)
{
    if (channel < MEC5_DMAC_NUM_CHANNELS) {
        return dmac_ecia_info_table[channel];
    }

    return UINT32_MAX;
}

static void dma_chan_ia_enable(uint32_t channel)
{
    uint32_t devi = dmac_get_ecia_info(channel);

    mec_hal_girq_ctrl(devi, 1u);
}

static void dma_chan_ia_disable(uint32_t channel)
{
    uint32_t devi = dmac_get_ecia_info(channel);

    mec_hal_girq_ctrl(devi, 0);
}

static void dmac_clr_ia_status(uint32_t channel)
{
    uint32_t devi = dmac_get_ecia_info(channel);

    mec_hal_girq_clr_src(devi);
}

static void dma_clr_ia_all(void)
{
    for (uint8_t chan = 0; chan < MEC5_DMAC_NUM_CHANNELS; chan++) {
        mec_hal_girq_clr_src(dmac_ecia_info_table[chan]);
    }
}

uint32_t mec_hal_dmac_girq_result(void)
{
    return mec_hal_girq_result_get(MEC_DMAC_GIRQ);
}

void mec_hal_dmac_girq_aggr(uint8_t enable)
{
    mec_hal_ecia_girq_aggr_enable(MEC_DMAC_GIRQ, enable);
}

void mec_hal_dmac_aggr_nvic_ien(uint8_t enable)
{
    if (enable) {
        NVIC_EnableIRQ(MEC_DMAC_GIRQ_NVIC_NUM);
    } else {
        NVIC_DisableIRQ(MEC_DMAC_GIRQ_NVIC_NUM);
    }
}

int mec_hal_dmac_reset(void)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    base->MCTRL |= MEC_BIT(MEC_DMAC_MCTRL_MRST_Pos);

    return MEC_RET_OK;
}

int mec_hal_dmac_enable(uint8_t enable)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (enable) {
        base->MCTRL |= MEC_BIT(MEC_DMAC_MCTRL_MACTV_Pos);
    } else {
        base->MCTRL &= (uint32_t)~MEC_BIT(MEC_DMAC_MCTRL_MACTV_Pos);
    }

    return MEC_RET_OK;
}

bool mec_hal_dmac_is_enabled(void)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (base->MCTRL & MEC_BIT(MEC_DMAC_MCTRL_MACTV_Pos)) {
        return true;
    }

    return false;
}

int mec_hal_dma_chan_ia_status_clr(enum mec_dmac_channel channel)
{
    if (channel >= MEC5_DMAC_NUM_CHANNELS) {
        return MEC_RET_ERR_INVAL;
    }

    dmac_clr_ia_status(channel);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ia_status_clr_mask(uint32_t chanmsk)
{
    chanmsk &= MEC_DMAC_ALL_CHAN_MASK;
    if (!chanmsk) {
        return MEC_RET_OK;
    }

    MEC_ECIA0->GIRQ[MEC_DMAC_GIRQ_IDX].SOURCE = chanmsk;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ia_enable(enum mec_dmac_channel channel)
{
    if (channel >= MEC5_DMAC_NUM_CHANNELS) {
        return MEC_RET_ERR_INVAL;
    }

    dma_chan_ia_enable(channel);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ia_disable(enum mec_dmac_channel channel)
{
    if (channel >= MEC5_DMAC_NUM_CHANNELS) {
        return MEC_RET_ERR_INVAL;
    }

    dma_chan_ia_disable(channel);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ia_enable_mask(uint32_t chan_mask)
{
    if (!chan_mask) {
        return MEC_RET_OK;
    }

    for (uint32_t chan = 0; chan < MEC5_DMAC_NUM_CHANNELS; chan++) {
        if (chan_mask & MEC_BIT(chan)) {
            dma_chan_ia_enable(chan);
        }
    }

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ia_disable_mask(uint32_t chan_mask)
{
    if (!chan_mask) {
        return MEC_RET_OK;
    }

    for (uint32_t chan = 0; chan < MEC5_DMAC_NUM_CHANNELS; chan++) {
        if (chan_mask & MEC_BIT(chan)) {
            dma_chan_ia_disable(chan);
        }
    }

    return MEC_RET_OK;
}

int mec_hal_dmac_init(uint32_t chan_mask)
{
    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_DMA); /* clocks gated ON */
    mec_hal_dmac_reset();
    dma_clr_ia_all();
    mec_hal_dmac_enable(1u);
    mec_hal_dma_chan_ia_enable_mask(chan_mask);

    return MEC_RET_OK;
}

uintptr_t mec_hal_dma_chan_reg_addr(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return 0u;
    }

    return (uintptr_t)&base->CHAN[chan];
}

int mec_hal_dma_chan_init(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    regs->MADDR_END = 0;
    regs->MADDR = 0;

    regs->ACTV = 0;
    regs->CTRL = 0;
    regs->DADDR = 0;
    regs->IEN = 0;
    regs->ISTATUS = MEC_DMA_CHAN_ALL_STATUS;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_intr_status(enum mec_dmac_channel chan, uint32_t *status)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t hwsts = 0u, logical_sts = 0u;

    if (!status || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    hwsts = base->CHAN[chan].ISTATUS;
    if (hwsts & MEC_BIT(MEC_DMA_CHAN_ISTATUS_BERR_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_BUS_ERR_POS);
    }

    if (hwsts & MEC_BIT(MEC_DMA_CHAN_ISTATUS_HFCREQ_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_HFC_OVF_POS);
    }

    if (hwsts & MEC_BIT(MEC_DMA_CHAN_ISTATUS_DONE_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_DONE_POS);
    }

    if (hwsts & MEC_BIT(MEC_DMA_CHAN_ISTATUS_HFCTERM_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_HFC_TERM_POS);
    }

    *status = logical_sts;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_intr_status_clr(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    base->CHAN[chan].ISTATUS = MEC_DMA_CHAN_ALL_STATUS;
    MEC_ECIA0->GIRQ[MEC_DMAC_GIRQ_IDX].SOURCE = MEC_BIT(chan);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_intr_en(enum mec_dmac_channel chan, uint8_t ien)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t ien_val = 0u;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    if (ien) {
        ien_val = MEC_BIT(MEC_DMA_CHAN_IEN_DONE_Pos) | MEC_BIT(MEC_DMA_CHAN_IEN_BERR_Pos);
    }

    base->CHAN[chan].IEN = ien_val;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_go(struct mec_dma_chan_regs *regs)
{
    uint32_t ctrl = 0;
    uint8_t start_pos = MEC_DMA_CHAN_CTRL_HFC_RUN_Pos;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    ctrl = regs->CTRL;

    if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_DHFC_Pos)) {
        start_pos = MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos;
    }

    ctrl &= (uint32_t)~(MEC_BIT(MEC_DMA_CHAN_CTRL_HFC_RUN_Pos)
                        | MEC_BIT(MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos));

#ifdef MEC_DMAC_DEBUG_REGS
    dbg_mec_dma[chan].actv = MEC_BIT(MEC_DMA_CHAN_ACTV_EN_Pos);
    dbg_mec_dma[chan].mstart = regs->MADDR;
    dbg_mec_dma[chan].mend = regs->MADDR_END;
    dbg_mec_dma[chan].dstart = regs->DADDR;
    dbg_mec_dma[chan].ctrl = ctrl | MEC_BIT(start_pos);
    dbg_mec_dma[chan].istatus = regs->ISTATUS;
    dbg_mec_dma[chan].ien = regs->IEN;
    dbg_mec_dma[chan].fsm = regs->FSM;
#endif

    regs->CTRL = ctrl | MEC_BIT(start_pos);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_start(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    return mec_hal_dma_chan_go(regs);
}

int mec_hal_dma_chan_start2(enum mec_dmac_channel chan, uint32_t flags)
{
    uint32_t ctrl = 0;
    struct mec_dmac_regs *base = MEC_DMAC;
    uint8_t start_pos = MEC_DMA_CHAN_CTRL_HFC_RUN_Pos;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    regs->IEN = 0;
    regs->ISTATUS = 0xffu;
    ctrl = regs->CTRL;

    if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_DHFC_Pos)) {
        start_pos = MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos;
    }

    ctrl &= (uint32_t)~(MEC_BIT(MEC_DMA_CHAN_CTRL_HFC_RUN_Pos)
                        | MEC_BIT(MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos));
    ctrl |= MEC_BIT(start_pos);

    if (flags & MEC_BIT(0)) {
        regs->IEN = MEC_BIT(MEC_DMA_CHAN_IEN_BERR_Pos) | MEC_BIT(MEC_DMA_CHAN_IEN_DONE_Pos);
    }

    regs->CTRL = ctrl;
    regs->ACTV = MEC_BIT(MEC_DMA_CHAN_ACTV_EN_Pos);

    return MEC_RET_OK;
}

bool mec_hal_dma_chan_is_busy(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return false;
    }

    if (base->CHAN[chan].CTRL & MEC_BIT(MEC_DMA_CHAN_CTRL_BUSY_Pos)) {
        return true;
    }

    return false;
}

int mec_hal_dma_chan_halt(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t halt = (MEC_BIT(MEC_DMA_CHAN_CTRL_HFC_RUN_Pos)
                     | MEC_BIT(MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos));

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    regs->CTRL &= ~halt;
    regs->ACTV = 0;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_stop(enum mec_dmac_channel chan)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t wait_cnt = MEC_DMA_CHAN_STOP_WAIT;
    int ret = MEC_RET_OK;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    if (regs->CTRL & MEC_BIT(MEC_DMA_CHAN_CTRL_BUSY_Pos)) {
        regs->CTRL |= MEC_BIT(MEC_DMA_CHAN_CTRL_ABORT_Pos);
        /* should stop on next byte boundary */
        while (regs->CTRL & MEC_BIT(MEC_DMA_CHAN_CTRL_BUSY_Pos)) {
            if (!wait_cnt) {
                ret = MEC_RET_ERR_TIMEOUT;
                break;
            }
            wait_cnt--;
        }
    }

    regs->CTRL &= (uint32_t)~(MEC_BIT(MEC_DMA_CHAN_CTRL_HFC_RUN_Pos)
                              | MEC_BIT(MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos));
    regs->ACTV = 0;

    return ret;
}

int mec_hal_dma_chan_ctrl_get(enum mec_dmac_channel chan, uint32_t *ctrl)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    struct mec_dma_chan_regs *regs = NULL;

    if ((chan >= MEC_DMAC_CHAN_MAX) || !ctrl) {
        return MEC_RET_ERR_INVAL;
    }

    regs = &base->CHAN[chan];
    *ctrl = regs->CTRL;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_ien(enum mec_dmac_channel chan, uint8_t iflags, uint8_t enable)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    struct mec_dma_chan_regs *regs = NULL;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    regs = &base->CHAN[chan];
    if (enable) {
        regs->IEN |= (uint32_t)iflags;
    } else {
        regs->IEN &= (uint32_t)~iflags;
    }

    return MEC_RET_OK;
}

int mec_hal_chan_regs_get(enum mec_dmac_channel chan, uint32_t *regbuf, uint8_t n)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    struct mec_dma_chan_regs *regs = NULL;

    if ((chan >= MEC_DMAC_CHAN_MAX) || !regbuf || (n < 8u)) {
        return MEC_RET_ERR_INVAL;
    }

    regs = &base->CHAN[chan];
    regbuf[0] = regs->ACTV;
    regbuf[1] = regs->MADDR;
    regbuf[2] = regs->MADDR_END;
    regbuf[3] = regs->DADDR;
    regbuf[4] = regs->CTRL;
    regbuf[5] = regs->ISTATUS;
    regbuf[6] = regs->IEN;
    regbuf[7] = regs->FSM;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_hwfc_set(enum mec_dmac_channel chan, enum mec_dmac_hwfc_dev_id hwfc_dev,
                              uintptr_t dev_addr)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t ctrl = 0;

    if ((chan >= MEC_DMAC_CHAN_MAX) || (hwfc_dev >= MEC_DMAC_DEV_ID_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    ctrl = regs->CTRL & (uint32_t)~(MEC_DMA_CHAN_CTRL_HFC_DEV_Msk);
    ctrl |= (((uint32_t)hwfc_dev << MEC_DMA_CHAN_CTRL_HFC_DEV_Pos)
             & MEC_DMA_CHAN_CTRL_HFC_DEV_Msk);
    regs->CTRL = ctrl;
    regs->DADDR = dev_addr;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_dir_set(enum mec_dmac_channel chan, enum mec_dmac_dir dir)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if ((chan >= MEC_DMAC_CHAN_MAX) || (dir >= MEC_DMAC_DIR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    if (dir == MEC_DMAC_DIR_MEM_TO_DEV) {
        regs->CTRL |= MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_dma_chan_dir_get(enum mec_dmac_channel chan, enum mec_dmac_dir * dir)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (!dir || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    *dir = MEC_DMAC_DIR_DEV_TO_MEM;
    if (base->CHAN[chan].CTRL & MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        *dir = MEC_DMAC_DIR_MEM_TO_DEV;
    }

    return MEC_RET_OK;
}

int mec_hal_dma_chan_mem_set(enum mec_dmac_channel chan, uintptr_t maddr, size_t nbytes)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    regs->MADDR = maddr;
    regs->MADDR_END = maddr + nbytes;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_mem_units_set(enum mec_dmac_channel chan, enum mec_dmac_unit_size unitsz)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t ctrl = 0, v = 0;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    v = 1u;
    if ((unitsz == 4u) || (unitsz == 2u)) {
        v = unitsz;
    }

    v <<= MEC_DMA_CHAN_CTRL_UNITSZ_Pos;
    ctrl = regs->CTRL & (uint32_t)~MEC_DMA_CHAN_CTRL_UNITSZ_Msk;
    ctrl |= v;
    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

int mec_hal_dma_chan_rem_bytes(enum mec_dmac_channel chan, uint32_t *remsz)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t mstart = 0, mend = 0, nrem = 0;

    if (!remsz || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    nrem = 0u;
    mend = regs->MADDR_END;
    mstart = regs->MADDR;
    if (mend > mstart) {
        nrem = mend - mstart;
    }

    *remsz = nrem;

    return 0;
}

int mec_hal_dma_chan_reload(enum mec_dmac_channel chan, uintptr_t src, uintptr_t dest,
                            size_t nbytes)
{
    struct mec_dmac_regs *base = MEC_DMAC;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    /* ensure HW is "done" by mstart == mend */
    regs->MADDR = base->CHAN[chan].MADDR_END;
    regs->MADDR_END = 0; /* keep mend <= mstart */

    if (regs->CTRL & MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        regs->MADDR = src;
        regs->MADDR_END = src + nbytes;
        regs->DADDR = dest;
    } else { /* device to memory */
        regs->MADDR = dest;
        regs->MADDR_END = dest + nbytes;
        regs->DADDR = src;
    }

    return MEC_RET_OK;
}

/* Configure a DMA channel for transfer.
 * DMA termination is based on channel memory start address incrementing until it matches
 * the memory end address. Device has start address register but no end address.
 * Control register has a bit to select the direction Memory to Device or Device to Memory.
 * Memory to Device: source is memory, destination is device.
 *  Control direction bit = 1 (Mem2Dev)
 *  Control Increment Mem = 1
 *  Control Increment Dev is optional. Current MCHP peripherals which can use central DMA
 *  expose their data as a single data register.
 *  Memory Start address reg = source address
 *  Memory End addresss reg = source address + transfer size in bytes
 *  Device Start address reg = destination address
 *
 * Device to Memory: source is device HW register, destination is memory
 *  Control direction bit = 0 (Dev2Mem)
 *  Control Increment Mem = 1 may be 0 if writing same value to device.
 *  Control Increment Dev is optional.
 *  Memory Start address reg = destination address (memory)
 *  Memory End address regs = destination address + transfer size in bytes
 *  Device Start address reg = source address (device register address)
 */
int mec_hal_dma_chan_cfg(enum mec_dmac_channel chan, struct mec_dma_cfg *cfg)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t ctrl = 0u; /* dir = Dev2Mem, IncrMem=0, IncrDev=0 */
    uint32_t usz = 1u;

    if (!cfg || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_dma_chan_init(chan);

    if ((cfg->unitsz == 4u) || (cfg->unitsz == 2u)) {
        usz = cfg->unitsz;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    ctrl = usz << MEC_DMA_CHAN_CTRL_UNITSZ_Pos;
    if (cfg->dir == MEC_DMAC_DIR_MEM_TO_DEV) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos);
        regs->MADDR = cfg->src_addr;
        regs->MADDR_END = cfg->src_addr + cfg->nbytes;
        regs->DADDR = cfg->dst_addr;
        if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_SRC_ADDR) {
            ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos);
        }
        if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_DST_ADDR) {
            ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos);
        }
    } else { /* device(source address) to memory(destination address) */
        regs->MADDR = cfg->dst_addr;
        regs->MADDR_END = cfg->dst_addr + cfg->nbytes;
        regs->DADDR = cfg->src_addr;
        if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_SRC_ADDR) {
            ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos);
        }
        if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_DST_ADDR) {
            ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos);
        }
    }

    if (cfg->flags & MEC_DMA_CFG_FLAG_SWFLC) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_DHFC_Pos);
    }

    ctrl |= (((uint32_t)cfg->hwfc_dev << MEC_DMA_CHAN_CTRL_HFC_DEV_Pos)
             & MEC_DMA_CHAN_CTRL_HFC_DEV_Msk);

    regs->CTRL = ctrl;
    regs->ACTV |= MEC_BIT(MEC_DMA_CHAN_ACTV_EN_Pos);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_cfg_get(enum mec_dmac_channel chan, struct mec_dma_cfg *cfg)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t ctrl = 0u, dstart = 0u, mstart = 0u, mend = 0u;

    if (!cfg || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    cfg->flags = 0u;

    ctrl = regs->CTRL;
    if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_DHFC_Pos)) {
        cfg->flags |= MEC_DMA_CFG_FLAG_SWFLC;
    }

    cfg->hwfc_dev =  (ctrl & MEC_DMA_CHAN_CTRL_HFC_DEV_Msk) >> MEC_DMA_CHAN_CTRL_HFC_DEV_Pos;

    if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        cfg->dir = MEC_DMAC_DIR_MEM_TO_DEV;
        if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_SRC_ADDR;
        }
        if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_DST_ADDR;
        }
    } else {
        cfg->dir = MEC_DMAC_DIR_DEV_TO_MEM;
        if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_DST_ADDR;
        }
        if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_SRC_ADDR;
        }
    }

    cfg->nbytes = 0u;
    mstart = regs->MADDR;
    mend = regs->MADDR_END;
    dstart = regs->DADDR;
    if (mend > mstart) {
        cfg->nbytes = mend - mstart;
    }

    if (ctrl & MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        cfg->src_addr = mstart;
        cfg->dst_addr = dstart;
    } else {
        cfg->src_addr = dstart;
        cfg->dst_addr = mstart;
    }

    return MEC_RET_OK;
}

/* chan_cfg
 * b[0] = direction: 0=dev2Mem, 1=Mem2Dev
 * b[7:1] = 7-bit HWFlowCtrl Device ID
 * b[8] = 0 do not increment memory address, 1 increment memory address
 * b[9] = 0 do not increment device address, 1 increment device address
 * b[10] = 0 do not lock channel in arbiter, 1 lock channel in arbiter
 * b[11] = 0 HW flow control, 1 = SW flow control
 * b[15:12] = transfer size units: 1, 2, or 4
 */
int mec_hal_dma_chan_cfg2(enum mec_dmac_channel chan, uint32_t nbytes,
                          uint32_t maddr, uint32_t daddr, uint32_t chan_cfg)
{
    struct mec_dmac_regs *base = MEC_DMAC;
    uint32_t halt = (MEC_BIT(MEC_DMA_CHAN_CTRL_HFC_RUN_Pos)
                     | MEC_BIT(MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos));
    uint32_t ctrl = 0u;
    uint32_t temp = 0u;
    uint8_t ien = 0u;

    if (chan >= MEC_DMAC_CHAN_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_dma_chan_regs *regs = &base->CHAN[chan];

    regs->CTRL &= ~halt;
    regs->IEN = 0;
    regs->ISTATUS = UINT8_MAX;

    ctrl = MEC_HAL_DMA_CHAN_CFG_GET_HWDEV(chan_cfg);
    ctrl <<= MEC_DMA_CHAN_CTRL_HFC_DEV_Pos;

    temp = MEC_HAL_DMA_CHAN_CFG_GET_UNITSZ(chan_cfg);
    ctrl |= (temp << MEC_DMA_CHAN_CTRL_UNITSZ_Pos);

    if (MEC_HAL_DMA_CHAN_CFG_IS_INCRM(chan_cfg)) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos);
    }

    if (MEC_HAL_DMA_CHAN_CFG_IS_INCRD(chan_cfg)) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos);
    }

    if (MEC_HAL_DMA_CHAN_CFG_IS_LOCK(chan_cfg)) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_LOCK_ARB_Pos);
    }

    if (MEC_HAL_DMA_CHAN_CFG_IS_MEM2DEV(chan_cfg)) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos);
    }

    if (MEC_HAL_DMA_CHAN_CFG_IS_SW_FLCM(chan_cfg)) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_DHFC_Pos);
    }

    if (chan_cfg & MEC_HAL_DMA_CHAN_CFG_DONE_IEN) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_DONE_Pos);
    }

    if (chan_cfg & MEC_HAL_DMA_CHAN_CFG_BERR_IEN) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_BERR_Pos);
    }

    regs->MADDR = maddr;
    regs->MADDR_END = maddr + nbytes;
    regs->DADDR = daddr;

    regs->IEN = ien;
    regs->CTRL = ctrl;
    regs->ACTV |= MEC_BIT(MEC_DMA_CHAN_ACTV_EN_Pos);

    return MEC_RET_OK;
}

int mec_hal_dma_chan_cfg3(enum mec_dmac_channel chan, struct mec_dma_cfg3 *cfg3)
{
    struct mec_dma_chan_regs *regs = NULL;
    uint32_t ctrl = 0;
    uint8_t ien = 0;

    if ((chan >= MEC_DMAC_CHAN_MAX) || (!cfg3)) {
        return MEC_RET_ERR_INVAL;
    }

    regs = (struct mec_dma_chan_regs *)(MEC_DMAC_BASE + ((chan + 1u) * MEC_DMA_CHAN_REGS_SIZE));

    regs->CTRL = 0;
    regs->IEN = 0;
    regs->ACTV = 1u;
    regs->ISTATUS = UINT8_MAX;

    regs->MADDR = cfg3->mem_addr;
    regs->MADDR_END = cfg3->mem_addr + cfg3->nbytes;
    regs->DADDR = cfg3->dev_addr;

    ctrl = ((uint32_t)(cfg3->unitsz & 0x7u) << MEC_DMA_CHAN_CTRL_UNITSZ_Pos);
    ctrl |= (((uint32_t)cfg3->hwfc_dev & 0x7fu) << MEC_DMA_CHAN_CTRL_HFC_DEV_Pos);
    if (cfg3->dir == MEC_DMAC_DIR_MEM_TO_DEV) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_MEM2DEV_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_INCR_MEM_ADDR) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRM_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_INCR_DEV_ADDR) {
        ctrl |= MEC_BIT(MEC_DMA_CHAN_CTRL_INCRD_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_DONE_IEN) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_DONE_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_BERR_IEN) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_BERR_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_HWFLC_ERR) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_HFCREQ_Pos);
    }

    if (cfg3->flags & MEC_DMA_CFG3_FLAG_HWFLC_TERM) {
        ien |= MEC_BIT(MEC_DMA_CHAN_IEN_HFCTERM_Pos);
    }

    regs->CTRL = ctrl;
    regs->IEN = ien;

    return MEC_RET_OK;
}

/* end mec_dmac.c */
