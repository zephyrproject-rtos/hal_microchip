/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_VW_H
#define _MEC_ESPI_VW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "mec_defs.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* forward declarations */
struct mec_espi_io_regs;
struct mec_espi_mem_regs;
struct mec_espi_vw_regs;

/* ---- Virtual Wire channel (VW) ---- */

/* Configuration for a Controller-to-Target(EC) eSPI Virtual Wire group
 * host_idx is the eSPI Host Index from the eSPI specification this
 * CTVW register represents.
 * reset_src is the signal triggering CTVW hardware to load reset
 * default values into the 4 VWire source bits in this group.
 * reset_state_bm bits [3:0] are the reset state of [SRC3:SRC0]
 * src_val_bm loads each of the 4 VWire source bits based on:
 *   A 1 bit in b[3:0] causes the config API to load the value
 *   in src_val bit n+4 into the VWire SRC[n] bit. 0 <= n <= 3.
 * src_ien[4] is the interrupt enable and trigger for each VWire.
 */
#define MEC_ESPI_VW_SRC_VAL_WR_MSK 0xfu;
#define MEC_ESPI_VW_SRC_VAL_MSK 0xf0u;

enum mec_espi_vw_reset_source {
    MEC_ESPI_VW_RESET_ESPI = 0,
    MEC_ESPI_VW_RESET_SYS,
    MEC_ESPI_VW_RESET_SIO,
    MEC_ESPI_VW_RESET_PLTRST,
    MEC_ESPI_VW_RESET_MAX,
};

enum mec_espi_vw_ct_intr_en {
    MEC_ESPI_VW_CT_IEN_DIS = 0,
    MEC_ESPI_VW_CT_IEN_LL,
    MEC_ESPI_VW_CT_IEN_LH,
    MEC_ESPI_VW_CT_IEN_RE,
    MEC_ESPI_VW_CT_IEN_FE,
    MEC_ESPI_VW_CT_IEN_BE,
    MEC_ESPI_VW_CT_IEN_MAX,
};

enum mec_espi_vw_reg_idx {
    MEC_ESPI_CTVW00_REG_IDX = 0,
    MEC_ESPI_CTVW01_REG_IDX,
    MEC_ESPI_CTVW02_REG_IDX,
    MEC_ESPI_CTVW03_REG_IDX,
    MEC_ESPI_CTVW04_REG_IDX,
    MEC_ESPI_CTVW05_REG_IDX,
    MEC_ESPI_CTVW06_REG_IDX,
    MEC_ESPI_CTVW07_REG_IDX,
    MEC_ESPI_CTVW08_REG_IDX,
    MEC_ESPI_CTVW09_REG_IDX,
    MEC_ESPI_CTVW10_REG_IDX,
    MEC_ESPI_TCVW00_REG_IDX,
    MEC_ESPI_TCVW01_REG_IDX,
    MEC_ESPI_TCVW02_REG_IDX,
    MEC_ESPI_TCVW03_REG_IDX,
    MEC_ESPI_TCVW04_REG_IDX,
    MEC_ESPI_TCVW05_REG_IDX,
    MEC_ESPI_TCVW06_REG_IDX,
    MEC_ESPI_TCVW07_REG_IDX,
    MEC_ESPI_TCVW08_REG_IDX,
    MEC_ESPI_TCVW09_REG_IDX,
    MEC_ESPI_TCVW10_REG_IDX,
    MEC_ESPI_VW_MAX_REG_IDX,
};

enum mec_espi_vw_source {
    MEC_ESPI_VW_SOURCE_0 = 0,
    MEC_ESPI_VW_SOURCE_1,
    MEC_ESPI_VW_SOURCE_2,
    MEC_ESPI_VW_SOURCE_3,
    MEC_ESPI_VW_SOURCE_MAX,
};

struct mec_espi_vw_config {
    uint8_t host_idx;
    uint8_t reset_src;
    uint8_t reset_val_bm;
    uint8_t src_val_bm;
    uint8_t src_irq_sel[4];
};

/* MEC5 CT VWires are grouped into two aggregated EC GIRQs
 * bank 0 contains CTVW00 - CTVW06 sources
 * bank 1 contains CTVW07 - CTVW10 sources
 */
enum espi_ctvw_irq_bank {
    MEC_ESPI_CTVW_IRQ_BANK_0 = 0,
    MEC_ESPI_CTVW_IRQ_BANK_1,
    MEC_ESPI_CTVW_IRQ_BANK_MAX,
};

/* mec_espi_vw_config: Update configuration of a single VWire */
#define MEC_ESPI_VW_CFG_IRQSEL_POS    0
#define MEC_ESPI_VW_CFG_IRQSEL_MSK0   0x7u
#define MEC_ESPI_VW_CFG_IRQSEL_MSK    0x7u
#define MEC_ESPI_VW_CFG_IRQSEL_DO_POS 3
#define MEC_ESPI_VW_CFG_RSTSRC_POS    4
#define MEC_ESPI_VW_CFG_RSTSRC_MSK0   0x3u
#define MEC_ESPI_VW_CFG_RSTSRC_MSK    0x30u
#define MEC_ESPI_VW_CFG_RSTSRC_DO_POS 6
#define MEC_ESPI_VW_CFG_RSTVAL_POS    8
#define MEC_ESPI_VW_CFG_RSTVAL_MSK0   0x1u
#define MEC_ESPI_VW_CFG_RSTVAL_MSK    0x100u
#define MEC_ESPI_VW_CFG_RSTVAL_DO_POS 9

