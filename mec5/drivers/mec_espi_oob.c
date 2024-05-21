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
#include "mec_pcr_api.h"
#include "mec_retval.h"

/* ---- eSPI Out-Of-Band (OOB) Channel ---- */
#define MEC5_ESPI_GIRQ               19
#define MEC5_ESPI_GIRQ_AGGR_NVIC     11
#define MEC5_ESPI_OOB_UP_GIRQ_POS    4
#define MEC5_ESPI_OOB_UP_NVIC_DIRECT 107
#define MEC5_ESPI_OOB_DN_GIRQ_POS    5
#define MEC5_ESPI_OOB_DN_NVIC_DIRECT 108

#define MEC_ESPI_OOB_UP_ECIA_INFO MEC5_ECIA_INFO(MEC5_ESPI_GIRQ, MEC5_ESPI_OOB_UP_GIRQ_POS, \
                                                 MEC5_ESPI_GIRQ_AGGR_NVIC, \
                                                 MEC5_ESPI_OOB_UP_NVIC_DIRECT)
#define MEC_ESPI_OOB_DN_ECIA_INFO MEC5_ECIA_INFO(MEC5_ESPI_GIRQ, MEC5_ESPI_OOB_DN_GIRQ_POS, \
                                                 MEC5_ESPI_GIRQ_AGGR_NVIC, \
                                                 MEC5_ESPI_OOB_DN_NVIC_DIRECT)

#define MEC_ESPI_OOB_TX_STS_RW1C \
    (MEC_ESPI_IO_OOBTXSTS_DONE_Msk | MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Msk \
     | MEC_ESPI_IO_OOBTXSTS_EC_BUS_ERR_Msk | MEC_ESPI_IO_OOBTXSTS_START_OVRUN_Msk \
     | MEC_ESPI_IO_OOBTXSTS_BAD_REQ_Msk)

#define MEC_ESPI_OOB_RX_STS_RW1C \
    (MEC_ESPI_IO_OOBRXSTS_DONE_Msk | MEC_ESPI_IO_OOBRXSTS_EC_BUS_ERR_Msk \
     | MEC_ESPI_IO_OOBRXSTS_DATA_OVRUN_Msk)


static uint32_t msk_to_girq_bitmap(uint8_t msk)
{
    uint32_t bitmap = 0;

    if (msk & MEC_ESPI_OOB_DIR_UP) {
        bitmap |= MEC_BIT(MEC5_ESPI_OOB_UP_GIRQ_POS);
    }
    if (msk & MEC_ESPI_OOB_DIR_DN) {
        bitmap |= MEC_BIT(MEC5_ESPI_OOB_DN_GIRQ_POS);
    }

    return bitmap;
}

static uint32_t bitmap_to_msk(uint32_t bitmap)
{
    uint32_t msk = 0;

    if (bitmap & MEC_BIT(MEC5_ESPI_OOB_UP_GIRQ_POS)) {
        msk |= MEC_ESPI_OOB_DIR_UP;
    }
    if (bitmap & MEC_BIT(MEC5_ESPI_OOB_DN_GIRQ_POS)) {
        msk |= MEC_ESPI_OOB_DIR_DN;
    }

    return msk;
}

/* ---- Public API ---- */

void mec_hal_espi_oob_girq_ctrl(uint8_t enable, uint8_t msk)
{
    uint32_t bitmap = msk_to_girq_bitmap(msk);

    mec_hal_girq_bm_en(MEC5_ESPI_GIRQ, bitmap, enable);
}

void mec_hal_espi_oob_girq_status_clr(uint8_t msk)
{
    uint32_t bitmap = msk_to_girq_bitmap(msk);

    mec_hal_girq_bm_clr_src(MEC5_ESPI_GIRQ, bitmap);
}

uint32_t mec_hal_espi_oob_girq_status(void)
{
    uint32_t src = mec_hal_girq_source_get(MEC5_ESPI_GIRQ);

    return bitmap_to_msk(src);
}

