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
#include "mec_espi_api.h"
#include "mec_retval.h"

/* ---- eSPI Virtual Wire channel ----
 * The eSPI design implements virtual wires in two directions:
 * eSPI Host Controller to eSPI Target (EC)
 * eSPI Target (EC) to eSPI Host Controller.
 * Virtual wires are grouped into 4 VWires and transmitted in
 * packet marked as the VWire channel. The grouping of the VWires
 * is defined by the eSPI specification. The standard assigns a
 * host index number to each group.
 * MEC5 implements:
 *   MEC5_ESPI_NUM_CTVW eSPI Host Controller To Target VWire 96-bit registers.
 *   MEC5_ESPI_NUM_TCVW Target(EC) to eSPI Host Controller VWire 64-bit registers.
 *
 * CTVW hardware can generate an interrupt to the EC when any individual VWire
 * changes state.
 * TCVW hardware includes a transmit bit to send a group of VWires to the Host
 * and a bit indicating the packet has been transmitted. No interrupt can be
 * generated.
 *
 */

#define MEC_ESPI_VW_CHEN_CHG_GIRQ19_POS 8

static const uint8_t vw_ct_ien_xlat_tbl[] = {
    [MEC_ESPI_VW_CT_IEN_DIS] = 0x4u,
    [MEC_ESPI_VW_CT_IEN_LL] = 0u,
    [MEC_ESPI_VW_CT_IEN_LH] = 0x1u,
    [MEC_ESPI_VW_CT_IEN_RE] = 0xdu,
    [MEC_ESPI_VW_CT_IEN_FE] = 0xeu,
    [MEC_ESPI_VW_CT_IEN_BE] = 0xfu,
};
#define MEC_VW_CT_IXLAT_TBL_ENTRIES \
    (sizeof(vw_ct_ien_xlat_tbl) / sizeof(uint8_t))

static uint32_t xlat_isel(uint32_t logical_isel)
{
    uint32_t isel = 0x4u; /* default to disabled */

    if (logical_isel < MEC_VW_CT_IXLAT_TBL_ENTRIES) {
        isel = vw_ct_ien_xlat_tbl[logical_isel];
    }

    return isel;
}

/* ---- Public API ---- */

int mec_hal_espi_vw_is_enabled(struct mec_espi_io_regs *const iobase)
{
    if (iobase->VWSTS & MEC_BIT(MEC_ESPI_IO_VWSTS_CHEN_Pos)) {
        return 1;
    }

    return 0;
}

/* VWire channel enable current state is in the VW Status register located in
 * the eSPI I/O component. VWire channel enable change does not have a bit
 * in the eSPI register spaces. Instead VW channel enable change signal is
 * connected to GIRQ19 bit[8].
 */
uint32_t mec_hal_espi_vw_en_status(struct mec_espi_io_regs *const iobase)
{
    uint32_t ensts = iobase->VWSTS & MEC_BIT(MEC_ESPI_IO_VWSTS_CHEN_Pos);

    /* move bit[8] to bit[1] */
    ensts |= ((MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ19].SOURCE >> 7) & 0x2u);

    return ensts;
}

void mec_hal_espi_vw_en_status_clr(void)
{
    MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ19].SOURCE = MEC_BIT(MEC_ESPI_VW_CHEN_CHG_GIRQ19_POS);
}

/* Returns non-zero if VW Enable Change interrupt is enabled and asserted else 0 */
uint32_t mec_hal_espi_vw_en_result(void)
{
    return (MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ19].RESULT
            & MEC_BIT(MEC_ESPI_VW_CHEN_CHG_GIRQ19_POS));
}

void mec_hal_espi_vw_en_ien(uint8_t enable)
{
    if (enable) {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ19].EN_SET = MEC_BIT(MEC_ESPI_VW_CHEN_CHG_GIRQ19_POS);
    } else {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ19].EN_CLR = MEC_BIT(MEC_ESPI_VW_CHEN_CHG_GIRQ19_POS);
    }
}

void mec_hal_espi_vw_ready_set(struct mec_espi_io_regs * const iobase)
{
    iobase->VWRDY = MEC_BIT(MEC_ESPI_IO_VWRDY_VW_READY_Pos);
}

int mec_hal_espi_vw_is_ready(struct mec_espi_io_regs * const iobase)
{
    if (iobase->VWRDY & MEC_BIT(MEC_ESPI_IO_VWRDY_VW_READY_Pos)) {
        return 1;
    }

    return 0;
}

/* Compute Controller-to-Target VWire register index given VW GIRQ bit
 * position and VW GIRQ bank (0/1).
 */
void mec_hal_espi_vw_ct_from_girq_pos(uint8_t bank, uint8_t girq_pos,
                                      uint8_t *ctidx, uint8_t *ctsrc)
{
    uint32_t d, m;

    if (girq_pos > 31) {
        return;
    }

    if (ctidx) {
        d = girq_pos / 4u;
        if (bank) {
            d += 7u;
        }
        *ctidx = (uint8_t)d;
    }

    if (ctsrc) {
        m = girq_pos % 4u;
        *ctsrc = (uint8_t)m;
    }
}

