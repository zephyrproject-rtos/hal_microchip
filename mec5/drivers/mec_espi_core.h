/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_CORE_H
#define _MEC_ESPI_CORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* forward declarations */
struct mec_espi_io_regs;
struct mec_espi_mem_regs;
struct mec_espi_vw_regs;

/* ---- eSPI configuration ---- */
#define MEC_ESPI_CFG_PERIPH_CHAN_SUP_POS                0
#define MEC_ESPI_CFG_VW_CHAN_SUP_POS                    1
#define MEC_ESPI_CFG_OOB_CHAN_SUP_POS                   2
#define MEC_ESPI_CFG_FLASH_CHAN_SUP_POS                 3

#define MEC_ESPI_CFG_IO_MODE_SUPP_POS                   4
#define MEC_ESPI_CFG_IO_MODE_SUPP_MSK0                  0x3u
#define MEC_ESPI_CFG_IO_MODE_SUPP_MSK                   \
    ((MEC_ESPI_CFG_IO_MODE_SUPP_MSK0) << (MEC_ESPI_CFG_IO_MODE_SUPP_POS))
#define MEC_ESPI_CFG_ALERT_OD_SUPP_POS                  6
#define MEC_ESPI_CFG_PLTRST_EXT_POS                     7

#define MEC_ESPI_CFG_MAX_SUPP_FREQ_POS                  8
#define MEC_ESPI_CFG_MAX_SUPP_FREQ_MSK0                 0x7u
#define MEC_ESPI_CFG_MAX_SUPP_FREQ_MSK                  \
    ((MEC_ESPI_CFG_MAX_SUPP_FREQ_MSK0) << (MEC_ESPI_CFG_MAX_SUPP_FREQ_POS))

#define MEC_ESPI_CFG_PC_MAX_PLD_SZ_POS                  12
#define MEC_ESPI_CFG_PC_MAX_PLD_SZ_MSK0                 0x7u
#define MEC_ESPI_CFG_PC_MAX_PLD_SZ_MSK                  \
    ((MEC_ESPI_CFG_PC_MAX_PLD_SZ_MSK0) << (MEC_ESPI_CFG_PC_MAX_PLD_SZ_POS))

#define MEC_ESPI_CFG_OOB_MAX_PLD_SZ_POS                 15
#define MEC_ESPI_CFG_OOB_MAX_PLD_SZ_MSK0                0x7u
#define MEC_ESPI_CFG_OOB_MAX_PLD_SZ_MSK                 \
    ((MEC_ESPI_CFG_OOB_MAX_PLD_SZ_MSK0) << (MEC_ESPI_CFG_OOB_MAX_PLD_SZ_POS))

#define MEC_ESPI_CFG_VW_CNT_MAX_POS                     18
#define MEC_ESPI_CFG_VW_CNT_MAX_MSK0                    0x3fu
#define MEC_ESPI_CFG_VW_CNT_MAX_MSK                     \
    ((MEC_ESPI_CFG_VW_CNT_MAX_MSK0) << (MEC_ESPI_CFG_VW_CNT_MAX_POS))

#define MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_POS               24
#define MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK0              0x7u
#define MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK               \
    ((MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK0) << (MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_POS))
#define MEC_ESPI_CFG_FLASH_SHARED_CAF_POS               27
#define MEC_ESPI_CFG_FLASH_SHARED_TAF_POS               28
#define MEC_ESPI_CFG_FLASH_SHARED_MODE_POS              27
#define MEC_ESPI_CFG_FLASH_SHARED_MODE_MSK0             0x3u
#define MEC_ESPI_CFG_FLASH_SHARED_MODE_MSK              \
    ((MEC_ESPI_CFG_FLASH_SHARED_MODE_MSK0) << (MEC_ESPI_CFG_FLASH_SHARED_MODE_POS))
#define MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_POS     29
#define MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_MSK0    0x7u
#define MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_MSK     \
    ((MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_MSK0) \
     << (MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_POS))

#define MEC_ESPI_RESET_CHG_POS 0
#define MEC_ESPI_RESET_STATE_POS 1

