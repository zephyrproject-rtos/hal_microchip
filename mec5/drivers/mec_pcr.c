/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecs_api.h"
#include "mec_gpio_api.h"
#include "mec_pcr_api.h"
#include "mec_vbat_api.h"
#include "mec_retval.h"

#define MEC_PCR_PLL_FAST_FREQ_HZ 96000000
#define MEC_PCR_PLL_FREQ_HZ      48000000
#define MEC_PCR_PLL_MAX_CLK_DIV  48

#define MEC_PCR_RSTEN_UNLOCK 0xa6382d4cu
#define MEC_PCR_RSTEN_LOCK   0xa6382d4du

#define MEC_PCR_PRIV_UNLOCK 0xa6382d4cu
#define MEC_PCR_PRIV_LOCK   0xa6382d4du

/* PCR Power Reset Status register RESET_VCC bit is RESET_HOST
 * 0 = reset active
 * 1 = reset inactive
 */
int mec_hal_pcr_is_host_reset(void)
{
    if (MEC_PCR->PRS & MEC_BIT(MEC_PCR_PRS_RESET_VCC_Pos)) {
        return 0;
    }
    return 1;
}

int mec_hal_pcr_is_vcc_pwrgd(void)
{
    if (MEC_PCR->PRS & MEC_BIT(MEC_PCR_PRS_VCC_PWRGD_Pos)) {
        return 1;
    }
    return 0;
}

/* Return state of VCC_PWRGD in bit 0 and VCC_PWRGD2 in bit 1 */
uint32_t mec_hal_pcr_vcc_power_good_state(void)
{
    return (MEC_PCR->PRS >> 1) & 0x03u;
}

int mec_hal_pcr_is_turbo_clock(void)
{
#ifdef MEC5_FAM2_ID
    if (MEC_PCR->TURBO_CLK & MEC_BIT(MEC_PCR_TURBO_CLK_FAST_CLK_Pos)) {
        return 1;
    }

    return 0;
#else
    if (MEC_ECS->FEAT_LOCK & MEC_BIT(MEC_ECS_FEAT_LOCK_TURBO_FREQ_Pos)) {
        return 0;
    }

    return 1;
#endif
}

/* Get maximum input clock frequency in Hz supplied by the PCR module to the ARM Cortex-M4 core */
uint32_t mec_hal_pcr_cpu_max_freq(void)
{
#ifdef MEC5_FAM2_ID
    uint32_t fhz = MEC_PCR_PLL_FREQ_HZ;

    if (MEC_PCR->TURBO_CLK & MEC_BIT(MEC_PCR_TURBO_CLK_FAST_CLK_Pos)) {
        fhz = MEC_PCR_PLL_FAST_FREQ_HZ;
    }
#else
    uint32_t fhz = MEC_PCR_PLL_FAST_FREQ_HZ;

    if (MEC_ECS->FEAT_LOCK & MEC_BIT(MEC_ECS_FEAT_LOCK_TURBO_FREQ_Pos)) {
        fhz = MEC_PCR_PLL_FREQ_HZ;
    }
#endif

    return fhz;
}

/* Get current clock frequency in Hz divided down from maximum */
uint32_t mec_hal_pcr_cpu_clk_speed(void)
{
    uint32_t max_freq = mec_hal_pcr_cpu_max_freq();
    uint32_t freq = max_freq;
    uint32_t clkdiv = MEC_PCR->PCC;

    if (clkdiv) {
        freq = max_freq / clkdiv;
    }

    return freq;
}

static void set_pcr_cpu_clk_div(uint32_t clkdiv)
{
    uint32_t isave;

    isave = __get_PRIMASK();
    __disable_irq();

    MEC_PCR->PCC = clkdiv;
    __ISB();
    __DSB();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();

    if (isave) {
        __enable_irq();
    }
}

/* Change clock speed PCR provides to ARM Cortex-M4 core
 * @param fhz requested clock in Hz
 * @return 0 (success), < 0 error
 * @note this routine include a critical section around write to
 * frequency divider register and necessary instruction sequence
 * to re-align clock and processor.
 */