/* Controller(Host) to Target(EC) VWires can be configured to generate
 * an interrupt to the EC when they change. The CT VWire register do
 * not contain any interrupt status only interrupt enable. GIRQ.SOURCE
 * is the VWire interrupt change status.
 *
 * MEC5 conntect the CT VWire groups to the ECIA as follows:
 * GIRQ24 bits [0 - 3] CTVW00 src[0 - 3]
 * GIRQ24 bits [4 - 7] CTVW01 src[0 - 3]
 * ...
 * GIRQ24 bits [24 - 27] CTVW06 src[0 - 3]
 * GIRQ25 bits [0 - 3] CTVW07 src[0 - 3]
 * GIRQ25 bits [4 - 7] CTVW08 src[0 - 3]
 * ...
 * GIRQ25 bits [12 - 15] CTVW10 src[0 - 3]
 *
 * NOTE: ECIA GIRQ24 and GIRQ25 are both aggregated only.
 * Hardware does not provide direct NVIC connection of all the
 * GIRQ.SOURCE bits.
 */

int mec_hal_espi_vw_ct_girq_ctrl(uint8_t ct_idx, uint8_t src_idx, uint8_t enable)
{
    uint32_t bitpos;

    if ((ct_idx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = (ct_idx * 4u) + src_idx;
        if (enable) {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_SET = MEC_BIT(bitpos);
        } else {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_CLR = MEC_BIT(bitpos);
        }
    } else { /* GIRQ25 */
        bitpos = ((ct_idx - MEC_CTVW_IDX07) * 4u) + src_idx;
        if (enable) {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_SET = MEC_BIT(bitpos);
        } else {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_CLR = MEC_BIT(bitpos);
        }
    }

    return MEC_RET_OK;
}

void mec_hal_espi_vw_ct_girq_ctrl_all(uint8_t enable)
{
    if (enable) {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_SET = UINT32_MAX;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_SET = UINT32_MAX;
    } else {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_CLR = UINT32_MAX;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_CLR = UINT32_MAX;
    }
}

int mec_hal_espi_vw_ct_girq_clr(uint8_t ct_idx, uint8_t src_idx)
{
    uint32_t bitpos;

    if ((ct_idx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = (ct_idx * 4u) + src_idx;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE = MEC_BIT(bitpos);
    } else { /* GIRQ25 */
        bitpos = ((ct_idx - MEC_CTVW_IDX07) * 4u) + src_idx;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE = MEC_BIT(bitpos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_girq_clr_msk(uint8_t ct_idx, uint8_t clr_msk)
{
    uint32_t bitpos, idx;

    if (ct_idx > MEC_CTVW_IDX10) {
        return MEC_RET_ERR_INVAL;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = (ct_idx * 4u);
        idx = MEC_GIRQ_IDX_GIRQ24;
    } else { /* GIRQ25 */
        bitpos = ((ct_idx - MEC_CTVW_IDX07) * 4u);
        idx = MEC_GIRQ_IDX_GIRQ25;
    }

    MEC_ECIA0->GIRQ[idx].SOURCE = ((uint32_t)clr_msk << bitpos);

    return MEC_RET_OK;
}

void mec_hal_espi_vw_ct_girq_clr_all(void)
{
    MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE = UINT32_MAX;
    MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE = UINT32_MAX;
}

uint32_t mec_hal_espi_vw_ct_girq_sts(uint8_t ct_idx, uint8_t src_idx)
{
    uint32_t bitpos, status;

    if ((ct_idx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return 0;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = (ct_idx * 4u) + src_idx;
        status = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE;
    } else { /* GIRQ25 */
        bitpos = ((ct_idx - MEC_CTVW_IDX07) * 4u) + src_idx;
        status = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE;
    }

    return ((status >> bitpos) & 0x1u);
}

uint32_t mec_hal_espi_vw_ct_girq_bank_result(uint8_t bank)
{
    if (bank == MEC_ESPI_CTVW_IRQ_BANK_0) {
        return MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].RESULT;
    } else {
        return MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].RESULT;
    }
}

void mec_hal_espi_vw_ct_girq_bank_clr(uint8_t bank, uint32_t clrmsk)
{
    if (bank == MEC_ESPI_CTVW_IRQ_BANK_0) {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE = clrmsk;
    } else {
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE = clrmsk;
    }
}

uint32_t mec_hal_espi_vw_ct_girq_res(uint8_t ct_idx, uint8_t src_idx)
{
    uint32_t bitpos, result;

    if ((ct_idx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return 0;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = (ct_idx * 4u) + src_idx;
        result = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].RESULT;
    } else { /* GIRQ25 */
        bitpos = ((ct_idx - MEC_CTVW_IDX07) * 4u) + src_idx;
        result = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].RESULT;
    }

    return ((result >> bitpos) & 0x1u);
}

uint32_t mec_hal_espi_vw_ct_group_girq_sts(uint8_t ct_idx)
{
    uint32_t bitpos, status;

    if (ct_idx > MEC_CTVW_IDX10) {
        return 0;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = ct_idx * 4u;
        status = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE;
    } else { /* GIRQ25 */
        bitpos = (ct_idx - MEC_CTVW_IDX07) * 4u;
        status = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE;
    }

    return ((status >> bitpos) & 0xfu);
}

void mec_hal_espi_vw_ct_group_girq_sts_clr(uint8_t ct_idx)
{
    uint32_t bitpos;

    if (ct_idx >MEC_CTVW_IDX10) {
        return;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = ct_idx * 4u;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE = (0xfu << bitpos);
    } else { /* GIRQ25 */
        bitpos = (ct_idx - MEC_CTVW_IDX07) * 4u;
        MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE = (0xfu << bitpos);
    }
}

uint32_t mec_hal_espi_vw_ct_group_girq_res(uint8_t ct_idx)
{
    uint32_t bitpos, result;

    if (ct_idx > MEC_CTVW_IDX10) {
        return 0;
    }

    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = ct_idx * 4u;
        result = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].SOURCE;
    } else { /* GIRQ25 */
        bitpos = (ct_idx - MEC_CTVW_IDX07) * 4u;
        result = MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].SOURCE;
    }

    return ((result >> bitpos) & 0xfu);
}

