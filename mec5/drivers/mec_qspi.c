/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h> /* memset */

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_qspi_api.h"
#include "mec_retval.h"

#define MEC_QSPI_GIRQ                  18
#define MEC_QSPI0_GIRQ_POS             1
#define MEC_QSPI0_AGGR_NVIC            10
#define MEC_QSPI0_NVIC                 91

#define MEC_QSPI0_ECIA_INFO            \
    MEC5_ECIA_INFO(MEC_QSPI_GIRQ, MEC_QSPI0_GIRQ_POS, MEC_QSPI0_AGGR_NVIC, MEC_QSPI0_NVIC)

#define MEC_QSPI_M_FDIV_MAX            0x10000
#define MEC_QSPI_SOFT_RESET_WAIT_LOOPS 16
#define MEC_QSPI_CLR_FIFOS_WAIT_LOOPS  16
#define MEC_QSPI_FORCE_STOP_WAIT_LOOPS 1000
#define MEC_QSPI_DESCR_NU_MAX          0x7fffu

#define MEC_QSPI_STATUS_ERRORS (MEC_BIT(MEC_QSPI_STATUS_TXBERR_Pos) \
                                | MEC_BIT(MEC_QSPI_STATUS_RXBERR_Pos) \
                                | MEC_BIT(MEC_QSPI_STATUS_PROGERR_Pos) \
                                | MEC_BIT(MEC_QSPI_STATUS_LDRXERR_Pos) \
                                | MEC_BIT(MEC_QSPI_STATUS_LDTXERR_Pos))

#define MEC_QSPI_SIG_MODE_POS MEC_QSPI_MODE_CPOL_Pos
#define MEC_QSPI_SIG_MODE_MSK \
    (MEC_QSPI_MODE_CPOL_Msk | MEC_QSPI_MODE_CPHA_MOSI_Msk | MEC_QSPI_MODE_CPHA_MISO_Msk)

#define MEC5_QSPI_START_DESCR_MSK0 ((uint32_t)MEC_QSPI_CTRL_DPTR_Msk >> MEC_QSPI_CTRL_DPTR_Pos)
#define MEC5_QSPI_NEXT_DESCR_MSK0  ((uint32_t)MEC_QSPI_DESCR_NEXT_Msk >> MEC_QSPI_DESCR_NEXT_Pos)

/* QSPI SPI frequencies less than or equal to this value use
 * normal CPHA and CPOL settings. For frequencies above this
 * value we must transmit and sample on the same edge.
 */
#define MEC_QSPI_SIGNAL_NORM_FREQ 24000000u

struct mec_qspi_info {
    uintptr_t base_addr;
    uint32_t devi;
    uint16_t pcr_id;
};

const struct mec_qspi_info qspi_instances[MEC5_QSPI_INSTANCES] = {
    {MEC_QSPI0_BASE, MEC_QSPI0_ECIA_INFO, MEC_PCR_QSPI0},
};

static struct mec_qspi_info const *qspi_get_info(struct mec_qspi_regs *base)
{
    for (size_t n = 0u; n < MEC5_QSPI_INSTANCES; n++) {
        const struct mec_qspi_info *p = &qspi_instances[n];

        if (p->base_addr == (uintptr_t)base) {
            return p;
        }
    }

    return NULL;
}

static uint8_t qspi_get_id(struct mec_qspi_regs *base)
{
    for (size_t n = 0u; n < MEC5_QSPI_INSTANCES; n++) {
        const struct mec_qspi_info *p = &qspi_instances[n];

        if (p->base_addr == (uintptr_t)base) {
            return (uint8_t)(n & 0xffu);
        }
    }

    return UINT8_MAX;
}

/* Return the QSPI controller clock source frequency in Hz. */
static uint32_t qspi_max_spi_clock(void)
{
    /* QMSPI uses the same PLL output clock as the CPU domain */
    return mec_hal_pcr_cpu_max_freq();
}

static uint32_t qspi_get_freq(struct mec_qspi_regs *base)
{
    uint32_t srcfreq = qspi_max_spi_clock();
    uint32_t fdiv = (base->MODE & MEC_QSPI_MODE_CLKDIV_Msk) >> MEC_QSPI_MODE_CLKDIV_Pos;

    if (fdiv == 0u) { /* zero is maximum clock divider */
        fdiv = MEC_QSPI_M_FDIV_MAX;
    }

    return (srcfreq / fdiv);
}

uint32_t mec_hal_qspi_get_freq(struct mec_qspi_regs *base)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    return qspi_get_freq(base);
}

uint32_t mec_hal_qspi_freq_div(struct mec_qspi_regs *base)
{
    uint32_t fdiv = 0;

    if ((uintptr_t)base == (uintptr_t)(MEC_QSPI0_BASE)) {
        fdiv = (base->MODE & MEC_QSPI_MODE_CLKDIV_Msk) >> MEC_QSPI_MODE_CLKDIV_Pos;
    }

    if (fdiv == 0) {
        fdiv = 0x10000u;
    }

    return fdiv;
}

/* Return the raw 16-bit clock divider field from QSPI Mode register.
 * 0 = divide by maximum (0x10000)
 * 1 - 0xffff is divide by this value
 */
uint16_t mec_hal_qspi_freq_div_raw(struct mec_qspi_regs *base)
{
    if ((uintptr_t)base != (uintptr_t)(MEC_QSPI0_BASE)) {
        return 0;
    }

    return (uint16_t)((base->MODE & MEC_QSPI_MODE_CLKDIV_Msk) >> MEC_QSPI_MODE_CLKDIV_Pos);
}

bool mec_hal_qspi_is_enabled(struct mec_qspi_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_QSPI0_BASE) {
        return false;
    }

    return (regs->MODE & MEC_BIT(MEC_QSPI_MODE_ACTV_Pos)) ? true : false;
}

/* Compute an estimate of time in nanoseconds to clock in/out one byte.
 * Maximum: F = 96 MHz, T = 10.42 ns
 * Single: 83.3 ns
 * Dual = 41.7 ns
 * Quad = 20.8 ns
 * Minimum: F = 48 MHz / 65536 = 732.4 Hz, T = 1.365 ms
 * Single: 10922667 (0x00a6_aaab) ns
 * Dual: 5461333 ns
 * Quad = 2730666 ns
 *
 * Maximum clock divider Fin = 96MHz
 * Tsingle = 1e9 * ((65536 / 96,000,000) * 8) = 5461333.33333 ns
 * Tdual = 1e9 * ((65536 / 96,000,000) * 4) =   2730666.66666 ns
 * Tquad = 1e9 * ((65536 / 96,000,000) * 2) =   1365333.33333 ns
 *
 * Fin = 48MHz
 * Tsingle = 1e9 * ((65536 / 48,000,000) * 8) = 10922666.66666
 *
 */
static uint32_t qspi_byte_time_ns(struct mec_qspi_regs *base)
{
    uint32_t clkdiv = (base->MODE & MEC_QSPI_MODE_CLKDIV_Msk) >> MEC_QSPI_MODE_CLKDIV_Pos;
    uint32_t iom = (base->CTRL & MEC_QSPI_CTRL_IFM_Msk) >> MEC_QSPI_CTRL_IFM_Pos;
    uint32_t byte_time_ns =
        10922667u; /* 8-bits full duplex 48MHz clock source, max clock divider */

    if (mec_hal_pcr_is_turbo_clock()) { /* 96MHz clock source? */
        byte_time_ns = 5461333u;        /* max clock divider */
    }

    /* adjust for IO mode */
    if (iom == MEC_QSPI_CTRL_IFM_QUAD) {
        byte_time_ns >>= 2u;
    } else if (iom == MEC_QSPI_CTRL_IFM_DUAL) {
        byte_time_ns >>= 1u;
    }

    /* HW clkdiv == 0 special value is maximum divider = 65536 */
    if (!clkdiv) {
        clkdiv = 65536u;
    }

    /* adjust for clock divider */
    byte_time_ns = byte_time_ns / (65536u / clkdiv);

    return byte_time_ns;
}

int mec_hal_qspi_byte_time_ns(struct mec_qspi_regs *base, uint32_t *btime_ns)
{
    if ((!base) || (!btime_ns)) {
        return MEC_RET_ERR_INVAL;
    }

    *btime_ns = qspi_byte_time_ns(base);

    return MEC_RET_OK;
}

/* Computer QSPI frequency divider given desired SPI clock in Hz.
 * Hardware fdiv = 1 to pow(2, fdiv_field_bit_length) - 1 is Source_Freq / n
 * Hardware fdiv = 0 is Source_Freq / pow(2, fdiv_field_bit_length)
 * fdiv_field_bit_length = 8 for MEC152x and 16 for MEC172x
 * NOTE: Truncation from integer division may result in an actual frequency
 * lower than requested.
 */
static uint32_t compute_freq_divisor(uint32_t freq_hz)
{
    uint32_t src_freq = qspi_max_spi_clock();
    uint32_t fdiv;

    if (freq_hz < (src_freq / MEC_QSPI_M_FDIV_MAX)) {
        fdiv = 0u; /* HW divider of 0 is divide by MEC_QSPI_M_FDIV_MAX */
    } else if (freq_hz > src_freq) {
        fdiv = 1u;
    } else {
        fdiv = src_freq / freq_hz;
    }

    return fdiv;
}

uint32_t mec_hal_qspi_compute_freq_div(uint32_t freq_hz)
{
    return compute_freq_divisor(freq_hz);
}

static void qspi_set_freq(struct mec_qspi_regs *base, uint32_t freqhz)
{
    uint32_t fdiv = compute_freq_divisor(freqhz);

    base->MODE =
        ((base->MODE & (uint32_t)~MEC_QSPI_MODE_CLKDIV_Msk) | (fdiv << MEC_QSPI_MODE_CLKDIV_Pos));
}

int mec_hal_qspi_set_freq(struct mec_qspi_regs *base, uint32_t freqhz)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_set_freq(base, freqhz);

    return MEC_RET_OK;
}

static void qspi_intr_clr_dis(struct mec_qspi_regs *base)
{
    const struct mec_qspi_info *info = qspi_get_info(base);

    if (!info) {
        return;
    }

    base->INTR_CTRL = 0;
    base->STATUS = UINT32_MAX;
    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_girq_clr_src(info->devi);
}

static void qspi_reset(struct mec_qspi_regs *base)
{
    /* Self clearing soft reset bit (write-only) */
    base->MODE |= MEC_BIT(MEC_QSPI_MODE_SRST_Pos);

    qspi_intr_clr_dis(base);
}

/* Clear GIRQ source status. Current SoC's have one QSPI instance */
void mec_hal_qspi_girq_clr(struct mec_qspi_regs *base)
{
    (void)base;

    mec_hal_girq_clr_src(MEC_QSPI0_ECIA_INFO);
}

