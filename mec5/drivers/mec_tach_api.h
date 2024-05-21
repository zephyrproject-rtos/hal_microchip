/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_TACH_API_H
#define _MEC_TACH_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC5_TACH_CFG_RESET              0x01u
#define MEC5_TACH_CFG_ENABLE             0x02u
#define MEC5_TACH_CFG_FILTER_EN          0x04u
#define MEC5_TACH_CFG_CNT_INCR_CLK       0x08u
#define MEC5_TACH_CFG_OOL_INTR_EN        0x10u
#define MEC5_TACH_CFG_CNT_RDY_INTR_EN    0x20u
#define MEC5_TACH_CFG_INPUT_CHG_INTR_EN  0x40u
#define MEC5_TACH_CFG_INTERVAL_EDGES_POS 8
#define MEC5_TACH_CFG_INTERVAL_EDGES_MSK 0x300u
#define MEC5_TACH_CFG_INTERVAL_EDGES_2   0
#define MEC5_TACH_CFG_INTERVAL_EDGES_3   0x100u
#define MEC5_TACH_CFG_INTERVAL_EDGES_5   0x200u
#define MEC5_TACH_CFG_INTERVAL_EDGES_9   0x300u

#define MEC5_TACH_LIMITS(limlo, limhi) \
    (((uint32_t)(limhi) << 16) | ((uint32_t)(limlo) & 0xffffu))

enum mec5_tach_read_mode {
    MEC_TACH_READ_MODE_INPUT_REDGE = 0,
    MEC_TACH_READ_MODE_100K_CLK_REDGE,
};

enum mec5_tach_edge_count {
    MEC_TACH_CNT2_EDGES_HPER = 0,
    MEC_TACH_CNT3_EDGES_1PER,
    MEC_TACH_CNT5_EDGES_2PER,
    MEC_TACH_CNT9_EDGES_4PER,
};

enum mec5_tach_status {
    MEC5_TACH_STS_OOL        = MEC_BIT(0), /* counter out of limit */
    MEC5_TACH_STS_PIN_STATE  = MEC_BIT(1),
    MEC5_TACH_STS_PIN_TOGGLE = MEC_BIT(2),
    MEC5_TACH_STS_CNT_RDY    = MEC_BIT(3),
};

/* All clearable status bits */
#define MEC5_TACH_STATUS_ALL \
    (MEC5_TACH_STS_CNT_RDY | MEC5_TACH_STS_PIN_TOGGLE | MEC5_TACH_STS_OOL)

enum mec5_tach_ien {
    MEC5_TACH_IEN_OOL_POS = 0,
    MEC5_TACH_IEN_CNT_RDY_POS,
    MEC5_TACH_IEN_INPUT_TOGGLE_POS,
};

/* forward declaration */
struct mec_tach_regs;

int mec_hal_tach_init(struct mec_tach_regs *regs, uint32_t limits, uint32_t flags);
void mec_hal_tach_enable(struct mec_tach_regs *regs, uint8_t enable);
bool mec_hal_tach_is_enabled(struct mec_tach_regs *regs);

uint32_t mec_hal_tach_clock_freq(void);
uint32_t mec_hal_tach_counter(struct mec_tach_regs *regs);
uint32_t mec_hal_tach_status(struct mec_tach_regs *regs);
void mec_hal_tach_status_clr(struct mec_tach_regs *regs, uint32_t status);
int mec_hal_tach_intr_enable(struct mec_tach_regs *regs, uint32_t intr_events, uint8_t enable);

void mec_hal_tach_girq_status_clr(struct mec_tach_regs *regs);
void mec_hal_tach_girq_enable(struct mec_tach_regs *regs, uint8_t enable);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_TACH_API_H */