int mec_hal_pcr_cpu_clk_speed_set(uint32_t fhz)
{
    uint32_t fdiv, max_freq;

    if (fhz == 0) {
        return MEC_RET_ERR_INVAL;
    }

    max_freq = mec_hal_pcr_cpu_max_freq();
    fdiv = max_freq / fhz;

    if (fdiv == 0) {
        fdiv = 1u;
    } else {
        if (fdiv > MEC_PCR_PLL_MAX_CLK_DIV) {
            fdiv = MEC_PCR_PLL_MAX_CLK_DIV;
        }
    }

    set_pcr_cpu_clk_div(fdiv);

    return 0;
}

uint32_t mec_hal_pcr_cpu_clock_divider(void)
{
    return MEC_PCR->PCC;
}

int mec_hal_pcr_cpu_clock_divider_set(enum mec_pcr_cpu_clk_div clk_div)
{
    if (!clk_div) {
        return MEC_RET_ERR_INVAL;
    }

    set_pcr_cpu_clk_div((uint32_t)clk_div);

    return 0;
}

bool mec_hal_pcr_is_pll_locked(void)
{
    if (MEC_PCR->OID & MEC_BIT(MEC_PCR_OID_PLL_LOCK_Pos)) {
        return true;
    }

    return false;
}

/* PCR sleep enables */
/* pid = zero based PCR bit position of the peripheral.
 * Sleep enable register index 0 contains bits 0:31, ...,
 * Sleep enable register index 4 contains bits 128:159
 */
void mec_hal_pcr_set_blk_slp_en(uint16_t pid)
{
    if (pid >= MEC_PCR_MAX_ID) {
        return;
    }

    uint32_t idx = pid / 32u;
    uint32_t bpos = pid % 32u;

    MEC_PCR->SLP_EN[idx] |= MEC_BIT(bpos);
}

void mec_hal_pcr_clr_blk_slp_en(uint16_t pid)
{
    if (pid >= MEC_PCR_MAX_ID) {
        return;
    }

    uint32_t idx = pid / 32u;
    uint32_t bpos = pid % 32u;

    MEC_PCR->SLP_EN[idx] &= ~MEC_BIT(bpos);
}

uint8_t mec_hal_pcr_is_blk_slp_en(uint16_t pid)
{
    uint32_t idx;
    uint32_t bpos;

    if (pid < MEC_PCR_MAX_ID) {
        idx = pid / 32u;
        bpos = pid % 32u;

        if (MEC_PCR->SLP_EN[idx] & MEC_BIT(bpos)) {
            return 1;
        }
    }

    return 0;
}

void mec_hal_pcr_blk_slp_en(uint16_t pid, uint8_t enable)
{
    if (enable) {
        mec_hal_pcr_set_blk_slp_en(pid);
    } else {
        mec_hal_pcr_clr_blk_slp_en(pid);
    }
}

int mec_hal_pcr_slp_en_set(uint8_t regid, uint32_t val)
{
    if (regid >= MEC_MAX_PCR_SCR_REGS) {
        return MEC_RET_ERR_INVAL;
    }

    MEC_PCR->SLP_EN[regid] = val;

    return MEC_RET_OK;
}

int mec_hal_pcr_slp_en_mask(uint8_t regid, uint32_t val, uint32_t mask)
{
    if (regid >= MEC_MAX_PCR_SCR_REGS) {
        return MEC_RET_ERR_INVAL;
    }

    MEC_PCR->SLP_EN[regid] = (MEC_PCR->SLP_EN[regid] & ~mask) | (val & mask);

    return MEC_RET_OK;
}

void mec_hal_pcr_slp_en_por(void)
{
    for (uint32_t i = 0; i < MEC_MAX_PCR_SCR_REGS; i++) {
        MEC_PCR->SLP_EN[i] = 0;
    }

    MEC_PCR->SLP_EN[3] = MEC_BIT(MEC_PCR_CRYPTO_ALL % 32u);
}