void mec_hal_qspi_girq_ctrl(struct mec_qspi_regs *base, uint8_t enable)
{
    (void)base;

    mec_hal_girq_ctrl(MEC_QSPI0_ECIA_INFO, enable);
}

/* Returns non-zero if QSPI0 GIRQ result bit is set else 0 */
uint32_t mec_hal_qspi_girq_is_result(struct mec_qspi_regs *base)
{
    (void)base;

    return mec_hal_girq_result(MEC_QSPI0_ECIA_INFO);
}

int mec_hal_qspi_reset(struct mec_qspi_regs *base)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_reset(base);

    return MEC_RET_OK;
}

int mec_hal_qspi_reset_sr(struct mec_qspi_regs *base)
{
    uint32_t saved[5];

    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(MEC_QSPI0_ECIA_INFO, 0);

    saved[0] = base->MODE & (MEC_QSPI_MODE_CPOL_Msk | MEC_QSPI_MODE_CPHA_MOSI_Msk |
                             MEC_QSPI_MODE_CPHA_MISO_Msk | MEC_QSPI_MODE_CLKDIV_Msk);
    saved[1] = base->CSTM;
    saved[2] = base->TAPSS;
    saved[3] = base->TAPSA;
    saved[4] = base->TAPSC;

    qspi_reset(base);
    mec_hal_girq_clr_src(MEC_QSPI0_ECIA_INFO);

    base->MODE = saved[0];
    base->CSTM = saved[1];
    base->TAPSS = saved[2];
    base->TAPSA = saved[3];
    base->TAPSC = saved[4];

    return MEC_RET_OK;
}

/* Set frequency for chip select 1.
 * param regs = QSPI instance register base address
 * param freq = frequency use for CS1. Zero indicates use same as CS0.
 */
static void qspi_cs1_freq(struct mec_qspi_regs *base, uint32_t freq)
{
    uint32_t fdiv;

    if (freq) {
        fdiv = compute_freq_divisor(freq);
        base->ALT1_MODE = (fdiv << MEC_QSPI_MODE_CLKDIV_Pos) & MEC_QSPI_MODE_CLKDIV_Msk;
        base->ALT1_MODE |= MEC_BIT(MEC_QSPI_ALT1_MODE_CS1_ALTEN_Pos);
    } else {
        base->ALT1_MODE = 0u;
    }
}

int mec_hal_qspi_cs1_freq(struct mec_qspi_regs *base, uint32_t freq)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_cs1_freq(base, freq);

    return MEC_RET_OK;
}

static uint32_t qspi_compute_byte_time_ns(struct mec_qspi_regs *base)
{
    uint32_t freq = qspi_max_spi_clock();
    uint32_t fdiv = (base->MODE & MEC_QSPI_MODE_CLKDIV_Msk) >> MEC_QSPI_MODE_CLKDIV_Pos;
    uint32_t btime_ns;

    /* Not CS0 and alternate frequency divider enabled */
    if ((base->MODE & MEC_QSPI_MODE_CS_Msk) &&
        (base->ALT1_MODE & MEC_BIT(MEC_QSPI_ALT1_MODE_CS1_ALTEN_Pos))) {
        fdiv = ((base->ALT1_MODE & MEC_QSPI_ALT1_MODE_CS1_ALT_CLKDIV_Msk) >>
                MEC_QSPI_ALT1_MODE_CS1_ALT_CLKDIV_Pos);
    }

    if (!fdiv) { /* divider reg field = 0 is maximum divider */
        fdiv = MEC_QSPI_M_FDIV_MAX;
    }

    freq /= fdiv;

    /* Pad to two byte times */
    btime_ns = (uint32_t)(16000000000ULL / freq);

    return btime_ns;
}

static void qspi_cs_select(struct mec_qspi_regs *base, enum mec_qspi_cs cs)
{
    uint32_t mode = base->MODE & (uint32_t)~MEC_QSPI_MODE_CS_Msk;

    mode |= (((uint32_t)cs << MEC_QSPI_MODE_CS_Pos) & MEC_QSPI_MODE_CS_Msk);
    base->MODE = mode;
}

