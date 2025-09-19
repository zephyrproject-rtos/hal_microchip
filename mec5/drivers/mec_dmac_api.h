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

#define MEC_DMAC_CHAN_REG_SPACE 0x40u
#define MEC_DMAC_CHAN_REG_ADDR(base, chan) \
    ((uintptr_t)(base) + (((uintptr_t)(chan) + 1u) * MEC_DMAC_CHAN_REG_SPACE))

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
    MEC_DMAC_DEV_ID_SMB_0_TARG = 0,
    MEC_DMAC_DEV_ID_SMB_0_HOST,
    MEC_DMAC_DEV_ID_SMB_1_TARG,
    MEC_DMAC_DEV_ID_SMB_1_HOST,
    MEC_DMAC_DEV_ID_SMB_2_TARG,
    MEC_DMAC_DEV_ID_SMB_2_HOST,
    MEC_DMAC_DEV_ID_SMB_3_TARG,
    MEC_DMAC_DEV_ID_SMB_3_HOST,
    MEC_DMAC_DEV_ID_SMB_4_TARG,
    MEC_DMAC_DEV_ID_SMB_4_HOST,
    MEC_DMAC_DEV_ID_QSPI_0_TX,
    MEC_DMAC_DEV_ID_QSPI_0_RX,
    MEC_DMAC_DEV_ID_GPSPI_0_TX,
    MEC_DMAC_DEV_ID_GPSPI_0_RX,
    MEC_DMAC_DEV_ID_GPSPI_1_TX,
    MEC_DMAC_DEV_ID_GPSPI_1_RX,
    MEC_DMAC_DEV_ID_I3C_HOST_0_TX,
    MEC_DMAC_DEV_ID_I3C_HOST_0_RX,
    MEC_DMAC_DEV_ID_I3C_SEC_0_TX,
    MEC_DMAC_DEV_ID_I3C_SEC_0_RX,
    MEC_DMAC_DEV_ID_MAX,
};

enum mec_dmac_unit_size {
    MEC_DMAC_UNIT_SIZE_1 = 1,
    MEC_DMAC_UNIT_SIZE_2 = 2,
    MEC_DMAC_UNIT_SIZE_4 = 4,
    MEC_DMAC_UNIT_SIZE_MAX,
};

enum mec_dma_chan_status_pos {
    MEC_DMA_CHAN_STS_BUS_ERR_POS = 0,
    MEC_DMA_CHAN_STS_HFC_OVF_POS,
    MEC_DMA_CHAN_STS_DONE_POS,
    MEC_DMA_CHAN_STS_HFC_TERM_POS,
    MEC_DMA_CHAN_STS_MAX_POS,
};

#define MEC_DMA_CHAN_STS_ALL_MSK \
    (MEC_BIT(MEC_DMA_CHAN_STS_DONE_POS) | MEC_BIT(MEC_DMA_CHAN_STS_BUS_ERR_POS) |\
     MEC_BIT(MEC_DMA_CHAN_STS_HFC_OVF_POS) | MEC_BIT(MEC_DMA_CHAN_STS_HFC_TERM_POS))

#define MEC_DMA_CFG_FLAG_INCR_SRC_ADDR 0x01
#define MEC_DMA_CFG_FLAG_INCR_DST_ADDR 0x02
#define MEC_DMA_CFG_FLAG_SWFLC 0x04

struct mec_dma_cfg {
    uintptr_t src_addr;
    uintptr_t dst_addr;
    size_t nbytes;
    uint8_t flags;
    enum mec_dmac_unit_size unitsz;
    enum mec_dmac_dir dir;
    enum mec_dmac_hwfc_dev_id hwfc_dev;
};

#define MEC_DMA_CFG3_FLAG_INCR_MEM_ADDR 0x01
#define MEC_DMA_CFG3_FLAG_INCR_DEV_ADDR 0x02
#define MEC_DMA_CFG3_FLAG_DONE_IEN 0x10
#define MEC_DMA_CFG3_FLAG_BERR_IEN 0x20
#define MEC_DMA_CFG3_FLAG_HWFLC_ERR 0x40
#define MEC_DMA_CFG3_FLAG_HWFLC_TERM 0x80

struct mec_dma_cfg3 {
    struct mec_dma_cfg3 *next;
    uintptr_t mem_addr;
    uintptr_t dev_addr;
    size_t nbytes;
    enum mec_dmac_unit_size unitsz;
    enum mec_dmac_dir dir;
    enum mec_dmac_hwfc_dev_id hwfc_dev;
    uint8_t flags;
};

/* forward declaration */
struct mec_dmac_regs;
struct mec_dma_chan_regs;

/* ---- channel oriented API ----
 * MEC5 family has one instance of the central DMA controller.
 * The number of channels varies by part.
 * No need for register base address parameter.
 */

/* ---- Reset and Enable Controller ---- */

int mec_hal_dmac_reset(void);

int mec_hal_dmac_enable(uint8_t enable);
bool mec_hal_dmac_is_enabled(void);

int mec_hal_dmac_init(uint32_t chan_mask);

uintptr_t mec_hal_dma_chan_reg_addr(enum mec_dmac_channel chan);

uint32_t mec_hal_dmac_girq_result(void);
void mec_hal_dmac_girq_aggr(uint8_t enable);
void mec_hal_dmac_aggr_nvic_ien(uint8_t enable);

/* ---- channel API ---- */
int mec_hal_dma_chan_init(enum mec_dmac_channel);

int mec_hal_dma_chan_intr_status(enum mec_dmac_channel chan, uint32_t *status);
int mec_hal_dma_chan_intr_status_clr(enum mec_dmac_channel chan);
int mec_hal_dma_chan_intr_en(enum mec_dmac_channel chan, uint8_t ien);

