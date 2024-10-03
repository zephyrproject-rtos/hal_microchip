/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_UART_API_H
#define _MEC_UART_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* 16550 compatible UART has TX and RX FIFO' each 16 bytes in size */
#define MEC_UART_FIFO_LEN 16

enum mec_uart_word_len {
    MEC_UART_WORD_LEN_5 = 0,
    MEC_UART_WORD_LEN_6,
    MEC_UART_WORD_LEN_7,
    MEC_UART_WORD_LEN_8,
    MEC_UART_WORD_LEN_MAX,
};

enum mec_uart_parity {
    MEC_UART_PARITY_NONE = 0,
    MEC_UART_PARITY_ODD,
    MEC_UART_PARITY_EVEN,
    MEC_UART_PARITY_MARK,
    MEC_UART_PARITY_SPACE,
    MEC_UART_PARITY_MAX,
};

enum mec_uart_stop_bits {
    MEC_UART_STOP_BITS_1 = 0,
    MEC_UART_STOP_BITS_2,
    MEC_UART_STOP_BITS_MAX,
};

enum mec_uart_sts_reg {
    MEC_UART_STS_REG_IID = 0,
    MEC_UART_STS_REG_LINE,
    MEC_UART_STS_REG_MODEM,
    MEC_UART_STS_REG_MAX,
};

enum mec_uart_fifo_mode {
    MEC_UART_FIFOS_CFG_DIS = 0,
    MEC_UART_FIFOS_CFG_EN_RX_TRIG_1,
    MEC_UART_FIFOS_CFG_EN_RX_TRIG_4,
    MEC_UART_FIFOS_CFG_EN_RX_TRIG_8,
    MEC_UART_FIFOS_CFG_EN_RX_TRIG_14,
    MEC_UART_FIFOS_CFG_MAX,
};

enum mec_uart_ipend {
    MEC_UART_IPEND_NONE = 0,
    MEC_UART_IPEND_MODEM, /* lowest priority */
    MEC_UART_IPEND_TX,
    MEC_UART_IPEND_RX_DATA,
    MEC_UART_IPEND_RX_ERR, /* highest priority */
    MEC_UART_IPEND_UNKOWN,
    MEC_UART_IPEND_MAX,
};

#define MEC_UART_CFG_FLAG_SOC_CLK 0
#define MEC_UART_CFG_FLAG_LINES_NONINVERT 0
#define MEC_UART_CFG_FLAG_EXT_CLK 0x01u
#define MEC_UART_CFG_FLAG_INVERT_LINES 0x02u

#define MEC_UART_IEN_FLAG_ERDAI 0x01
#define MEC_UART_IEN_FLAG_ETHREI 0x02
#define MEC_UART_IEN_FLAG_ELSI 0x04
#define MEC_UART_IEN_FLAG_EMSI 0x08

struct mec_uart_cfg {
    uint32_t clock_freq;
    uint32_t baud_rate;
    uint8_t word_len;
    uint8_t parity;
    uint8_t stop_bits;
    uint8_t cfg_flags;
    uint8_t fifo_mode;
    uint8_t ien_flags;
};


/* UART configuration 32-bit word */
#define MEC5_UART_CFG_RESET_HOST_POS 0
#define MEC5_UART_CFG_RESET_HOST 0x01u
#define MEC5_UART_CFG_INVERT_LINES_POS 1
#define MEC5_UART_CFG_INVERT_LINES 0x02u
#define MEC5_UART_CFG_FIFO_EN_POS 3
#define MEC5_UART_CFG_FIFO_EN 0x08u
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_POS 4
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_MSK 0x30u
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_1 0x00u
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_4 0x10u
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_8 0x20u
#define MEC5_UART_CFG_RX_FIFO_TRIG_LVL_14 0x30u
#define MEC5_UART_CFG_WORD_LEN_POS 6
#define MEC5_UART_CFG_WORD_LEN_MSK 0xc0u
#define MEC5_UART_CFG_WORD_LEN_5 0x00u
#define MEC5_UART_CFG_WORD_LEN_6 0x40u
#define MEC5_UART_CFG_WORD_LEN_7 0x80u
#define MEC5_UART_CFG_WORD_LEN_8 0xc0u
#define MEC5_UART_CFG_STOP_BITS_POS 8
#define MEC5_UART_CFG_STOP_BITS_MSK 0x100u
#define MEC5_UART_CFG_STOP_BITS_1 0
#define MEC5_UART_CFG_STOP_BITS_2 0x100u
#define MEC5_UART_CFG_PARITY_POS 9
#define MEC5_UART_CFG_PARITY_MSK 0xe00u
#define MEC5_UART_CFG_PARITY_NONE 0
#define MEC5_UART_CFG_PARITY_ODD 0x200u
#define MEC5_UART_CFG_PARITY_EVEN 0x300u
#define MEC5_UART_CFG_PARITY_MARK 0xa00u
#define MEC5_UART_CFG_PARITY_SPACE 0xe00u
#define MEC5_UART_CFG_GIRQ_EN_POS 16

