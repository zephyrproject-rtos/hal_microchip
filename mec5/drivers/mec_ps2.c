/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_ps2_api.h"

#if MEC5_P2S_INSTANCES

#define MEC_PS2_GIRQ 18
#define MEC_PS2_0_GIRQ_POS 10
#define MEC_PS2_1_GIRQ_POS 11

#define MEC_PS2_0_ECIA_INFO MEC5_ECIA_INFO(18, 10, 10, 100)
#define MEC_PS2_1_ECIA_INFO MEC5_ECIA_INFO(18, 10, 11, 101)

/* PS/2 port wake event: start bit detection
 * NOTE: PS/2 ports are separate pins and the controller can only be
 * connected to one port at a time. Each port is two pins: clock and data.
 * MEC5 PS/2 Controller 0 implements two ports.
 * MEC5 PS/2 Controller 1 implements one port.
 */
#define MEC_PS2_WAKE_GIRQ        21
#define MEC_PS2_WAKE_0A_GIRQ_POS 18 /* Controller 0 Port A */
#define MEC_PS2_WAKE_0B_GIRQ_POS 19 /* Controller 0 Port B */
#define MEC_PS2_WAKE_1B_GIRQ_POS 21 /* Controller 1 Port B */

#define MEC_PS2_WAKE_0A_ECIA_INFO MEC5_ECIA_INFO(21, 13, 18, 129)
#define MEC_PS2_WAKE_0B_ECIA_INFO MEC5_ECIA_INFO(21, 13, 19, 130)
#define MEC_PS2_WAKE_1B_ECIA_INFO MEC5_ECIA_INFO(21, 13, 21, 132)

struct mec_ps2_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint8_t port_map;
    uint8_t rsvd1;
    uint32_t devi;
    uint32_t port_a_wake_devi;
    uint32_t port_b_wake_devi;
};

static const struct mec_ps2_info ps2_instances[MEC5_P2S_INSTANCES] = {
    { PS2CTRL0_BASE, (uint16_t)MEC_PCR_PS2_0, 0x3u, 0, MEC_PS2_0_ECIA_INFO,
      MEC_PS2_WAKE_0A_ECIA_INFO, MEC_PS2_WAKE_0B_ECIA_INFO },
#if MEC5_PS2_INSTANCES > 1
    { PS2CTRL1_BASE, (uint16_t)MEC_PCR_PS2_1, 0x2u, 0, MEC_PS2_1_ECIA_INFO,
      MEC_PS2_WAKE_1B_ECIA_INFO, UINT32_MAX },
#endif
};

static struct mec_ps2_info const *find_ps2_info(uintptr_t base_addr)
{
    for (size_t i = 0; i < MEC5_P2S_INSTANCES; i++) {
        if (base_addr == ps2_instances[i].base_addr) {
            return &ps2_instances[i];
        }
    }

    return NULL;
}

static void ps2_clear_all_status(struct ps2_regs *regs)
{
    /* read and discard data to clear RX_RDY RO status */
    regs->STATUS = regs->RTXB | (MEC_BIT(PS2_STATUS_RXTMO_Pos) | MEC_BIT(PS2_STATUS_PE_Pos)
                                 | MEC_BIT(PS2_STATUS_FE_Pos) | MEC_BIT(PS2_STATUS_TXTMO_Pos)
                                 | MEC_BIT(PS2_STATUS_TXSTTMO_Pos));
}

/* PS/2 registers (not visible to the Host)
 * Transmit buffer 8-bit W/O
 * Receive data 8-bit R/O
 * Control 8-bit R/W
 * Status 8-bit mix of R/O and R/W1C bits.
 *
 * Writes to TX buffer triggers transmission unless the receive buffer is full.
 * Once the receive data register is read and RDATA_RDY R/O status has cleared
 * the pending transmit will begin.
 */

/* ---- Public API ---- */