int mec_hal_qspi_cs_select(struct mec_qspi_regs *base, enum mec_qspi_cs cs)
{
    if (!base || (cs >= MEC_QSPI_CS_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_cs_select(base, cs);

    return MEC_RET_OK;
}

#ifdef MEC172X_FAM_ID
static const uint8_t qspi_smode[MEC_SPI_SIGNAL_MODE_MAX] = {0x0, 0x6, 0x1, 0x3};
#else
static const uint8_t qspi_smode[MEC_SPI_SIGNAL_MODE_MAX] = {0x0, 0x6, 0x1, 0x7};
#endif
static const uint8_t qspi_smode_hi[MEC_SPI_SIGNAL_MODE_MAX] = {0x4, 0x2, 0x5, 0x3};

static void qspi_spi_signal_mode(struct mec_qspi_regs *base, enum mec_qspi_signal_mode spi_mode)
{
    uint32_t freq = qspi_get_freq(base);
    uint32_t hwsm = 0;

    if (freq > MEC_QSPI_SIGNAL_NORM_FREQ) {
        hwsm = (uint32_t)qspi_smode_hi[spi_mode];
    } else {
        hwsm = (uint32_t)qspi_smode[spi_mode];
    }

    base->MODE = (base->MODE & ~0x700u) | (hwsm << MEC_QSPI_MODE_CPOL_Pos);
}

/* Requires frequency programmed first */
int mec_hal_qspi_spi_signal_mode(struct mec_qspi_regs *base, enum mec_qspi_signal_mode spi_mode)
{
    if ((base == NULL) || (spi_mode >= MEC_SPI_SIGNAL_MODE_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_spi_signal_mode(base, spi_mode);

    return MEC_RET_OK;
}

int mec_hal_qspi_sampling_phase_pol(struct mec_qspi_regs *base, uint8_t phpol)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->MODE = (base->MODE & ~0x700u) | ((uint32_t)(phpol & 0x7u) << 8);

    return MEC_RET_OK;
}

static uint32_t qspi_ifm(enum mec_qspi_io iom)
{
    uint32_t ifm;

    if (iom == MEC_QSPI_IO_QUAD) {
        ifm = (uint32_t)MEC_QSPI_CTRL_IFM_QUAD;
    } else if (iom == MEC_QSPI_IO_DUAL) {
        ifm = (uint32_t)MEC_QSPI_CTRL_IFM_DUAL;
    } else {
        ifm = (uint32_t)MEC_QSPI_CTRL_IFM_FD;
    }

    return (ifm << MEC_QSPI_CTRL_IFM_Pos);
}

static void qspi_io(struct mec_qspi_regs *base, enum mec_qspi_io io)
{
    base->CTRL = (base->CTRL & (uint32_t)~MEC_QSPI_CTRL_IFM_Msk) | qspi_ifm(io);
}

int mec_hal_qspi_io(struct mec_qspi_regs *base, enum mec_qspi_io io)
{
    if (!base || (io >= MEC_QSPI_IO_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_io(base, io);

    return MEC_RET_OK;
}

struct qspi_cstm_info {
    uint8_t pos;
    uint8_t msk0;
};

const struct qspi_cstm_info cstm_tbl[MEC_QSPI_CSTM_MAX] = {
    {0, 0xfu},
    {8, 0xfu},
    {16, 0xfu},
    {24, 0xffu},
};

int mec_hal_qspi_cs_timing_adjust(struct mec_qspi_regs *base, enum mec_qspi_cstm field, uint8_t val)
{
    if ((!base) || (field >= MEC_QSPI_CSTM_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t pos = cstm_tbl[field].pos;
    uint32_t msk0 = cstm_tbl[field].msk0;

    base->CSTM = (base->CSTM & ~(msk0 << pos)) | ((val & msk0) << pos);

    return MEC_RET_OK;
}

int mec_hal_qspi_cs_timing(struct mec_qspi_regs *base, uint32_t cs_timing)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->CSTM = cs_timing;

    return MEC_RET_OK;
}

int mec_hal_qspi_tap_select(struct mec_qspi_regs *base, uint8_t sel_sck_tap, uint8_t sel_ctrl_tap)
{
    uint32_t tapss = sel_sck_tap | ((uint32_t)sel_ctrl_tap << 8);

    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    tapss = ((uint32_t)sel_sck_tap << MEC_QSPI_TAPSS_TSCK_Pos) & MEC_QSPI_TAPSS_TSCK_Msk;
    tapss |= (((uint32_t)sel_ctrl_tap << MEC_QSPI_TAPSS_TCTRL_Pos) & MEC_QSPI_TAPSS_TCTRL_Msk);
    base->TAPSS =
        (base->TAPSS & (uint32_t)~(MEC_QSPI_TAPSS_TSCK_Msk | MEC_QSPI_TAPSS_TSCK_Msk)) | tapss;

    return MEC_RET_OK;
}

int mec_hal_qspi_ifc(struct mec_qspi_regs *regs, uint8_t ifc_val, uint8_t ifc_msk)
{
    uint32_t v = ifc_val & 0xfu;
    uint32_t m = ifc_msk & 0xfu;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (ifc_msk) {
        regs->IFCTRL = (regs->IFCTRL & (uint32_t)~m) | (v & m);
    }

    return MEC_RET_OK;
}

/* Initialize QMSPI controller using local DMA. */
int mec_hal_qspi_init(struct mec_qspi_regs *base, uint32_t freq_hz,
                      enum mec_qspi_signal_mode spi_signal_mode, enum mec_qspi_io iom,
                      enum mec_qspi_cs chip_sel)
{
    const struct mec_qspi_info *info = qspi_get_info(base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(info->pcr_id); /* clocks gated ON */
    mec_hal_qspi_reset_sr(base);
    qspi_set_freq(base, freq_hz);
    qspi_spi_signal_mode(base, spi_signal_mode);
    qspi_io(base, iom);
    qspi_cs_select(base, chip_sel);

    base->MODE |= MEC_BIT(MEC_QSPI_MODE_ACTV_Pos);

    /* Enable QSPI interrupt signal to propagate to NVIC */
    mec_hal_girq_ctrl(info->devi, 1);

    return MEC_RET_OK;
}

int mec_hal_qspi_options(struct mec_qspi_regs *regs, uint8_t en, uint32_t options)
{
    uint32_t val = 0, msk = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (options & MEC_BIT(MEC_QSPI_OPT_ACTV_EN_POS)) {
        msk |= MEC_BIT(MEC_QSPI_MODE_ACTV_Pos);
        if (en) {
            val |= MEC_BIT(MEC_QSPI_MODE_ACTV_Pos);
        }
    }
    if (options & MEC_BIT(MEC_QSPI_OPT_TAF_DMA_EN_POS)) {
        msk |= MEC_BIT(MEC_QSPI_MODE_TAFDMA_Pos);
        if (en) {
            val |= MEC_BIT(MEC_QSPI_MODE_TAFDMA_Pos);
        }
    }
    if (options & MEC_BIT(MEC_QSPI_OPT_RX_LDMA_EN_POS)) {
        msk |= MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos);
        if (en) {
            val |= MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos);
        }
    }
    if (options & MEC_BIT(MEC_QSPI_OPT_TX_LDMA_EN_POS)) {
        msk |= MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos);
        if (en) {
            val |= MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos);
        }
    }

    regs->MODE = (regs->MODE & ~msk) | (val & msk);

    return MEC_RET_OK;
}

/* Force QSPI to stop an on-going transaction.
 * If QSPI is generating clocks, it will stop at the next byte boundary
 * and de-assert chip select.
 */
int mec_hal_qspi_force_stop(struct mec_qspi_regs *base)
{
    uint32_t btime_ns;

    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (!(base->STATUS & MEC_BIT(MEC_QSPI_STATUS_ACTIVE_Pos))) {
        return MEC_RET_OK;
    }

    base->EXE = MEC_BIT(MEC_QSPI_EXE_STOP_Pos);

    /* computation uses up some of the time */
    btime_ns = qspi_compute_byte_time_ns(base);

    /* Timeout period, doesn't have to be accurate.
     * EC running at 96MHz (~10 ns) or slower.
     */
    while (base->STATUS & MEC_BIT(MEC_QSPI_STATUS_ACTIVE_Pos)) {
        if (!btime_ns) {
            return MEC_RET_ERR_TIMEOUT;
        }
        btime_ns--;
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_done(struct mec_qspi_regs *base)
{
    uint32_t qsts;

    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    qsts = base->STATUS;

    if (qsts & MEC_QSPI_STATUS_ERRORS) {
        return MEC_RET_ERR_HW;
    }

    if (qsts & MEC_BIT(MEC_QSPI_STATUS_DONE_Pos)) {
        return MEC_RET_OK;
    }

    return MEC_RET_ERR_BUSY;
}

uint32_t mec_hal_qspi_hw_status(struct mec_qspi_regs *base)
{
    if (!base) {
        return 0;
    }

    return base->STATUS;
}

int mec_hal_qspi_hw_status_clr(struct mec_qspi_regs *base, uint32_t msk)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->STATUS = msk;

    return MEC_RET_OK;
}

static void qspi_intr_ctrl(struct mec_qspi_regs *base, int enable)
{
    uint32_t qien = 0u;

    if (enable) {
        qien = (MEC_BIT(MEC_QSPI_INTR_CTRL_DONE_Pos) | MEC_BIT(MEC_QSPI_INTR_CTRL_TXBERR_Pos) |
                MEC_BIT(MEC_QSPI_INTR_CTRL_PROGERR_Pos) | MEC_BIT(MEC_QSPI_INTR_CTRL_LDRXERR_Pos) |
                MEC_BIT(MEC_QSPI_INTR_CTRL_LDTXERR_Pos));
    }

    base->INTR_CTRL = qien;
}

int mec_hal_qspi_intr_ctrl(struct mec_qspi_regs *base, int enable)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_intr_ctrl(base, enable);

    return MEC_RET_OK;
}

int mec_hal_qspi_intr_ctrl_msk(struct mec_qspi_regs *base, int enable, uint32_t msk)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        base->INTR_CTRL |= msk;
    } else {
        base->INTR_CTRL &= (uint32_t)~msk;
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_tx_fifo_is_empty(struct mec_qspi_regs *base)
{
    if (base) {
        if (base->STATUS & MEC_BIT(MEC_QSPI_STATUS_TXBE_Pos)) {
            return 1;
        }
    }

    return 0;
}

int mec_hal_qspi_tx_fifo_is_full(struct mec_qspi_regs *base)
{
    if (base) {
        if (base->STATUS & MEC_BIT(MEC_QSPI_STATUS_TXBF_Pos)) {
            return 1;
        }
    }

    return 0;
}

int mec_hal_qspi_rx_fifo_is_empty(struct mec_qspi_regs *base)
{
    if (base) {
        if (base->STATUS & MEC_BIT(MEC_QSPI_STATUS_RXBE_Pos)) {
            return 1;
        }
    }

    return 0;
}

int mec_hal_qspi_rx_fifo_is_full(struct mec_qspi_regs *base)
{
    if (base) {
        if (base->STATUS & MEC_BIT(MEC_QSPI_STATUS_RXBF_Pos)) {
            return 1;
        }
    }

    return 0;
}

/* Clear status, set QSPI interrupt enables based on ien_mask, and
 * start QSPI processing.
 * ISSUE: Interrupt status for RX and TX FIFO empty are set if the
 * conditions are true before QSPI is started. The interrupt can fire
 * before the engine is started.
 */
int mec_hal_qspi_start(struct mec_qspi_regs *base, uint32_t ien_mask)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->STATUS = UINT32_MAX;
    base->INTR_CTRL = ien_mask;
    base->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);

    return MEC_RET_OK;
}

/* Write up to smaller of bufsz or space available in TX FIFO bytes.
 * If pointer nloaded not NULL set to number of bytes written to TX FIFO.
 */
int mec_hal_qspi_wr_tx_fifo(struct mec_qspi_regs *regs, const uint8_t *buf, uint32_t bufsz,
                            uint32_t *nwr)
{
    uint32_t loaded = 0;
    volatile uint8_t *tx_fifo = (volatile uint8_t *)&regs->TX_FIFO;

    if (!regs || (!buf && bufsz)) {
        return MEC_RET_ERR_INVAL;
    }

    while (bufsz--) {
        if (regs->STATUS & MEC_BIT(MEC_QSPI_STATUS_TXBF_Pos)) {
            break;
        }
        *tx_fifo = *buf++;
        loaded++;
    }

    if (nwr) {
        *nwr = loaded;
    }

    return MEC_RET_OK;
}

/* If data is available in QSPI RX FIFO read it and store into buffer data
 * unless buf is NULL then discard the data. Stops reading when RX FIFO becomes
 * empty. Stores number of bytes read in nrd if not NULL.
 */
int mec_hal_qspi_rd_rx_fifo(struct mec_qspi_regs *regs, uint8_t *buf, uint32_t bufsz, uint32_t *nrd)
{
    volatile uint8_t *rx_fifo = (volatile uint8_t *)&regs->RX_FIFO;
    uint32_t nr = 0;
    uint8_t db = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    while (bufsz--) {
        if (regs->STATUS & MEC_BIT(MEC_QSPI_STATUS_RXBE_Pos)) {
            break;
        }
        db = *rx_fifo;
        if (buf) {
            *buf++ = db;
        }
        nr++;
    }

    if (nrd) {
        *nrd = nr;
    }

    return MEC_RET_OK;
}

static void qspi_ldma_init(struct mec_qspi_regs *base)
{
    base->MODE &= ~(MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos) | MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos));
    base->LDMA_RXEN = 0u;
    base->LDMA_TXEN = 0u;
    base->EXE = MEC_BIT(MEC_QSPI_EXE_CLRF_Pos);
    for (uint32_t i = 0; i < 3; i++) {
        base->RX_LDMA_CHAN[i].CTRL = 0;
        base->RX_LDMA_CHAN[i].MEM_ADDR = 0;
        base->RX_LDMA_CHAN[i].LEN = 0;
        base->TX_LDMA_CHAN[i].CTRL = 0;
        base->TX_LDMA_CHAN[i].MEM_ADDR = 0;
        base->TX_LDMA_CHAN[i].LEN = 0;
    }
    base->STATUS = UINT32_MAX;
}

/* Configure QSPI LDMA RX channel 0 and LDMA TX channel 0 for rx/tx of lenb
 * bytes. If RX buffer is NULL use read-only QSPI buffer count register
 * as the target destination and do not set address increment.
 * If TX buffer is NULL read the write-only QSPI Execute register as
 * the data source to be written.
 */
static void qspi_ldma_cfg1(struct mec_qspi_regs *base, const uint8_t *txb, uint8_t *rxb,
                           size_t lenb)
{
    uint32_t rctrl = MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos);
    uint32_t wctrl = MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos);
    uint32_t temp = (uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B;

    if ((((uintptr_t)rxb | (uintptr_t)lenb) & 0x03u) == 0u) {
        temp = (uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B;
    }
    rctrl |= (temp << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos);

    temp = (uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B;
    if ((((uintptr_t)txb | (uintptr_t)lenb) & 0x03u) == 0u) {
        temp = (uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B;
    }
    wctrl |= (temp << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos);

    base->RX_LDMA_CHAN[0].LEN = lenb;
    if (rxb) {
        base->RX_LDMA_CHAN[0].MEM_ADDR = (uintptr_t)rxb;
        rctrl |= MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Pos);
    } else {
        base->RX_LDMA_CHAN[0].MEM_ADDR = (uintptr_t)&base->BCNT_STS;
    }
    base->RX_LDMA_CHAN[0].CTRL = rctrl;

    if (txb) {
        base->TX_LDMA_CHAN[0].LEN = lenb;
        base->TX_LDMA_CHAN[0].MEM_ADDR = (uintptr_t)txb;
        base->TX_LDMA_CHAN[0].CTRL = wctrl | MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Pos);
    }
}

/* Build the intitial value used for all descriptors.
 * param txb pointer to transmit buffer
 * param interface mode field value (full-duplex, dual, or quad)
 * return initial/constant descriptor field values.
 * note Use RX LDMA channel 0 and TX LDMA channel 0.
 * If transmit buffer is NULL make use of QSPI HW feature to
 * transmit all 0's.
 */
static uint32_t descr_ldma_init(const uint8_t *txb, uint32_t ifm)
{
    uint32_t d = ifm;

    if (txb) {
        d |= (((uint32_t)MEC_QSPI_DESCR_TXEN_EN << MEC_QSPI_DESCR_TXEN_Pos) |
              ((uint32_t)MEC_QSPI_DESCR_TXDMA_1B_LDMA_CH0 << MEC_QSPI_DESCR_TXDMA_Pos));
    }

    /* always enable receive LDMA for full duplex */
    d |= (((uint32_t)MEC_QSPI_DESCR_RXEN_EN << MEC_QSPI_DESCR_RXEN_Pos) |
          ((uint32_t)MEC_QSPI_DESCR_RXDMA_1B_LDMA_CH0 << MEC_QSPI_DESCR_RXDMA_Pos));

    return d;
}

#ifdef MEC5_QSPI_LDMA_TX_NULL_LEN_ARE_CLOCKS
/*
 * FD 1 bit = 1 clock
 * Dual 2 bits = 1 clock
 * Quad 4 bits = 1 clock
 */
static uint32_t qspi_clocks_to_bits(uint32_t ctrl, uint32_t nclocks)
{
    uint32_t ifm = (ctrl & MEC_QSPI_CTRL_IFM_Msk) >> MEC_QSPI_CTRL_IFM_Pos;

    if (ifm == MEC_QSPI_CTRL_IFM_QUAD) {
        return (nclocks * 4u);
    } else if (ifm == MEC_QSPI_CTRL_IFM_DUAL) {
        return (nclocks * 2u);
    } else {
        return nclocks;
    }
}

static int qspi_gen_ts_clocks(struct mec_qspi_regs *base, uint32_t nclocks, uint32_t flags)
{
    uint32_t descr = qspi_clocks_to_bits(base->CTRL, nclocks);
    int ien = 0;

    descr <<= MEC_QSPI_DESCR_QNUNITS_Pos;
    descr &= MEC_QSPI_DESCR_QNUNITS_Msk;
    descr |= (base->CTRL & MEC_QSPI_CTRL_IFM_Msk);
    descr |= (1u << MEC_QSPI_DESCR_NEXT_Pos);
    descr |= MEC_BIT(MEC_QSPI_DESCR_LAST_Pos);

    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_CLOSE_POS)) {
        descr |= MEC_BIT(MEC_QSPI_DESCR_CLOSE_Pos);
    }
    base->DESCRS[0] = descr;

    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_IEN_POS)) {
        ien = 1;
    }

    qspi_intr_ctrl(base, ien);

    /* start HW */
    if (flags & MEC_QSPI_XFR_FLAG_START_POS) {
        base->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return MEC_RET_OK;
}
#endif