int mec_hal_espi_vw_ct_group_girq_ctrl(uint8_t ct_idx, uint8_t src_msk, uint8_t enable)
{
    uint32_t bitpos, regval;

    if (ct_idx > MEC_CTVW_IDX10) {
        return MEC_RET_ERR_INVAL;
    }

    regval = (uint32_t)(src_msk & 0xfu);
    if (ct_idx < MEC_CTVW_IDX07) { /* GIRQ24 */
        bitpos = ct_idx * 4u;
        if (enable) {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_SET = regval << bitpos;
        } else {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ24].EN_CLR = regval << bitpos;
        }
    } else { /* GIRQ25 */
        bitpos = (ct_idx - MEC_CTVW_IDX07) * 4u;
        if (enable) {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_SET = regval << bitpos;
        } else {
            MEC_ECIA0->GIRQ[MEC_GIRQ_IDX_GIRQ25].EN_CLR = regval << bitpos;
        }
    }

    return MEC_RET_OK;
}
int mec_hal_espi_vw_ct_irq_sel_set(struct mec_espi_vw_regs * const vwbase, uint8_t vw_idx,
                                   uint8_t src_idx, uint8_t irq_sel)
{
    volatile struct mec_espi_vw_ctvw_regs *ctvw;
    uint32_t isel = 0, msk = MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Msk;

    if ((vw_idx > MEC_ESPI_CTVW10_REG_IDX) || (src_idx > 3)
        || (irq_sel >= MEC_VW_CT_IXLAT_TBL_ENTRIES)) {
        return MEC_RET_ERR_INVAL;
    }

    ctvw = &vwbase->CTVW[vw_idx];

    isel = vw_ct_ien_xlat_tbl[irq_sel] & msk;
    isel <<= (src_idx * 8u);
    msk <<= (src_idx * 8u);

    ctvw->SRC_ISELS = (ctvw->SRC_ISELS & ~msk) | isel;

    return MEC_RET_OK;
}

/* Set all four VWires IRQ select fields in the CT VW group at vw_idx.
 * irq_sels b[7:0] = Source 0, ..., b[31:24] = Source 3 IRQ select.
 */
int mec_hal_espi_vw_ct_irq_sel_set_all(struct mec_espi_vw_regs * const vwbase, uint8_t vw_idx,
                                       uint32_t irq_sels)
{
    volatile struct mec_espi_vw_ctvw_regs *ctvw;
    uint32_t r = 0;
    uint32_t temp = 0;

    if (vw_idx > MEC_ESPI_CTVW10_REG_IDX) {
        return MEC_RET_ERR_INVAL;
    }

    ctvw = &vwbase->CTVW[vw_idx];

    for (size_t n = 0; n < 4; n++) {
        temp = irq_sels & 0x7u;

        if (temp >= MEC_VW_CT_IXLAT_TBL_ENTRIES) {
            return MEC_RET_ERR_INVAL;
        }

        temp = vw_ct_ien_xlat_tbl[temp] & MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Msk;
        r |= (temp << (n * 8u));
    }

    ctvw->SRC_ISELS = r;

    return MEC_RET_OK;
}

/* Configure MEC5 Controller-to-Target(EC) Virtual Wire group register.
 * All fields are set by RESET_SYS (chip reset) except the four VWire Source value
 * fields. VWire Source value fields are reset by the reset source field. If we
 * are requested to modify source values we must switch their reset source to
 * RESET_SYS, modify, then switch to requested reset source or restore the
 * original reset source.
 */
static void mec_hal_espi_vwg_ct_config(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                       struct mec_espi_vw_config *cfg, uint32_t flags)
{
    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t r[3];
    unsigned int i;

    if (!flags) { /* do not modify anything */
        return;
    }

    r[0] = ctvw->HIRSS;
    r[1] = ctvw->SRC_ISELS;
    r[2] = ctvw->STATES;
    if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_HI_POS)) {
        r[0] &= (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk;
        r[0] |= (((uint32_t)cfg->host_idx << MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Pos)
                 & MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk);
    }

    if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_RST_SRC_POS)) {
        r[0] &= (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk;
        r[0] |= (((uint32_t)cfg->reset_src << MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Pos)
                 & MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk);
    }

    for (i = 0; i < 4; i++) {
        if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_RST_VAL_POS + i)) {
            if (cfg->reset_val_bm & MEC_BIT(i)) {
                r[0] |= MEC_BIT(i + MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos);
            } else {
                r[0] &= ~MEC_BIT(i + MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos);
            }
            if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_IRQ_POS + i)) {
                uint32_t msk = 0xfu << i;
                uint8_t j = cfg->src_irq_sel[i];

                if (j >= MEC_VW_CT_IXLAT_TBL_ENTRIES) {
                    j = MEC_ESPI_VW_CT_IEN_DIS;
                }
                r[1] = ((r[1] & ~msk) | ((uint32_t)vw_ct_ien_xlat_tbl[j] << (i * 8)));
            }
            if (cfg->src_val_bm & MEC_BIT(i)) {
                r[2] |= MEC_BIT(i * 8);
            } else {
                r[2] &= ~MEC_BIT(i * 8);
            }
        }
    }

    ctvw->STATES = r[2];
    ctvw->SRC_ISELS = r[1];
    ctvw->HIRSS = r[0];
}