int mec_hal_dma_chan_ia_status_clr(enum mec_dmac_channel channel);
int mec_hal_dma_chan_ia_status_clr_mask(uint32_t chanmsk);
int mec_hal_dma_chan_ia_enable(enum mec_dmac_channel channel);
int mec_hal_dma_chan_ia_enable_mask(uint32_t chan_mask);
int mec_hal_dma_chan_ia_disable_mask(uint32_t chan_mask);
int mec_hal_dma_chan_ia_disable(enum mec_dmac_channel channel);

bool mec_hal_dma_chan_is_busy(enum mec_dmac_channel chan);

int mec_hal_dma_chan_go(struct mec_dma_chan_regs *regs);
int mec_hal_dma_chan_start(enum mec_dmac_channel chan);
int mec_hal_dma_chan_start2(enum mec_dmac_channel chan, uint32_t flags);

int mec_hal_dma_chan_halt(enum mec_dmac_channel chan);

int mec_hal_dma_chan_stop(enum mec_dmac_channel chan);

int mec_hal_dma_chan_ctrl_get(enum mec_dmac_channel chan, uint32_t *ctrl);
int mec_hal_chan_regs_get(enum mec_dmac_channel chan, uint32_t *regbuf, uint8_t n);

int mec_hal_dma_chan_hwfc_set(enum mec_dmac_channel chan, enum mec_dmac_hwfc_dev_id hwfc_dev,
                              uintptr_t dev_addr);

int mec_hal_dma_chan_dir_set(enum mec_dmac_channel chan, enum mec_dmac_dir dir);
int mec_hal_dma_chan_dir_get(enum mec_dmac_channel chan, enum mec_dmac_dir *dir);

int mec_hal_dma_chan_mem_set(enum mec_dmac_channel chan, uintptr_t maddr, size_t nbytes);

int mec_hal_dma_chan_mem_units_set(enum mec_dmac_channel chan, enum mec_dmac_unit_size unitsz);

int mec_hal_dma_chan_rem_bytes(enum mec_dmac_channel chan, uint32_t *remsz);

int mec_hal_dma_chan_reload(enum mec_dmac_channel chan, uintptr_t src, uintptr_t dest,
                            size_t nbytes);

int mec_hal_dma_chan_ien(enum mec_dmac_channel chan, uint8_t iflags, uint8_t enable);

int mec_hal_dma_chan_cfg(enum mec_dmac_channel chan, struct mec_dma_cfg *cfg);

int mec_hal_dma_chan_cfg_get(enum mec_dmac_channel chan, struct mec_dma_cfg *cfg);

/* Alternate DMA channel configuration
 * chan is zero based DMA channel number
 * nbytes is number of bytes to transfer
 * maddr is memory address to transfer to/from
 * daddr is peripheral device register address to transfer to/from
 * chan_cfg is
 *  b[0] = direction: 0=dev2Mem, 1=Mem2Dev
 *  b[7:1] = 7-bit HWFlowCtrl Device ID
 *  b[8] = 0 do not increment memory address, 1 increment memory address
 *  b[9] = 0 do not increment device address, 1 increment device address
 *  b[10] = 0 do not lock channel in arbiter, 1 lock channel in arbiter
 *  b[11] = 0 HW flow control, 1 = SW flow control
 *  b[15:12] = transfer size units: 1, 2, or 4
 */
#define MEC_HAL_DMA_CHAN_CFG_IS_MEM2DEV(c) ((uint32_t)(c) & 0x1u)
#define MEC_HAL_DMA_CHAN_CFG_IS_INCRM(c) ((uint32_t)(c) & (1u << 8))
#define MEC_HAL_DMA_CHAN_CFG_IS_INCRD(c) ((uint32_t)(c) & (1u << 9))
#define MEC_HAL_DMA_CHAN_CFG_IS_LOCK(c) ((uint32_t)(c) & (1u << 10))
#define MEC_HAL_DMA_CHAN_CFG_IS_SW_FLCM(c) ((uint32_t)(c) & (1u << 11))
#define MEC_HAL_DMA_CHAN_CFG_GET_HWDEV(c) (((uint32_t)(c) >> 1) & 0x7fu)
#define MEC_HAL_DMA_CHAN_CFG_GET_UNITSZ(c) (((uint32_t)(c) >> 12) & 0xfu)

#define MEC_HAL_DMA_CHAN_CFG_DEV2MEM 0
#define MEC_HAL_DMA_CHAN_CFG_MEM2DEV 1u
#define MEC_HAL_DMA_CHAN_CFG_INCRM (1u << 8)
#define MEC_HAL_DMA_CHAN_CFG_INCRD (1u << 9)
#define MEC_HAL_DMA_CHAN_CFG_LOCK (1u << 10)
#define MEC_HAL_DMA_CHAN_CFG_SW_FLCM (1u << 11)
#define MEC_HAL_DMA_CHAN_CFG_HWDEV(d) (((uint32_t)(d) & 0x7fu) << 1u)
#define MEC_HAL_DMA_CHAN_CFG_SET_UNITSZ(u) (((uint32_t)(u) & 0x7u) << 12)
#define MEC_HAL_DMA_CHAN_CFG_DONE_IEN (1u << 16)
#define MEC_HAL_DMA_CHAN_CFG_BERR_IEN (1u << 17)

int mec_hal_dma_chan_cfg2(enum mec_dmac_channel chan, uint32_t nbytes,
                          uint32_t maddr, uint32_t daddr, uint32_t chan_cfg);

int mec_hal_dma_chan_cfg3(enum mec_dmac_channel chan, struct mec_dma_cfg3 *cfg3);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_DMAC_H */