void mec_hal_pcr_slp_en_set_all(void)
{
    for (uint32_t i = 0; i < MEC_MAX_PCR_SCR_REGS; i++) {
        MEC_PCR->SLP_EN[i] = UINT32_MAX;
    }
}

/* Reset specified peripheral block using PCR peripheral block reset
 * This reset is similar to the reset a peripheral block resets during
 * chip reset.
 * @param pid, an enum mec_pcr_scr_id specifying peripheral block.
 * @return value written to PCR reset enable[n] register.
 * @note enum mec_pcr_scr_id encodes the peripheral's PCR reset register
 * index and bit position. Return value has no purpose other than providing
 * a way to force a read-back of the write to the reset enable register.
 * Yes, this is overkill. AHB with this CPU preserved ordering of register
 * writes.
 */
uint32_t mec_hal_pcr_blk_reset(uint16_t pid)
{
    uint32_t bpos, idx, temp;

    if (pid >= MEC_PCR_MAX_ID) {
        return 0;
    }

    idx = pid / 32u;
    bpos = pid % 32u;

    MEC_PCR->RENLK = MEC_PCR_RSTEN_UNLOCK;
    MEC_PCR->RST_EN[idx] = MEC_BIT(bpos);
    temp = MEC_PCR->RST_EN[idx];
    MEC_PCR->RENLK = MEC_PCR_RSTEN_LOCK;

    return temp;
}

uint32_t mec_hal_pcr_blk_reset_critical(uint16_t pid)
{
    uint32_t isave, rval;

    isave = __get_PRIMASK();
    __disable_irq();
    rval = mec_hal_pcr_blk_reset(pid);
    if (isave) {
        __enable_irq();
    }
    return rval;
}

void __attribute__((__noreturn__)) mec_pcr_reset_system(void)
{
    MEC_PCR->SRST |= MEC_BIT(MEC_PCR_SRST_SYS_RST_Pos);

    while (1) {
        __NOP();
        __NOP();
        __NOP();
    }
}

/* Release firmware control override (assertion) of RESET_VCC internal signal.
 * release == 0 configure HW to force assertion of internal RESET_VCC signal.
 * release != 0 configure HW to disable forced assertion of internal RESET_VCC
 *              signal. RESET_VCC state is controlled by its other inputs.
 * Note1: RESET_VCC internal signal is affected by
 * RESET_SYS high || VCC_PWRGD2 low || PCR PWR_INV bit high
 * Note2: PWROK(_ALT) pins is inverted RESET_VCC. If PWROK(_ALT) pin(s) are
 * used the application must configura the respective GPIO(s).
 */
void mec_hal_pcr_release_reset_vcc(uint8_t release)
{
    if (release) {
        MEC_PCR->PRC &= ~MEC_BIT(MEC_PCR_PRC_PWR_INV_Pos);
    } else {
        MEC_PCR->PRC |= MEC_BIT(MEC_PCR_PRC_PWR_INV_Pos);
    }
}

void mec_hal_pcr_host_reset_select(uint8_t use_espi_platform_reset)
{
    if (use_espi_platform_reset) {
        MEC_PCR->PRC &= ~MEC_BIT(MEC_PCR_PRC_HOST_RSEL_Pos);
    } else {
        MEC_PCR->PRC |= MEC_BIT(MEC_PCR_PRC_HOST_RSEL_Pos);
    }
}

/* ---- PCR slow clock (100 kHz domain) ----
 * PCR block derives a 100 KHz clock from the 48MHz PLL outout.
 * This clock is used by certain peripherals such as the PWMs.
 * PCR implements a 10 bit clock divider of its 48MHz PLL output.
 * The programmable divider defaults to 480 (0x1E0) to produce 100 KHz.
 */
uint32_t mec_hal_pcr_slow_clock_freq_get(void)
{
    uint32_t sdiv = MEC_PCR->SCC & MEC_PCR_SCC_SLOW_CLK_DIV_Msk;

    if (sdiv) {
        return (48000000U / sdiv);
    }

    return 0; /* slow clock is off */
}

