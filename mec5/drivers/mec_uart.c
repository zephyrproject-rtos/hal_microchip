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
#include "mec_uart_api.h"
#include "mec_retval.h"

#define MEC_UART_INT_CLK_0 1843200u
#define MEC_UART_INT_CLK_1 48000000u

struct mec_uart_info {
    uintptr_t base_addr;
    uint32_t devi;
    uint16_t pcr_id;
};

#define MEC_UART0_ECIA_INFO MEC5_ECIA_INFO(15, 0, 7, 40)
#define MEC_UART1_ECIA_INFO MEC5_ECIA_INFO(15, 1, 7, 41)
#define MEC_UART2_ECIA_INFO MEC5_ECIA_INFO(15, 25, 7, 183)
#define MEC_UART3_ECIA_INFO MEC5_ECIA_INFO(15, 26, 7, 184)

static const struct mec_uart_info uart_instances[MEC5_UART_INSTANCES] = {
    {UART0_BASE, MEC_UART0_ECIA_INFO, MEC_PCR_UART0 },
    {UART1_BASE, MEC_UART1_ECIA_INFO, MEC_PCR_UART1 },
#if MEC5_UART_INSTANCES == 4
    {UART2_BASE, MEC_UART2_ECIA_INFO, MEC_PCR_UART2 },
    {UART3_BASE, MEC_UART3_ECIA_INFO, MEC_PCR_UART3 },
#endif
};

static const uint8_t uart_word_len_tbl[MEC_UART_WORD_LEN_MAX] = {
    (UART_LCR_WORD_LEN_5BITS << UART_LCR_WORD_LEN_Pos),
    (UART_LCR_WORD_LEN_6BITS << UART_LCR_WORD_LEN_Pos),
    (UART_LCR_WORD_LEN_7BITS << UART_LCR_WORD_LEN_Pos),
    (UART_LCR_WORD_LEN_8BITS << UART_LCR_WORD_LEN_Pos),
};

static const uint8_t uart_parity_tbl[MEC_UART_PARITY_MAX] = {
    0u,
    (MEC_BIT(UART_LCR_PARITY_Pos) | (UART_LCR_PARITY_SEL_ODD << UART_LCR_PARITY_SEL_Pos)),
    (MEC_BIT(UART_LCR_PARITY_Pos) | (UART_LCR_PARITY_SEL_EVEN << UART_LCR_PARITY_SEL_Pos)),
    (MEC_BIT(UART_LCR_PARITY_Pos) | (UART_LCR_PARITY_SEL_MARK << UART_LCR_PARITY_SEL_Pos)),
    (MEC_BIT(UART_LCR_PARITY_Pos) | (UART_LCR_PARITY_SEL_SPACE << UART_LCR_PARITY_SEL_Pos)),
};

static const uint8_t uart_fcr_tbl[MEC_UART_FIFOS_CFG_MAX] = {
    0u,
    (MEC_BIT(UART_FCR_EXRF_Pos) | (UART_FCR_RXF_TLVL_1BYTE << UART_FCR_RXF_TLVL_Pos)),
    (MEC_BIT(UART_FCR_EXRF_Pos) | (UART_FCR_RXF_TLVL_4BYTES << UART_FCR_RXF_TLVL_Pos)),
    (MEC_BIT(UART_FCR_EXRF_Pos) | (UART_FCR_RXF_TLVL_8BYTES << UART_FCR_RXF_TLVL_Pos)),
    (MEC_BIT(UART_FCR_EXRF_Pos) | (UART_FCR_RXF_TLVL_14BYTES << UART_FCR_RXF_TLVL_Pos)),
};

static struct mec_uart_info const *get_uart_info(struct uart_regs *regs)
{
    for (int i = 0; i < MEC5_UART_INSTANCES; i++) {
        const struct mec_uart_info *p = &uart_instances[i];

        if (p->base_addr == (uintptr_t)regs) {
            return p;
        }
    }

    return NULL;
}