/* Configure and start/continue a SPI transaction
 * base is a pointer to the QSPI control instance hardware registers.
 * txb is a pointer to a constant buffer containing bytes to transmit.
 * rxb is a pointer to a r/w buffer to hold data received as each byte is
 * transmitted. If rxb is NULL the received data is discarded. lenb is the size
 * in bytes of each buffer. flags contains bits to enable interrupts before the
 * transfer starts.
 */
int mec_hal_qspi_ldma(struct mec_qspi_regs *base, const uint8_t *txb, uint8_t *rxb, size_t lenb,
                      uint32_t flags)
{
    uint32_t nbytes = lenb;
    uint32_t shift = 0, nu = 0, descr = 0, descr_init = 0, didx = 0;
    int ien = 0;

    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (!lenb) {
        return 0;
    }

    qspi_ldma_init(base);

    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_CLR_FIFOS_POS)) {
        base->EXE = MEC_BIT(MEC_QSPI_EXE_CLRF_Pos);
    } else if (base->BCNT_STS) { /* data left in TX and/or RX FIFO */
        return MEC_RET_ERR_HW;
    }

    base->STATUS = UINT32_MAX;
    /* descriptor mode starting at descriptor 0 */
    base->CTRL |= MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);

#ifdef MEC5_QSPI_LDMA_TX_NULL_LEN_ARE_CLOCKS
    if (!txb && !rxb && lenb) {
        return qspi_gen_ts_clocks(base, lenb, flags);
    }
#endif
    descr_init = descr_ldma_init(txb, base->CTRL & MEC_QSPI_CTRL_IFM_Msk);

    while (nbytes && (didx < MEC5_QSPI_NUM_DESCRS)) {
        descr = descr_init;
        nu = nbytes;
        shift = 0;
        if (nu > MEC_QSPI_DESCR_NU_MAX) {
            shift = 4;
            nu >>= 4;
            descr |= ((uint32_t)MEC_QSPI_DESCR_QUNITS_16B << MEC_QSPI_DESCR_QUNITS_Pos);
        } else {
            descr |= ((uint32_t)MEC_QSPI_DESCR_QUNITS_1B << MEC_QSPI_DESCR_QUNITS_Pos);
        }

        descr |= (nu << MEC_QSPI_DESCR_QNUNITS_Pos);
        descr |= (((didx + 1u) << MEC_QSPI_DESCR_NEXT_Pos) & MEC_QSPI_DESCR_NEXT_Msk);
        base->DESCRS[didx] = descr;
        base->LDMA_RXEN |= MEC_BIT(didx);
        if (txb) {
            base->LDMA_TXEN |= MEC_BIT(didx);
        }
        nbytes -= (nu << shift);
        didx++;
    }

    descr = base->DESCRS[didx - 1u] | MEC_BIT(MEC_QSPI_DESCR_LAST_Pos);
    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_CLOSE_POS)) {
        descr |= MEC_BIT(MEC_QSPI_DESCR_CLOSE_Pos);
    }
    base->DESCRS[didx - 1u] = descr;

    if (nbytes) {
        return MEC_RET_ERR_DATA_LEN;
    }

    qspi_ldma_cfg1(base, txb, rxb, lenb);

    base->MODE |= (MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos) | MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos));

    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_IEN_POS)) {
        ien = 1;
    }

    qspi_intr_ctrl(base, ien);

    /* start HW */
    if (flags & MEC_BIT(MEC_QSPI_XFR_FLAG_START_POS)) {
        base->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return 0;
}

/* -------- 2024-02-24 -------- */

void mec_hal_qspi_context_init(struct mec_qspi_context *ctx)
{
    ctx->ndescrs = 0;
    ctx->ntxdma = 0;
    ctx->nrxdma = 0;
    ctx->xflags = 0;
    for (size_t n = 0; n < MEC5_QSPI_NUM_DESCRS; n++) {
        ctx->descrs[n] = 0;
    }
}

uint8_t mec_hal_qspi_ctx_alloc_ldma_chan(struct mec_qspi_context *ctx, uint8_t is_tx)
{
    if (!ctx) {
        return 0;
    }

    if (is_tx) {
        if (ctx->ntxdma < MEC5_QSPI_LDMA_CHANNELS) {
            return ++ctx->ntxdma;
        }
    } else {
        if (ctx->nrxdma < MEC5_QSPI_LDMA_CHANNELS) {
            return ++ctx->nrxdma;
        }
    }

    return 0;
}

static uint32_t qspi_nio_pins_to_ifm(uint8_t nio_pins)
{
    uint8_t ifm_val;

    if (nio_pins == 4) {
        ifm_val = MEC_QSPI_DESCR_IFM_QUAD;
    } else if (nio_pins == 2) {
        ifm_val = MEC_QSPI_DESCR_IFM_DUAL;
    } else {
        ifm_val = MEC_QSPI_DESCR_IFM_FD;
    }

    return ((uint32_t)ifm_val << MEC_QSPI_DESCR_IFM_Pos);
}

int mec_hal_qspi_cfg_gen_ts_clocks(struct mec_qspi_context *ctx, uint32_t nclocks, uint8_t nio_pins)
{
    uint32_t didx = 0, descr = 0;

    if (!((nio_pins == 1) || (nio_pins == 2) || (nio_pins == 4))) {
        return MEC_RET_ERR_INVAL;
    }

    if (!nclocks) {
        return MEC_RET_ERR_NOP;
    }

    didx = ctx->ndescrs;
    if (didx >= MEC5_QSPI_NUM_DESCRS) {
        return MEC_RET_ERR_NO_RES;
    }

    descr |= qspi_nio_pins_to_ifm(nio_pins);
    if (!(nclocks & 0x7u)) { /* multiple of 8 bits? */
        descr |= (MEC_QSPI_DESCR_QUNITS_1B << MEC_QSPI_DESCR_QUNITS_Pos);
        descr |= ((((nclocks >> 3) * nio_pins) << MEC_QSPI_DESCR_QNUNITS_Pos) &
                  MEC_QSPI_DESCR_QNUNITS_Msk);
    } else {
        descr |= (MEC_QSPI_DESCR_QUNITS_BITS << MEC_QSPI_DESCR_QUNITS_Pos);
        descr |=
            (((nclocks * nio_pins) << MEC_QSPI_DESCR_QNUNITS_Pos) & MEC_QSPI_DESCR_QNUNITS_Msk);
    }
    ctx->descrs[didx] = descr;
    ctx->ndescrs++;

    return MEC_RET_OK;
}

/* Configure the specified QSPI Local-DMA channel.
 * regs - pointer to QSPI hardware registers
 * buf_addr - address of source or destination buffer in memory
 * nbytes - requested number of bytes to transfer
 * chan_dir
 *    b[3:0] = 1-based channel (1, 2, or 3)
 *    b[4] = direction: 0(RX), 1(TX)
 * return 0 success
 *        < 0 error
 *
 * Program the specified QSPI RX or TX LDMA channel with memory address
 * of source/destination buffer and transfer length in bytes.
 * If buffer address is 0 then source/destination memory address is set
 * to the QSPI buffer status count read-only register and LDMA channel
 * increment address is disabled.
 */
int mec_hal_qspi_ldma_cfg1(struct mec_qspi_regs *regs, uintptr_t buf_addr, uint32_t nbytes,
                           uint32_t ldflags)
{
    volatile struct mec_qspi_ldma_chan_regs *ldma_regs = NULL;
    uint32_t ctrl = 0;
    uint8_t chanrx = 0, chantx = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (!nbytes) {
        return MEC_RET_OK;
    }

    ctrl = ((uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos);
    chanrx = (ldflags >> MEC5_QSPI_DCFG1_FLAG_DMA_RX_POS) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0;
    chantx = (ldflags >> MEC5_QSPI_DCFG1_FLAG_DMA_TX_POS) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0;

    if ((ldflags & MEC5_QSPI_DCFG1_FLAG_DIR_TX) && chantx) {
        ldma_regs = &regs->TX_LDMA_CHAN[chantx - 1u];
    } else if ((ldflags & MEC5_QSPI_DCFG1_FLAG_DIR_RX) && chanrx) {
        ldma_regs = &regs->RX_LDMA_CHAN[chanrx - 1u];
    } else {
        return MEC_RET_ERR_INVAL;
    }

    ldma_regs->CTRL = 0;
    ldma_regs->MEM_ADDR = (uint32_t)buf_addr;
    ldma_regs->LEN = nbytes;

    if (buf_addr) {
        ctrl |= MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Pos);
    } else {
        ldma_regs->MEM_ADDR = (uint32_t)((uintptr_t)&regs->BCNT_STS & UINT32_MAX);
    }

    if (!((buf_addr | nbytes) & 0x3u)) {
        ctrl &= (uint32_t)~MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Msk;
        ctrl |= ((uint32_t)MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos);
    }

    ldma_regs->CTRL = ctrl | MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos);

    return 0;
}

/* Configures descriptor(s):
 *   IFM (full-duplex, dual, or quad)
 *   xfr count unit size
 *   number of units
 *   TX enable (TX-Data only)
 *   TX-LDMA channel select (disable or channel id)
 *   RX enable
 *   RX-LDMA channel select (disable or channel id)
 */