#define MEC5_UART_MIN_BAUD 50u
#define MEC5_UART_MAX_BAUD 3000000u

/* BAUD rate = clock_source / (baud_divisor * 16)
 * default internal clock source = 1.8432 MHz
 * alternate internal clock source = 48 MHz
 * external clock source on UART_CLK alternate GPIO function.
 */

/* forward declaration */
struct mec_uart_regs;

int mec_hal_uart_init(struct mec_uart_regs *base, uint32_t baud_rate,
                      uint32_t config, uint32_t extclk_hz);

int mec_hal_uart_activate(struct mec_uart_regs *regs, uint8_t enable);

int mec_hal_uart_power_on(struct mec_uart_regs *regs, uint32_t cfg_flags);

int mec_hal_uart_girq_ctrl(struct mec_uart_regs *regs, uint8_t enable);
int mec_hal_uart_girq_clear(struct mec_uart_regs *regs);
bool mec_hal_uart_is_girq_status(struct mec_uart_regs *regs);
bool mec_hal_uart_is_girq_result(struct mec_uart_regs *regs);

int mec_hal_uart_clock_freq_get(struct mec_uart_regs *base, uint32_t *clock_freq);

int mec_hal_uart_baud_rate_set(struct mec_uart_regs *base, uint32_t baud, uint32_t extclk_hz);

int mec_hal_uart_word_len_set(struct mec_uart_regs *base, uint8_t word_len);
int mec_hal_uart_word_len_get(struct mec_uart_regs *base, uint8_t *word_len);

int mec_hal_uart_stop_bits_set(struct mec_uart_regs *base, uint8_t stop_bits);
int mec_hal_uart_stop_bits_get(struct mec_uart_regs *base, uint8_t *stop_bits);

int mec_hal_uart_parity_set(struct mec_uart_regs *base, uint8_t parity);
int mec_hal_uart_parity_get(struct mec_uart_regs *base, uint8_t *parity);

int mec_hal_uart_fifo_control(struct mec_uart_regs *base, uint8_t fifo_cfg);

int mec_hal_uart_intr_control(struct mec_uart_regs *base, uint8_t enmask);

int mec_hal_uart_intr_mask(struct mec_uart_regs *base, uint8_t msk, uint8_t val);

/* Read selected status and return raw value */
int mec_hal_uart_raw_status(struct mec_uart_regs *base, enum mec_uart_sts_reg regid,
                            uint8_t *status);

int mec_hal_uart_pending_status(struct mec_uart_regs *base, enum mec_uart_ipend *ipend);

int mec_hal_uart_is_rx_data(struct mec_uart_regs *base);

int mec_hal_uart_is_tx_fifo_empty(struct mec_uart_regs *base);
int mec_hal_uart_is_tx_empty(struct mec_uart_regs *base);

int mec_hal_uart_tx_fifo_size(struct mec_uart_regs *base);
int mec_hal_uart_rx_fifo_size(struct mec_uart_regs *base);

/* 16550 style UART only has TX Holding Register Empty status. There is no
 * HW mechanism to determine the amount of data in the TX FIFO.
 * This routine writes a byte to the HW TX buffer if the TX Holding Register
 * is empty else it returns MEC_RET_ERR_BUSY.
 */
int mec_hal_uart_tx_byte(struct mec_uart_regs *base, uint8_t data);

/* blocking */
int mec_hal_uart_tx(struct mec_uart_regs *base, const uint8_t *data, size_t datasz);

/* If data is available read the data and store in data buffer.
 * If data present and overrun, parity, or framing error returns MEC_RET_ERR_BAD_DATA
 * If no data returns MEC_RET_ERR_NO_DATA.
 * If base or data is bad returns MEC_RET_ERR_INVAL
 */
int mec_hal_uart_rx_byte(struct mec_uart_regs *base, uint8_t *data);

/* Modem: set state of DTR or RTS pin */
#define MEC_UART_DTR_SELECT 0
#define MEC_UART_RTS_SELECT 1

int mec_hal_uart_dtr_rts_set(struct mec_uart_regs *base, uint8_t sel_rts,
                             uint8_t pin_state);

void mec_hal_uart_pm_save_disable(void);
void mec_hal_uart_pm_restore(void);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_UART_API_H */