/* mec_espi_vwg_config: Update configuration of all four VWires in a group */
#define MEC_ESPI_VWG_CFG_HI_POS           0
#define MEC_ESPI_VWG_CFG_RST_SRC_POS      1
#define MEC_ESPI_VWG_CFG_SRC0_RST_VAL_POS 4
#define MEC_ESPI_VWG_CFG_SRC1_RST_VAL_POS 5
#define MEC_ESPI_VWG_CFG_SRC2_RST_VAL_POS 6
#define MEC_ESPI_VWG_CFG_SRC3_RST_VAL_POS 7
#define MEC_ESPI_VWG_CFG_SRC0_VAL_POS     8
#define MEC_ESPI_VWG_CFG_SRC1_VAL_POS     9
#define MEC_ESPI_VWG_CFG_SRC2_VAL_POS     10
#define MEC_ESPI_VWG_CFG_SRC3_VAL_POS     11
#define MEC_ESPI_VWG_CFG_SRC0_IRQ_POS     12
#define MEC_ESPI_VWG_CFG_SRC1_IRQ_POS     13
#define MEC_ESPI_VWG_CFG_SRC2_IRQ_POS     14
#define MEC_ESPI_VWG_CFG_SRC3_IRQ_POS     15

#define MEC_ESPI_VWG_CFG_SRC_RST_VAL_ALL (MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_RST_VAL_POS)  \
                                          | MEC_BIT(MEC_ESPI_VWG_CFG_SRC1_RST_VAL_POS) \
                                          | MEC_BIT(MEC_ESPI_VWG_CFG_SRC2_RST_VAL_POS) \
                                          | MEC_BIT(MEC_ESPI_VWG_CFG_SRC3_RST_VAL_POS))
#define MEC_ESPI_VWG_CFG_SRC_VAL_ALL (MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_VAL_POS)  \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC1_VAL_POS) \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC2_VAL_POS) \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC3_VAL_POS))
#define MEC_ESPI_VWG_CFG_SRC_IRQ_ALL (MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_IRQ_POS)  \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC1_IRQ_POS) \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC2_IRQ_POS) \
                                      | MEC_BIT(MEC_ESPI_VWG_CFG_SRC3_IRQ_POS))
#define MEC_ESPI_VWG_CFG_ALL_PROP (MEC_BIT(MEC_ESPI_VWG_CFG_HI_POS) \
                                   | MEC_BIT(MEC_ESPI_VWG_CFG_RST_SRC_POS) \
                                   | MEC_ESPI_VWG_CFG_SRC_RST_VAL_ALL \
                                   | MEC_ESPI_VWG_CFG_SRC_VAL_ALL \
                                   | MEC_ESPI_VWG_CFG_SRC_IRQ_ALL)


/* CT VWire ECIA GIRQ functions */
int mec_hal_espi_vw_ct_girq_ctrl(uint8_t ct_idx, uint8_t src_idx, uint8_t enable);
void mec_hal_espi_vw_ct_girq_ctrl_all(uint8_t enable);
int mec_hal_espi_vw_ct_girq_clr(uint8_t ct_idx, uint8_t src_idx);
int mec_hal_espi_vw_ct_girq_clr_msk(uint8_t ct_idx, uint8_t clr_msk);
void mec_hal_espi_vw_ct_girq_clr_all(void);
uint32_t mec_hal_espi_vw_ct_girq_sts(uint8_t ct_idx, uint8_t src_idx);
uint32_t mec_hal_espi_vw_ct_girq_res(uint8_t ct_idx, uint8_t src_idx);
uint32_t mec_hal_espi_vw_ct_group_girq_sts(uint8_t ct_idx);
void mec_hal_espi_vw_ct_group_girq_sts_clr(uint8_t ct_idx);
uint32_t mec_hal_espi_vw_ct_group_girq_res(uint8_t ct_idx);
int mec_hal_espi_vw_ct_group_girq_ctrl(uint8_t ct_idx, uint8_t src_msk, uint8_t enable);
uint32_t mec_hal_espi_vw_ct_girq_bank_result(uint8_t bank);
void mec_hal_espi_vw_ct_girq_bank_clr(uint8_t bank, uint32_t clrmsk);

void mec_hal_espi_vw_ct_from_girq_pos(uint8_t bank, uint8_t girq_pos,
                                      uint8_t *ctidx, uint8_t *ctsrc);

int mec_hal_espi_vw_ct_irq_sel_set(struct mec_espi_vw_regs * const vwbase, uint8_t vw_idx,
                                   uint8_t src_idx, uint8_t irq_sel);