int mec_hal_espi_vw_ct_host_index_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                      uint8_t host_index)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t temp = ctvw->HIRSS & (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk;

    temp |= host_index;
    ctvw->HIRSS = temp;

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_reset_source_get(struct mec_espi_vw_regs * const vwbase,
                                        uint8_t ctidx, uint8_t *reset_source)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10) || !reset_source) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t temp = ctvw->HIRSS;

    temp = (temp & MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk) >> MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Pos;
    *reset_source = (uint8_t)(temp & 0xffu);

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_reset_source_set(struct mec_espi_vw_regs * const vwbase,
                                        uint8_t ctidx, uint8_t reset_source)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t temp = ctvw->HIRSS;

    temp &= (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk;
    temp |= (((uint32_t)reset_source << MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Pos)
             & MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk);
    ctvw->HIRSS = temp;

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_reset_state_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                       uint8_t src_idx, uint8_t reset_state)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t temp = ctvw->HIRSS;

    temp &= ~MEC_BIT(MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos + src_idx);
    if (reset_state) {
        temp |= MEC_BIT(MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos + src_idx);
    }
    ctvw->HIRSS = temp;

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_irqsel_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                  uint8_t src_idx, uint8_t irq_sel)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10) || (src_idx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t pos = MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Pos * 8u;
    uint32_t msk = MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Msk << (src_idx * 8u);
    uint32_t temp = ctvw->SRC_ISELS & ~msk;

    temp |= ((xlat_isel(irq_sel) << pos) & msk);
    ctvw->SRC_ISELS = temp;

    return MEC_RET_OK;
}

/* Configure specified fields of a Controller-to-Target VWire in a group.
 * ctidx specifies the zero based index into the hardware array of 80-bit
 * C2T VWire registers. Each 80-bit register controls 4 VWires.
 * Properties affecting the whole group of 4 VWires:
 *      Host Index and Reset Source
 * Properities of the single VWire specified by src_idx:
 *      Reset State and IRQ Select
 * All of these fields are reset on POR or chip reset only.
 * NOTE: Reset States are loaded into SRC bits on the de-asserting
 * edge of Reset Source.
 */
