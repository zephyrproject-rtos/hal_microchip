/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_FC_H
#define _MEC_ESPI_FC_H

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

/* ---- Flash Channel (FC) ---- */
enum mec_espi_fc_op {
    MEC_ESPI_FC_OP_READ = 0,
    MEC_ESPI_FC_OP_WRITE,
    MEC_ESPI_FC_OP_ERASE_S,
    MEC_ESPI_FC_OP_ERASE_L,
    MEC_ESPI_FC_OP_MAX,
};

enum mec_espi_fc_intr {
    MEC_ESPI_FC_INTR_CHEN_POS = 0,
    MEC_ESPI_FC_INTR_CHEN_CHG_POS,
    MEC_ESPI_FC_INTR_DONE_POS,
    MEC_ESPI_FC_INTR_DIS_BY_HOST_POS,
    MEC_ESPI_FC_INTR_EC_BERR_POS,
    MEC_ESPI_FC_INTR_ABORT_BY_EC_POS,
    MEC_ESPI_FC_INTR_DATA_OVRUN_POS,
    MEC_ESPI_FC_INTR_INCOMPL_POS,
    MEC_ESPI_FC_INTR_FAIL_POS,
    MEC_ESPI_FC_INTR_START_OVFL_POS,
    MEC_ESPI_FC_INTR_BAD_REQ_POS = 11,
};

struct mec_espi_fc_xfr {
    uint32_t buf_addr;
    uint32_t flash_addr;
    uint32_t byte_len;
    uint8_t operation;
    uint8_t tag;
};

#define MEC_ESPI_FC_XFR_FLAG_START_IEN_POS 0

void mec_hal_espi_fc_ready_set(struct mec_espi_io_regs *iobase);
int mec_hal_espi_fc_is_ready(struct mec_espi_io_regs *iobase);

/* return bits indicating channel enable state and enable change status */
uint32_t mec_hal_espi_fc_en_status(struct mec_espi_io_regs *iobase);

void mec_hal_espi_fc_girq_ctrl(uint8_t enable);
void mec_hal_espi_fc_girq_status_clr(void);
uint32_t mec_hal_espi_fc_girq_status(void);
uint32_t mec_hal_espi_fc_girq_result(void);

uint32_t mec_hal_espi_fc_max_read_req_sz(struct mec_espi_io_regs *iobase);
uint32_t mec_hal_espi_fc_max_pld_sz(struct mec_espi_io_regs *iobase);

int mec_hal_espi_fc_is_busy(struct mec_espi_io_regs *iobase);
void mec_hal_espi_fc_op_start(struct mec_espi_io_regs *iobase, uint32_t flags);
void mec_hal_espi_fc_op_abort(struct mec_espi_io_regs *iobase);
void mec_hal_espi_fc_intr_ctrl(struct mec_espi_io_regs *iobase, uint32_t msk, uint8_t en);
uint32_t mec_hal_espi_fc_status(struct mec_espi_io_regs *iobase);
void mec_hal_espi_fc_status_clr(struct mec_espi_io_regs *iobase, uint32_t msk);
int mec_hal_espi_fc_is_error(uint32_t fc_status);

/* Return the two allowed erase block sizes in b[15:0] and b[31:16] in units
 * of KB. If only one erase size allowed both fields will be identical.
 * A return value of 0 indicates the flash channel has not been properly
 * configured during eSPI link negoitation.
 */
uint32_t mec_hal_espi_fc_get_erase_sz(struct mec_espi_io_regs *iobase);
int mec_hal_espi_fc_check_erase_sz(struct mec_espi_io_regs *iobase, uint32_t ersz_bytes);

int mec_hal_espi_fc_xfr_start(struct mec_espi_io_regs *iobase, struct mec_espi_fc_xfr *pxfr,
                              uint32_t flags);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_FC_H */
