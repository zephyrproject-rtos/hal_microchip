/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_QSPI_API_H
#define _MEC_QSPI_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_QSPI_NUM_INSTANCES 1

#define MEC_QSPI_SHD_PORT      0u
#define MEC_QSPI_PVT_PORT      1u
#define MEC_QSPI_INTERNAL_PORT 2u
#define MEC_QSPI_MAX_PORT      3u

/* SPI Flash Command structure */
struct mec_spi_flash_cmd {
    uint8_t opcode;
    uint8_t npc;          /* number of pins for opcode xmit */
    uint8_t npa;          /* number of pins for command parameter xmit */
    uint8_t npd;          /* number of pins for data r/w */
    uint8_t addr_nb;      /* byte length of address */
    uint8_t mode_byte;    /* optional mode byte */
    uint8_t mode_nbits;   /* num bits in mode byte. 0 = no mode byte */
    uint8_t dummy_clocks; /* num dummy clocks to xmit after mode byte */
};

/* QMSPI API */

enum mec_qspi_signal_mode {    /* clock idle state, TX clock edge, RX clock edge */
    MEC_SPI_SIGNAL_MODE_0 = 0, /*  low               falling        rising       */
    MEC_SPI_SIGNAL_MODE_1,     /*  low               rising         falling      */
    MEC_SPI_SIGNAL_MODE_2,     /*  high              rising         falling      */
    MEC_SPI_SIGNAL_MODE_3,     /*  high              falling        rising       */
    MEC_SPI_SIGNAL_MODE_MAX,
};

enum mec_qspi_cs {
    MEC_QSPI_CS_0 = 0,
    MEC_QSPI_CS_1,
    MEC_QSPI_CS_MAX,
};

enum mec_qspi_io {
    MEC_QSPI_IO_FULL_DUPLEX = 0,
    MEC_QSPI_IO_DUAL,
    MEC_QSPI_IO_QUAD,
    MEC_QSPI_IO_MAX,
};

enum mec_qspi_cstm {
    MEC_QSPI_CSTM_CSA2CLK = 0,
    MEC_QSPI_CSTM_CLK2CSD,
    MEC_QSPI_CSTM_LD2H,
    MEC_QSPI_CSTM_CSD2CSA,
    MEC_QSPI_CSTM_MAX,
};

enum mec_qspi_status {
    MEC_QSPI_STS_XFR_DONE    = MEC_BIT(0),
    MEC_QSPI_STS_DMA_DONE    = MEC_BIT(1),
    MEC_QSPI_STS_TXB_ERR     = MEC_BIT(2), /* overflow TX FIFO or DMA buffer */
    MEC_QSPI_STS_RXB_ERR     = MEC_BIT(3), /* underflow RX FIFO or DMA buffer */
    MEC_QSPI_STS_PROG_ERR    = MEC_BIT(4), /* software misconfigured transfer */
    MEC_QSPI_STS_LDMA_RX_ERR = MEC_BIT(5), /* Local-DMA error on receive */
    MEC_QSPI_STS_LDMA_TX_ERR = MEC_BIT(6), /* Local-DMA error on transmit */
    MEC_QSPI_STS_TXB_FULL    = MEC_BIT(8), /* TX FIFO full */
    MEC_QSPI_STS_TXB_EMPTY   = MEC_BIT(9), /* TX FIFO empty */
    MEC_QSPI_STS_TXB_REQ     = MEC_BIT(10), /* TX FIFO reached high water mark */
    MEC_QSPI_STS_TXB_STALL   = MEC_BIT(11), /* TX FIFO empty when engine requests more data */
    MEC_QSPI_STS_RXB_FULL    = MEC_BIT(12), /* RX FIFO full */
    MEC_QSPI_STS_RXB_EMPTY   = MEC_BIT(13), /* RX FIFO empty */
    MEC_QSPI_STS_RXB_REQ     = MEC_BIT(14), /* RX FIFO reached high water mark */
    MEC_QSPI_STS_RXB_STALL   = MEC_BIT(15), /* No clocks generated due to full RX FIFO */
    MEC_QSPI_STS_ACTIVE      = MEC_BIT(16), /* QSPI is asserting its chip select */
};