static void mec_hal_espi_vw_ct_config(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                      uint8_t src_idx, uint8_t host_index, uint32_t config)
{
    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t regval = ctvw->HIRSS;
    uint32_t temp;

    regval &= (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk;
    regval |= (((uint32_t)host_index << MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Pos)
             & MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk);

    if (config & MEC_BIT(MEC_ESPI_VW_CFG_RSTSRC_DO_POS)) {
        temp = (((uint32_t)config & MEC_ESPI_VW_CFG_RSTSRC_MSK) >> MEC_ESPI_VW_CFG_RSTSRC_POS);
        regval &= (uint32_t)~MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk;
        regval |= ((temp << MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Pos)
                   & MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk);
    }
    if (config & MEC_BIT(MEC_ESPI_VW_CFG_RSTVAL_DO_POS)) {
        temp = (((uint32_t)config & MEC_ESPI_VW_CFG_RSTVAL_MSK) >> MEC_ESPI_VW_CFG_RSTVAL_POS);
        regval &= ~MEC_BIT(MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos + src_idx);
        regval |= temp << (MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos + src_idx);
    }
    ctvw->HIRSS = regval;

    if (config & MEC_BIT(MEC_ESPI_VW_CFG_IRQSEL_DO_POS)) {
        uint32_t bpos = src_idx * 8u;
        uint32_t msk = MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Msk << (src_idx * 8u);
        uint32_t val = ((config >> MEC_ESPI_VW_CFG_IRQSEL_POS) & MEC_ESPI_VW_CFG_IRQSEL_MSK0);

        val = xlat_isel(val);
        regval = ctvw->SRC_ISELS & ~msk;
        regval |= (val << bpos) & msk;
        ctvw->SRC_ISELS = regval;
    }
}


int mec_hal_espi_vw_ct_wire_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                uint8_t widx, uint8_t val)
{
    if (!vwbase || (ctidx > MEC_CTVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];

    if (val) {
        ctvw->STATES |= MEC_BIT(widx * 8u);
    } else {
        ctvw->STATES &= ~MEC_BIT(widx * 8u);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_vw_ct_wire_get(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                uint8_t widx, uint8_t *val)
{
    if (!vwbase || !val || (ctidx > MEC_CTVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];

    *val = (uint8_t)((ctvw->STATES >> (widx * 8u)) & 0x1u);

    return MEC_RET_OK;
}

/* Set 4 VWires in group from b[3:0] of val if in mask */
int mec_hal_espi_vw_ct_group_set(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                 uint8_t val, uint8_t msk)
{
    if (!vwbase || !val || (ctidx > MEC_CTVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!msk) {
        return MEC_RET_OK;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];
    uint32_t chgmsk = 0u;
    uint32_t rval = 0u;

    for (unsigned int i = 0; i < 4u; i++) {
        if (msk & MEC_BIT(i)) {
            chgmsk |= MEC_BIT(i * 8);
            if (val & MEC_BIT(i)) {
                rval |= MEC_BIT(i * 8);
            }
        }
    }

    ctvw->STATES = (ctvw->STATES & ~chgmsk) | rval;

    return MEC_RET_OK;
}

static uint8_t vw_group_get(uint32_t vw_states)
{
    uint32_t temp = 0u;

    for (unsigned int i = 0; i < 4u; i++) {
        if (vw_states & MEC_BIT(i * 8u)) {
            temp |= MEC_BIT(i);
        }
    }

    return (uint8_t)(temp & 0xffu);
}

/* Copy 4 VWires in group to b[3:0] of byte pointed to by val */
int mec_hal_espi_vw_ct_group_get(struct mec_espi_vw_regs * const vwbase, uint8_t ctidx,
                                 uint8_t *val)
{
    if (!vwbase || !val || (ctidx > MEC_CTVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_ctvw_regs *ctvw = &vwbase->CTVW[ctidx];

    *val = vw_group_get(ctvw->STATES);

    return MEC_RET_OK;
}

/* Configure MEC5 Target(EC)-to-Controller(Host) Virtual Wire group register.
 * Similar to CT VWire group registers, the TC SRC bits are reset by the
 * reset source specified in the TC VWire reset source field. If the reset
 * source is active we will not be able to change the SRC bits. If SRC bits
 * are to be changed, temporarily change reset source to RESET_SYS and
 * restore/set to new reset source at the end of this routine.
 * NOTE: Target-to-Controller VW groups have no EC interrupt capability.
 * The struct mec_espi_vw_config src_irq_sec[] member is ignored.
 */
static void mec_hal_espi_vwg_tc_config(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                       struct mec_espi_vw_config *cfg, uint32_t flags)
{
    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];
    uint32_t r[2];
    unsigned int i;

    r[0] = tcvw->HIRCS;
    r[1] = tcvw->STATES;
    if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_HI_POS)) {
        r[0] &= (uint32_t)~MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Msk;
        r[0] |= (((uint32_t)cfg->host_idx << MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Pos)
                 & MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Msk);
    }

    if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_RST_SRC_POS)) {
        r[0] &= (uint32_t)~MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Msk;
        r[0] |= (((uint32_t)cfg->reset_src << MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Pos)
                 & MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Msk);
    }

    for (i = 0; i < 4; i++) {
        if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_RST_VAL_POS + i)) {
            if (cfg->reset_val_bm & MEC_BIT(i)) {
                r[0] |= MEC_BIT(i + MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Pos);
            } else {
                r[0] &= ~MEC_BIT(i + MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Pos);
            }
        }
        if (flags & MEC_BIT(MEC_ESPI_VWG_CFG_SRC0_VAL_POS + i)) {
            if (cfg->src_val_bm & MEC_BIT(i)) {
                r[1] |= MEC_BIT(i * 8);
            } else {
                r[1] &= ~MEC_BIT(i * 8);
            }
        }
    }

    tcvw->HIRCS = r[0];
    tcvw->STATES = r[1];
}

/* Configure specified fields of a Target-to-Controller VWire in a group.
 * tcidx specifies the zero based index into the hardware array of 64-bit
 * T2C VWire registers. Each 64-bit register controls 4 VWires.
 * Properties affecting the whole group of 4 VWires:
 *      Host Index and Reset Source
 * Properities of the single VWire specified by src_idx:
 *      Reset State
 * All of these fields are reset on POR or chip reset only.
 * NOTE: Reset States are loaded into SRC bits on the de-asserting
 * edge of Reset Source.
 * NOTE2: Target-to-Controller VWires do not generate interrupts to the EC.
 */
static void mec_hal_espi_vw_tc_config(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                      uint8_t src_idx, uint8_t host_index, uint32_t config)
{
    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];
    uint32_t regval = tcvw->HIRCS; /* b[63:32] name is STATES */
    uint32_t temp;

    regval &= (uint32_t)~MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Msk;
    regval |= (((uint32_t)host_index << MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Pos)
             & MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Msk);

    if (config & MEC_BIT(MEC_ESPI_VW_CFG_RSTSRC_DO_POS)) {
        temp = (((uint32_t)config & MEC_ESPI_VW_CFG_RSTSRC_MSK) >> MEC_ESPI_VW_CFG_RSTSRC_POS);
        regval &= (uint32_t)~MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Msk;
        regval |= ((temp << MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Pos)
                   & MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Msk);
    }
    if (config & MEC_BIT(MEC_ESPI_VW_CFG_RSTVAL_DO_POS)) {
        temp = (((uint32_t)config & MEC_ESPI_VW_CFG_RSTVAL_MSK) >> MEC_ESPI_VW_CFG_RSTVAL_POS);
        regval &= ~MEC_BIT(MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Pos + src_idx);
        regval |= temp << (MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Pos + src_idx);
    }
    tcvw->HIRCS = regval;
}