int mec_ps2_init(struct ps2_regs *regs, uint8_t port, uint32_t flags)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)regs);
    uint32_t temp = 0u;
    uint8_t ctrl = 0u;

    if (!psi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!(psi->port_map & MEC_BIT(port))) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(psi->pcr_id);
    if (flags & MEC_PS2_FLAGS_RESET) {
        mec_pcr_blk_reset(psi->pcr_id);
    } else {
        regs->CTRL = 0u;
    }

    mec_girq_ctrl(psi->devi, 0);
    mec_girq_clr_src(psi->devi);
    if (port == MEC5_PS2_PORT_A) {
        mec_girq_ctrl(psi->port_a_wake_devi, 0);
        mec_girq_clr_src(psi->port_a_wake_devi);
    } else {
        mec_girq_ctrl(psi->port_b_wake_devi, 0);
        mec_girq_clr_src(psi->port_b_wake_devi);
    }

    ps2_clear_all_status(regs);

    temp = ((flags & MEC_PS2_FLAGS_PARITY_MSK) >> MEC_PS2_FLAGS_PARITY_POS);
    ctrl |= (uint8_t)((temp << PS2_CTRL_PARITY_Pos) & PS2_CTRL_PARITY_Msk);

    temp = ((flags & MEC_PS2_FLAGS_STOP_BITS_MSK) >> MEC_PS2_FLAGS_STOP_BITS_POS);
    ctrl |= (uint8_t)((temp << PS2_CTRL_STOP_Pos) & PS2_CTRL_STOP_Msk);

    if (flags & MEC_PS2_FLAGS_ENABLE) {
        ctrl |= MEC_BIT(PS2_CTRL_ENABLE_Pos);
    }

    regs->CTRL = ctrl;

    if (flags & MEC_PS2_FLAGS_INTR_EN) {
        mec_girq_ctrl(psi->devi, 1);
    }

    return MEC_RET_OK;
}

void mec_ps2_girq_ctrl(struct ps2_regs *base, uint8_t enable)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);

    if (!psi) {
        return;
    }

    if (enable) {
        mec_girq_ctrl(psi->port_b_wake_devi, 1);
    } else {
        mec_girq_ctrl(psi->port_b_wake_devi, 0);
    }
}

int mec_ps2_girq_clr(struct ps2_regs *base)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);

    if (!psi) {
        return MEC_RET_ERR_INVAL;
    }

    mec_girq_clr_src(psi->devi);

    return MEC_RET_OK;
}

uint32_t mec_ps2_girq_result(struct ps2_regs *base)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);

    if (!psi) {
        return 0u;
    }

    return mec_girq_result(psi->devi);
}

int mec_ps2_girq_wake_enable(struct ps2_regs *base, uint8_t port, uint8_t enable)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);
    uint32_t devi = 0;

    if (!psi) {
        return MEC_RET_ERR_INVAL;
    }

    devi = psi->port_a_wake_devi;
    if (port == MEC5_PS2_PORT_B) {
        devi = psi->port_b_wake_devi;
    }

    mec_girq_ctrl(devi, enable);

    return MEC_RET_OK;
}

uint32_t mec_ps2_girq_wake_result(struct ps2_regs *base, uint8_t port)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);

    if (!psi) {
        return 0u;
    }

    if (port == MEC5_PS2_PORT_A) {
        return mec_girq_result(psi->port_a_wake_devi);
    } else {
        return mec_girq_result(psi->port_b_wake_devi);
    }
}

void mec_ps2_girq_wake_clr(struct ps2_regs *base, uint8_t port)
{
    const struct mec_ps2_info *psi = find_ps2_info((uint32_t)base);
    uint32_t devi;

    if (!psi) {
        return;
    }

    devi = psi->port_a_wake_devi;
    if (port != MEC5_PS2_PORT_A) {
        devi = psi->port_b_wake_devi;
    }

    mec_girq_clr_src(devi);
}

void mec_ps2_direction(struct ps2_regs *regs, uint8_t dir_tx)
{
    if (dir_tx) {
        regs->CTRL |= MEC_BIT(PS2_CTRL_TREN_Pos);
    } else {
        regs->CTRL &= (uint8_t)~MEC_BIT(PS2_CTRL_TREN_Pos);
    }
}

uint32_t mec_ps2_get_status(struct ps2_regs *regs)
{
    return regs->STATUS;
}

void mec_ps2_clr_status(struct ps2_regs *regs, uint32_t clrmsk)
{
    regs->STATUS = (uint8_t)(clrmsk & 0xffu);
}

uint8_t mec_ps2_read_data(struct ps2_regs *regs)
{
    return regs->RTXB;
}

void mec_ps2_send_data(struct ps2_regs *regs, uint8_t data)
{
    regs->RTXB = data;
}

#endif /* MEC5_P2S_INSTANCES */

/* end mec_ps2.c */