enum mec_qspi_intr_enables {
    MEC_QSPI_IEN_XFR_DONE    = MEC_BIT(0),
    MEC_QSPI_IEN_DMA_DONE    = MEC_BIT(1),
    MEC_QSPI_IEN_TXB_ERR     = MEC_BIT(2),
    MEC_QSPI_IEN_RXB_ERR     = MEC_BIT(3),
    MEC_QSPI_IEN_PROG_ERR    = MEC_BIT(4),
    MEC_QSPI_IEN_LDMA_RX_ERR = MEC_BIT(5),
    MEC_QSPI_IEN_LDMA_TX_ERR = MEC_BIT(6),
    MEC_QSPI_IEN_TXB_FULL    = MEC_BIT(8),
    MEC_QSPI_IEN_TXB_EMPTY   = MEC_BIT(9),
    MEC_QSPI_IEN_TXB_REQ     = MEC_BIT(10),
    MEC_QSPI_IEN_RXB_FULL    = MEC_BIT(12),
    MEC_QSPI_IEN_RXB_EMPTY   = MEC_BIT(13),
    MEC_QSPI_IEN_RXB_REQ     = MEC_BIT(14),
};

enum mec_qspi_options {
    MEC_QSPI_OPT_ACTV_EN_POS = 0,
    MEC_QSPI_OPT_TAF_DMA_EN_POS,
    MEC_QSPI_OPT_RX_LDMA_EN_POS,
    MEC_QSPI_OPT_TX_LDMA_EN_POS,
};

#define MEC_QSPI_STATE_CLOSED  0
#define MEC_QSPI_STATE_OPEN_TX 1
#define MEC_QSPI_STATE_OPEN_RX 2
#define MEC_QSPI_STATE_MAX     3

#define MEC_QSPI_FLAG_TX_OPCODE MEC_BIT(0)
#define MEC_QSPI_FLAG_TX_ADDR   MEC_BIT(1)
#define MEC_QSPI_FLAG_TX_DUMCLK MEC_BIT(2)
#define MEC_QSPI_FLAG_TX_MODEB  MEC_BIT(3)

#define MEC_QSPI_CTX_DIR_RD 0U
#define MEC_QSPI_CTX_DIR_WR 1U

#define MEC_QSPI_BUF_FLAG_IFM_POS 0
#define MEC_QSPI_BUF_FLAG_IFM_MSK 0x3u
#define MEC_QSPI_BUF_FLAG_IFM_FD 0u /* full-duplex */
#define MEC_QSPI_BUF_FLAG_IFM_DUAL 1u /* half-duplex, dual I/O */
#define MEC_QSPI_BUF_FLAG_IFM_QUAD 2u /* half-duplex, quad I/O */
#define MEC_QSPI_BUF_FLAG_DIR_TX_POS 4

struct mec_qspi_buf {
    void *buf;
    uint32_t len;
    uint8_t flags;
};

struct mec_qspi_timing {
    uint32_t freqhz;
    uint8_t dly_csa_to_clk;
    uint8_t dly_clk_to_csd;
    uint8_t dly_csd_to_wph;
    uint8_t dly_start_to_csa;
    uint32_t taps;
};

/* forward reference */
struct mec_qspi_regs;

/* Return QSPI controller SPI clock source in Hz */
uint32_t mec_hal_qspi_max_spi_clock(void);

bool mec_hal_qspi_is_enabled(struct mec_qspi_regs *regs);

/* Return current QSPI frequency in Hz */
uint32_t mec_hal_qspi_get_freq(struct mec_qspi_regs *base);
uint32_t mec_hal_qspi_freq_div(struct mec_qspi_regs *base);
uint16_t mec_hal_qspi_freq_div_raw(struct mec_qspi_regs *base);
int mec_hal_qspi_set_freq(struct mec_qspi_regs *base, uint32_t freqhz);
int mec_hal_qspi_byte_time_ns(struct mec_qspi_regs *base, uint32_t *btime_ns);

/* Reset QSPI block and clear interrupt status. */
int mec_hal_qspi_reset(struct mec_qspi_regs *base);

/* Reset QSPI block with save/restore of frequency, signalling mode,
 * CS timing, and taps select.
 */
int mec_hal_qspi_reset_sr(struct mec_qspi_regs *base);

void mec_hal_qspi_girq_clr(struct mec_qspi_regs *base);
void mec_hal_qspi_girq_ctrl(struct mec_qspi_regs *base, uint8_t enable);
uint32_t mec_hal_qspi_girq_is_result(struct mec_qspi_regs *base);

/* 1 = enable clock input to QMSPI block
 * 0 = disable clock input to QMSPI block
 */
int mec_hal_qspi_clk_gate(struct mec_qspi_regs *base, uint8_t gate_clocks_on);

int mec_hal_qspi_init(struct mec_qspi_regs *base,
                      uint32_t freq_hz,
                      enum mec_qspi_signal_mode spi_mode,
                      enum mec_qspi_io iom,
                      enum mec_qspi_cs cs);