static uint32_t uart_baud_divider_get(struct uart_regs *base)
{
    uint32_t brdiv = 0u;

    base->LCR |= MEC_BIT(UART_LCR_DLAB_Pos);
    brdiv = base->IER;
    brdiv <<= 8;
    brdiv |= base->RXB;
    base->LCR &= (uint8_t)~MEC_BIT(UART_LCR_DLAB_Pos);

    return brdiv;
}

static void uart_prog_fifos(struct uart_regs *base, uint8_t fifo_mode)
{
    uint8_t temp = (MEC_BIT(UART_FCR_EXRF_Pos) | MEC_BIT(UART_FCR_CLR_RX_FIFO_Pos)
                    | MEC_BIT(UART_FCR_CLR_TX_FIFO_Pos));

    /* enable and clear both FIFOs */
    base->FCR = temp;
    base->SCR = temp;

    temp = uart_fcr_tbl[fifo_mode];

    base->FCR = temp;
    base->SCR = temp;
}

int mec_uart_tx_fifo_size(struct uart_regs *base)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    if (base->SCR & MEC_BIT(UART_FCR_EXRF_Pos)) {
        return 16;
    }

    return 1;
}

int mec_uart_rx_fifo_size(struct uart_regs *base)
{
    return mec_uart_tx_fifo_size(base);
}

/* Get the UART's source clock frequency.
 * @return 0 normal return, clock_freq filled in with UART BAUD clock input
 * frequency. If an external frequency was configured the clock_freq filled
 * with 0. Non-zero return is an error due to bad UART base address or clock_freq
 * parameter is a NULL pointer.
 */
int mec_uart_clock_freq_get(struct uart_regs *base, uint32_t *clock_freq)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint32_t brdiv = 0u;

    if (!info || !clock_freq) {
        return MEC_RET_ERR_INVAL;
    }

    if (base->CFGS & MEC_BIT(UART_CFGS_CLK_SRC_EXT_Pos)) {
        *clock_freq = 0u; /* external, we don't know */
        return MEC_RET_OK;
    }

    brdiv = uart_baud_divider_get(base);
    if (brdiv & MEC_BIT(15)) {
        *clock_freq = MEC_UART_INT_CLK_1;
    } else {
        *clock_freq = MEC_UART_INT_CLK_0;
    }

    return MEC_RET_OK;
}

int mec_uart_parity_set(struct uart_regs *base, uint8_t parity)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t val;

    if (!info || (parity >= MEC_UART_PARITY_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    val = uart_parity_tbl[parity];

    base->LSR = (base->LSR & (uint8_t)~(UART_LCR_PARITY_Msk | UART_LCR_PARITY_SEL_Msk)) | val;

    return MEC_RET_OK;
}

int mec_uart_parity_get(struct uart_regs *base, uint8_t *parity)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t i, reg_val;

    if (!info || !parity) {
        return MEC_RET_ERR_INVAL;
    }

    reg_val = base->LCR & (UART_LCR_PARITY_Msk | UART_LCR_PARITY_SEL_Msk);

    for (i = 0; i < MEC_UART_PARITY_MAX; i++) {
        if (reg_val == uart_parity_tbl[i]) {
            *parity = i;
            return MEC_RET_OK;
        }
    }

    return MEC_RET_ERR_INVAL;
}

int mec_uart_word_len_set(struct uart_regs *base, uint8_t word_len)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t val;

    if (!info || (word_len >= MEC_UART_WORD_LEN_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    val = uart_word_len_tbl[word_len];

    base->LCR = (base->LCR & (uint8_t)~UART_LCR_WORD_LEN_Msk) | val;

    return MEC_RET_OK;
}

int mec_uart_word_len_get(struct uart_regs *base, uint8_t *word_len)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t temp = 0u;

    if (!info || !word_len) {
        return MEC_RET_ERR_INVAL;
    }

    temp = base->LCR & UART_LCR_WORD_LEN_Msk;
    for (uint8_t i = 0; i < MEC_UART_WORD_LEN_MAX; i++) {
        if (uart_word_len_tbl[i] == temp) {
            *word_len = i;
            return MEC_RET_OK;
        }
    }

    return MEC_RET_ERR_INVAL;
}