void mec_hal_pcr_slow_clock_freq_set(uint32_t freqhz)
{
    uint32_t sdiv = 1u;

    if (!freqhz) {
        MEC_PCR->SCC = 0; /* turn off slow clock */
        return;
    }

    if (freqhz < 48000000U) {
        sdiv = 48000000U / freqhz;
    }

    if (sdiv > MEC_PCR_SCC_SLOW_CLK_DIV_Msk) {
        sdiv = MEC_PCR_SCC_SLOW_CLK_DIV_Msk;
    }

    MEC_PCR->SCC = (MEC_PCR->SCC & (uint32_t)~MEC_PCR_SCC_SLOW_CLK_DIV_Msk) | sdiv;
}

/* ---- 32KHz clock configuration ----
 * !!! WARNING - Requires more testing !!!
 */

enum mec_pll_clk32k_src mec_hal_pll_get_clk32k_source(void)
{
    switch (MEC_PCR->SS32K & MEC_PCR_SS32K_PLL_REF_SRC_Msk) {
        case MEC_PCR_SS32K_PLL_REF_SRC_INTERNAL_OSC:
            return MEC_PLL_CLK32K_SRC_SI;
        case MEC_PCR_SS32K_PLL_REF_SRC_CRYSTAL:
            return MEC_PLL_CLK32K_SRC_XTAL;
        case MEC_PCR_SS32K_PLL_REF_SRC_PIN_32K_IN:
            return MEC_PLL_CLK32K_SRC_PIN;
        default:
            return MEC_PLL_CLK32K_SRC_NONE;
    }
}

enum mec_periph_clk32k_src mec_hal_vbr_get_periph_clk32_source(void)
{
    uint32_t cs;

    cs = (MEC_VBATR->CLK32K_SRC & MEC_VBATR_CLK32K_SRC_PSSEL_Msk) >> MEC_VBATR_CLK32K_SRC_PSSEL_Pos;
    switch (cs) {
        case MEC_VBATR_CLK32K_SRC_PSSEL_XTAL:
            return MEC_PERIPH_CLK32K_SRC_XTAL_XTAL;
        case MEC_VBATR_CLK32K_SRC_PSSEL_PIN_SIL:
            return MEC_PERIPH_CLK32K_SRC_PIN_SI;
        case MEC_VBATR_CLK32K_SRC_PSSEL_PIN_XTAL:
            return MEC_PERIPH_CLK32K_SRC_PIN_XTAL;
        default:
            return MEC_PERIPH_CLK32K_SRC_SI_SI;
    }
}

/* Are PLL and Peripheral 32KHz clock source selected and enabled?
 * return True (non-zero)
 *        False (zero)
 */
int mec_hal_pcr_clk32k_is_config(enum mec_pll_clk32k_src pll_src,
                             enum mec_periph_clk32k_src periph_src,
                             uint32_t flags)
{
    uint32_t cs = MEC_VBATR->CLK32K_SRC;
    enum mec_pll_clk32k_src pll = mec_hal_pll_get_clk32k_source();
    enum mec_periph_clk32k_src periph = mec_hal_vbr_get_periph_clk32_source();
    uint32_t temp = 0;

    if ((pll != pll_src) || (periph != periph_src)) {
        return 0;
    }

    /* is silicon OSC required? */
    if ((pll == MEC_PLL_CLK32K_SRC_SI) || (periph == MEC_PERIPH_CLK32K_SRC_SI_SI)
        || (periph == MEC_PERIPH_CLK32K_SRC_PIN_SI)) {
        /* is Silicon OSC enabled? */
        if (!(cs & MEC_BIT(MEC_VBATR_CLK32K_SRC_SILOSC_Pos))) {
            return 0;
        }
    }

    /* is crystal required? */
    if ((pll_src == MEC_PLL_CLK32K_SRC_XTAL)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_XTAL_XTAL)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_XTAL)) {
        if (flags & MEC_BIT(MEC_CLK32K_FLAG_XTAL_SE_POS)) {
            if (!(cs & MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos))) {
                return 0;
            }
        } else {
            if (cs & MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos)) {
                return 0;
            }
        }
        /* is crystal enabled? */
        if (!(cs & MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_Pos))) {
            return 0;
        }
    }

    /* is PIN_32KHZ_IN required? */
    if ((pll_src == MEC_PLL_CLK32K_SRC_PIN) || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_SI)
        || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_XTAL)) {
        /* is pin configured? GPIO 0165 Func 1 */
        mec_hal_gpio_get_property(MEC_PIN_0165, MEC_GPIO_MUX_PROP_ID, (uint8_t *)&temp);
        if (temp != MEC_GPIO_PROP_MUX_FUNC1) {
            return 0;
        }
    }

    return 1;
}