int mec_hal_qspi_options(struct mec_qspi_regs *regs, uint8_t en, uint32_t options);

int mec_hal_qspi_cs_select(struct mec_qspi_regs *base, enum mec_qspi_cs cs);

int mec_hal_qspi_spi_signal_mode(struct mec_qspi_regs *base, enum mec_qspi_signal_mode spi_mode);
int mec_hal_qspi_sampling_phase_pol(struct mec_qspi_regs *base, uint8_t phpol);

int mec_hal_qspi_io(struct mec_qspi_regs *base, enum mec_qspi_io io);

int mec_hal_qspi_cs_timing_adjust(struct mec_qspi_regs *base,
                                  enum mec_qspi_cstm field, uint8_t val);

int mec_hal_qspi_cs_timing(struct mec_qspi_regs *base, uint32_t cs_timing);

int mec_hal_qspi_tap_select(struct mec_qspi_regs *base, uint8_t sel_sck_tap, uint8_t sel_ctrl_tap);

int mec_hal_qspi_cs1_freq(struct mec_qspi_regs *base, uint32_t freq);

int mec_hal_qspi_force_stop(struct mec_qspi_regs *base);

int mec_hal_qspi_done(struct mec_qspi_regs *base);

uint32_t mec_hal_qspi_hw_status(struct mec_qspi_regs *base);
int mec_hal_qspi_hw_status_clr(struct mec_qspi_regs *base, uint32_t msk);
int mec_hal_qspi_intr_ctrl(struct mec_qspi_regs *base, int enable);
int mec_hal_qspi_intr_ctrl_msk(struct mec_qspi_regs *base, int enable, uint32_t msk);

int mec_hal_qspi_tx_fifo_is_empty(struct mec_qspi_regs *base);
int mec_hal_qspi_tx_fifo_is_full(struct mec_qspi_regs *base);
int mec_hal_qspi_rx_fifo_is_empty(struct mec_qspi_regs *base);
int mec_hal_qspi_rx_fifo_is_full(struct mec_qspi_regs *base);

/* Start previously configured QSPI transaction.
 * ien_mask == 0 disabled interrupts.
 * ien_mask != 0 should use one or more values from enum mec_qspi_intr_enables
 */
int mec_hal_qspi_start(struct mec_qspi_regs *base, uint32_t ien_mask);

/* Store data bytes into QSPI TX FIFO until full or bufsz reached.
 * Store number of bytes written into nwr if not NULL.
 */
int mec_hal_qspi_wr_tx_fifo(struct mec_qspi_regs *regs, const uint8_t *buf, uint32_t bufsz,
                            uint32_t *nwr);

int mec_hal_qspi_rd_rx_fifo(struct mec_qspi_regs *regs, uint8_t *buf, uint32_t bufsz,
                            uint32_t *nrd);

#define MEC5_QSPI_BUILD_DESCR_TX_DATA  MEC_BIT(0)
#define MEC5_QSPI_BUILD_DESCR_TX_ZEROS MEC_BIT(1)
#define MEC5_QSPI_BUILD_DESCR_TX_ONES  MEC_BIT(2)
#define MEC5_QSPI_BUILD_DESCR_RX_DATA  MEC_BIT(3)

/* Build a 32-bit QSPI descriptor based on inputs.
 * ifm is type enum mec_qspi_io specifying the data bus: full-duplex, dual, or quad
 * nunits is the number of units (bytes or bits) to transfer.
 * flags contains bits indicating units are bytes or bits, enable transmit, enable
 *   receive, etc.
 * remunits pointer to uint32_t containing the number of remaining units if the
 * descriptor number of units was exceeded.
 */
uint32_t mec_hal_qspi_build_descr(enum mec_qspi_io ifm, uint32_t nunits, uint32_t *remunits,
                                  uint32_t flags);

#define MEC_QSPI_XFR_FLAG_CLR_FIFOS_POS 0
#define MEC_QSPI_XFR_FLAG_IEN_POS 1
#define MEC_QSPI_XFR_FLAG_CLOSE_POS 2
#define MEC_QSPI_XFR_FLAG_START_POS 3

int mec_hal_qspi_ldma(struct mec_qspi_regs *base, const uint8_t *txb,
                      uint8_t* rxb, size_t lenb, uint32_t flags);


/* -------- new API's -------- */
struct mec_qspi_context {
    uint8_t ndescrs;
    uint8_t ntxdma;
    uint8_t nrxdma;
    uint8_t xflags;
    uint32_t descrs[MEC5_QSPI_NUM_DESCRS];
};

