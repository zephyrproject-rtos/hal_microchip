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

#define MEC_DMA_CHAN_ALL_STATUS (MEC_BIT(DMA_CHAN_ISTATUS_BERR_Pos) \
                                 | MEC_BIT(DMA_CHAN_ISTATUS_HFCREQ_Pos) \
                                 | MEC_BIT(DMA_CHAN_ISTATUS_DONE_Pos) \
                                 | MEC_BIT(DMA_CHAN_ISTATUS_HFCTERM_Pos))

#define MEC_DMA_CHAN_STOP_WAIT 256u

#define MEC_DMAC_GIRQ     14
#define MEC_DMAC_GIRQ_IDX 6

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

struct mec_dmac_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint8_t num_channels;
    uint32_t devi[MEC5_DMAC_NUM_CHANNELS];
};

const struct mec_dmac_info dmac_instances[] = {
    {DMAC_BASE, MEC_PCR_DMA, MEC5_DMAC_NUM_CHANNELS,
     { MEC_DMAC_CHAN0_ECIA_INFO, MEC_DMAC_CHAN1_ECIA_INFO,
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
     },
    }
};
#define MEC_DMAC_NUM_INSTANCES                                                \
    (sizeof(dmac_instances) / sizeof(struct mec_dmac_info))

static int dmac_get_instance(struct dma_regs *base)
{
    for (size_t i = 0; i < MEC_DMAC_NUM_INSTANCES; i++) {
        if (dmac_instances[i].base_addr == (uintptr_t)base) {
            return (int)i;
        }
    }

    return -1;
}

static struct mec_dmac_info const *dmac_get_info(struct dma_regs *base)
{
    int instance = dmac_get_instance(base);

    if (instance >= 0) {
        return &dmac_instances[instance];
    }

    return NULL;
}

static void dma_chan_ia_enable(int instance, uint32_t channel)
{
    uint32_t devi = dmac_instances[instance].devi[channel];

    mec_girq_ctrl(devi, 1u);
}

static void dma_chan_ia_disable(int instance, uint32_t channel)
{
    uint32_t devi = dmac_instances[instance].devi[channel];

    mec_girq_ctrl(devi, 0);
}

static void dmac_clr_ia_status(int instance, uint32_t channel)
{
    uint32_t devi = dmac_instances[instance].devi[channel];

    mec_girq_clr_src(devi);
}

static void dma_clr_ia_all(const struct mec_dmac_info *info)
{
    for (uint8_t chan = 0; chan < info->num_channels; chan++) {
        mec_girq_clr_src(info->devi[chan]);
    }
}

int mec_dmac_reset(struct dma_regs *base)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->MCTRL |= MEC_BIT(DMA_MCTRL_MRST_Pos);

    return MEC_RET_OK;
}

int mec_dmac_enable(struct dma_regs *base, uint8_t enable)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        base->MCTRL |= MEC_BIT(DMA_MCTRL_MACTV_Pos);
    } else {
        base->MCTRL &= (uint32_t)~MEC_BIT(DMA_MCTRL_MACTV_Pos);
    }

    return MEC_RET_OK;
}

bool mec_dmac_is_enabled(struct dma_regs *base)
{
    if ((uintptr_t)base != (uintptr_t)DMAC_BASE) {
        return false;
    }

    if (base->MCTRL & MEC_BIT(DMA_MCTRL_MACTV_Pos)) {
        return true;
    }

    return false;
}

int mec_dma_chan_ia_status_clr(struct dma_regs *base, enum mec_dmac_channel channel)
{
    int instance = dmac_get_instance(base);

    if ((instance < 0) || (channel >= MEC5_DMAC_NUM_CHANNELS)) {
        return MEC_RET_ERR_INVAL;
    }

    dmac_clr_ia_status(instance, channel);

    return MEC_RET_OK;
}

int mec_dma_chan_ia_result(struct dma_regs *base, uint32_t *result)
{
    int instance = dmac_get_instance(base);

    if (instance < 0) {
        return MEC_RET_ERR_INVAL;
    }

    if (result) {
        *result = ECIA0->GIRQ[MEC_DMAC_GIRQ_IDX].RESULT;
    }

    return MEC_RET_OK;
}

int mec_dma_chan_ia_status_clr_mask(struct dma_regs *base, uint32_t chanmsk)
{
    int instance = dmac_get_instance(base);

    if (instance < 0) {
        return MEC_RET_ERR_INVAL;
    }

    chanmsk &= MEC_DMAC_ALL_CHAN_MASK;
    if (!chanmsk) {
        return MEC_RET_OK;
    }

    ECIA0->GIRQ[MEC_DMAC_GIRQ_IDX].SOURCE = chanmsk;

    return MEC_RET_OK;
}