#define MEC_ESPI_RESET_CHG 0x01
#define MEC_ESPI_RESET_HI 0x02

/* Each channel has an API returning a bitmap containing current state
 * of the channel enable set by the eSPI Host and if the channel enable
 * changed.
 */
#define MEC_ESPI_CHAN_ENABLED_POS 0
#define MEC_ESPI_CHAN_EN_CHG_POS 1

#define MEC_ESPI_CHAN_ENABLED 0x01
#define MEC_ESPI_CHAN_EN_CHG 0x02

#define MEC_ESPI_SIRQ_SLOT_DIS 0xffu

enum mec_espi_max_freq {
    MEC_ESPI_MAX_SUPP_FREQ_20M = 0,
    MEC_ESPI_MAX_SUPP_FREQ_25M,
    MEC_ESPI_MAX_SUPP_FREQ_33M,
    MEC_ESPI_MAX_SUPP_FREQ_50M,
    MEC_ESPI_MAX_SUPP_FREQ_66M,
};

enum mec_espi_io_mode {
    MEC_ESPI_IO_MODE_1 = 0,
    MEC_ESPI_IO_MODE_1_2,
    MEC_ESPI_IO_MODE_1_4,
    MEC_ESPI_IO_MODE_1_2_4,
};

enum mec_espi_alert_io_mode {
    MEC_ESPI_ALERT_IOM_NO_OD = 0,
    MEC_ESPI_ALERT_IOM_OD,
};

/* NOTE: OOB maximum payload size has same bit field encoding but actual size
 * is 9 bytes larger to accomodate MCTP prefix.
 */
enum mec_espi_chan_max_pld_sz {
    MEC_ESPI_CHAN_MAX_PLD_64B = 1,
};

enum mec_espi_fc_sharing {
    MEC_ESPI_FC_SHARING_MAF = 0,
    MEC_ESPI_FC_SHARING_MAF_ALT,
    MEC_ESPI_FC_SHARING_TAF,
    MEC_ESPI_FC_SHARING_MAF_TAF,
};

enum mec_espi_vw_max_count {
    MEC_ESPI_VW_MAX_COUNT_MIN = 7,
    MEC_ESPI_VW_MAX_COUNT_MAX = 0x3f,
};

enum mec_espi_cap_id {
    MEC_ESPI_CAP_ID_GLOBAL = 0,
    MEC_ESPI_CAP_ID_PC,
    MEC_ESPI_CAP_ID_VW,
    MEC_ESPI_CAP_ID_OOB,
    MEC_ESPI_CAP_ID_FC,
    MEC_ESPI_CAP_ID_MAX,
};

/* Set/Get Global capability position and values */
#define MEC_ESPI_CAP_GL_SUPP_PC_POS 0
#define MEC_ESPI_CAP_GL_SUPP_VW_POS 1
#define MEC_ESPI_CAP_GL_SUPP_OOB_POS 2
#define MEC_ESPI_CAP_GL_SUPP_FLASH_POS 3
#define MEC_ESPI_CAP_GL_MAX_FREQ_POS 4
#define MEC_ESPI_CAP_GL_MAX_FREQ_MSK0 0x7u
#define MEC_ESPI_CAP_GL_MAX_FREQ_MSK \
    ((MEC_ESPI_CAP_GL_MAX_FREQ_MSK0) << (MEC_ESPI_CAP_GL_MAX_FREQ_POS))
#define MEC_ESPI_CAP_GL_IOM_POS 8
#define MEC_ESPI_CAP_GL_IOM_MSK0 0x3u
#define MEC_ESPI_CAP_GL_IOM_MSK ((MEC_ESPI_CAP_GL_IOM_MSK0) << (MEC_ESPI_CAP_GL_IOM_POS))
#define MEC_ESPI_CAP_GL_SUPP_ALERT_OD_POS 12
#define MEC_ESPI_CAP_GL_PLTRST_EXT_POS 13