uint32_t mec_hal_qspi_descrs_cfg1(struct mec_qspi_context *ctx, uint32_t nbytes, uint32_t flags)
{
    uint32_t dbase;
    uint32_t nb;
    uint32_t nu;
    uint8_t didx;

    if (!ctx) {
        return UINT32_MAX;
    }

    dbase = qspi_nio_pins_to_ifm(flags & MEC5_QSPI_DCFG1_FLAG_IFM_MSK);

    if (flags & MEC5_QSPI_DCFG1_FLAG_DIR_TX) {
        dbase |= (MEC_QSPI_DESCR_TXEN_EN << MEC_QSPI_DESCR_TXEN_Pos);
        /* b[5:4] = TX-DMA: 0=disabled, 1-2 specify LDMA channel */
        dbase |= ((flags >> MEC5_QSPI_DCFG1_FLAG_DMA_TX_POS) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0)
                 << MEC_QSPI_DESCR_TXDMA_Pos;
    }
    if (flags & MEC5_QSPI_DCFG1_FLAG_DIR_RX) {
        dbase |= MEC_BIT(MEC_QSPI_DESCR_RXEN_Pos);
        /* b[8:7] = RX-DMA: 0=disabled, 1-2 specify LDMA channel */
        dbase |= ((flags >> MEC5_QSPI_DCFG1_FLAG_DMA_RX_POS) & MEC5_QSPI_DCFG1_FLAG_DMA_MSK0)
                 << MEC_QSPI_DESCR_RXDMA_Pos;
    }

    didx = ctx->ndescrs;
    nb = nbytes;
    while (nb) {
        if (didx >= MEC5_QSPI_NUM_DESCRS) {
            break;
        }

        /* b[11:10] = 01b 1-byte units
         *            11b 16-byte units
         * b[31:17] = number of units
         */
        if (nb > MEC_QSPI_DESCR_NU_MAX) {
            nu = (nb >> 4);
            if (nu > MEC_QSPI_DESCR_NU_MAX) {
                nu = MEC_QSPI_DESCR_NU_MAX;
            }
            ctx->descrs[didx] = (((nu << MEC_QSPI_DESCR_QNUNITS_Pos) & MEC_QSPI_DESCR_QNUNITS_Msk) |
                                 (MEC_QSPI_DESCR_QUNITS_16B << MEC_QSPI_DESCR_QUNITS_Pos) | dbase);
            nb -= (nu << 4);
        } else {
            ctx->descrs[didx] = (((nb << MEC_QSPI_DESCR_QNUNITS_Pos) & MEC_QSPI_DESCR_QNUNITS_Msk) |
                                 (MEC_QSPI_DESCR_QUNITS_1B << MEC_QSPI_DESCR_QUNITS_Pos) | dbase);
            nb = 0;
        }
        didx++;
    }

    ctx->ndescrs = didx;

    return nb;
}

int mec_hal_qspi_load_descrs(struct mec_qspi_regs *regs, struct mec_qspi_context *ctx,
                             uint32_t flags)
{
    size_t didx, max_ndescr;
    uint32_t descr, ldchan, mode;

    if (!regs || !ctx) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ctx->ndescrs) {
        return MEC_RET_ERR_NOP;
    }

    mode = 0;
    max_ndescr = (size_t)ctx->ndescrs;

    if (max_ndescr > MEC5_QSPI_NUM_DESCRS) {
        max_ndescr = MEC5_QSPI_NUM_DESCRS;
    }

    for (didx = 0; didx < max_ndescr; didx++) {
        descr = ctx->descrs[didx];
        descr &= (uint32_t)~(MEC_QSPI_DESCR_NEXT_Msk);
        descr |= ((((uint32_t)didx + 1u) << MEC_QSPI_DESCR_NEXT_Pos) & MEC_QSPI_DESCR_NEXT_Msk);
        regs->DESCRS[didx] = descr;

        if ((descr & MEC_QSPI_DESCR_TXEN_Msk) ==
            (MEC_QSPI_DESCR_TXEN_EN << MEC_QSPI_DESCR_TXEN_Pos)) {
            /* TX-Data enabled? */
            ldchan = (descr & MEC_QSPI_DESCR_TXDMA_Msk) >> MEC_QSPI_DESCR_TXDMA_Pos;
            if (ldchan) {
                regs->LDMA_TXEN |= MEC_BIT(didx);
                mode |= MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos);
            } else {
                regs->LDMA_TXEN &= (uint32_t)~MEC_BIT(didx);
            }
        }

        if (descr & MEC_BIT(MEC_QSPI_DESCR_RXEN_Pos)) {
            ldchan = (descr & MEC_QSPI_DESCR_RXDMA_Msk) >> MEC_QSPI_DESCR_RXDMA_Pos;
            if (ldchan) {
                regs->LDMA_RXEN |= MEC_BIT(didx);
                mode |= MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos);
            } else {
                regs->LDMA_RXEN &= (uint32_t)~MEC_BIT(didx);
            }
        }
    }

    regs->MODE =
        (regs->MODE & ~(MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos) | MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos))) |
        mode;

    didx = max_ndescr - 1u;
    if (flags & MEC_BIT(MEC5_QSPI_LD_FLAGS_LAST_POS)) {
        regs->DESCRS[didx] |= MEC_BIT(MEC_QSPI_DESCR_LAST_Pos);
    }

    if (flags & MEC_BIT(MEC5_QSPI_LD_FLAGS_CLOSE_ON_LAST_POS)) {
        regs->DESCRS[didx] |= MEC_BIT(MEC_QSPI_DESCR_CLOSE_Pos);
    }

    /* Enable descriptor mode with start descriptor = Descr[0] */
    regs->CTRL = MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);

    return 0;
}

/* Load descriptors register only. Does not touch other QSPI registers */
int mec_hal_qspi_load_descrs_at(struct mec_qspi_regs *regs, const uint32_t *descrs, uint8_t ndescr,
                                uint8_t start_descr_idx)
{
    uint32_t didx, didx_lim, n;

    if (!regs || !descrs || !ndescr || (start_descr_idx >= MEC5_QSPI_NUM_DESCRS)
        || ((start_descr_idx + ndescr) > MEC5_QSPI_NUM_DESCRS)) {
        return MEC_RET_ERR_INVAL;
    }

    didx = start_descr_idx;
    didx_lim = didx + ndescr;
    if (didx_lim > MEC5_QSPI_NUM_DESCRS) {
        didx_lim = MEC5_QSPI_NUM_DESCRS;
    }

    n = 0;
    while (didx < didx_lim) {
        regs->DESCRS[didx++] = descrs[n++];
    }

    return MEC_RET_OK;
}

/* -------- 2024-11-04 -------- */

#define QIEN_DONE_AND_ERR                                                                          \
    (MEC_BIT(MEC_QSPI_INTR_CTRL_DONE_Pos) | MEC_BIT(MEC_QSPI_INTR_CTRL_TXBERR_Pos) |               \
     MEC_BIT(MEC_QSPI_INTR_CTRL_RXBERR_Pos) | MEC_BIT(MEC_QSPI_INTR_CTRL_PROGERR_Pos) |\
     MEC_BIT(MEC_QSPI_INTR_CTRL_LDRXERR_Pos) | MEC_BIT(MEC_QSPI_INTR_CTRL_LDTXERR_Pos))

/*
 * Rules:
 * txb == NULL and txlen != 0 tri-state clocks
 *   TX is disabled.
 *   RX LDMA unlimited mode = txlen to generate clocks.
 *   if rxlen == txlen
 *     if rxb
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen, maddr=rxb
 *     else
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen, maddr=dumpster
 *   else if rxlen < txlen
 *     if rxb
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen, maddr=rxb
 *     else
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen, maddr=dumpster
 *       Descr[1] = TX disable, RX enabled, RX LDMA CH0 ulen=txlen-rxlen, maddr=dumpster
 *   else // rxlen > txlen
 *     if rxb
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=txlen, maddr=rxb
 *       Descr[1] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen-txlen, maddr=rxb+txlen
 *     else
 *       Descr[0] = TX disable, RX enabled, RX LDMA CH0 ulen=rxlen, maddr=dumpster
 *
 */
/* NOTE: We have QSPI instance. If more are added these must be expanded to be
 * per instance variables.
 */
static uint32_t mec5_qspi_tx_dumpster;
/* static uint8_t mec5_qspi_rx_dumpster; */

static void qspi_uldma_fd_eq(struct mec_qspi_regs *regs, const uint8_t *txb, uint8_t *rxb,
                             size_t xlen)
{
    uint32_t descr0 = QD_IO_FD | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_LAST_EN;
    uint32_t rx_ldma_en = 0, tx_ldma_en = 0;
    uint32_t ldma_mode_en = 0;

    regs->RX_LDMA_CHAN[0].LEN = xlen;
    if (rxb) {
        regs->RX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
        regs->RX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)rxb;
    } else {
        regs->RX_LDMA_CHAN[0].CTRL = QLDC_1B_EN;
        regs->RX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)&regs->BCNT_STS;
    }
    rx_ldma_en |= MEC_BIT(0);
    ldma_mode_en |= QM_RX_LDMA_EN;

    if (txb) {
        descr0 |= QD_TX_EN_DATA | QD_TX_LDMA_EN_CH0;
        /* Length must be programmed to non-zero before channel is enabled! */
        regs->TX_LDMA_CHAN[0].LEN = xlen;
        regs->TX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)txb;
        regs->TX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
        tx_ldma_en |= MEC_BIT(0);
        ldma_mode_en |= QM_TX_LDMA_EN;
    }

    regs->DESCRS[0] = descr0;
    regs->DESCRS[1] = 0;
    regs->LDMA_RXEN = rx_ldma_en;
    regs->LDMA_TXEN = tx_ldma_en;
    regs->MODE |= ldma_mode_en;
}

/* txlen != 0 and rxlen != 0 and txlen != rxlen
 * descr0: TX enabled for data, TX LDMA CH0, RX enabled, RX LDMA CH0
 * descr1: TX enabled for data, TX LDMA CH1, RX enabled, RX LDMA CH1
 * mec5_qspi_tx_dumpster = flags[31:24]
 * txlen < rxlen
 *     TX LDMA CH0 length = txlen
 *       maddr = (txb) ? txb : &mec5_qspi_tx_dumpster
 *       ctrl = (txb) ? 0x4d : 0x0d
 *     RX LDMA CH0 length = txlen
 *       maddr = (rxb) ? rxb : &mec5_qspi_rx_dumpster. Alternate for !rxb is disable RX
 *       ctrl = (rxb) ? 0x4d : 0x0d
 *     TX LDMA CH1 length = rxlen - txlen
 *       maddr = &mec5_qspi_tx_dumpster
 *       ctrl = 0x0d
 *     RX LDMA CH1 length = rxlen - txlen
 *      maddr = (rxb) ? rxb + txlen : &mec5_qspi_rx_dumpster. Alternate for !rxb is disable RX
 *      ctrl = (rxb) ? 0x4d : 0x0d
 * txlen > rxlen
 *     TX LDMA CH0 length = rxlen
 *       maddr = (txb) ? txb : &mec5_qspi_tx_dumpster
 *       ctrl = (txb) ? 0x4d : 0x0d
 *     RX LDMA CH0 length = rxlen
 *       maddr = (rxb) ? rxb : &mec5_qspi_rx_dumpster. Alternate for !rxb is disable RX
 *       ctrl = (rxb) ? 0x4d : 0x0d
 *     TX LDMA CH1 length = txlen - rxlen
 *       maddr = (txb) ? txb + rxlen : &mec5_qspi_tx_dumpster
 *       ctrl = (txb) ? 0x4d : 0x0d
 *     RX LDMA CH1 length = txlen - rxlen
 *       maddr = &mec5_qspi_rx_dumpster. Alternate for !rxb is disable RX
 *       ctrl = 0x0d
 */