/* Use PCR CLK32 monitor HW to measure crystal input */

static int check_crystal(struct mec_pcr_clkmon_cfg *cmcfg)
{
    uint32_t temp = 0;
    int ret = 0;

    if (!cmcfg) {
        return MEC_RET_ERR_INVAL;
    }

    /* disable and clear counters */
    MEC_PCR->CTRL32K = MEC_BIT(MEC_PCR_CTRL32K_CLRCNT_Pos);

    /* Min and Max period counts */
    MEC_PCR->PERMINC = cmcfg->period_min;
    MEC_PCR->PERMAXC = cmcfg->period_max;

    /* Duty cycle variation maximum count */
    MEC_PCR->DCVMX = (uint32_t)(cmcfg->duty_var);
    /* Valid minimum count */
    MEC_PCR->VCMIN = (uint32_t)(cmcfg->valid_min);

    /* Start monitor */
    MEC_PCR->SIS32K = 0xffffffffu;
    MEC_PCR->CTRL32K = (MEC_BIT(MEC_PCR_CTRL32K_PERIOD_CNT_Pos)
                        | MEC_BIT(MEC_PCR_CTRL32K_DCNT_EN_Pos)
                        | MEC_BIT(MEC_PCR_CTRL32K_VALCNT_EN_Pos));

    do {
        temp = MEC_PCR->SIS32K;
    } while ((temp & (MEC_BIT(MEC_PCR_SIS32K_PD_FAIL_Pos)
                      | MEC_BIT(MEC_PCR_SIS32K_VALID_Pos))) == 0);

    /* disable and clear counters */
    MEC_PCR->CTRL32K = MEC_BIT(MEC_PCR_CTRL32K_CLRCNT_Pos);
    MEC_PCR->SIS32K = 0xffffffffu;

    if (temp & MEC_BIT(MEC_PCR_SIS32K_PD_FAIL_Pos)) {
        ret = MEC_RET_ERR_HW;
    }

    return ret;
}

static void spin_delay(uint32_t loops)
{
    while (loops--) {
        __NOP();
        __NOP();
        __NOP();
    }
}

static uint32_t pll_clk_src_val(enum mec_pll_clk32k_src pll_src)
{
    uint32_t regval = 0;

    switch (pll_src) {
        case MEC_PLL_CLK32K_SRC_NONE: /* PLL disabled. SoC uses ring oscillator */
            regval = MEC_PCR_SS32K_PLL_REF_SRC_NONE;
            break;
        case MEC_PLL_CLK32K_SRC_SI:
            regval = MEC_PCR_SS32K_PLL_REF_SRC_INTERNAL_OSC;
            break;
        case MEC_PLL_CLK32K_SRC_XTAL:
            regval = MEC_PCR_SS32K_PLL_REF_SRC_CRYSTAL;
            break;
        case MEC_PLL_CLK32K_SRC_PIN:
            regval = MEC_PCR_SS32K_PLL_REF_SRC_PIN_32K_IN;
            break;
        default: /* failsafe bad function argument */
            regval = MEC_PCR_SS32K_PLL_REF_SRC_INTERNAL_OSC;
    }

    return (regval << MEC_PCR_SS32K_PLL_REF_SRC_Pos) & MEC_PCR_SS32K_PLL_REF_SRC_Msk;
}