/* Set/Get Peripheral Channel capability position and values */
#define MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS 0
#define MEC_ESPI_CAP_PC_MAX_PLD_SIZE_MSK0 0x7u
#define MEC_ESPI_CAP_PC_MAX_PLD_SIZE_MSK \
    ((MEC_ESPI_CAP_PC_MAX_PLD_SIZE_MSK0) << (MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS))

#define MEC_ESPI_CAP_PC_MAX_PLD_SZ_64 (1u << (MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_PC_MAX_PLD_SZ_128 (2u << (MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_PC_MAX_PLD_SZ_256 (3u << (MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_PC_MAX_PLD_SZ_DFLT MEC_ESPI_CAP_PC_MAX_PLD_SZ_64

/* Set/Get Virtual Wire  Channel capability position and values */
#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_POS 0
#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_MSK0 0x3fu
#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_MSK ((MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_MSK0) << (MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_POS))

#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_8 0x7u
#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_64 0x3fu
#define MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_DFLT MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_64

/* Set/Get OOB Channel capability position and values */
#define MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS 0
#define MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_MSK0 0x7u
#define MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_MSK \
    ((MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_MSK0) << (MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS))

#define MEC_ESPI_CAP_OOB_MAX_PLD_SZ_73 (1u << (MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_OOB_MAX_PLD_SZ_137 (2u << (MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_OOB_MAX_PLD_SZ_265 (3u << (MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_OOB_MAX_PLD_SZ_DFLT MEC_ESPI_CAP_OOB_MAX_PLD_SZ_73