int mec_hal_espi_vw_tc_wire_set(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                uint8_t widx, uint8_t val, uint32_t flags)
{
    if (!vwbase || (tcidx > MEC_TCVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];

    if (val) {
        tcvw->STATES |= MEC_BIT(widx * 8u);
    } else {
        tcvw->STATES &= ~MEC_BIT(widx * 8u);
    }

    if (flags & MEC_BIT(MEC_ESPI_VW_FLAG_WAIT_TC_TX_POS)) {
        while (vwbase->TCVW[tcidx].HIRCS & (0xfu << MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Pos)) {
                ;
        }
    }

    return MEC_RET_OK;
}

int mec_hal_espi_vw_tc_wire_set_cs(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                   uint8_t widx, uint8_t val, const struct mec_espi_vw_poll *vwp)
{
    uint32_t delay_loops = 0;

    if (!vwbase || (tcidx > MEC_TCVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];

    if (val) {
        tcvw->STATES |= MEC_BIT(widx * 8u);
    } else {
        tcvw->STATES &= ~MEC_BIT(widx * 8u);
    }

    if (vwp && vwp->delayfp) {
        while (vwbase->TCVW[tcidx].HIRCS & (0xfu << MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Pos)) {
            if (!delay_loops) {
                return MEC_RET_ERR_TIMEOUT;
            }
            vwp->delayfp(vwp->delay_param);
            --delay_loops;
        }
    }

    return MEC_RET_OK;
}

int mec_hal_espi_vw_tc_wire_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                uint8_t widx, uint8_t *val)
{
    if (!vwbase || !val || (tcidx > MEC_TCVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];

    *val = (uint8_t)((tcvw->STATES >> (widx * 8u)) & 0x1u);

    return MEC_RET_OK;
}

/* Obtains both the VWire state and its read-only change status.
 * Change status is 1 when FW has changed the VWire state. A change bit == 1 causes
 * the target eSPI to set the VWires Available status bit. If Alert mode is enabled
 * an eSPI in-band or pin alert is asserted to the eSPI Host.  The eSPI Host will
 * issue a GET_STATUS. The Host sees the VWires Available bit and issues a GET_VWIRES
 * command. When the eSPI Target responds to GET_VWIRES it clears all read-only
 * Target-to-Controller VWire change status bits.
 * val bit[0] = state of VWire
 * val bit[7] = Change bit. 1 = VWire state was changed by FW and the Host has not
 * read it. 0 = VWire has not changed or Host has read the current value.
 */
int mec_hal_espi_vw_tc_wire_cs_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                   uint8_t widx, uint8_t *val)
{
    if (!vwbase || !val || (tcidx > MEC_TCVW_IDX10) || (widx > 3)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];
    uint8_t change_bitpos = widx + MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Pos;
    uint8_t vw = (uint8_t)((tcvw->STATES >> (widx * 8u)) & 0x1u);


    if (vwbase->TCVW[tcidx].HIRCS & MEC_BIT(change_bitpos)) {
        vw |= MEC_BIT(7);
    }
    *val = vw;

    return MEC_RET_OK;
}

/* Set 4 VWires in group from b[3:0] of val if in mask */
int mec_hal_espi_vw_tc_group_set(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                 uint8_t val, uint8_t msk, uint32_t flags)
{
    if (!vwbase || !val || (tcidx > MEC_TCVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!msk) {
        return MEC_RET_OK;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];
    uint32_t chgmsk = 0u;
    uint32_t rval = 0u;

    for (unsigned int i = 0; i < 4u; i++) {
        if (msk & MEC_BIT(i)) {
            chgmsk |= MEC_BIT(i * 8);
            if (val & MEC_BIT(i)) {
                rval |= MEC_BIT(i * 8);
            }
        }
    }

    tcvw->STATES = (tcvw->STATES & ~chgmsk) | rval;
    if (flags & MEC_BIT(MEC_ESPI_VW_FLAG_WAIT_TC_TX_POS)) {
        while (vwbase->TCVW[tcidx].HIRCS & (0xfu << MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Pos)) {
                ;
        }
    }
    return MEC_RET_OK;
}

/* Copy 4 VWires in TC group to b[3:0] of byte pointed to by val */
int mec_hal_espi_vw_tc_group_get(struct mec_espi_vw_regs * const vwbase, uint8_t tcidx,
                                 uint8_t *val)
{
    if (!vwbase || !val || (tcidx > MEC_TCVW_IDX10)) {
        return MEC_RET_ERR_INVAL;
    }

    volatile struct mec_espi_vw_tcvw_regs *tcvw = &vwbase->TCVW[tcidx];

    *val = vw_group_get(tcvw->STATES);

    return MEC_RET_OK;
}

int mec_hal_espi_vwg_config(struct mec_espi_vw_regs * const vwbase, uint8_t vwidx,
                            struct mec_espi_vw_config *cfg, uint32_t flags)
{
    if (!vwbase || !cfg || (vwidx >= MEC_ESPI_VW_MAX_REG_IDX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (vwidx < MEC_ESPI_TCVW00_REG_IDX) {
        mec_hal_espi_vwg_ct_config(vwbase, vwidx, cfg, flags);
    } else {
        vwidx -= MEC_ESPI_TCVW00_REG_IDX;
        mec_hal_espi_vwg_tc_config(vwbase, vwidx, cfg, flags);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_vwire_config(struct mec_espi_vw_regs *const vwbase, uint8_t vwidx,
                              uint8_t src_idx, uint8_t host_index, uint32_t config)
{
    if (!vwbase || (vwidx >= MEC_ESPI_VW_MAX_REG_IDX) || (src_idx > 3u)) {
        return MEC_RET_ERR_INVAL;
    }

    if (vwidx < MEC_ESPI_TCVW00_REG_IDX) {
        mec_hal_espi_vw_ct_config(vwbase, vwidx, src_idx, host_index, config);
    } else {
        vwidx -= MEC_ESPI_TCVW00_REG_IDX;
        mec_hal_espi_vw_tc_config(vwbase, vwidx, src_idx, host_index, config);
    }

    return MEC_RET_OK;
}

/* Get value of a VWire specified by MEC5 logical register index and source position in
 * the HW register.
 */
int mec_hal_espi_vw_get_src(struct mec_espi_vw_regs * const vwbase, struct mec_espi_vw *vw,
                            uint32_t flags __attribute__((__unused__)))
{
    int ret;
    uint8_t regidx;

    if (!vw) {
        return MEC_RET_ERR_INVAL;
    }

    regidx = vw->vwidx;
    if (regidx < MEC_ESPI_TCVW00_REG_IDX) {
        ret = mec_hal_espi_vw_ct_wire_get(vwbase, regidx, vw->srcidx, &vw->val);
    } else {
        regidx -= MEC_ESPI_TCVW00_REG_IDX;
        ret = mec_hal_espi_vw_tc_wire_get(vwbase, regidx, vw->srcidx, &vw->val);
    }

    return ret;
}

/* Set value of VWire in a group
 * vwbase is base address of MEC5 VWire registers
 * vwidx is a zero based index of the MEC5 VWire register containing the VWire
 * src is the zero based VWire position in the group of 4. [0:3]
 * val is the new VWire value non-zero means 1 else 0.
 * flags: bit[0]=1 instructs this routine to wait forever for Target to
 * Controller (upstream) VWire value to be transmitted. NOTE: a packet is only
 * transmitted if the VWire value was changed.
 */
int mec_hal_espi_vw_set_src(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                            uint32_t flags)
{
    int ret;
    uint8_t regidx;

    if (!vw) {
        return MEC_RET_ERR_INVAL;
    }

    regidx = vw->vwidx;
    if (regidx < MEC_ESPI_TCVW00_REG_IDX) {
        ret = mec_hal_espi_vw_ct_wire_set(vwbase, regidx, vw->srcidx, vw->val);
    } else {
        regidx -= MEC_ESPI_TCVW00_REG_IDX;
        ret = mec_hal_espi_vw_tc_wire_set(vwbase, regidx, vw->srcidx, vw->val, flags);
    }

    return ret;
}

int mec_hal_espi_vw_set_src_cs(struct mec_espi_vw_regs *const vwbase, struct mec_espi_vw *vw,
                               const struct mec_espi_vw_poll *vwp)
{
    int ret;
    uint8_t regidx;

    if (!vw) {
        return MEC_RET_ERR_INVAL;
    }

    regidx = vw->vwidx;
    if (regidx < MEC_ESPI_TCVW00_REG_IDX) {
        ret = mec_hal_espi_vw_ct_wire_set(vwbase, regidx, vw->srcidx, vw->val);
    } else {
        regidx -= MEC_ESPI_TCVW00_REG_IDX;
        ret = mec_hal_espi_vw_tc_wire_set_cs(vwbase, regidx, vw->srcidx, vw->val, vwp);
    }

    return ret;
}

/* Get VWire group source bits specified by struct mec_espi_vw.vwidx and
 * store in struct mec_espi_vw.val
 */
int mec_hal_espi_vw_get_src_group(struct mec_espi_vw_regs * const vwbase, struct mec_espi_vw *vw,
                                  uint32_t flags __attribute__((__unused__)))
{
    int ret;
    uint8_t regidx;

    if (!vw) {
        return MEC_RET_ERR_INVAL;
    }

    regidx = vw->vwidx;
    if (regidx < MEC_ESPI_TCVW00_REG_IDX) {
        ret = mec_hal_espi_vw_tc_group_get(vwbase, regidx, &vw->val);
    } else {
        regidx -= MEC_ESPI_TCVW00_REG_IDX;
        ret = mec_hal_espi_vw_tc_group_get(vwbase, regidx, &vw->val);
    }

    return ret;
}

int mec_hal_espi_vw_set_src_group(struct mec_espi_vw_regs * const vwbase, struct mec_espi_vw *vw,
                                  uint32_t flags)
{
    int ret;
    uint8_t regidx;

    if (!vw || (vw->vwidx >= MEC_ESPI_VW_MAX_REG_IDX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!vw->msk) {
        return MEC_RET_OK;
    }

    regidx = vw->vwidx;
    if (regidx < MEC_ESPI_TCVW00_REG_IDX) {
        ret = mec_hal_espi_vw_ct_group_set(vwbase, regidx, vw->val, vw->msk);
    } else {
        regidx -= (uint8_t)MEC_ESPI_TCVW00_REG_IDX;
        ret = mec_hal_espi_vw_tc_group_set(vwbase, regidx, vw->val, vw->msk, flags);
    }

    return ret;
}

/* ---- API using eSPI Host Index and VWire src [0:3] for access ---- */
static int lookup_ct_vw_by_host_index(struct mec_espi_vw_regs *const vwbase, uint8_t host_index)
{
    if (vwbase) {
        for (int i = 0; i < MEC_CTVW_IDX10; i++) {
            uint8_t hidx = vwbase->CTVW[i].HIRSS & 0xffu;
            if (hidx == host_index) {
                return i;
            }
        }
    }

    return -1;
}

static int lookup_tc_vw_by_host_index(struct mec_espi_vw_regs *const vwbase, uint8_t host_index)
{
    if (vwbase) {
        for (int i = 0; i < MEC_TCVW_IDX10; i++) {
            uint8_t hidx = vwbase->TCVW[i].HIRCS & 0xffu;
            if (hidx == host_index) {
                return i;
            }
        }
    }

    return -1;
}

/* Read the state of the VWire given by its Host Index and source (bit)
 * position in the 4 wire group.
 */
int mec_hal_espi_vw_get(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                        uint8_t src_id, uint8_t *val)
{
    int ret = MEC_RET_ERR_INVAL;
    int idx = lookup_ct_vw_by_host_index(vwbase, host_index);

    if (idx >= 0) {
        ret = mec_hal_espi_vw_ct_wire_get(vwbase, (uint8_t)idx & 0x7fu, src_id, val);
    }

    idx = lookup_tc_vw_by_host_index(vwbase, host_index);
    if (idx >= 0) {
        ret = mec_hal_espi_vw_tc_wire_get(vwbase, (uint8_t)idx & 0x7fu, src_id, val);
    }

    return ret;
}

int mec_hal_espi_vw_set(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                        uint8_t src_id, uint8_t val, uint32_t flags)
{
    int ret = MEC_RET_ERR_INVAL;
    int idx = lookup_ct_vw_by_host_index(vwbase, host_index);

    if (idx >= 0) {
        ret = mec_hal_espi_vw_ct_wire_set(vwbase, (uint8_t)idx & 0x7fu, src_id, val);
    }

    idx = lookup_tc_vw_by_host_index(vwbase, host_index);
    if (idx >= 0) {
        ret = mec_hal_espi_vw_tc_wire_set(vwbase, (uint8_t)idx & 0x7fu, src_id, val, flags);
    }

    return ret;
}

int mec_hal_espi_vw_set_cs(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                           uint8_t src_id, uint8_t val, const struct mec_espi_vw_poll *vwp)
{
    int ret = MEC_RET_ERR_INVAL;
    int idx = lookup_ct_vw_by_host_index(vwbase, host_index);

    if (idx >= 0) {
        ret = mec_hal_espi_vw_ct_wire_set(vwbase, (uint8_t)idx & 0x7fu, src_id, val);
    }

    idx = lookup_tc_vw_by_host_index(vwbase, host_index);
    if (idx >= 0) {
        ret = mec_hal_espi_vw_tc_wire_set_cs(vwbase, (uint8_t)idx & 0x7fu, src_id, val, vwp);
    }

    return ret;
}

/* VWire's are grouped into 4 VWires per host index. Read the states of the VWires
 * and pack them into bits[3:0] of the byte pointed to by groupval.
 */
int mec_hal_espi_vw_get_group(struct mec_espi_vw_regs *const vwbase,
                              uint8_t host_index, uint8_t *groupval)
{
    int ret = MEC_RET_ERR_INVAL;
    int idx = lookup_ct_vw_by_host_index(vwbase, host_index);

    if (idx >= 0) {
        ret = mec_hal_espi_vw_ct_group_get(vwbase, (uint8_t)idx & 0x7fu, groupval);
    }

    idx = lookup_tc_vw_by_host_index(vwbase, host_index);
    if (idx >= 0) {
        ret = mec_hal_espi_vw_tc_group_get(vwbase, (uint8_t)idx & 0x7fu, groupval);
    }

    return ret;
}

/* Each VWire group indentified by its Host Index implements 4 virtual wires.
 * Set the values of the VWires based upon the passed groupmsk. If groupmsk
 * b[3:0] is set then set that VWire's state to the corresponding bit in
 * groupval.
 */
int mec_hal_espi_vw_set_group(struct mec_espi_vw_regs *const vwbase, uint8_t host_index,
                              uint8_t groupval, uint8_t groupmsk, uint32_t flags)
{
    int ret = MEC_RET_ERR_INVAL;
    int idx = lookup_ct_vw_by_host_index(vwbase, host_index);

    if (idx >= 0) {
        ret = mec_hal_espi_vw_ct_group_set(vwbase, (uint8_t)idx & 0x7fu, groupval, groupmsk);
    }

    idx = lookup_tc_vw_by_host_index(vwbase, host_index);
    if (idx >= 0) {
        ret = mec_hal_espi_vw_tc_group_set(vwbase, (uint8_t)idx & 0x7fu,
                                           groupval, groupmsk, flags);
    }

    return ret;
}

/* end mec_espi_vw.c */
