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
#include "mec_espi_api.h"
#include "mec_retval.h"

/* ---- eSPI Flash Channel ----
 * eSPI target controller in the EC can access the flash device(s) attached
 * to the Host eSPI controller.
 */
#define MEC_ESPI_FC_ECIA_INFO MEC5_ECIA_INFO(19, 6, 11, 109)

/* Flash erase request size must be non-zero.
 * Actual erase size is chosen by eSPI Host.
 * Specification recommands a value of 1.
 */
#define MEC_ESPI_FC_ERASE_SIZE 1u

/* Flash channel status errors */
#define MEC_ESPI_FC_ERR_ALL \
    (MEC_BIT(MEC_ESPI_IO_FCSTS_BAD_REQ_Pos) | MEC_BIT(MEC_ESPI_IO_FCSTS_START_OVRFL_Pos) \
     | MEC_BIT(MEC_ESPI_IO_FCSTS_FAIL_Pos) | MEC_BIT(MEC_ESPI_IO_FCSTS_DATA_INCOMPL_Pos) \
     | MEC_BIT(MEC_ESPI_IO_FCSTS_DATA_OVRUN_Pos) | MEC_BIT(MEC_ESPI_IO_FCSTS_ABORT_FW_Pos) \
     | MEC_BIT(MEC_ESPI_IO_FCSTS_EC_BUS_ERR_Pos) | MEC_BIT(MEC_ESPI_IO_FCSTS_DIS_BY_HOST_Pos))

/* ---- Public API ---- */

void mec_hal_espi_fc_girq_ctrl(uint8_t enable)
{
    mec_hal_girq_ctrl(MEC_ESPI_FC_ECIA_INFO, (int)enable);
}

void mec_hal_espi_fc_girq_status_clr(void)
{
    mec_hal_girq_clr_src(MEC_ESPI_FC_ECIA_INFO);
}

uint32_t mec_hal_espi_fc_girq_status(void)
{
    return mec_hal_girq_src(MEC_ESPI_FC_ECIA_INFO);
}

uint32_t mec_hal_espi_fc_girq_result(void)
{
    return mec_hal_girq_result(MEC_ESPI_FC_ECIA_INFO);
}

/* Flash channel HW bits for channel enable state and enable change match API definition:
 * bit[0] = enable state
 * bit[1] = enable state changed
 */
uint32_t mec_hal_espi_fc_en_status(struct mec_espi_io_regs *iobase)
{
    return (iobase->FCSTS & 0x3u);
}

void mec_hal_espi_fc_ready_set(struct mec_espi_io_regs *iobase)
{
    iobase->FCRDY = MEC_BIT(MEC_ESPI_IO_FCRDY_FC_READY_Pos);
}

int mec_hal_espi_fc_is_ready(struct mec_espi_io_regs *iobase)
{
    if (iobase->FCRDY & MEC_BIT(MEC_ESPI_IO_FCRDY_FC_READY_Pos)) {
        return 1;
    }

    return 0;
}

int mec_hal_espi_fc_is_busy(struct mec_espi_io_regs *iobase)
{
    if (iobase->FCCFG & MEC_BIT(MEC_ESPI_IO_FCCFG_BUSY_Pos)) {
        return 1;
    }

    return 0;
}

/* Start previoulsy configured Flash channel operation.
 * 1. Clear R/W1C status except for Flash channel enable change as this
 *    is asynchronous and must be handled separately. Preferably by
 *    by an ISR.
 * 2. Enable or disable FC transfer done interrupt per passed flag
 * 3. Start transaction.
 */
void mec_hal_espi_fc_op_start(struct mec_espi_io_regs *iobase, uint32_t flags)
{
    iobase->FCSTS = MEC_ESPI_FC_ERR_ALL | MEC_BIT(MEC_ESPI_IO_FCSTS_DONE_Pos);

    if (flags & MEC_BIT(MEC_ESPI_FC_XFR_FLAG_START_IEN_POS)) {
        iobase->FCIEN |= MEC_BIT(MEC_ESPI_IO_FCIEN_DONE_Pos);
    } else {
        iobase->FCIEN &= (uint32_t)~MEC_BIT(MEC_ESPI_IO_FCIEN_DONE_Pos);
    }

    iobase->FCCTL |= MEC_BIT(MEC_ESPI_IO_FCCTL_START_Pos);
}