/* Configure the number of stop bit per word.
 * NOTE: if word length is 5 bits and 2 stop bits are selected the
 * 16550 hardware will actually use 1.5 stop bits.
 */
int mec_uart_stop_bits_set(struct uart_regs *base, uint8_t stop_bits)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info || (stop_bits >= MEC_UART_STOP_BITS_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (stop_bits == MEC_UART_STOP_BITS_2) {
        base->LCR |= MEC_BIT(UART_LCR_STOP_BITS_Pos);
    } else {
        base->LCR &= (uint8_t)~MEC_BIT(UART_LCR_STOP_BITS_Pos);
    }

    return MEC_RET_OK;
}

int mec_uart_stop_bits_get(struct uart_regs *base, uint8_t *stop_bits)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info || !stop_bits) {
        return MEC_RET_ERR_INVAL;
    }

    if (base->LCR & MEC_BIT(UART_LCR_STOP_BITS_Pos)) {
        *stop_bits = MEC_UART_STOP_BITS_2;
    } else {
        *stop_bits |= MEC_UART_STOP_BITS_1;
    }

    return MEC_RET_OK;
}

int mec_uart_fifo_control(struct uart_regs *base, uint8_t fifo_mode)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info || (fifo_mode >= MEC_UART_FIFOS_CFG_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    uart_prog_fifos(base, fifo_mode);

    return MEC_RET_OK;
}

static void prog_cfg1(struct uart_regs *regs, uint32_t config, uint32_t extclk_hz)
{
    uint32_t temp = 0;

    if (extclk_hz) {
        temp = MEC_BIT(UART_CFGS_CLK_SRC_EXT_Pos);
    }

    if (config & MEC_BIT(MEC5_UART_CFG_RESET_HOST_POS)) {
        temp |= MEC_BIT(UART_CFGS_RESET_SRC_Pos);
    }

    if (config & MEC_BIT(MEC5_UART_CFG_INVERT_LINES_POS)) {
        temp |= MEC_BIT(UART_CFGS_POLARITY_Pos);
    }

    regs->CFGS = (uint8_t)(temp & 0xffu);
}

/* BAUD rate = clock_source / (baud_divisor * 16)
 * baud_divisor = clock_source / (BAUD_rate * 16)
 */
static int prog_baud_rate(struct uart_regs *regs, uint32_t baud_rate, uint32_t extclk_hz)
{
    uint32_t clksrc = 1843200u; /* 1.8432 MHz internal clock source */
    uint32_t bdiv = 0;
    uint16_t brg = 0;

    if (!baud_rate) {
        return MEC_RET_ERR_INVAL;
    }

    if (extclk_hz) {
        clksrc = extclk_hz; /* external clock on UART_CLK pin */
    } else if (baud_rate > 115200u) {
        clksrc = 48000000u; /* 48MHz internal clock source */
        brg |= MEC_BIT(15);
    }

    bdiv = clksrc / (baud_rate * 16u);
    /* BAUD rate generator uses b[14:0] for HW divider and b[15] for internal clock select */
    if (!bdiv || (bdiv > 0x7fffu)) {
        return MEC_RET_ERR_INVAL;
    }

    brg |= (bdiv & 0x7fffu);
    regs->LCR |= (uint8_t)MEC_BIT(UART_LCR_DLAB_Pos);
    regs->TXB = (uint8_t)(brg & 0xffu); /* LSB */
    regs->IER = (uint8_t)(brg >> 8); /* MSB */
    regs->LCR &= (uint8_t)~MEC_BIT(UART_LCR_DLAB_Pos);

    return MEC_RET_OK;
}

static void prog_word_len(struct uart_regs *regs, uint32_t config)
{
    uint32_t val = ((config & MEC5_UART_CFG_WORD_LEN_MSK) >> MEC5_UART_CFG_WORD_LEN_POS);

    val = (val << UART_LCR_WORD_LEN_Pos) & UART_LCR_WORD_LEN_Msk;
    regs->LCR = (regs->LCR & (uint8_t)~UART_LCR_WORD_LEN_Msk) | (uint8_t)(val & 0xffu);
}

