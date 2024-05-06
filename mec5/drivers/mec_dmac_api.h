/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_DMAC_H
#define _MEC_DMAC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_DMAC_ALL_CHAN_MASK 0xffffu

enum mec_dmac_channel {
    MEC_DMAC_CHAN_0 = 0,
    MEC_DMAC_CHAN_1,
    MEC_DMAC_CHAN_2,
    MEC_DMAC_CHAN_3,
    MEC_DMAC_CHAN_4,
    MEC_DMAC_CHAN_5,
    MEC_DMAC_CHAN_6,
    MEC_DMAC_CHAN_7,
    MEC_DMAC_CHAN_8,
    MEC_DMAC_CHAN_9,
    MEC_DMAC_CHAN_10,
    MEC_DMAC_CHAN_11,
    MEC_DMAC_CHAN_12,
    MEC_DMAC_CHAN_13,
    MEC_DMAC_CHAN_14,
    MEC_DMAC_CHAN_15,
    MEC_DMAC_CHAN_MAX,
};

enum mec_dmac_dir {
    MEC_DMAC_DIR_DEV_TO_MEM = 0,
    MEC_DMAC_DIR_MEM_TO_DEV,
    MEC_DMAC_DIR_MAX,
};

enum mec_dmac_hwfc_dev_id {
    MEC_DMAC_DEV_ID_SMB_0_T2C = 0,
    MEC_DMAC_DEV_ID_SMB_0_C2T,
    MEC_DMAC_DEV_ID_SMB_1_T2C,
    MEC_DMAC_DEV_ID_SMB_1_C2T,
    MEC_DMAC_DEV_ID_SMB_2_T2C,
    MEC_DMAC_DEV_ID_SMB_2_C2T,
    MEC_DMAC_DEV_ID_SMB_3_T2C,
    MEC_DMAC_DEV_ID_SMB_3_C2T,
    MEC_DMAC_DEV_ID_SMB_4_T2C,
    MEC_DMAC_DEV_ID_SMB_4_C2T,
    MEC_DMAC_DEV_ID_QSPI_0_TX,
    MEC_DMAC_DEV_ID_QSPI_0_RX,
    MEC_DMAC_DEV_ID_GPSPI_0_TX,
    MEC_DMAC_DEV_ID_GPSPI_0_RX,
    MEC_DMAC_DEV_ID_GPSPI_1_TX,
    MEC_DMAC_DEV_ID_GPSPI_1_RX,
    MEC_DMAC_DEV_ID_NONE, /* software flow control */
    MEC_DMAC_DEV_ID_MAX,
};

enum mec_dmac_unit_size {
    MEC_DMAC_UNIT_SIZE_1 = 0,
    MEC_DMAC_UNIT_SIZE_2 = 1,
    MEC_DMAC_UNIT_SIZE_4 = 2,
    MEC_DMAC_UNIT_SIZE_MAX,
};

enum mec_dma_chan_status_pos {
    MEC_DMA_CHAN_STS_BUS_ERR_POS = 0,
    MEC_DMA_CHAN_STS_HFC_OVF_POS,
    MEC_DMA_CHAN_STS_DONE_POS,
    MEC_DMA_CHAN_STS_HFC_TERM_POS,
    MEC_DMA_CHAN_STS_MAX_POS,
};

#define MEC_DMA_CFG_FLAG_INCR_SRC_ADDR 0x01
#define MEC_DMA_CFG_FLAG_INCR_DST_ADDR 0x02

struct mec_dma_cfg {
    uintptr_t src_addr;
    uintptr_t dst_addr;
    size_t nbytes;
    uint8_t flags;
    enum mec_dmac_unit_size unitsz;
    enum mec_dmac_dir dir;
    enum mec_dmac_hwfc_dev_id hwfc_dev;
};

/* forward declaration */
struct dma_regs;

int mec_dmac_reset(struct dma_regs *base);

int mec_dmac_enable(struct dma_regs *base, uint8_t enable);

bool mec_dmac_is_enabled(struct dma_regs *base);

int mec_dmac_init(struct dma_regs *base, uint32_t chan_mask);

int mec_dma_chan_init(struct dma_regs *base, enum mec_dmac_channel);

int mec_dma_chan_intr_status(struct dma_regs *base, enum mec_dmac_channel chan, uint32_t *status);
int mec_dma_chan_intr_status_clr(struct dma_regs *base, enum mec_dmac_channel chan);
int mec_dma_chan_intr_en(struct dma_regs *base, enum mec_dmac_channel chan, uint8_t ien);

int mec_dma_chan_ia_result(struct dma_regs *base, uint32_t * result);
int mec_dma_chan_ia_status_clr_mask(struct dma_regs *base, uint32_t chanmsk);
int mec_dma_chan_ia_status_clr(struct dma_regs *base, enum mec_dmac_channel channel);
int mec_dma_chan_ia_enable(struct dma_regs *base, enum mec_dmac_channel channel);
int mec_dma_chan_ia_disable(struct dma_regs *base, enum mec_dmac_channel channel);

bool mec_dma_chan_is_busy(struct dma_regs *base, enum mec_dmac_channel chan);

int mec_dma_chan_start(struct dma_regs *base, enum mec_dmac_channel chan);

int mec_dma_chan_halt(struct dma_regs *base, enum mec_dmac_channel chan);

int mec_dma_chan_stop(struct dma_regs *base, enum mec_dmac_channel chan);

int mec_dma_chan_hwfc_set(struct dma_regs *base, enum mec_dmac_channel chan,
                          enum mec_dmac_hwfc_dev_id hwfc_dev, uintptr_t dev_addr);

int mec_dma_chan_dir_set(struct dma_regs *base, enum mec_dmac_channel chan,
                         enum mec_dmac_dir dir);
int mec_dma_chan_dir_get(struct dma_regs *base, enum mec_dmac_channel chan,
                         enum mec_dmac_dir *dir);

int mec_dma_chan_mem_set(struct dma_regs *base, enum mec_dmac_channel chan,
                         uintptr_t maddr, size_t nbytes);

int mec_dma_chan_mem_units_set(struct dma_regs *base, enum mec_dmac_channel chan,
                               enum mec_dmac_unit_size unitsz);

int mec_dma_chan_rem_bytes(struct dma_regs *base, enum mec_dmac_channel chan, uint32_t *remsz);

int mec_dma_chan_cfg_get(struct dma_regs *base, enum mec_dmac_channel chan,
                         struct mec_dma_cfg *cfg);

int mec_dma_chan_cfg(struct dma_regs *base, enum mec_dmac_channel chan, struct mec_dma_cfg *cfg);

int mec_dma_chan_reload(struct dma_regs *base, enum mec_dmac_channel chan,
                        uintptr_t src, uintptr_t dest, size_t nbytes);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_DMAC_H */
