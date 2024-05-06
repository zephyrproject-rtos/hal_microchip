/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_mailbox_api.h"
#include "mec_retval.h"

#define MEC_MBOX_GIRQ 15
#define MEC_MBOX_GIRQ_POS 20

#define MEC_MBOX0_ECIA_INFO MEC5_ECIA_INFO(15, 20, 7, 60)

/* Each mailbox device implements 32 8-bit mailboxes */
#define MEC_MBOX_MAX_INDEX 31

struct mec_mbox_info {
    uint32_t base_addr;
    uint32_t devi;
    uint16_t pcr_id;
};

static const struct mec_mbox_info mbox_instances[MEC5_MAILBOX_INSTANCES] = {
    { MBOX0_BASE, MEC_MBOX0_ECIA_INFO, MEC_PCR_MBOX0 },
};

static struct mec_mbox_info const *find_mbox_info(uint32_t base_addr)
{
    for (size_t i = 0; i < MEC5_MAILBOX_INSTANCES; i++) {
        if (base_addr == mbox_instances[i].base_addr) {
            return &mbox_instances[i];
        }
    }

    return NULL;
}


/* ---- Public API ---- */

int mec_mbox_init(struct mbox_regs *base, uint32_t swi_ien_msk, uint32_t flags)
{
    const struct mec_mbox_info *mbi = find_mbox_info((uint32_t)base);

    if (!mbi) {
        return MEC_RET_ERR_INVAL;
    }

    struct mbox_regs *const regs = (struct mbox_regs *)mbi->base_addr;

    mec_pcr_clr_blk_slp_en(mbi->pcr_id);
    mec_girq_ctrl(mbi->devi, 0);

    if (flags & MEC_MBOX_FLAG_RESET) {
        mec_pcr_blk_reset(mbi->pcr_id);
    } else {
        regs->H2EC = 0xffu; /* clear EC MBOX interrupt status */
    }

    mec_girq_clr_src(mbi->devi);

    regs->ECSMIM = (uint8_t)(swi_ien_msk & 0xffu);

    if (flags & MEC_MBOX_FLAG_INTR_EN) {
        mec_girq_ctrl(mbi->devi, 1);
    }

    return MEC_RET_OK;
}

int mec_mbox_girq_ctrl(struct mbox_regs *base, uint8_t enable)
{
    const struct mec_mbox_info *mbi = find_mbox_info((uint32_t)base);

    if (!mbi) {
        return MEC_RET_ERR_INVAL;
    }

    mec_girq_ctrl(mbi->devi, enable);

    return MEC_RET_OK;
}

int mec_mbox_girq_clr(struct mbox_regs *base)
{
    const struct mec_mbox_info *mbi = find_mbox_info((uint32_t)base);

    if (!mbi) {
        return MEC_RET_ERR_INVAL;
    }

    mec_girq_clr_src(mbi->devi);

    return MEC_RET_OK;
}

uint32_t mec_mbox_girq_result(struct mbox_regs *base)
{
    const struct mec_mbox_info *mbi = find_mbox_info((uint32_t)base);

    if (!mbi) {
        return 0;
    }

    return mec_girq_result(mbi->devi);
}

int mec_mbox_sirq_set(struct mbox_regs *base, uint8_t bitmap)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (bitmap) {
        base->ECSMIT |= bitmap;
    }

    return MEC_RET_OK;
}

int mec_mbox_sirq_en_mask(struct mbox_regs *base, uint8_t val, uint8_t mask)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (mask) {
        base->ECSMIM = (base->ECSMIM & ~mask) | (val & mask);
    }

    return MEC_RET_OK;
}

int mec_mbox_get_host_to_ec(struct mbox_regs *base, uint8_t *data)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t host_to_ec = base->H2EC;

    if (data) {
        *data = host_to_ec;
    }

    return MEC_RET_OK;
}

int mec_mbox_set_host_to_ec(struct mbox_regs *base, uint8_t data)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->H2EC = data;

    return MEC_RET_OK;
}

int mec_mbox_get_ec_to_host(struct mbox_regs *base, uint8_t *data)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t ec_to_host = base->EC2H;

    if (data) {
        *data = ec_to_host;
    }

    return MEC_RET_OK;
}

int mec_mbox_set_ec_to_host(struct mbox_regs *base, uint8_t data)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->EC2H = data;

    return MEC_RET_OK;
}

int mec_mbox_get(struct mbox_regs *base, uint8_t mbox, uint8_t *data)
{
    if (!base || (mbox > MEC_MBOX_MAX_INDEX) || !data) {
        return MEC_RET_ERR_INVAL;
    }

    volatile uint8_t *p = (volatile uint8_t *)&base->MBOXD[0];

    *data = p[mbox];

    return MEC_RET_OK;
}

int mec_mbox_put(struct mbox_regs *base, uint8_t mbox, uint8_t data)
{
    if (!base || (mbox > MEC_MBOX_MAX_INDEX)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile uint8_t *p = (volatile uint8_t *)&base->MBOXD[0];

    p[mbox] = data;

    return MEC_RET_OK;
}

/* 32 8-bit mailboxes are grouped as 8 32-bit registers */
int mec_mbox32_get(struct mbox_regs *base, uint8_t mbox, uint32_t *data)
{
    if (!base || (mbox > (MEC_MBOX_MAX_INDEX / 4)) || !data) {
        return MEC_RET_ERR_INVAL;
    }

    *data = base->MBOXD[mbox];

    return MEC_RET_OK;
}

int mec_mbox32_put(struct mbox_regs *base, uint8_t mbox, uint32_t data)
{
    if (!base || (mbox > (MEC_MBOX_MAX_INDEX / 4))) {
        return MEC_RET_ERR_INVAL;
    }

    base->MBOXD[mbox] = data;

    return MEC_RET_OK;
}

/* end mec_mailbox.c */