int mec_hal_espi_vw_ct_irq_sel_set_all(struct mec_espi_vw_regs * const vwbase, uint8_t vw_idx,
                                       uint32_t irq_sels);

int mec_hal_espi_vw_ct_wire_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                uint8_t widx, uint8_t val);
int mec_hal_espi_vw_ct_wire_get(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                uint8_t widx, uint8_t *val);
int mec_hal_espi_vw_ct_group_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                 uint8_t val, uint8_t msk);
int mec_hal_espi_vw_ct_group_get(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                 uint8_t *val);

int mec_hal_espi_vw_tc_wire_set(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                uint8_t widx, uint8_t val, uint32_t flags);
int mec_hal_espi_vw_tc_wire_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                uint8_t widx, uint8_t *val);
/* Sets *val bit[0]=C2T VWire state and bit[7]=C2T VWire change status */
int mec_hal_espi_vw_tc_wire_cs_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                   uint8_t widx, uint8_t *val);
int mec_hal_espi_vw_tc_group_set(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                 uint8_t val, uint8_t msk, uint32_t flags);
int mec_hal_espi_vw_tc_group_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                 uint8_t *val);

/* Unlike the other channels where channel enable change (edge)
 * detected, the virtual channel enable state is connected
 * directly to the GIRQ status. This creates level detection
 * and is always active when VWire channel is enabled.
 */
int mec_hal_espi_vw_is_enabled(struct mec_espi_io_regs * const iobase);
uint32_t mec_hal_espi_vw_en_status(struct mec_espi_io_regs * const iobase);
void mec_hal_espi_vw_en_status_clr(void);
void mec_hal_espi_vw_en_ien(uint8_t enable);
uint32_t mec_hal_espi_vw_en_result(void);

void mec_hal_espi_vw_ready_set(struct mec_espi_io_regs * const iobase);
int mec_hal_espi_vw_is_ready(struct mec_espi_io_regs * const iobase);

int mec_hal_espi_vwire_config(struct mec_espi_vw_regs *const vwbase, uint8_t vwidx,
                              uint8_t src_idx, uint8_t host_index, uint32_t config);

int mec_hal_espi_vwg_config(struct mec_espi_vw_regs * const vwbase, uint8_t vwidx,
                            struct mec_espi_vw_config *cfg, uint32_t flags);

int mec_hal_espi_vw_ct_host_index_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                      uint8_t host_index);
int mec_hal_espi_vw_ct_reset_source_get(struct mec_espi_vw_regs * const vwbase,
                                        uint8_t ctidx, uint8_t *reset_source);
int mec_hal_espi_vw_ct_reset_source_set(struct mec_espi_vw_regs * const vwbase,
                                        uint8_t ctidx, uint8_t reset_source);
int mec_hal_espi_vw_ct_reset_state_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                       uint8_t src_idx, uint8_t reset_state);
int mec_hal_espi_vw_ct_irqsel_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                  uint8_t src_idx, uint8_t irq_sel);

/* Access VWires using MEC5 VW register index and vwire source position
 * idx_src:
 *    b[7:0] = tc vw index
 *    b[11:8] = VW in group [0:3]
 * flags
 *   b[0]=1 if wire changed state wait infinite time for it to be transmitted.
 */

#define MEC_ESPI_VW_FLAG_WAIT_TC_TX_POS 0

struct mec_espi_vw {
    uint8_t vwidx; /* value from enum mec_espi_vw_reg_idx */
    uint8_t srcidx; /* VWire's source index [0 to 3] in the group */
    uint8_t val; /* VWire's value (0 or 1) */
    uint8_t msk; /* group mask, used with group API's */
};

struct mec_espi_vw_poll {
    void (*delayfp)(uint32_t);
    uint32_t delay_param;
    uint32_t nloops;
};

int mec_hal_espi_vw_get_src(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                            uint32_t flags);
int mec_hal_espi_vw_set_src(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                            uint32_t flags);
int mec_hal_espi_vw_set_src_cs(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                               const struct mec_espi_vw_poll *vwp);

int mec_hal_espi_vw_get_src_group(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                                  uint32_t flags);
int mec_hal_espi_vw_set_src_group(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                                  uint32_t flags);

/* Get/Set value of a eSPI Virtual Wire given
 * the VW's Host Index and source position (0-3)
 */
int mec_hal_espi_vw_set(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                        uint8_t src_id, uint8_t val, uint32_t flags);

int mec_hal_espi_vw_set_cs(struct mec_espi_vw_regs * const vwbase, uint8_t host_index,
                           uint8_t src_id, uint8_t val, const struct mec_espi_vw_poll *vwp);

int mec_hal_espi_vw_get(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                        uint8_t src_id, uint8_t *val);

/* Get/Set the group of 4 eSPI Virtual Wires for the given Host Index */
int mec_hal_espi_vw_get_group(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                              uint8_t *groupval);

int mec_hal_espi_vw_set_group(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                              uint8_t groupval, uint8_t groupmsk, uint32_t flags);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_VW_H */