void mec_hal_espi_fc_op_abort(struct mec_espi_io_regs *iobase)
{
    iobase->FCCTL |= MEC_BIT(MEC_ESPI_IO_FCCTL_ABORT_Pos);
}

void mec_hal_espi_fc_intr_ctrl(struct mec_espi_io_regs *iobase, uint32_t msk, uint8_t en)
{
    uint32_t r = 0;

    if (!iobase) {
        return;
    }

    if (msk & MEC_BIT(MEC_ESPI_FC_INTR_DONE_POS)) {
        r |= MEC_BIT(MEC_ESPI_IO_FCIEN_DONE_Pos);
    }
    if (msk & MEC_BIT(MEC_ESPI_FC_INTR_CHEN_CHG_POS)) {
        r |= MEC_BIT(MEC_ESPI_IO_FCIEN_CHEN_CHG_Pos);
    }

    if (en) {
        iobase->FCIEN |= r;
    } else {
        iobase->FCIEN &= ~r;
    }
}

uint32_t mec_hal_espi_fc_status(struct mec_espi_io_regs *iobase)
{
    if (!iobase) {
        return 0;
    }

    return iobase->FCSTS;
}

void mec_hal_espi_fc_status_clr(struct mec_espi_io_regs *iobase, uint32_t msk)
{
    if (!iobase) {
        return;
    }

    iobase->FCSTS = msk;
    mec_hal_girq_clr_src(MEC_ESPI_FC_ECIA_INFO);
}

int mec_hal_espi_fc_is_error(uint32_t fc_status)
{
    if (fc_status & (MEC_ESPI_FC_ERR_ALL)) {
        return 1;
    }

    return 0;
}

/* Return flash channel maximum read size selected by eSPI Host */
uint32_t mec_hal_espi_fc_max_read_req_sz(struct mec_espi_io_regs *iobase)
{
    uint32_t exp = 0;

    exp = ((iobase->FCCFG & MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_Msk) >>
            MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_Pos);
    if (exp == 0u) {
        return 0u;
    }

    exp += 5u;

    return (1u << exp);
}

/* Return flash channel maximum payload size selected by eSPI Host */
uint32_t mec_hal_espi_fc_max_pld_sz(struct mec_espi_io_regs *iobase)
{
    uint32_t exp = 0;

    exp = (iobase->FCCFG & MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_Msk) >> MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_Pos;
    if ((exp == 0u) || (exp > 3u)) { /* reserved values */
        return 0u;
    }

    exp += 5u;

    return (1u << exp);
}

/* Return the two allowed erase block sizes in b[15:0] and b[31:16] in units
 * of KB. If only one erase size allowed both fields will be identical.
 * A return value of 0 indicates the flash channel has not been properly
 * configured during eSPI link negoitation.
 */
uint32_t mec_hal_espi_fc_get_erase_sz(struct mec_espi_io_regs *iobase)
{
    uint16_t erb1, erb2;
    uint8_t ersz_encoding;

    if (!iobase) {
        return 0;
    }

    ersz_encoding =
        (uint8_t)((iobase->FCCFG & MEC_ESPI_IO_FCCFG_EBSZ_Msk) >> MEC_ESPI_IO_FCCFG_EBSZ_Pos);
    switch (ersz_encoding) {
    case MEC_ESPI_IO_FCCFG_EBSZ_4KB:
        erb1 = 4u;
        erb2 = erb1;
        break;
    case MEC_ESPI_IO_FCCFG_EBSZ_64KB:
        erb1 = 64u;
        erb2 = erb1;
        break;
    case MEC_ESPI_IO_FCCFG_EBSZ_4KB_OR_64KB:
        erb1 = 4u;
        erb2 = 64u;
        break;
    case MEC_ESPI_IO_FCCFG_EBSZ_128KB:
        erb1 = 128u;
        erb2 = erb1;
        break;
    case MEC_ESPI_IO_FCCFG_EBSZ_256KB:
        erb1 = 256u;
        erb2 = erb1;
        break;
    default:
        erb1 = 0;
        erb2 = 0;
        break;
    }

    return (uint32_t)erb1 + ((uint32_t)erb2 << 16);
}