int mec_dma_chan_ia_enable(struct dma_regs *base, enum mec_dmac_channel channel)
{
    int instance = dmac_get_instance(base);

    if ((instance < 0) || (channel >= MEC5_DMAC_NUM_CHANNELS)) {
        return MEC_RET_ERR_INVAL;
    }

    dma_chan_ia_enable(instance, channel);

    return MEC_RET_OK;
}

int mec_dma_chan_ia_disable(struct dma_regs *base, enum mec_dmac_channel channel)
{
    int instance = dmac_get_instance(base);

    if ((instance < 0) || (channel >= MEC5_DMAC_NUM_CHANNELS)) {
        return MEC_RET_ERR_INVAL;
    }

    dma_chan_ia_disable(instance, channel);

    return MEC_RET_OK;
}

int mec_dma_chan_ia_enable_mask(struct dma_regs *base, uint32_t chan_mask)
{
    int instance = dmac_get_instance(base);

    if (instance < 0) {
        return MEC_RET_ERR_INVAL;
    }

    for (uint32_t chan = 0; chan < MEC5_DMAC_NUM_CHANNELS; chan++) {
        if (chan_mask & MEC_BIT(chan)) {
            dma_chan_ia_enable(instance, chan);
        }
    }

    return MEC_RET_OK;
}

int mec_dma_chan_ia_disable_mask(struct dma_regs *base, uint32_t chan_mask)
{
    int instance = dmac_get_instance(base);

    if (instance < 0) {
        return MEC_RET_ERR_INVAL;
    }

    for (uint32_t chan = 0; chan < MEC5_DMAC_NUM_CHANNELS; chan++) {
        if (chan_mask & MEC_BIT(chan)) {
            dma_chan_ia_disable(instance, chan);
        }
    }

    return MEC_RET_OK;
}

int mec_dmac_init(struct dma_regs *base, uint32_t chan_mask)
{
    const struct mec_dmac_info *info = dmac_get_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(info->pcr_id); /* clocks gated ON */
    mec_dmac_reset(base);
    dma_clr_ia_all(info);
    mec_dmac_enable(base, 1u);
    mec_dma_chan_ia_enable_mask(base, chan_mask);

    return MEC_RET_OK;
}

int mec_dma_chan_init(struct dma_regs *base, enum mec_dmac_channel chan)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    base->CHAN[chan].MEND = 0;
    base->CHAN[chan].MSTART = 0;

    base->CHAN[chan].ACTV = 0;
    base->CHAN[chan].CTRL = 0;
    base->CHAN[chan].DSTART = 0;
    base->CHAN[chan].IEN = 0;
    base->CHAN[chan].ISTATUS = MEC_DMA_CHAN_ALL_STATUS;

    return MEC_RET_OK;
}

int mec_dma_chan_intr_status(struct dma_regs *base, enum mec_dmac_channel chan, uint32_t *status)
{
    uint32_t hwsts = 0u, logical_sts = 0u;

    if (!base || !status || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    hwsts = base->CHAN[chan].ISTATUS;
    if (hwsts & MEC_BIT(DMA_CHAN_ISTATUS_BERR_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_BUS_ERR_POS);
    }

    if (hwsts & MEC_BIT(DMA_CHAN_ISTATUS_HFCREQ_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_HFC_OVF_POS);
    }

    if (hwsts & MEC_BIT(DMA_CHAN_ISTATUS_DONE_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_DONE_POS);
    }

    if (hwsts & MEC_BIT(DMA_CHAN_ISTATUS_HFCTERM_Pos)) {
        logical_sts |= MEC_BIT(MEC_DMA_CHAN_STS_HFC_TERM_POS);
    }

    *status = logical_sts;

    return MEC_RET_OK;
}

int mec_dma_chan_intr_status_clr(struct dma_regs *base, enum mec_dmac_channel chan)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    base->CHAN[chan].ISTATUS = MEC_DMA_CHAN_ALL_STATUS;
    ECIA0->GIRQ[MEC_DMAC_GIRQ_IDX].SOURCE = MEC_BIT(chan);

    return MEC_RET_OK;
}

int mec_dma_chan_intr_en(struct dma_regs *base, enum mec_dmac_channel chan, uint8_t ien)
{
    uint32_t ien_val = 0u;

    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (ien) {
        ien_val = MEC_BIT(DMA_CHAN_IEN_DONE_Pos) | MEC_BIT(DMA_CHAN_IEN_BERR_Pos);
    }

    base->CHAN[chan].IEN = ien_val;

    return MEC_RET_OK;
}

int mec_dma_chan_start(struct dma_regs *base, enum mec_dmac_channel chan)
{
    uint8_t start_pos = DMA_CHAN_CTRL_HFC_RUN_Pos;

    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_DHFC_Pos)) {
        start_pos = DMA_CHAN_CTRL_SWFC_RUN_Pos;
    }

    base->CHAN[chan].CTRL |= MEC_BIT(start_pos);

    return MEC_RET_OK;
}