void mec_hal_qspi_context_init(struct mec_qspi_context *ctx);

uint8_t mec_hal_qspi_ctx_alloc_ldma_chan(struct mec_qspi_context *ctx, uint8_t is_tx);

#define MEC5_QSPI_DCFG1_FLAG_IFM_POS        0
#define MEC5_QSPI_DCFG1_FLAG_IFM_MSK        0x3u
#define MEC5_QSPI_DCFG1_FLAG_IFM_FD         0u
#define MEC5_QSPI_DCFG1_FLAG_IFM_DUAL       0x1
#define MEC5_QSPI_DCFG1_FLAG_IFM_QUAD       0x2u
#define MEC5_QSPI_DCFG1_FLAG_DIR_TX         MEC_BIT(2)
#define MEC5_QSPI_DCFG1_FLAG_DIR_RX         MEC_BIT(3)
#define MEC5_QSPI_DCFG1_FLAG_DMA_TX_POS     4
#define MEC5_QSPI_DCFG1_FLAG_DMA_TX_MSK     0x30u
#define MEC5_QSPI_DCFG1_FLAG_DMA_RX_POS     8
#define MEC5_QSPI_DCFG1_FLAG_DMA_RX_MSK     0x300u
#define MEC5_QSPI_DCFG1_FLAG_DMA_MSK0       0x3u

#define MEC5_QSPI_DCFG1_FLAG_IFM(ifm)   \
    (((uint32_t)(ifm) & MEC5_QSPI_DCFG1_FLAG_IFM_MSK) << MEC5_QSPI_DCFG1_FLAG_IFM_POS)

/* chan = 0 (disabled), 1-3 is Local-DMA channel */
#define MEC5_QSPI_DCFG1_FLAG_DMA_TX(chan)   \
    (((uint32_t)(chan) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0) << MEC5_QSPI_DCFG1_FLAG_DMA_TX_POS)

#define MEC5_QSPI_DCFG1_FLAG_DMA_RX(chan)   \
    (((uint32_t)(chan) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0) << MEC5_QSPI_DCFG1_FLAG_DMA_RX_POS)

uint32_t mec_hal_qspi_descrs_cfg1(struct mec_qspi_context *ctx, uint32_t nbytes, uint32_t flags);

/* Use same flags as mec_qspi_descrs_cfg1 except only set one of DIR_TX or DIR_RX
 * and the corresponding DMA channel field
 */
int mec_hal_qspi_ldma_cfg1(struct mec_qspi_regs *regs, uintptr_t buf_addr,
                           uint32_t nbytes, uint32_t ldflags);

/* Configure next free descriptor to generate clocks with all I/O pins tri-stated.
 * nclocks < 1000
 * nio_pins = [1, 2, 4]
 */
int mec_hal_qspi_cfg_gen_ts_clocks(struct mec_qspi_context *ctx, uint32_t nclocks,
                                   uint8_t nio_pins);

/* Load descriptors from context structure into QSPI descriptor registers
 * NOTE: loads all descriptors.
 */
#define MEC5_QSPI_LD_FLAGS_LAST_POS             0
#define MEC5_QSPI_LD_FLAGS_CLOSE_ON_LAST_POS    1

int mec_hal_qspi_load_descrs(struct mec_qspi_regs *regs, struct mec_qspi_context *ctx,
                             uint32_t flags);

int mec_hal_qspi_load_descrs_at(struct mec_qspi_regs *regs, const uint32_t *descrs, uint8_t ndescr,
                                uint8_t start_descr_idx);

/* -------- 2024-11-04 -------- */
#define MEC5_QSPI_ULDMA_FLAG_START 0x01u
#define MEC5_QSPI_ULDMA_FLAG_IEN   0x02u
#define MEC5_QSPI_ULDMA_FLAG_CLOSE 0x10u

/* Full-duplex TX overrun data value used when rxlen > txlen.
 * This value will be transmitted for the remaining (rxlen - txlen) bytes.
 */
#define MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_SET(f, b) \
    (((uint32_t)(f) & 0x00ffffffu) | ((uint32_t)(b) << 24))

#define MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_GET(f) ((uint32_t)(f) >> 24)

int mec_hal_qspi_uldma_fd(struct mec_qspi_regs *regs, const uint8_t *txb, size_t txlen,
                          uint8_t *rxb, size_t rxlen, uint32_t flags);

int mec_hal_qspi_xfr_fifo_fd(struct mec_qspi_regs *regs, const uint8_t *txb, uint8_t *rxb,
                             size_t xlen, uint32_t flags);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_QSPI_API_H */