static void qspi_uldma_fd_neq(struct mec_qspi_regs *regs, const uint8_t *txb, size_t txlen,
                              uint8_t *rxb, size_t rxlen)
{
    uint32_t descr0 = QD_IO_FD | QD_TX_EN_DATA | QD_TX_LDMA_EN_CH0 | QD_NEXT_DESCR(1);
    uint32_t descr1 = QD_IO_FD | QD_TX_EN_DATA | QD_TX_LDMA_EN_CH1 | QD_LAST_EN;
    uint32_t ldma_enables = QM_TX_LDMA_EN;
    size_t dma0_len = 0, dma1_len = 0;

    if (txlen < rxlen) {
        dma0_len = txlen;
        dma1_len = rxlen - txlen;
    } else {
        dma0_len = rxlen;
        dma1_len = txlen - rxlen;
    }

    regs->TX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)&mec5_qspi_tx_dumpster;
    regs->TX_LDMA_CHAN[1].MEM_ADDR = (uint32_t)&mec5_qspi_tx_dumpster;
    regs->TX_LDMA_CHAN[0].LEN = dma0_len;
    regs->TX_LDMA_CHAN[1].LEN = dma1_len;
    regs->TX_LDMA_CHAN[0].CTRL = QLDC_1B_EN;
    regs->TX_LDMA_CHAN[1].CTRL = QLDC_1B_EN;

    if (txb) {
        regs->TX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)txb;
        regs->TX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
        if (txlen > rxlen) {
            regs->TX_LDMA_CHAN[1].MEM_ADDR = (uint32_t)txb + dma0_len;
            regs->TX_LDMA_CHAN[1].CTRL = QLDC_1B_INCM_EN;
        }
    }
    regs->LDMA_TXEN = MEC_BIT(0) | MEC_BIT(1);

    if (rxb) {
        descr0 |= QD_RX_EN | QD_RX_LDMA_EN_CH0;
        regs->RX_LDMA_CHAN[0].LEN = dma0_len;
        regs->RX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)rxb;
        regs->RX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
        regs->LDMA_RXEN = MEC_BIT(0);
        if (rxlen > txlen) {
            descr1 |= QD_RX_EN | QD_RX_LDMA_EN_CH1;
            regs->RX_LDMA_CHAN[1].LEN = dma1_len;
            regs->RX_LDMA_CHAN[1].MEM_ADDR = (uint32_t)rxb + dma0_len;
            regs->RX_LDMA_CHAN[1].CTRL = QLDC_1B_INCM_EN;
            regs->LDMA_RXEN |= MEC_BIT(1);
        }
        ldma_enables |= QM_RX_LDMA_EN;
    }

    regs->DESCRS[0] = descr0;
    regs->DESCRS[1] = descr1;
    regs->MODE |= ldma_enables;
}

int mec_hal_qspi_uldma_fd(struct mec_qspi_regs *regs, const uint8_t *txb, size_t txlen,
                          uint8_t *rxb, size_t rxlen, uint32_t flags)
{
    uint32_t xlen = 0;

#ifdef MEC_QSPI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_QSPI0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!txlen && !rxlen) {
        return MEC_RET_ERR_NOP;
    }

    mec5_qspi_tx_dumpster = MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_GET(flags);

    qspi_ldma_init(regs);

    if (!txlen || !rxlen || (txlen == rxlen))  {
        xlen = (txlen) ? txlen : rxlen;
        qspi_uldma_fd_eq(regs, txb, rxb, xlen);
    } else {
        qspi_uldma_fd_neq(regs, txb, txlen, rxb, rxlen);
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_CLOSE) {
        if (regs->DESCRS[1]) {
            regs->DESCRS[1] |= QD_CLOSE_EN;
        } else {
            regs->DESCRS[0] |= QD_CLOSE_EN;
        }
    }

    regs->CTRL |= MEC_BIT(16);

    if (flags & MEC5_QSPI_ULDMA_FLAG_IEN) {
        regs->INTR_CTRL = QIEN_DONE_AND_ERR;
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_START) {
        regs->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_uldma_fd2(struct mec_qspi_regs *regs, const uint8_t *txb, uint8_t *rxb,
                           size_t xfrlen, uint32_t flags)
{
#ifdef MEC_QSPI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_QSPI0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!xfrlen) {
        return MEC_RET_ERR_NOP;
    }

    mec5_qspi_tx_dumpster = MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_GET(flags);

    qspi_ldma_init(regs);

    regs->RX_LDMA_CHAN[0].LEN = xfrlen;
    regs->RX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)rxb;
    if (flags & MEC5_QSPI_ULDMA_FLAG_INCR_RX) {
        regs->RX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
    } else {
        regs->RX_LDMA_CHAN[0].CTRL = QLDC_1B_EN;
    }

    regs->TX_LDMA_CHAN[0].LEN = xfrlen;
    regs->TX_LDMA_CHAN[0].MEM_ADDR = (uint32_t)txb;
    if (flags & MEC5_QSPI_ULDMA_FLAG_INCR_TX) {
        regs->TX_LDMA_CHAN[0].CTRL = QLDC_1B_INCM_EN;
    } else {
        regs->TX_LDMA_CHAN[0].CTRL = QLDC_1B_EN;
    }

    regs->DESCRS[0] = (QD_IO_FD | QD_TX_EN_DATA | QD_TX_LDMA_EN_CH0 |
                       QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_LAST_EN);
    regs->DESCRS[1] = 0;

    regs->LDMA_RXEN = MEC_BIT(0);
    regs->LDMA_TXEN = MEC_BIT(0);
    regs->MODE |= (QM_RX_LDMA_EN | QM_TX_LDMA_EN);

    if (flags & MEC5_QSPI_ULDMA_FLAG_CLOSE) {
        regs->DESCRS[0] |= QD_CLOSE_EN;
    }

    regs->CTRL |= MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);

    if (flags & MEC5_QSPI_ULDMA_FLAG_IEN) {
        regs->INTR_CTRL = QIEN_DONE_AND_ERR;
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_START) {
        regs->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_xfr_fifo_fd(struct mec_qspi_regs *regs, const uint8_t *txb, uint8_t *rxb,
                             size_t xlen, uint32_t flags)
{
    uint32_t descr0 = QD_IO_FD | QD_UNITS_1B | QD_LAST_EN;

#ifdef MEC_QSPI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_QSPI0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!xlen) {
        return MEC_RET_ERR_NOP;
    }

    if (xlen > MEC5_QSPI_FIFO_LEN) {
        return MEC_RET_ERR_DATA_LEN;
    }

    mec5_qspi_tx_dumpster = MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_GET(flags);

    qspi_ldma_init(regs);

    descr0 |= (xlen << MEC_QSPI_DESCR_QNUNITS_Pos);

    if (txb) {
        descr0 |= QD_TX_EN_DATA;
        for (size_t n = 0; n < xlen; n++) {
            MEC_MMCR8(&regs->TX_FIFO) = txb[n];
        }
    } else {
        descr0 |= QD_RX_EN;
    }
    if (rxb) {
        descr0 |= QD_RX_EN;
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_CLOSE) {
        descr0 |= QD_CLOSE_EN;
    }

    regs->DESCRS[0] = descr0;
    regs->CTRL |= MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);

    if (flags & MEC5_QSPI_ULDMA_FLAG_IEN) {
        regs->INTR_CTRL = QIEN_DONE_AND_ERR;
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_START) {
        regs->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_uldma(struct mec_qspi_regs *regs, const uint8_t *txb, size_t txlen,
                       uint8_t *rxb, size_t rxlen, uint32_t flags)
{
    uint32_t descr = 0, qmode = 0;
    uint32_t ldma_rx_bm = 0, ldma_tx_bm = 0;
    uint8_t iom = 0;
    uint8_t didx = 0xffu;
    uint8_t tx_ldma_idx = 0xffu;
    uint8_t rx_ldma_idx = 0xffu;

#ifdef MEC_QSPI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_QSPI0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!txlen && !rxlen) {
        return MEC_RET_ERR_NOP;
    }

    mec5_qspi_tx_dumpster = MEC_QSPI_ULDMA_FLAG_TX_OVR_VAL_GET(flags);
    iom = (uint8_t)MEC_QSPI_ULDMA_FLAG_IOM_GET(flags); /* power of 2 */

    if (!iom) {
        return mec_hal_qspi_uldma_fd(regs, txb, txlen, rxb, rxlen, flags);
    }

    if (iom > 2) {
        iom = 2u;
    }
    descr = iom;

    qspi_ldma_init(regs);

    if (txlen) {
        ++didx;
        if (txb) {
            ++tx_ldma_idx;
            descr |= (QD_TX_EN_DATA | QD_TX_LDMA_EN_CH0);
            ldma_tx_bm |= MEC_BIT(didx);
            qmode |= QM_TX_LDMA_EN;
            regs->TX_LDMA_CHAN[tx_ldma_idx].LEN = txlen;
            regs->TX_LDMA_CHAN[tx_ldma_idx].MEM_ADDR = (uint32_t)txb;
            regs->TX_LDMA_CHAN[tx_ldma_idx].CTRL = QLDC_1B_INCM_EN;
        } else { /* enable RX to R/O registers to generate clocks with TX lines tri-stated */
            ++rx_ldma_idx;
            descr |= (QD_RX_EN | QD_RX_LDMA_EN_CH0);
            ldma_rx_bm |= MEC_BIT(didx);
            qmode |= QM_RX_LDMA_EN;
            regs->RX_LDMA_CHAN[rx_ldma_idx].LEN = txlen;
            regs->RX_LDMA_CHAN[rx_ldma_idx].MEM_ADDR = (uint32_t)&regs->BCNT_STS;
            regs->RX_LDMA_CHAN[rx_ldma_idx].CTRL = QLDC_1B_EN;
        }
        regs->DESCRS[didx] = descr;
    }

    if (rxlen) {
        ++didx;
        ++rx_ldma_idx;
        descr = iom | (QD_RX_EN | QD_RX_LDMA_EN_CH0);
        regs->RX_LDMA_CHAN[rx_ldma_idx].LEN = rxlen;
        if (rxb) {
            regs->RX_LDMA_CHAN[rx_ldma_idx].MEM_ADDR = (uint32_t)rxb;
            regs->RX_LDMA_CHAN[rx_ldma_idx].CTRL = QLDC_1B_INCM_EN;
        } else { /* discard RX data */
            regs->RX_LDMA_CHAN[rx_ldma_idx].MEM_ADDR = (uint32_t)&regs->BCNT_STS;
            regs->RX_LDMA_CHAN[rx_ldma_idx].CTRL = QLDC_1B_EN;
        }
        regs->DESCRS[didx] = descr;
        ldma_rx_bm |= MEC_BIT(didx);
        qmode |= QM_RX_LDMA_EN;
    }

    regs->DESCRS[didx] |= QD_LAST_EN;
    if (flags & MEC5_QSPI_ULDMA_FLAG_CLOSE) {
        regs->DESCRS[didx] |= QD_CLOSE_EN;
    }

    regs->LDMA_RXEN = ldma_rx_bm;
    regs->LDMA_TXEN = ldma_tx_bm;
    regs->CTRL = MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);
    regs->MODE |= qmode;

    if (flags & MEC5_QSPI_ULDMA_FLAG_IEN) {
        regs->INTR_CTRL = QIEN_DONE_AND_ERR;
    }

    if (flags & MEC5_QSPI_ULDMA_FLAG_START) {
        regs->EXE = MEC_BIT(MEC_QSPI_EXE_START_Pos);
    }

    return MEC_RET_OK;
}