static uint32_t periph_clk_src_val(enum mec_periph_clk32k_src periph_src)
{
    uint32_t regval = 0;

    switch (periph_src) {
        case MEC_PERIPH_CLK32K_SRC_SI_SI:
            regval = MEC_VBATR_CLK32K_SRC_PSSEL_SILOSC;
            break;
        case MEC_PERIPH_CLK32K_SRC_XTAL_XTAL:
            regval = MEC_VBATR_CLK32K_SRC_PSSEL_XTAL;
            break;
        case MEC_PERIPH_CLK32K_SRC_PIN_SI:
            regval = MEC_VBATR_CLK32K_SRC_PSSEL_PIN_SIL;
            break;
        case MEC_PERIPH_CLK32K_SRC_PIN_XTAL:
            regval = MEC_VBATR_CLK32K_SRC_PSSEL_PIN_XTAL;
            break;
        default: /* failsafe for bad function parameter */
            regval = MEC_VBATR_CLK32K_SRC_PSSEL_SILOSC;
    }

    return (regval << MEC_VBATR_CLK32K_SRC_PSSEL_Pos) & MEC_VBATR_CLK32K_SRC_PSSEL_Msk;
}

int mec_hal_pcr_clk32k_init(enum mec_pll_clk32k_src pll_src,
                            enum mec_periph_clk32k_src periph_src,
                            struct mec_pcr_clkmon_cfg *cfg,
                            uint32_t flags,
                            uint32_t lock_wait)
{
    uint32_t temp = 0;
    int ret = 0;

    if (!cfg) {
        return MEC_RET_ERR_INVAL;
    }

    /* disable and clear counters */
    MEC_PCR->CTRL32K = MEC_BIT(MEC_PCR_CTRL32K_CLRCNT_Pos);

    /* HW config matches requested config? */
    if (mec_hal_pcr_clk32k_is_config(pll_src, periph_src, flags)) {
        return MEC_RET_OK;
    }

    /* enable silicon oscillator */
    MEC_VBATR->CLK32K_SRC |= MEC_BIT(MEC_VBATR_CLK32K_SRC_SILOSC_Pos);
    spin_delay(256u);

    /* configure Peripherals to use silicon oscillator */
    temp = MEC_VBATR->CLK32K_SRC & (uint32_t)~MEC_VBATR_CLK32K_SRC_PSSEL_Msk;
    temp |= (MEC_VBATR_CLK32K_SRC_PSSEL_SILOSC << MEC_VBATR_CLK32K_SRC_PSSEL_Pos);
    MEC_VBATR->CLK32K_SRC = temp;

    /* configure PLL to use silicon oscillator */
    temp = MEC_PCR->SS32K & (uint32_t)~MEC_PCR_SS32K_PLL_REF_SRC_Msk;
    temp |= (MEC_PCR_SS32K_PLL_REF_SRC_INTERNAL_OSC << MEC_PCR_SS32K_PLL_REF_SRC_Pos);
    MEC_PCR->SS32K = temp;
    spin_delay(256u);

    /* If crystal requested configure and enable */
    if ((pll_src == MEC_PLL_CLK32K_SRC_XTAL)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_XTAL_XTAL)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_XTAL)) {

        if (flags & MEC_BIT(MEC_CLK32K_FLAG_XTAL_SE_POS)) {
            MEC_VBATR->CLK32K_SRC |= MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos);
        }

        /* enable crystal high startup current */
        MEC_VBATR->CLK32K_SRC |= MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos);

        /* start crystal */
        MEC_VBATR->CLK32K_SRC |= MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos);
        spin_delay(1000u);

        /* disable crystal high startup current */
        MEC_VBATR->CLK32K_SRC |= ~MEC_BIT(MEC_VBATR_CLK32K_SRC_XTAL_XOSEL_Pos);

        ret = check_crystal(cfg);
        if (ret) {
            return ret;
        }
    }

    /* Using 32KHZ_IN pin? */
    if ((pll_src == MEC_PLL_CLK32K_SRC_PIN)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_SI)
            || (periph_src == MEC_PERIPH_CLK32K_SRC_PIN_XTAL)) {
        /* configure pin */
        mec_hal_gpio_set_property(MEC_PIN_0165, MEC_GPIO_INPAD_DIS_PROP_ID, 0);
        mec_hal_gpio_set_property(MEC_PIN_0165, MEC_GPIO_MUX_PROP_ID,
                                  MEC_GPIO_PROP_MUX_FUNC1);
    }

    /* switch peripherals to new source */
    temp = MEC_VBATR->CLK32K_SRC & (uint32_t)~MEC_VBATR_CLK32K_SRC_PSSEL_Msk;
    temp |= periph_clk_src_val(periph_src);
    MEC_VBATR->CLK32K_SRC = temp;

    /* switch PLL to new source */
    temp = MEC_PCR->SS32K & (uint32_t)~MEC_PCR_SS32K_PLL_REF_SRC_Msk;
    temp |= pll_clk_src_val(pll_src);
    MEC_PCR->SS32K = temp;

    /* spin for PLL lock */
    while (!mec_hal_pcr_is_pll_locked()) {
        if (lock_wait == 0) {
            return MEC_RET_ERR_TIMEOUT;
        }
        lock_wait--;
        __NOP();
        __NOP();
    }

    return MEC_RET_OK;
}

