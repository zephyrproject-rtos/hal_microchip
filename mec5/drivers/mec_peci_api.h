/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_PECI_API_H
#define _MEC_PECI_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* PECI controller */

#define MEC_PECI_NUM_IRQS 1 /* number of IRQ sources per instance */

#define MEC_PECI_CORE_CLOCK_MHZ 48

struct mec_peci_regs;

enum mec_peci_cfg_flags {
    MEC_PECI_CFG_ENABLE = MEC_BIT(0),
    MEC_PECI_CFG_RESET = MEC_BIT(1),
    MEC_PECI_CFG_DIS_BIT_TIME_CLAMP = MEC_BIT(2),
    MEC_PECI_CFG_INTR_EN = MEC_BIT(4),
    MEC_PECI_CFG_CLK_DIV = MEC_BIT(5),
    MEC_PECI_CFG_OBT = MEC_BIT(6),
    MEC_PECI_CFG_REQ_TIMER = MEC_BIT(7),
};

enum mec_peci_interrupt_enables {
    MEC_PECI_IEN_BOF = MEC_BIT(0),
    MEC_PECI_IEN_EOF = MEC_BIT(1),
    MEC_PECI_IEN_ERR = MEC_BIT(2),
    MEC_PECI_IEN_RDYLO = MEC_BIT(4),
    MEC_PECI_IEN_RDYHI = MEC_BIT(5),
    MEC_PECI_IEN_WFE = MEC_BIT(9),
    MEC_PECI_IEN_RFF = MEC_BIT(10),
};

enum mec_peci_status {
    MEC_PECI_STS_BOF = MEC_BIT(0),
    MEC_PECI_STS_EOF = MEC_BIT(1),
    MEC_PECI_STS_ERR = MEC_BIT(2),
    MEC_PECI_STS_RDYLO = MEC_BIT(4),
    MEC_PECI_STS_RDYHI = MEC_BIT(5),
    MEC_PECI_STS_WFE = MEC_BIT(9),
    MEC_PECI_STS_RFF = MEC_BIT(10),
    MEC_PECI_STS_FERR = MEC_BIT(16),
    MEC_PECI_STS_BERR = MEC_BIT(17),
    MEC_PECI_STS_REQ_ERR = MEC_BIT(19),
    MEC_PECI_STS_WROV = MEC_BIT(20),
    MEC_PECI_STS_WRUN = MEC_BIT(21),
    MEC_PECI_STS_RDOV = MEC_BIT(22),
    MEC_PECI_STS_CLKERR = MEC_BIT(23),
};

struct mec_peci_config {
    uint16_t clock_div;
    uint16_t optimal_bit_time;
    uint16_t request_timer;
    uint16_t intr_enables;
};

int mec_hal_peci_init(struct mec_peci_regs *regs, struct mec_peci_config *cfg, uint32_t flags);

int mec_hal_peci_ctrl_reset(struct mec_peci_regs *regs, uint8_t assert_reset);
int mec_hal_peci_fifo_reset(struct mec_peci_regs *regs, uint8_t assert_reset);
int mec_hal_peci_enable(struct mec_peci_regs *regs, uint8_t enable);

int mec_hal_peci_global_ien(struct mec_peci_regs *regs, uint8_t enable);
int mec_hal_peci_intr_ctrl(struct mec_peci_regs *regs, uint8_t enable, uint16_t intr_bitmap);

int mec_hal_peci_set_opt_bit_time(struct mec_peci_regs *regs, uint16_t opt_bit_time);

int mec_hal_peci_tx_enable(struct mec_peci_regs *regs, uint8_t enable);

uint32_t mec_hal_peci_status(struct mec_peci_regs *regs);
uint32_t mec_hal_peci_status_clear(struct mec_peci_regs *regs, uint32_t sts);

void mec_hal_peci_pm_save_disable(void);
void mec_hal_peci_pm_save_restore(void);

int mec_hal_peci_girq_en(struct mec_peci_regs *regs);
int mec_hal_peci_girq_dis(struct mec_peci_regs *regs);
int mec_hal_peci_girq_clr(struct mec_peci_regs *regs);
uint32_t mec_hal_peci_girq_result(struct mec_peci_regs *regs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_PECI_API_H */