uint32_t mec_hal_espi_oob_girq_result(void)
{
    uint32_t result = mec_hal_girq_result_get(MEC5_ESPI_GIRQ);

    return bitmap_to_msk(result);
}

void mec_hal_espi_oob_ready_set(struct mec_espi_io_regs *iobase)
{
    iobase->OOBRDY = MEC_BIT(MEC_ESPI_IO_OOBRDY_OOB_READY_Pos);
}

int mec_hal_espi_oob_is_ready(struct mec_espi_io_regs *iobase)
{
    if (iobase->OOBRDY & MEC_BIT(MEC_ESPI_IO_OOBRDY_OOB_READY_Pos)) {
        return 1;
    }

    return 0;
}

/* OOB TX Status register channel enable change bit matches API defined
 * position (bit[1]). Current channel enable state is at bit[9] in the
 * register; move to bit[0].
 */
uint32_t mec_hal_espi_oob_en_status(struct mec_espi_io_regs *iobase)
{
    uint32_t txsts = iobase->OOBTXSTS;
    uint32_t en = txsts & MEC_BIT(MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Pos); /* bit[1] */

    if (txsts & MEC_BIT(MEC_ESPI_IO_OOBTXSTS_CHEN_STATE_Pos)) {
        en |= MEC_BIT(MEC_ESPI_CHAN_ENABLED_POS);
    }

    return en;
}

/* Return the maximum eSPI OOB packet size in bytes selected by the eSPI Host when
 * it configured the OOB channel.
 * OOB is different than the other channels. Size encoding are the
 * same but OOB adds 9 bytes to the standard sizes.
 */
uint32_t mec_hal_espi_oob_max_pkt_size(struct mec_espi_io_regs *iobase)
{
    uint32_t sz;

    sz = (iobase->OOBRXC & MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_Msk) >> MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_Pos;
    if ((sz == 0) || (sz > 3u)) { /* reserved values */
        return 0;
    }

    sz += 5u;
    sz = (1u << sz) + 9u; /* add OOB MCHP packet wrapper size of 9 bytes */

    return sz;
}

/* Set OOB buffer address for upstream or downstream direction.
 * We set the buffer size to the passed value if it is <= OOB Configuration Max Packet Size.
 * Otherwise we set size to Max Packet Size.
 * For upstream, if the buffer size is 0 or > the Max Packet Size in the OOB Configuration
 * register then HW when started will generate a Bad Request error.
 * For downstream, if the specified buffer length >= OOB Config Max Packet Size the
 * HW limit check is disabled. This means no Data Overrun check will be made on
 * incoming data allowing potential buffer overrun corrupting memory.
 */
int mec_hal_espi_oob_buffer_set(struct mec_espi_io_regs *iobase, uint8_t dir,
                                struct mec_espi_oob_buf * buf)
{
    uint32_t temp, lenb, maxlen;

    if (!iobase || !buf) {
        return MEC_RET_ERR_INVAL;
    }

    if (buf->maddr & 0x03u) {
        return MEC_RET_ERR_DATA_ALIGN;
    }

    if (!buf->len) {
        return MEC_RET_ERR_DATA_LEN;
    }

    maxlen = mec_hal_espi_oob_max_pkt_size(iobase);
    lenb = buf->len;
    if (lenb > maxlen) {
        lenb = maxlen;
    }