static void prog_parity(struct uart_regs *regs, uint32_t config)
{
    uint32_t val = ((config & MEC5_UART_CFG_PARITY_MSK) >> MEC5_UART_CFG_PARITY_POS);

    val <<= UART_LCR_PARITY_Pos;
    regs->LCR = (regs->LCR & 0xc7u) | (uint8_t)(val & 0xffu);
}

static void prog_stop_bits(struct uart_regs *regs, uint32_t config)
{
    if (config & MEC_BIT(MEC5_UART_CFG_STOP_BITS_POS)) {
        regs->LCR |= (uint8_t)MEC_BIT(UART_LCR_STOP_BITS_Pos);
    } else {
        regs->LCR &= (uint8_t)~MEC_BIT(UART_LCR_STOP_BITS_Pos);
    }
}

/* NOTE: FCR is write-only */
static void prog_fifo(struct uart_regs *regs, uint32_t config)
{
    uint32_t temp = 0;
    uint8_t fcr = 0;

    fcr = (uint8_t)MEC_BIT(UART_FCR_EXRF_Pos); /* enable FIFO */
    regs->FCR = fcr;
    regs->FCR = fcr | MEC_BIT(UART_FCR_CLR_RX_FIFO_Pos) | MEC_BIT(UART_FCR_CLR_TX_FIFO_Pos);
    if (config & MEC_BIT(MEC5_UART_CFG_FIFO_EN_POS)) {
        temp = (config & MEC5_UART_CFG_RX_FIFO_TRIG_LVL_MSK) >> MEC5_UART_CFG_RX_FIFO_TRIG_LVL_POS;
        temp = (temp << UART_FCR_RXF_TLVL_Pos) & UART_FCR_RXF_TLVL_Msk;
        fcr |= (uint8_t)(temp & 0xffu);
    } else {
        fcr = 0;
    }
    regs->FCR = fcr;
    regs->SCR = fcr; /* save FCR in scratch HW register */
}

static void uart_activate(struct uart_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->ACTV |= (uint8_t)MEC_BIT(UART_ACTV_CLKS_Pos);
    } else {
        regs->ACTV &= (uint8_t)~MEC_BIT(UART_ACTV_CLKS_Pos);
    }
}

static void uart_intr_out_enable(struct uart_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->MCR |= (uint8_t)MEC_BIT(UART_MCR_OUT2_Pos);
    } else {
        regs->MCR &= (uint8_t)~MEC_BIT(UART_MCR_OUT2_Pos);
    }
}

int mec_uart_power_on(struct uart_regs *regs, uint32_t cfg_flags)
{
    const struct mec_uart_info *info = get_uart_info(regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(info->pcr_id);
    mec_pcr_blk_reset(info->pcr_id);

    prog_cfg1(regs, cfg_flags, 0);

    return 0;
}

int mec_uart_init(struct uart_regs *regs, uint32_t baud_rate,
                  uint32_t config, uint32_t extclk_hz)
{
    const struct mec_uart_info *info = get_uart_info(regs);
    uint8_t temp = 0;
    int ret = 0;

    if (!info || (!baud_rate)) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(info->pcr_id);
    mec_pcr_blk_reset(info->pcr_id);

    /* reset source, clock source, line invert */
    prog_cfg1(regs, config, extclk_hz);

    /* enable block: allow configuration & operation */
    uart_activate(regs, 1);

    /* BAUD rate generator */
    ret = prog_baud_rate(regs, baud_rate, extclk_hz);
    if (ret) {
        return ret;
    }

    /* word length */
    prog_word_len(regs, config);

    /* parity */
    prog_parity(regs, config);

    /* stop bits */
    prog_stop_bits(regs, config);

    /* FIFO */
    prog_fifo(regs, config);

    /* clear status by reading LSR and MSR. Note, THRE (empty transmit
     * holding register) status will stay active.
     */
    temp = regs->SCR; /* preserve FCR value saved in SCR */
    regs->SCR = regs->LSR;
    regs->SCR = regs->RXB;
    regs->SCR = regs->MSR;
    regs->SCR = temp;

    /* interrupt enables */
    uart_intr_out_enable(regs, 1);
    mec_girq_clr_src(info->devi);
    mec_girq_ctrl(info->devi, 1);

    return MEC_RET_OK;
}

int mec_uart_baud_rate_set(struct uart_regs *base, uint32_t baud, uint32_t extclk_hz)
{
    const struct mec_uart_info *info = get_uart_info(base);
    int ret = 0;

    if (!info || (baud == 0)) {
        return MEC_RET_ERR_INVAL;
    }

    ret = prog_baud_rate(base, baud, extclk_hz);

    return ret;
}

int mec_uart_intr_control(struct uart_regs *base, uint8_t enmask)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    base->IER = enmask & (UART_IER_ERDAI_Msk | UART_IER_ETHREI_Msk
                          | UART_IER_ELSI_Msk | UART_IER_EMSI_Msk);

    return MEC_RET_OK;
}