/* ---- SPI flash API ---- */

#define MEC_QSPI_TX_DIS      (MEC_QSPI_DESCR_TXEN_DIS << MEC_QSPI_DESCR_TXEN_Pos)
#define MEC_QSPI_TX_EN_DATA  (MEC_QSPI_DESCR_TXEN_EN << MEC_QSPI_DESCR_TXEN_Pos)
#define MEC_QSPI_TX_EN_ZEROS (MEC_QSPI_DESCR_TXEN_ENZ << MEC_QSPI_DESCR_TXEN_Pos)
#define MEC_QSPI_TX_EN_ONES  (MEC_QSPI_DESCR_TXEN_EN1 << MEC_QSPI_DESCR_TXEN_Pos)

#define MEC_QSPI_TX_LDMA_DIS (MEC_QSPI_DESCR_TXDMA_DIS << MEC_QSPI_DESCR_TXDMA_Pos)
#define MEC_QSPI_TX_LDMA_CH0 (MEC_QSPI_DESCR_TXDMA_1B_LDMA_CH0 << MEC_QSPI_DESCR_TXDMA_Pos)
#define MEC_QSPI_TX_LDMA_CH1 (MEC_QSPI_DESCR_TXDMA_2B_LDMA_CH1 << MEC_QSPI_DESCR_TXDMA_Pos)
#define MEC_QSPI_TX_LDMA_CH2 (MEC_QSPI_DESCR_TXDMA_4B_LDMA_CH2 << MEC_QSPI_DESCR_TXDMA_Pos)

#define MEC_QSPI_RX_DIS      (MEC_QSPI_DESCR_RXEN_DIS << MEC_QSPI_DESCR_RXEN_Pos)
#define MEC_QSPI_RX_EN       (MEC_QSPI_DESCR_RXEN_EN << MEC_QSPI_DESCR_RXEN_Pos)

#define MEC_QSPI_RX_LDMA_DIS (MEC_QSPI_DESCR_RXDMA_DIS << MEC_QSPI_DESCR_RXDMA_Pos)
#define MEC_QSPI_RX_LDMA_CH0 (MEC_QSPI_DESCR_RXDMA_1B_LDMA_CH0 << MEC_QSPI_DESCR_RXDMA_Pos)
#define MEC_QSPI_RX_LDMA_CH1 (MEC_QSPI_DESCR_RXDMA_2B_LDMA_CH1 << MEC_QSPI_DESCR_RXDMA_Pos)
#define MEC_QSPI_RX_LDMA_CH2 (MEC_QSPI_DESCR_RXDMA_4B_LDMA_CH2 << MEC_QSPI_DESCR_RXDMA_Pos)

#define MEC_QUNITS_BITS    (MEC_QSPI_DESCR_QUNITS_BITS << MEC_QSPI_DESCR_QUNITS_Pos)
#define MEC_QUNITS_1BYTE   (MEC_QSPI_DESCR_QUNITS_1B << MEC_QSPI_DESCR_QUNITS_Pos)
#define MEC_QUNITS_4BYTES  (MEC_QSPI_DESCR_QUNITS_4B << MEC_QSPI_DESCR_QUNITS_Pos)
#define MEC_QUNITS_16BYTES (MEC_QSPI_DESCR_QUNITS_16B << MEC_QSPI_DESCR_QUNITS_Pos)

#define MEC_NEXT_DESCR_MSK0 0xfu

#define MEC_NUM_QUNITS(n) (((uint32_t)(n) & 0x7fffu) << MEC_QSPI_DESCR_QNUNITS_Pos)
#define MEC_GET_QUNITS(d) (((uint32_t)(d) >> MEC_QSPI_DESCR_QNUNITS_Pos) & 0x7fffu)

struct mec_qspi_regs *mec_hal_qspi_regs_from_id(uint8_t qid)
{
    if (qid) {
        return NULL;
    }

    return (struct mec_qspi_regs *)(MEC_QSPI0_BASE);
}

int mec_hal_qspi_id_from_regs(struct mec_qspi_regs *regs, uint8_t *qid)
{
    uint8_t id = qspi_get_id(regs);

    if (id == UINT8_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    if (qid) {
        *qid = id;
    }

    return MEC_RET_OK;
}

int mec_hal_qspi_context2_init(struct mec_qspi_context2 *ctx, uint8_t qid)
{
    if (!ctx || (qid != 0)) {
        return MEC_RET_ERR_INVAL;
    }

    memset(ctx, 0, sizeof(struct mec_qspi_context2));
    ctx->qid = qid;

    return MEC_RET_OK;
}

int mec_hal_qspi_context2_init_from_regs(struct mec_qspi_context2 *ctx, struct mec_qspi_regs *regs)
{
    int ret = 0;
    uint8_t qid = 0;

    ret = mec_hal_qspi_id_from_regs(regs, &qid);
    if (ret != MEC_RET_OK) {
        return ret;
    }

    return mec_hal_qspi_context2_init(ctx, qid);
}

static int add_descr(struct mec_qspi_context2 *ctx2, uint32_t d)
{
    uint8_t nd = ctx2->ndescrs;

    if (nd >= MEC5_QSPI_NUM_DESCRS) {
        return MEC_RET_ERR_NO_RES;
    }

    ctx2->descrs[nd] = d;
    ctx2->ndescrs = nd + 1u;

    return MEC_RET_OK;
}

static uint32_t npins_to_ifm(uint8_t npins)
{
    switch (npins) {
    case 4: /* Quad IO */
        return (MEC_QSPI_DESCR_IFM_QUAD << MEC_QSPI_DESCR_IFM_Pos);
    case 2: /* Dual I/O */
        return (MEC_QSPI_DESCR_IFM_DUAL << MEC_QSPI_DESCR_IFM_Pos);
    default: /* default to full-duplex one pin each for TX and RX */
        return (MEC_QSPI_DESCR_IFM_FD << MEC_QSPI_DESCR_IFM_Pos);
    }
}

#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
/* addrsz    fmt_addr[31:0]
 * 4         a0_a1_a2_a3
 * 3         xx_a0_a1_a2
 * 2         xx_xx_a0_a1
 * 1         xx_xx_xx_a0
 */
static void spi_flash_addr_to_ctx(struct mec_qspi_context2 *ctx2, const uint32_t spi_addr,
                                  uint8_t addrsz)
{
    uint32_t fmt_addr = __REV(spi_addr);
    uint8_t *p = &ctx2->tx_params[ctx2->ntxp];

    if (addrsz == 0) {
        return;
    }

    if (addrsz >= 4u) {
        addrsz = 4u;
    } else {
        fmt_addr >>= ((4u - addrsz) * 8u);
    }

    for (uint8_t i = 0; i < addrsz; i++) {
        *p++ = (uint8_t)(fmt_addr & 0xffu);
        fmt_addr >>= 8;
    }

    ctx2->ntxp += addrsz;
}
#else
static void spi_flash_addr_to_fifo(struct mec_qspi_regs *regs, const uint32_t spi_addr,
                                   uint8_t addrsz)
{
    uint32_t saddr = __REV(spi_addr);

    if (addrsz >= 4u) {
        regs->TX_FIFO = spi_addr;
    } else {
        for (uint8_t i = 0; i < addrsz; i++) {
            saddr >>= 8;
            MEC_MMCR8(&regs->TX_FIFO) = (uint8_t)saddr;
        }
    }
}
#endif

static int descr_cfg(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs,
                     uint8_t npins, uint8_t nbytes)
{
    uint32_t d = 0;

    d = npins_to_ifm(npins);
    d |= (MEC_QSPI_TX_EN_DATA | MEC_QSPI_TX_LDMA_DIS | MEC_QUNITS_1BYTE);
    d |= MEC_NUM_QUNITS(nbytes);

    return add_descr(ctx2, d);
}

static int descr_cfg_mode_byte(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs,
                               uint8_t npins, uint8_t mode_byte, uint8_t mode_bits)
{
    int ret = 0;
    uint32_t d = 0, dbase = 0;

    dbase = npins_to_ifm(npins);

    if (mode_bits >= 8) {
        d = dbase | (MEC_QSPI_TX_EN_DATA | MEC_QUNITS_1BYTE);
        d |= MEC_NUM_QUNITS(1u);
        ret = add_descr(ctx2, d);
    } else { /* require two descriptors */
        d = dbase | (MEC_QSPI_TX_EN_DATA | MEC_QUNITS_BITS);
        d |= MEC_NUM_QUNITS(mode_bits);
        ret = add_descr(ctx2, d);
        if (ret) {
            return ret;
        }

        d = dbase | (MEC_QSPI_TX_DIS | MEC_QUNITS_BITS);
        d |= MEC_NUM_QUNITS(8u - mode_bits);
        ret = add_descr(ctx2, d);
    }

    return ret;
}

/*
 * 1X mode: 1 bit/clock.
 * 2X mode: 2 bits/clock.
 * 4X mode: 4 bits/clock.
 */
static uint32_t clocks_to_bits(uint32_t clocks, uint8_t npins)
{
    if (npins >= 4) {
        return clocks * 4;
    } else if (npins >= 2) {
        return clocks * 2;
    } else {
        return clocks;
    }
}

static int descr_cfg_ts_clocks(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs,
                               uint8_t npins, uint8_t num_ts_clocks)
{
    uint32_t d = clocks_to_bits(num_ts_clocks, npins);

    d = MEC_NUM_QUNITS(d);
    d |= npins_to_ifm(npins);
    d |= (MEC_QSPI_TX_DIS | MEC_QUNITS_BITS);

    return add_descr(ctx2, d);
}

static void update_next_descr(struct mec_qspi_context2 *ctx2)
{
    uint8_t nd = ctx2->ndescrs;

    if (nd > MEC5_QSPI_NUM_DESCRS) {
        nd = MEC5_QSPI_NUM_DESCRS;
    }

    for (uint8_t n = 0; n < nd; n++) {
        uint32_t d = ctx2->descrs[n];

        d &= (uint32_t)~MEC_QSPI_DESCR_NEXT_Msk;
        d |= ((uint32_t)((n + 1u) & MEC_NEXT_DESCR_MSK0) << MEC_QSPI_DESCR_NEXT_Pos);
        ctx2->descrs[n] = d;
    }
}

static void qspi_prep(struct mec_qspi_regs *regs)
{
    regs->MODE &= ~(MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos) | MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos));
    regs->CTRL = 0u;
    regs->LDMA_RXEN = 0u;
    regs->LDMA_TXEN = 0u;
    regs->EXE = MEC_BIT(MEC_QSPI_EXE_CLRF_Pos);
    for (uint32_t i = 0; i < 3; i++) {
        regs->RX_LDMA_CHAN[i].CTRL = 0;
        regs->RX_LDMA_CHAN[i].MEM_ADDR = 0;
        regs->RX_LDMA_CHAN[i].LEN = 0;
        regs->TX_LDMA_CHAN[i].CTRL = 0;
        regs->TX_LDMA_CHAN[i].MEM_ADDR = 0;
        regs->TX_LDMA_CHAN[i].LEN = 0;
    }
    regs->STATUS = UINT32_MAX;
}