    if (dir == MEC_ESPI_OOB_DIR_DN) {
        iobase->OOBRXA = buf->maddr;
        temp = iobase->OOBRXL & (uint32_t)~(MEC_ESPI_IO_OOBRXL_RX_BUF_LEN_Msk);
        temp |= ((lenb << MEC_ESPI_IO_OOBRXL_RX_BUF_LEN_Pos) & MEC_ESPI_IO_OOBRXL_RX_BUF_LEN_Msk);
        iobase->OOBRXL = temp;
    } else {
        iobase->OOBTXA = buf->maddr;
        temp = iobase->OOBTXL & (uint32_t)~(MEC_ESPI_IO_OOBTXL_TX_MSG_LEN_Msk);
        temp |= ((lenb << MEC_ESPI_IO_OOBTXL_TX_MSG_LEN_Pos) & MEC_ESPI_IO_OOBTXL_TX_MSG_LEN_Msk);
        iobase->OOBTXL = temp;
    }

    return MEC_RET_OK;
}

/* Inform the hardware we are ready to receive OOB packets from the upstream eSPI Host.
 * The RX buffer must be set before calling this routine.
 * NOTE: RX available bit is write-only. Once set it causes the OOB receive enable to be
 * set in the OOB RX Status register.
 */
void mec_hal_espi_oob_rx_buffer_avail(struct mec_espi_io_regs *iobase)
{
    iobase->OOBRXC |= MEC_BIT(MEC_ESPI_IO_OOBRXC_RX_AVAIL_Pos);
}

/* Enable OOB channel interrupts to the EC
 * NOTE: All of the OOB errors cause DONE status to be set.
 */
void mec_hal_espi_oob_intr_ctrl(struct mec_espi_io_regs *iobase, uint32_t msk, uint8_t en)
{
    uint32_t txien = 0;

    if (msk & MEC_BIT(MEC_ESPI_OOB_DN_INTR_DONE_POS)) {
        if (en) {
            iobase->OOBRXIEN |= MEC_BIT(MEC_ESPI_IO_OOBRXIEN_DONE_Pos);
        } else {
            iobase->OOBRXIEN &= (uint32_t)~MEC_BIT(MEC_ESPI_IO_OOBRXIEN_DONE_Pos);
        }
    }

    if (msk & MEC_BIT(MEC_ESPI_OOB_UP_INTR_DONE_POS)) {
        txien |= MEC_BIT(MEC_ESPI_IO_OOBTXIEN_DONE_Pos);
    }
    if (msk & MEC_BIT(MEC_ESPI_OOB_UP_INTR_CHEN_CHG_POS)) {
        txien |= MEC_BIT(MEC_ESPI_IO_OOBTXIEN_CHEN_CHG_Pos);
    }

    if (en) {
        iobase->OOBTXIEN |= txien;
    } else {
        iobase->OOBTXIEN &= ~txien;
    }
}

void mec_hal_espi_oob_tx_start(struct mec_espi_io_regs *iobase, uint8_t tag, uint8_t start)
{
    uint32_t txctrl = iobase->OOBTXC & (uint32_t)~(MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Msk);

    txctrl |= (((uint32_t)tag << MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Pos)
               & MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Msk);
    iobase->OOBTXC = txctrl;

    if (start) {
        iobase->OOBTXC |= MEC_BIT(MEC_ESPI_IO_OOBTXC_START_Pos);
    }
}

int mec_hal_espi_oob_tx_is_busy(struct mec_espi_io_regs *iobase)
{
    if (iobase->OOBTXSTS & MEC_BIT(MEC_ESPI_IO_OOBTXSTS_BUSY_Pos)) {
        return 1;
    }

    return 0;
}

uint8_t mec_hal_espi_oob_rx_tag(struct mec_espi_io_regs *iobase)
{
    uint32_t tag = ((iobase->OOBRXSTS & MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_Msk) >>
                    MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_Pos);

    return (uint8_t)(tag & 0xffu);
}

uint32_t mec_hal_espi_oob_received_len(struct mec_espi_io_regs *iobase)
{
    uint32_t recvlen = 0;

    if (iobase) {
        recvlen = iobase->OOBRXL & MEC_ESPI_IO_OOBRXL_RECV_MSG_LEN_Msk;
        recvlen >>= MEC_ESPI_IO_OOBRXL_RECV_MSG_LEN_Pos;
    }

    return recvlen;
}