/* Modify UART interrupt enables.
 * msk = bit map to modify.
 * val = new value for modified bits.
 */
int mec_uart_intr_mask(struct uart_regs *base, uint8_t msk, uint8_t val)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    base->IER = (base->IER & ~msk) | val;

    return 0;
}

int mec_uart_raw_status(struct uart_regs *base, enum mec_uart_sts_reg regid, uint8_t *status)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info || !status) {
        return MEC_RET_ERR_INVAL;
    }

    switch (regid) {
    case MEC_UART_STS_REG_IID:
        *status = base->IIR;
        break;
    case MEC_UART_STS_REG_LINE:
        *status = base->LSR;
        break;
    case MEC_UART_STS_REG_MODEM:
        *status = base->MSR;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    return MEC_RET_OK;
}

/* Get UART pending interrupt status */
int mec_uart_pending_status(struct uart_regs *base, enum mec_uart_ipend *ipend)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t iir = 0u;

    if (!info || !ipend) {
        return MEC_RET_ERR_INVAL;
    }

    iir = base->IIR;

    if (iir & MEC_BIT(UART_FCR_EXRF_Pos)) {
        *ipend = MEC_UART_IPEND_NONE;
        return MEC_RET_OK;
    }

    switch (iir >> 1) {
    case 3u:
        *ipend = MEC_UART_IPEND_RX_ERR;
        break;
    case 2u:
    case 6u:
        *ipend = MEC_UART_IPEND_RX_DATA;
        break;
    case 1u:
        *ipend = MEC_UART_IPEND_TX;
        break;
    case 0u:
        *ipend = MEC_UART_IPEND_MODEM;
        break;
    default:
        *ipend = MEC_UART_IPEND_UNKOWN;
        break;
    }

    return MEC_RET_OK;
}

/* Return 1 if LSR register indicates RX data is available else return 0 */
int mec_uart_is_rx_data(struct uart_regs *base)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return 0;
    }

    if (base->LSR & MEC_BIT(UART_LSR_DRDY_Pos)) {
        return 1;
    }

    return 0;
}

/* Return 1 if LSR register indicates TX holding/FIFO is empty else return 0 */
int mec_uart_is_tx_fifo_empty(struct uart_regs *base)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return 0;
    }

    if (base->LSR & MEC_BIT(UART_LSR_THRE_Pos)) {
        return 1;
    }

    return 0;
}

/* Return 1 if TX FIFO/holding and shift register are empty */
int mec_uart_is_tx_empty(struct uart_regs *base)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t msk = (MEC_BIT(UART_LSR_THRE_Pos) | MEC_BIT(UART_LSR_THSE_Pos));

    if (!info) {
        return 0;
    }

    if ((base->LSR & msk) == msk) {
        return 1;
    }

    return 0;
}

int mec_uart_dtr_rts_set(struct uart_regs *base, uint8_t sel_rts,
                         uint8_t pin_state)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t bitpos = UART_MCR_DTR_Pos;

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    if (sel_rts) {
        bitpos = UART_MCR_RTS_Pos;
    }

    if (pin_state) {
        base->MCR |= MEC_BIT(bitpos);
    } else {
        base->MCR &= (uint8_t)~MEC_BIT(bitpos);
    }

    return MEC_RET_OK;
}