#ifdef MEC5_HAS_PERIPH_PRIVILEGE

uint32_t mec_hal_pcr_blk_privilege_enable(uint8_t pid, uint8_t enable)
{
    uint32_t bpos, idx, temp;

    if (pid >= MEC_PCR_MAX_ID) {
        return 0;
    }

    idx = pid / 32u;
    bpos = pid % 32u;

    MEC_PCR->PP_LOCK = MEC_PCR_PRIV_UNLOCK;
    if (enable) {
        MEC_PCR->EC_PRIV_EN[idx] |= MEC_BIT(bpos);
    } else {
        MEC_PCR->EC_PRIV_EN[idx] &= ~MEC_BIT(bpos);
    }
    temp = MEC_PCR->EC_PRIV_EN[idx];
    MEC_PCR->PP_LOCK = MEC_PCR_PRIV_LOCK;

    return temp;
}

uint32_t mec_hal_pcr_blk_privilege_mask(uint8_t priv_idx, uint32_t en_mask, uint32_t dis_mask)
{
    uint32_t temp;

    if (priv_idx >= PCR_SLP_EN_IDX_MAX) {
        return 0;
    }

    MEC_PCR->PP_LOCK = MEC_PCR_PRIV_UNLOCK;
    MEC_PCR->EC_PRIV_EN[priv_idx] = (MEC_PCR->EC_PRIV_EN[priv_idx] & ~dis_mask) | en_mask;
    temp = MEC_PCR->EC_PRIV_EN[priv_idx];
    MEC_PCR->PP_LOCK = MEC_PCR_PRIV_LOCK;

    return temp;
}

void mec_hal_pcr_save_clk_req_to_vbatm(uint16_t vbatm_byte_ofs)
{
    uint32_t rval;

    for (int i = 0; i < 5; i++) {
        rval = MEC_PCR->CLK_REQ[i];
        mec_hal_bbram_wr32(vbatm_byte_ofs, rval);
        vbatm_byte_ofs += 4u;
    }

    rval = MEC_ECS->SSSMR;
    mec_hal_bbram_wr32(vbatm_byte_ofs, rval);

    vbatm_byte_ofs += 4u;
    rval = CoreDebug->DHCSR;
    mec_hal_bbram_wr32(vbatm_byte_ofs, rval);

    vbatm_byte_ofs += 4u;
    rval = CoreDebug->DEMCR;
    mec_hal_bbram_wr32(vbatm_byte_ofs, rval);
}

#endif /* MEC5_HAS_PERIPH_PRIVILEGE */
/* end mec_pcr.c */