uint32_t mec_hal_espi_oob_status(struct mec_espi_io_regs *iobase, uint8_t dir)
{
    if (dir == MEC_ESPI_OOB_DIR_DN) {
        return iobase->OOBRXSTS;
    } else {
        return iobase->OOBTXSTS;
    }
}

int mec_hal_espi_oob_is_done(uint32_t status, uint8_t dir)
{
    uint8_t done_pos = MEC_ESPI_IO_OOBTXSTS_DONE_Pos;

    if (dir == MEC_ESPI_OOB_DIR_DN) {
        done_pos = MEC_ESPI_IO_OOBRXSTS_DONE_Pos;
    }

    if (status & MEC_BIT(done_pos)) {
        return 1;
    }

    return 0;
}

int mec_hal_espi_oob_is_error(uint32_t status, uint8_t dir)
{
    uint32_t msk = (MEC_ESPI_IO_OOBTXSTS_EC_BUS_ERR_Msk
                    | MEC_ESPI_IO_OOBTXSTS_START_OVRUN_Msk
                    | MEC_ESPI_IO_OOBTXSTS_BAD_REQ_Msk);

    if (dir == MEC_ESPI_OOB_DIR_DN) {
        msk = (MEC_ESPI_IO_OOBRXSTS_EC_BUS_ERR_Msk | MEC_ESPI_IO_OOBRXSTS_DATA_OVRUN_Msk);
    }

    if (status & msk) {
        return 1;
    }

    return 0;
}

int mec_hal_espi_oob_up_is_chan_event(uint32_t status)
{
    int ev = 0; /* no event */

    if (status & MEC_BIT(MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Pos)) {
        if (status & MEC_BIT(MEC_ESPI_IO_OOBTXSTS_CHEN_STATE_Pos)) {
            /* 0 -> 1 is enable */
            ev = 1;
        } else {
            ev = -1; /* 1 -> 0 disable */
        }
    }

    return ev;
}

void mec_hal_espi_oob_status_clr_done(struct mec_espi_io_regs *iobase, uint8_t dir)
{
   if (dir == MEC_ESPI_OOB_DIR_UP) {
       iobase->OOBTXSTS = MEC_BIT(MEC_ESPI_IO_OOBTXSTS_DONE_Pos);
   } else {
       iobase->OOBRXSTS = MEC_BIT(MEC_ESPI_IO_OOBRXSTS_DONE_Pos);
   }


}

void mec_hal_espi_oob_status_clr_err(struct mec_espi_io_regs *iobase, uint8_t dir)
{
    if (dir == MEC_ESPI_OOB_DIR_UP) {
        iobase->OOBTXSTS = (MEC_ESPI_IO_OOBTXSTS_EC_BUS_ERR_Msk
                            | MEC_ESPI_IO_OOBTXSTS_START_OVRUN_Msk
                            | MEC_ESPI_IO_OOBTXSTS_BAD_REQ_Msk);
    } else {
        iobase->OOBRXSTS = (MEC_ESPI_IO_OOBRXSTS_EC_BUS_ERR_Msk
                            | MEC_ESPI_IO_OOBRXSTS_DATA_OVRUN_Msk);
    }
}

void mec_hal_espi_oob_status_clr_chen_change(struct mec_espi_io_regs *iobase)
{
    iobase->OOBTXSTS = MEC_BIT(MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Pos);
}

void mec_hal_espi_oob_status_clr_all(struct mec_espi_io_regs *iobase, uint8_t dir)
{
    if (dir == MEC_ESPI_OOB_DIR_DN) {
        iobase->OOBRXSTS = MEC_ESPI_OOB_RX_STS_RW1C;
    } else {
        iobase->OOBTXSTS = MEC_ESPI_OOB_TX_STS_RW1C;
    }
}

/* end mec_espi_oob.c */