int mec_hal_espi_fc_check_erase_sz(struct mec_espi_io_regs *iobase, uint32_t ersz_bytes)
{
    uint32_t ersz = mec_hal_espi_fc_get_erase_sz(iobase);
    uint32_t er1 = (ersz & 0xffffu) * 1024u;
    uint32_t er2 = ((ersz >> 16) & 0xffffu) * 1024u;

    if ((ersz_bytes == er1) || (ersz_bytes == er2)) {
        return MEC_RET_OK;
    }

    return MEC_RET_ERR_DATA_LEN;
}

/* Start transmit of a flash request to the eSPI Host Controller.
 * Operations are: read, erase, or write. The caller can select
 * from two erase operations: Ask Host to erase smaller or larger
 * of two address ranges if the Host has a choice. This is based
 * upon flash devices connected to Host chipset and its policies.
 * The specs recommend using a value of 1 for erase size in the
 * request packet sent to the Host.
 * Read and write operations data lengths must be non-zero. The
 * FC hardware will break up requests into chunks of maximum payload
 * size. FC hardware will signal done or error when the last request
 * is done or there was an error on any packet in the transaction.
 */
int mec_hal_espi_fc_xfr_start(struct mec_espi_io_regs *iobase,
                              struct mec_espi_fc_xfr *pxfr,
                              uint32_t flags)
{
    uint32_t xfr_len, fc_op;

    if (!iobase || !pxfr || !pxfr->byte_len || !pxfr->buf_addr
        || (pxfr->operation >= MEC_ESPI_FC_OP_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!MEC_IS_PTR_ALIGNED32(pxfr->buf_addr)) {
        return MEC_RET_ERR_DATA_ALIGN;
    }

    if (mec_hal_espi_fc_is_ready(iobase)) {
        return MEC_RET_ERR_HW_NOT_INIT;
    }

    if (mec_hal_espi_fc_is_busy(iobase)) {
        return MEC_RET_ERR_BUSY;
    }

    switch (pxfr->operation) {
    case MEC_ESPI_FC_OP_ERASE_L:
        fc_op = MEC_ESPI_IO_FCCTL_OP_ERASE_LARGER;
        xfr_len = MEC_ESPI_FC_ERASE_SIZE;
        break;
    case MEC_ESPI_FC_OP_ERASE_S:
        fc_op = MEC_ESPI_IO_FCCTL_OP_ERASE_SMALLER;
        xfr_len = MEC_ESPI_FC_ERASE_SIZE;
        break;
    case MEC_ESPI_FC_OP_WRITE:
        fc_op = MEC_ESPI_IO_FCCTL_OP_WRITE;
        xfr_len = pxfr->byte_len;
        break;
    default:
        fc_op = MEC_ESPI_IO_FCCTL_OP_READ;
        xfr_len = pxfr->byte_len;
        break;
    }

    iobase->FCIEN &= (uint32_t)~MEC_BIT(MEC_ESPI_IO_FCIEN_DONE_Pos);
    iobase->FCSTS = MEC_ESPI_FC_ERR_ALL | MEC_BIT(MEC_ESPI_IO_FCSTS_DONE_Pos);
    iobase->FCFA = pxfr->flash_addr;
    iobase->FCBA = pxfr->buf_addr;
    iobase->FCLEN = xfr_len;
    if (flags & MEC_BIT(MEC_ESPI_FC_XFR_FLAG_START_IEN_POS)) {
        iobase->FCIEN |= MEC_BIT(MEC_ESPI_IO_FCIEN_DONE_Pos);
    }

    iobase->FCCTL = ((((uint32_t)pxfr->tag << MEC_ESPI_IO_FCCTL_TAG_Pos)
                      & MEC_ESPI_IO_FCCTL_TAG_Msk)
                     | ((fc_op << MEC_ESPI_IO_FCCTL_OP_Pos) & MEC_ESPI_IO_FCCTL_OP_Msk)
                     | MEC_BIT(MEC_ESPI_IO_FCCTL_START_Pos));

    return MEC_RET_OK;
}

/* end mec_espi_fc.c */