/* Set/Get Flash Channel capability position and values */
#define MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS 0
#define MEC_ESPI_CAP_FC_MAX_PLD_SIZE_MSK0 0x7u
#define MEC_ESPI_CAP_FC_MAX_PLD_SIZE_MSK \
    ((MEC_ESPI_CAP_FC_MAX_PLD_SIZE_MSK0) << (MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_FC_SHDM_POS 4
#define MEC_ESPI_CAP_FC_SHDM_MSK0 0x3u
#define MEC_ESPI_CAP_FC_SHDM_MSK ((MEC_ESPI_CAP_FC_SHDM_MSK0) << (MEC_ESPI_CAP_FC_SHDM_POS))
#define MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_POS 8
#define MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_MSK0 0x7u
#define MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_MSK \
    ((MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_MSK0) << (MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_POS 16
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_MSK0 0xffu
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_MSK \
    ((MEC_ESPI_CAP_FC_TAF_ERBSZ_MSK0) << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))

#define MEC_ESPI_CAP_FC_MAX_PLD_SZ_64 (1u << (MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_FC_MAX_PLD_SZ_128 (2u << (MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_FC_MAX_PLD_SZ_256 (3u << (MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS))
#define MEC_ESPI_CAP_FC_MAX_PLD_SZ_DFLT MEC_ESPI_CAP_FC_MAX_PLD_SZ_64

#define MEC_ESPI_CAP_FC_SHDM_CAF     (0u << (MEC_ESPI_CAP_FC_SHDM_POS))
#define MEC_ESPI_CAP_FC_SHDM_CAF_ALT (1u << (MEC_ESPI_CAP_FC_SHDM_POS))
#define MEC_ESPI_CAP_FC_SHDM_TAF     (2u << (MEC_ESPI_CAP_FC_SHDM_POS))
#define MEC_ESPI_CAP_FC_SHDM_CAF_TAF (3u << (MEC_ESPI_CAP_FC_SHDM_POS))

#define MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_64 (1u << (MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_POS))
#define MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_DFLT MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_64

#define MEC_ESPI_CAP_FC_TAF_ERBSZ_1K (1u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_2K (2u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_4K (4u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_8K (8u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_16K (0x10u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_32K (0x20u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_64K (0x40u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))
#define MEC_ESPI_CAP_FC_TAF_ERBSZ_128K (0x80u << (MEC_ESPI_CAP_FC_TAF_ERBSZ_POS))

enum mec_espi_global_cap {
    MEC_ESPI_CAP_MAX_FREQ = 0,
    MEC_ESPI_CAP_IO_MODE,
    MEC_ESPI_CAP_ALERT_OD,
    MEC_ESPI_CAP_PERIPH_CHAN,
    MEC_ESPI_CAP_PC_MAX_PLD_SIZE,
    MEC_ESPI_CAP_VWIRE_CHAN,
    MEC_ESPI_CAP_MAX_VW_COUNT,
    MEC_ESPI_CAP_OOB_CHAN,
    MEC_ESPI_CAP_OOB_MAX_PLD_SIZE,
    MEC_ESPI_CAP_FLASH_CHAN,
    MEC_ESPI_CAP_FC_MAX_PLD_SIZE,
    MEC_ESPI_CAP_FC_SHARING,
    MEC_ESPI_CAP_FC_MAX_RD_REQ_SIZE,
    MEC_ESPI_CAP_MAX,
};

#define MEC_ESPI_CFG_FLAG_PC_GIRQ_EN_POS      0
#define MEC_ESPI_CFG_FLAG_BM1_GIRQ_EN_POS     1
#define MEC_ESPI_CFG_FLAG_BM2_GIRQ_EN_POS     2
#define MEC_ESPI_CFG_FLAG_LTR_GIRQ_EN_POS     3
#define MEC_ESPI_CFG_FLAG_OOB_UP_GIRQ_EN_POS  4
#define MEC_ESPI_CFG_FLAG_OOB_DN_GIRQ_EN_POS  5
#define MEC_ESPI_CFG_FLAG_FC_GIRQ_EN_POS      6
#define MEC_ESPI_CFG_FLAG_ERST_GIRQ_EN_POS    7
#define MEC_ESPI_CFG_FLAG_VW_CT_GIRQ_EN_POS   8
#define MEC_ESPI_CFG_FLAG_VW_CHEN_GIRQ_EN_POS 9

struct mec_espi_config {
    struct mec_espi_io_regs *iobase;
    struct mec_espi_mem_regs *mbase;
    struct mec_espi_vw_regs *vwbase;
    uint32_t capabilities;
    uint32_t cfg_flags;
};

 /* Configure eSPI controller hardware capabilities read by the Host eSPI controller
 * soon after the Host de-asserts ESPI_RESET#.
 * NOTE eSPI is only fully reset by a full chip reset or power cycle.
 * The external ESPI_RESET# signal when asserted does hold portions of the logic
 * in reset state. Please refer to the Microchip eSPI block document.
 * This routine should be called while the Host is holding ESPI_RESET# asserted active.
 */
int mec_hal_espi_init(struct mec_espi_config *cfg);

int mec_hal_espi_capability_set(struct mec_espi_io_regs *iobase,
                                enum mec_espi_global_cap cap, uint32_t cfg);

int mec_hal_espi_capability_get(struct mec_espi_io_regs *iobase,
                                enum mec_espi_global_cap cap, uint32_t *cfg);

int mec_hal_espi_cap_set(struct mec_espi_io_regs *iobase, enum mec_espi_cap_id id, uint32_t cfg);
uint32_t mec_hal_espi_cap_get(struct mec_espi_io_regs *iobase, enum mec_espi_cap_id id);

void mec_hal_espi_reset_change_clr(struct mec_espi_io_regs *iobase);
void mec_hal_espi_reset_change_intr_en(struct mec_espi_io_regs *iobase, uint8_t enable);
void mec_hal_espi_reset_girq_ctrl(uint8_t enable);
void mec_hal_espi_reset_girq_status_clr(void);
uint32_t mec_hal_espi_reset_girq_status(void);
uint32_t mec_hal_espi_reset_girq_result(void);

/* Return bits indicating ESPI_RESET# has changed and its current state */
uint32_t mec_hal_espi_reset_state(struct mec_espi_io_regs *iobase);

/* Enable eSPI controller after all static configuration has been performed.
 * MEC eSPI activate must be set before the Host de-asserts ESPI_RESET#.
 */
void mec_hal_espi_activate(struct mec_espi_io_regs *iobase, uint8_t enable);
int mec_hal_espi_is_activated(struct mec_espi_io_regs *iobase);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_CORE_H */
