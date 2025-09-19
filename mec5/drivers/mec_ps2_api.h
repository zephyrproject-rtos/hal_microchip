/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_PS2_API_H
#define _MEC_PS2_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_dmac_api.h"
#include "mec_retval.h"

#if MEC5_PS2_INSTANCES

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* PS/2 Controller with wake capability */

struct mec_ps2_regs; /* forward reference */

enum mec_ps2_ports {
    MEC5_PS2_PORT_A = 0,
    MEC5_PS2_PORT_B,
    MEC5_PS2_PORT_MAX,
};

enum mec_ps2_status {
    MEC_PS2_STS_DATA_RDY       = MEC_BIT(0),
    MEC_PS2_STS_RX_TMOUT       = MEC_BIT(1),
    MEC_PS2_STS_PARITY_ERR     = MEC_BIT(2),
    MEC_PS2_STS_FRAME_ERR      = MEC_BIT(3),
    MEC_PS2_STS_TX_IDLE        = MEC_BIT(4),
    MEC_PS2_STS_TX_TMOUT       = MEC_BIT(5),
    MEC_PS2_STS_RX_BUSY        = MEC_BIT(6),
    MEC_PS2_STS_TX_START_TMOUT = MEC_BIT(7),
};

#define MEC_PS2_STATUS_ALL 0xffu

#define MEC_PS2_FLAGS_ENABLE        0x01u
#define MEC_PS2_FLAGS_RESET         0x02u
#define MEC_PS2_FLAGS_PARITY_POS    2
#define MEC_PS2_FLAGS_PARITY_MSK    0xcu
#define MEC_PS2_FLAGS_PARITY_ODD    0
#define MEC_PS2_FLAGS_PARITY_EVEN   0x4u
#define MEC_PS2_FLAGS_PARITY_NONE   0x8u
#define MEC_PS2_FLAGS_STOP_BITS_POS 4
#define MEC_PS2_FLAGS_STOP_BITS_MSK 0x30u
#define MEC_PS2_FLAGS_STOP_BIT_HI   0
#define MEC_PS2_FLAGS_STOP_BIT_LO   0x10u
#define MEC_PS2_FLAGS_STOP_BIT_NONE 0x20u
#define MEC_PS2_FLAGS_INTR_EN       0x100u

int mec_hal_ps2_init(struct mec_ps2_regs *base, uint32_t flags);

#define MEC_PS2_CTRL_OP_DIR_RX 0
#define MEC_PS2_CTRL_OP_DIR_TX 1
#define MEC_PS2_CTRL_OP_DISABLE 0
#define MEC_PS2_CTRL_OP_ENABLE 2

#define MEC_PS2_CTRL_OP_MSK_DIR 0x01u
#define MEC_PS2_CTRL_OP_MSK_EN 0x02u

int mec_hal_ps2_control(struct mec_ps2_regs *regs, uint8_t operand, uint8_t opmask);

bool mec_hal_ps2_is_enabled(struct mec_ps2_regs *regs);

int mec_hal_ps2_girq_ctrl(struct mec_ps2_regs *base, uint8_t enable);
uint32_t mec_hal_ps2_girq_result(struct mec_ps2_regs *base);
int mec_hal_ps2_girq_clr(struct mec_ps2_regs *base);

int mec_hal_ps2_girq_wake_enable(struct mec_ps2_regs *base, uint8_t port, uint8_t enable);
uint32_t mec_hal_ps2_girq_wake_result(struct mec_ps2_regs *base, uint8_t port);
void mec_hal_ps2_girq_wake_clr(struct mec_ps2_regs *base, uint8_t port);

uint32_t mec_hal_ps2_get_status(struct mec_ps2_regs *regs);
void mec_hal_ps2_clr_status(struct mec_ps2_regs *regs, uint32_t clrmsk);
uint8_t mec_hal_ps2_read_data(struct mec_ps2_regs *regs);
void mec_hal_ps2_send_data(struct mec_ps2_regs *regs, uint8_t data);

/* Enable/disable port wake by zero based controller instance number */
int mec_hal_ps2_inst_wake_enable(uint8_t instance, uint8_t port, uint8_t enable);
int mec_hal_ps2_inst_wake_status_clr(uint8_t instance, uint8_t port);

/* For all PS/2 controllers in the SoC enable or disable the wake
 * GIRQ for all ports. If disable also clear the GIRQ latched status.
 * NOTE: if a port is not enabled by pinctrl the port should not cause
 * a wake event.
 */
void mec_hal_ps2_wake_enables(uint8_t enable);

#ifdef __cplusplus
}
#endif

#endif /* MEC5_PS2_INSTANCES */
#endif /* #ifndef _MEC_PS2_API_H */
