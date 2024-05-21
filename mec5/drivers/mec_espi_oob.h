/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_OOB_H
#define _MEC_ESPI_OOB_H

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

/* ---- Out-Of-Band channel (OOB) ---- */
enum mec_espi_oob_dir {
    MEC_ESPI_OOB_DIR_UP = 1, /* EC TX buffer to upstream Host eSPI controller */
    MEC_ESPI_OOB_DIR_DN = 2, /* Host eSPI controller to EC RX buffer */
};

enum mec_espi_oob_up_status {
    MEC_ESPI_OOB_UP_STS_DONE_POS= 0,
    MEC_ESPI_OOB_UP_STS_CHEN_CHG_POS,
    MEC_ESPI_OOB_UP_STS_BERR_POS,
    MEC_ESPI_OOB_UP_STS_OVR_POS,
    MEC_ESPI_OOB_UP_STS_BAD_REQ_POS,
};

enum mec_espi_oob_dn_status {
    MEC_ESPI_OOB_DN_STS_DONE_POS = 0,
    MEC_ESPI_OOB_DN_STS_BERR_POS,
    MEC_ESPI_OOB_DN_STS_OVR_POS,
};

enum mec_espi_oob_up_intr {
    MEC_ESPI_OOB_UP_INTR_DONE_POS = 0,
    MEC_ESPI_OOB_UP_INTR_CHEN_CHG_POS,
    MEC_ESPI_OOB_DN_INTR_DONE_POS,
};

struct mec_espi_oob_buf {
    uint32_t maddr;
    uint16_t len;
    uint16_t rx_len; /* actual received length from a RX transaction */
};

void mec_hal_espi_oob_girq_ctrl(uint8_t enable, uint8_t msk);
void mec_hal_espi_oob_girq_status_clr(uint8_t msk);
uint32_t mec_hal_espi_oob_girq_status(void);
uint32_t mec_hal_espi_oob_girq_result(void);

void mec_hal_espi_oob_ready_set(struct mec_espi_io_regs *iobase);
int mec_hal_espi_oob_is_ready(struct mec_espi_io_regs *iobase);

/* return bits indicating eSPI OOB channel enable has changed and the
 * channel enable's current state.
 */
uint32_t mec_hal_espi_oob_en_status(struct mec_espi_io_regs *iobase);

uint32_t mec_hal_espi_oob_max_pkt_size(struct mec_espi_io_regs *iobase);

int mec_hal_espi_oob_buffer_set(struct mec_espi_io_regs *iobase, uint8_t dir,
                                struct mec_espi_oob_buf * buf);
void mec_hal_espi_oob_rx_buffer_avail(struct mec_espi_io_regs *iobase);

void mec_hal_espi_oob_intr_ctrl(struct mec_espi_io_regs *iobase, uint32_t msk, uint8_t en);

void mec_hal_espi_oob_tx_start(struct mec_espi_io_regs *iobase, uint8_t tag, uint8_t start);

/* Get the TAG in the OOB RX packet recevied from the eSPI Host */
uint8_t mec_hal_espi_oob_rx_tag(struct mec_espi_io_regs *iobase);

uint32_t mec_hal_espi_oob_received_len(struct mec_espi_io_regs *iobase);
int mec_hal_espi_oob_tx_is_busy(struct mec_espi_io_regs *iobase);

uint32_t mec_hal_espi_oob_status(struct mec_espi_io_regs *iobase, uint8_t dir);
int mec_hal_espi_oob_is_done(uint32_t status, uint8_t dir);
int mec_hal_espi_oob_is_error(uint32_t status, uint8_t dir);
void mec_hal_espi_oob_status_clr_done(struct mec_espi_io_regs *iobase, uint8_t dir);
void mec_hal_espi_oob_status_clr_err(struct mec_espi_io_regs *iobase, uint8_t dir);
void mec_hal_espi_oob_status_clr_chen_change(struct mec_espi_io_regs *iobase);
int mec_hal_espi_oob_up_is_chan_event(uint32_t status);
void mec_hal_espi_oob_status_clr_all(struct mec_espi_io_regs *iobase, uint8_t dir);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_OOB_H */