static void load_descriptors(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs)
{
    for (uint8_t i = 0; i < ctx2->ndescrs; i++) {
        regs->DESCRS[i] = ctx2->descrs[i];
        if (i == (ctx2->ndescrs - 1u)) {
            regs->DESCRS[i] |= MEC_BIT(MEC_QSPI_DESCR_CLOSE_Pos) | MEC_BIT(MEC_QSPI_DESCR_LAST_Pos);
        }
    }

    regs->CTRL = MEC_BIT(MEC_QSPI_CTRL_DESCR_MODE_Pos);
}

static void load_ldma(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs)
{
    if (ctx2->flags & MEC_BIT(0)) { /* RX LDMA */
        regs->RX_LDMA_CHAN[0].LEN = ctx2->ldma_rx_len;
        regs->RX_LDMA_CHAN[0].MEM_ADDR = ctx2->ldma_rx_maddr;
        regs->RX_LDMA_CHAN[0].CTRL = ctx2->ldma_rx_ctrl;
        regs->LDMA_RXEN = MEC_BIT(ctx2->ldma_rx_descr_idx);
        regs->MODE |= MEC_BIT(MEC_QSPI_MODE_RX_LDMA_Pos);
    }

    if (ctx2->flags & MEC_BIT(1)) { /* TX LDMA */
        regs->TX_LDMA_CHAN[0].LEN = ctx2->ldma_tx_len;
        regs->TX_LDMA_CHAN[0].MEM_ADDR = ctx2->ldma_tx_maddr;
        regs->TX_LDMA_CHAN[0].CTRL = ctx2->ldma_tx_ctrl;
        regs->LDMA_TXEN = MEC_BIT(ctx2->ldma_tx_descr_idx);
        regs->MODE |= MEC_BIT(MEC_QSPI_MODE_TX_LDMA_Pos);
    }
}

#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
static void load_tx_fifo(struct mec_qspi_context2 *ctx2, struct mec_qspi_regs *regs)
{
    uint8_t num_cmd_params = ctx2->ntxp;

    if (num_cmd_params > MEC5_QSPI_FIFO_LEN) {
        num_cmd_params = MEC5_QSPI_FIFO_LEN;
    }

    for (uint8_t i = 0; i < num_cmd_params; i++) {
        MEC_MMCR8(&regs->TX_FIFO) = ctx2->tx_params[i];
    }
}
#endif

int mec_hal_qspi_flash_cmd_setup(struct mec_qspi_context2 *ctx2, struct mec_spi_command *cmd,
                                 uint32_t spi_addr)
{
    struct mec_qspi_regs *regs = NULL;
    int ret = 0;
    uint8_t nb = 0, npins = 0;

    if (!ctx2 || !cmd) {
        return MEC_RET_ERR_INVAL;
    }

    regs = mec_hal_qspi_regs_from_id(ctx2->qid);
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (cmd->flags & MEC_SPI_CMD_OP_IO_MASK) {
#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
        ctx2->tx_params[0] = cmd->opcode;
        ctx2->ntxp = 1u;
#else
        MEC_MMCR8(&regs->TX_FIFO) = cmd->opcode;
#endif
        npins = MEC_SPI_CMD_OP_NPINS(cmd->flags);
        ret = descr_cfg(ctx2, regs, npins, 1u);
        if (ret) {
            return ret;
        }
    }

    if (cmd->flags & MEC_SPI_CMD_ADDR_IO_MASK) {
        nb = (cmd->flags & MEC_SPI_CMD_ADDR32) ? 4u : 3u;
#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
        spi_flash_addr_to_ctx(ctx2, spi_addr, nb);
#else
        spi_flash_addr_to_fifo(regs, spi_addr, nb);
#endif
        npins = MEC_SPI_CMD_ADDR_NPINS(cmd->flags);
        ret = descr_cfg(ctx2, regs, npins, nb);
        if (ret) {
            return ret;
        }
    }

    if (cmd->flags & MEC_SPI_CMD_MODE_BYTE) {
#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
        ctx2->tx_params[ctx2->ntxp] = cmd->opcode;
        ctx2->ntxp++;
#else
        MEC_MMCR8(&regs->TX_FIFO) = cmd->mode_byte;
#endif
        npins = MEC_SPI_CMD_ADDR_NPINS(cmd->flags);
        ret = descr_cfg_mode_byte(ctx2, regs, npins, cmd->mode_byte, cmd->mode_bits);
        if (ret) {
            return ret;
        }
    }

    if (cmd->ts_clocks) {
        npins = MEC_SPI_CMD_DATA_NPINS(cmd->flags);
        ret = descr_cfg_ts_clocks(ctx2, regs, npins, cmd->ts_clocks);
        if (ret) {
            return ret;
        }
    }

    return MEC_RET_OK;
}

/* LDMA can access memory in chunks of 4 bytes, 2 bytes, or 1 bytes.
 * Access depends upon memory alignment and number of bytes being transferred.
 */
static const uint8_t qspi_ldma_access_size[4] = {
    MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B, /* index 0 */
    MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B, /* index 1 */
    MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_2B, /* index 2 */
    MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B, /* index 3 */
};

/* Flags bit[0] = direction, 0=read, 1=write
 * Configure a descriptor for read or write using one LDMA channel in length override mode.
 * LDMA length override mode is where the LDMA channel length register specifies the transfer
 * size in bytes instead of the descriptor number of units field.
 * NOTE: program LDMA CTRL enable bit after all other LDMA CTRL fields, MEM_START reg, and LEN reg
 * are configured!
 */
int mec_hal_qspi_flash_data_setup(struct mec_qspi_context2 *ctx2, struct mec_spi_command *cmd,
                                  void *data, uint32_t nbytes, uint32_t flags)
{
    struct mec_qspi_regs *regs  = NULL;
    uint32_t temp = 0, d = 0;
    uint8_t npins = 0;
    uint32_t maddr = (uint32_t)data;
    uint32_t ctrl = (MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos) |
                     MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_OVRL_Pos) |
                     MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_RSTA_Pos));
    bool is_rx = (cmd->flags & MEC_SPI_CMD_DATA_DIR_TX) ? false : true;

    if (!data && !nbytes) {
        return MEC_RET_OK;
    }

    if (!ctx2 || !cmd) {
        return MEC_RET_ERR_INVAL;
    }

    regs = mec_hal_qspi_regs_from_id(ctx2->qid);
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (ctx2->ndescrs >= MEC5_QSPI_NUM_DESCRS) {
        return MEC_RET_ERR_NO_RES;
    }

    /* if data pointer is NULL generate clocks with I/O's tri-stated.
     * This is accomplished by receive mode and disarding data to a read-only location.
     * QSPI buffer count status register is a 32-bit read-only register.
     */
    if (!data && nbytes) {
        maddr = (uint32_t)&regs->BCNT_STS; /* read-only register, writes have no effect */
        is_rx = true;
    } else {
        ctrl |= MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Pos);
    }

    temp = qspi_ldma_access_size[(maddr | nbytes) & 0x3u];
    ctrl |= (temp << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos);

    if (is_rx) {
        ctx2->flags |= MEC_BIT(0);
        ctx2->ldma_rx_ctrl = ctrl;
        ctx2->ldma_rx_maddr = maddr;
        ctx2->ldma_rx_len = nbytes;
        ctx2->ldma_rx_descr_idx = ctx2->ndescrs;
        d = MEC_QSPI_RX_EN | MEC_QSPI_RX_LDMA_CH0;
    } else { /* TX? */
        ctx2->flags |= MEC_BIT(1);
        ctx2->ldma_tx_ctrl = ctrl;
        ctx2->ldma_tx_maddr = maddr;
        ctx2->ldma_tx_len = nbytes;
        ctx2->ldma_tx_descr_idx = ctx2->ndescrs;
        d = MEC_QSPI_TX_EN_DATA | MEC_QSPI_TX_LDMA_CH0;
    }

    npins = MEC_SPI_CMD_DATA_NPINS(cmd->flags);
    d |= npins_to_ifm(npins);

    return add_descr(ctx2, d);
}

int mec_hal_qspi_flash_xfr_load(struct mec_qspi_context2 *ctx2)
{
    struct mec_qspi_regs *regs  = NULL;

    if (!ctx2) {
        return MEC_RET_ERR_INVAL;
    }

    regs = mec_hal_qspi_regs_from_id(ctx2->qid);
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_prep(regs);

    update_next_descr(ctx2);
    load_descriptors(ctx2, regs);
    load_ldma(ctx2, regs);
#ifdef MEC_QSPI_FLASH_USE_CONTEXT2_TX_BUF
    load_tx_fifo(ctx2, regs);
#endif

    return MEC_RET_OK;
}

/* end mec_qspi.c */