bool mec_dma_chan_is_busy(struct dma_regs *base, enum mec_dmac_channel chan)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return false;
    }

    if (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_BUSY_Pos)) {
        return true;
    }

    return false;
}

int mec_dma_chan_halt(struct dma_regs *base, enum mec_dmac_channel chan)
{
    uint32_t halt = (MEC_BIT(DMA_CHAN_CTRL_HFC_RUN_Pos) | MEC_BIT(DMA_CHAN_CTRL_SWFC_RUN_Pos));

    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return false;
    }

    base->CHAN[chan].CTRL &= ~halt;

    return MEC_RET_OK;
}

int mec_dma_chan_stop(struct dma_regs *base, enum mec_dmac_channel chan)
{
    uint32_t wait_cnt = MEC_DMA_CHAN_STOP_WAIT;

    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return false;
    }

    if (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_BUSY_Pos)) {
        base->CHAN[chan].CTRL |= MEC_BIT(DMA_CHAN_CTRL_ABORT_Pos);
        /* should stop on next byte boundary */
        while (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_BUSY_Pos)) {
            if (!wait_cnt) {
                return MEC_RET_ERR_TIMEOUT;
            }
            wait_cnt--;
        }
    }

    return MEC_RET_OK;
}

int mec_dma_chan_hwfc_set(struct dma_regs *base, enum mec_dmac_channel chan,
                          enum mec_dmac_hwfc_dev_id hwfc_dev, uintptr_t dev_addr)
{
    uint32_t ctrl;

    if (!base || (chan >= MEC_DMAC_CHAN_MAX) || (hwfc_dev >= MEC_DMAC_DEV_ID_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    ctrl = base->CHAN[chan].CTRL & ~(DMA_CHAN_CTRL_HFC_DEV_Msk);
    ctrl |= (uint32_t)hwfc_dev << DMA_CHAN_CTRL_HFC_DEV_Pos;
    base->CHAN[chan].CTRL = ctrl;
    base->CHAN[chan].DSTART = dev_addr;

    return MEC_RET_OK;
}

int mec_dma_chan_dir_set(struct dma_regs *base, enum mec_dmac_channel chan,
                         enum mec_dmac_dir dir)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX) || (dir >= MEC_DMAC_DIR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (dir == MEC_DMAC_DIR_MEM_TO_DEV) {
        base->CHAN[chan].CTRL |= MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos);
    } else {
        base->CHAN[chan].CTRL &= (uint32_t)~MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos);
    }

    return MEC_RET_OK;
}

int mec_dma_chan_dir_get(struct dma_regs *base, enum mec_dmac_channel chan,
                         enum mec_dmac_dir * dir)
{
    if (!base || !dir || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    *dir = MEC_DMAC_DIR_DEV_TO_MEM;
    if (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        *dir = MEC_DMAC_DIR_MEM_TO_DEV;
    }

    return MEC_RET_OK;
}

int mec_dma_chan_mem_set(struct dma_regs *base, enum mec_dmac_channel chan,
                         uintptr_t maddr, size_t nbytes)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    base->CHAN[chan].MSTART = maddr;
    base->CHAN[chan].MEND = maddr + nbytes;

    return MEC_RET_OK;
}

int mec_dma_chan_mem_units_set(struct dma_regs *base, enum mec_dmac_channel chan,
                               enum mec_dmac_unit_size unitsz)
{
    uint32_t ctrl, v;