/* UART interrupt priorties in the IIR register
 * If the nIPEND bit is 0 then there is an interrupt b[3:1] indicate the
 * interrupt source. IIR must be read multiple times until nIPEND -> 1
 * UART_IIR_ID_RX_LS    Highest priority. Clear by reading LSR
 * UART_IIR_ID_RX_TMOUT 2nd highest. Clear by reading RX buffer to remove byte.
 * UART_IIR_ID_RX_DATA  2nd highest. Clear by reading RX buffer.
 * UART_IIR_ID_THRE 3rd highest. Clear by writing data to TX buffer.
 * UART_IIR_ID_MSR  Lowest. Clear by reading MSR
 */

/* 16550 style UART only has TX Holding Register Empty status. There is no
 * HW mechanism to determine the amount of data in the TX FIFO.
 * This routine writes a byte to the HW TX buffer if the TX Holding Register
 * is empty else it returns MEC_RET_ERR_BUSY.
 * SoC's with MEC5_UART_HAS_LSR2_REGISTER defined have a second Line Status
 * register, LSR2, containing:
 * bit[0] TX FIFO full (R/W)
 * b[3:1] Reserved 0
 * b[7:4] TX FIFO count (R/W) number of bytes in the TX FIFO which have not
 * been sent.
 */
int mec_uart_tx_byte(struct uart_regs *base, uint8_t data)
{
    const struct mec_uart_info *info = get_uart_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

#ifdef MEC5_UART_HAS_LSR2_REGISTER
    if (base->IIR & UART_IIR_FIFO_STATE_Msk) { /* FIFOs enabled? */
        if (!(base->LSRB & MEC_BIT(UART_LSRB_TXF_FULL_STS_Pos))) { /* if not full */
            base->TXB = data;
            return MEC_RET_OK;
        }

        return MEC_RET_ERR_BUSY;
    }
#endif

    if (base->LSR & MEC_BIT(UART_LSR_THRE_Pos)) { /* if empty */
        base->TXB = data;
        return MEC_RET_OK;
    }

    return MEC_RET_ERR_BUSY;
}

int mec_uart_tx(struct uart_regs * base, const uint8_t *data, size_t datasz)
{
    const struct mec_uart_info *info = get_uart_info(base);
    size_t n = 0u;

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    if (!data || !datasz) {
        return MEC_RET_OK;
    }

#ifdef MEC5_UART_HAS_LSR2_REGISTER
    if (base->IIR & UART_IIR_FIFO_STATE_Msk) { /* FIFOs enabled? */
        while (n < datasz) {
            if (!(base->LSRB & MEC_BIT(UART_LSRB_TXF_FULL_STS_Pos))) {
                base->TXB = data[n++];
            }
        }

        return MEC_RET_OK;
    }
#endif

    while (n < datasz) {
        if (base->LSR & MEC_BIT(UART_LSR_THRE_Pos)) {
            size_t fill_len = datasz - n;

            if (fill_len > MEC_UART_FIFO_LEN) {
                fill_len = MEC_UART_FIFO_LEN;
            }
            while (fill_len--) {
                base->TXB = data[n];
                n++;
            }
        }
    }

    return MEC_RET_OK;
}

int mec_uart_rx_byte(struct uart_regs *base, uint8_t *data)
{
    const struct mec_uart_info *info = get_uart_info(base);
    uint8_t lsr = 0;
    uint8_t temp = 0;

    if (!info || !data) {
        return MEC_RET_ERR_INVAL;
    }

    lsr = base->LSR;
    if (base->LSR & MEC_BIT(UART_LSR_DRDY_Pos)) {
        temp = base->RXB;
        if (data) {
            *data = temp;
        }
        if (lsr & (MEC_BIT(UART_LSR_OVR_ERR_Pos) | MEC_BIT(UART_LSR_PAR_ERR_Pos)
                   | MEC_BIT(UART_LSR_FR_ERR_Pos))) {
            return MEC_RET_ERR_BAD_DATA;
        }
        return MEC_RET_OK;
    }

    return MEC_RET_ERR_NO_DATA;
}

/* end mec_uart.c */