    if (!base || (chan >= MEC_DMAC_CHAN_MAX) || (unitsz >= MEC_DMAC_UNIT_SIZE_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    v = (1u << (unitsz + DMA_CHAN_CTRL_UNITSZ_Pos));
    ctrl = base->CHAN[chan].CTRL & ~DMA_CHAN_CTRL_UNITSZ_Msk;
    ctrl |= (v << DMA_CHAN_CTRL_UNITSZ_Pos);
    base->CHAN[chan].CTRL = ctrl;

    return MEC_RET_OK;
}

int mec_dma_chan_rem_bytes(struct dma_regs *base, enum mec_dmac_channel chan, uint32_t *remsz)
{
    uint32_t mstart, mend, nrem;

    if (!base || !remsz || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    nrem = 0u;
    mend = base->CHAN[chan].MEND;
    mstart = base->CHAN[chan].MSTART;
    if (mend > mstart) {
        nrem = mend - mstart;
    }

    *remsz = nrem;

    return 0;
}

int mec_dma_chan_reload(struct dma_regs *base, enum mec_dmac_channel chan,
                        uintptr_t src, uintptr_t dest, size_t nbytes)
{
    if (!base || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    /* ensure HW is "done" by mstart == mend */
    base->CHAN[chan].MSTART = base->CHAN[chan].MEND;
    base->CHAN[chan].MEND = 0; /* keep mend <= mstart */

    if (base->CHAN[chan].CTRL & MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        base->CHAN[chan].MSTART = src;
        base->CHAN[chan].MEND = src + nbytes;
        base->CHAN[chan].DSTART = dest;
    } else { /* device to memory */
        base->CHAN[chan].MSTART = dest;
        base->CHAN[chan].MEND = dest + nbytes;
        base->CHAN[chan].DSTART = src;
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
int mec_dma_chan_cfg(struct dma_regs *base, enum mec_dmac_channel chan, struct mec_dma_cfg *cfg)
{
    uint32_t ctrl = 0u; /* dir = Dev2Mem, IncrMem=0, IncrDev=0 */

    if (!base || !cfg || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    mec_dma_chan_init(base, chan);

    ctrl = (1u << (cfg->unitsz + DMA_CHAN_CTRL_UNITSZ_Pos));
    if (cfg->dir == MEC_DMAC_DIR_MEM_TO_DEV) {
        ctrl |= MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos);
        base->CHAN[chan].MSTART = cfg->src_addr;
        base->CHAN[chan].MEND = cfg->src_addr + cfg->nbytes;
        base->CHAN[chan].DSTART = cfg->dst_addr;
    } else { /* device(source address) to memory(destination address) */
        base->CHAN[chan].MSTART = cfg->dst_addr;
        base->CHAN[chan].MEND = cfg->dst_addr + cfg->nbytes;
        base->CHAN[chan].DSTART = cfg->src_addr;
    }

    if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_SRC_ADDR) {
        ctrl |= MEC_BIT(DMA_CHAN_CTRL_INCRM_Pos);
    }
    if (cfg->flags & MEC_DMA_CFG_FLAG_INCR_DST_ADDR) {
        ctrl |= MEC_BIT(DMA_CHAN_CTRL_INCRD_Pos);
    }

    if (cfg->hwfc_dev < MEC_DMAC_DEV_ID_NONE) {
        ctrl |= (((uint32_t)cfg->hwfc_dev << DMA_CHAN_CTRL_HFC_DEV_Pos)
                 & DMA_CHAN_CTRL_HFC_DEV_Msk);
    } else {
        ctrl |= MEC_BIT(DMA_CHAN_CTRL_DHFC_Pos);
    }

    base->CHAN[chan].CTRL = ctrl;
    base->CHAN[chan].ACTV |= MEC_BIT(DMA_CHAN_ACTV_EN_Pos);

    return MEC_RET_OK;
}

int mec_dma_chan_cfg_get(struct dma_regs *base, enum mec_dmac_channel chan,
                         struct mec_dma_cfg *cfg)
{
    uint32_t ctrl = 0u, dstart = 0u, mstart = 0u, mend = 0u;

    if (!base || !cfg || (chan >= MEC_DMAC_CHAN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    cfg->flags = 0u;

    ctrl = base->CHAN[chan].CTRL;
    if (ctrl & MEC_BIT(DMA_CHAN_CTRL_DHFC_Pos)) {
        cfg->hwfc_dev = MEC_DMAC_DEV_ID_NONE;
    } else {
        cfg->hwfc_dev =  (ctrl & DMA_CHAN_CTRL_HFC_DEV_Msk) >> DMA_CHAN_CTRL_HFC_DEV_Pos;
    }

    if (ctrl & MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        cfg->dir = MEC_DMAC_DIR_MEM_TO_DEV;
        if (ctrl & MEC_BIT(DMA_CHAN_CTRL_INCRM_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_SRC_ADDR;
        }
        if (ctrl & MEC_BIT(DMA_CHAN_CTRL_INCRD_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_DST_ADDR;
        }
    } else {
        cfg->dir = MEC_DMAC_DIR_DEV_TO_MEM;
        if (ctrl & MEC_BIT(DMA_CHAN_CTRL_INCRM_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_DST_ADDR;
        }
        if (ctrl & MEC_BIT(DMA_CHAN_CTRL_INCRD_Pos)) {
            cfg->flags |= MEC_DMA_CFG_FLAG_INCR_SRC_ADDR;
        }
    }

    cfg->nbytes = 0u;
    mstart = base->CHAN[chan].MSTART;
    mend = base->CHAN[chan].MEND;
    dstart = base->CHAN[chan].DSTART;
    if (mend > mstart) {
        cfg->nbytes = mend - mstart;
    }

    if (ctrl & MEC_BIT(DMA_CHAN_CTRL_MEM2DEV_Pos)) {
        cfg->src_addr = mstart;
        cfg->dst_addr = dstart;
    } else {
        cfg->src_addr = dstart;
        cfg->dst_addr = mstart;
    }

    return MEC_RET_OK;
}
/* end mec_dmac.c */
