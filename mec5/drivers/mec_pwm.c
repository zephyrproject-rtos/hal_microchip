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
#include "mec_pcr_api.h"
#include "mec_pwm_api.h"
#include "mec_retval.h"

/* Two frequency sources: 48MHz and 100KHz(configurable). Need PCR API */

#define MEC5_PWM_INSTANCE_SPACING 0x10u

#define MEC5_PWM_FIN_HIGH 48000000U

// MEC5_PWM_INSTANCES 9 or 12

/* MEC5 PWM
 * PWM Frequency source is either the 48MHz PLL ouput(default) or the PCR
 * slow clock output. PCR slow clock is the 48MHz PLL divided by a 10-bit
 * value in the PCR block. We do not change the slow clock since it is used by
 * other peripherals.
 *
 * PWM Frequency = (1 / prescaler + 1) * Fin / ((Count_on + 1) + (Count_off + 1))
 *
 * Duty cycle = (Count_on + 1) / ((Count_on + 1) + (Count_off + 1))
 *
 * prescaler is a 4-bit field in PWM.Config
 * Count_on and Count_off are 16-bit value.
 */

struct mec5_pwm_info {
    uintptr_t base;
    uint16_t pcr_id;
};

static const struct mec5_pwm_info pwm_instances[] = {
    { MEC_PWM0_BASE, MEC_PCR_PWM0, },
    { MEC_PWM1_BASE, MEC_PCR_PWM1, },
    { MEC_PWM2_BASE, MEC_PCR_PWM2, },
    { MEC_PWM3_BASE, MEC_PCR_PWM3, },
    { MEC_PWM4_BASE, MEC_PCR_PWM4, },
    { MEC_PWM5_BASE, MEC_PCR_PWM5, },
    { MEC_PWM6_BASE, MEC_PCR_PWM6, },
    { MEC_PWM7_BASE, MEC_PCR_PWM7, },
    { MEC_PWM8_BASE, MEC_PCR_PWM8, },
#if MEC5_PWM_INSTANCES == 12
    { MEC_PWM9_BASE, MEC_PCR_PWM9, },
    { MEC_PWM10_BASE, MEC_PCR_PWM10, },
    { MEC_PWM11_BASE, MEC_PCR_PWM11, },
#endif
};

static struct mec5_pwm_info const *get_pwm_info(uintptr_t base)
{
    for (size_t n = 0u; n < MEC5_PWM_INSTANCES; n++) {
        const struct mec5_pwm_info *p = &pwm_instances[n];

        if (p->base == base) {
            return p;
        }
    }

    return NULL;
}

static void pwm_disable(struct mec_pwm_regs *regs)
{
    regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_PWM_CONFIG_ENABLE_Pos);
}

static void pwm_enable(struct mec_pwm_regs *regs)
{
    regs->CONFIG |= MEC_BIT(MEC_PWM_CONFIG_ENABLE_Pos);
}

/* set output to inactive state based upon invert bit */
static void pwm_off(struct mec_pwm_regs *regs)
{
        regs->CNT_ON = 0u;
        regs->CNT_OFF = 1u;
}

/* set output to active state based upon invert bit */
static void pwm_on(struct mec_pwm_regs *regs)
{
        regs->CNT_OFF = 0u;
        regs->CNT_ON = 1u;
}

/* MEC5 PWM output frequency depends upon three parameters:
 * Eq 1. Fpwm = Fin / ((ps+1) * ((cnt_on+1) + (cnt_off+1)))
 * Eq 2. duty cycle = (cnt_on+1) / ((cnt_on+1) + (cnt_off+1))
 * ps = 4-bit prescale value: 0 <= ps <= 15
 * cnt_on and cnt_off are 16-bit register values where the value 0
 * has special meaning:
 * cnt_on != 0 and cnt_off == 0 means set PWM output to active value.
 * cnt_on == 0 and cnt_off != 0 means set PWM output to inactive value.
 * The active value depends upon the invert bit in the configuration register.
 * Config.invert = 0. active value = 1 (high)
 * Config.invert = 1. active value = 0 (low)
 *
 * The denominator of 1 represents the number of Fin cycles in a PWM period.
 * period_cycles = (ps+1) * (cnt_on+1) +  (ps+1) * (cnt_off+1)
 * where pulse_cycles is the number of Fin cycles in the active state and
 * pulse_off_cycles is the number of Fin cycles in the inactive state.
 *
 * pulse_cycles = (ps+1) * (cnt_on+1)
 * pulse_off_cycles = period_cycles - pulse_cycles = (ps+1) * (cnt_off+1)
 *
 * Given period_cycles and pulse_cycles as 32-bit unsigned values and knowing
 * Fin is either 48MHz or the current PCR slow clock value (48MHz / slow_divider)
 * We iterate until 0 <= cnt_on and cnt_off <= 0xffff.
 * If either cnt_on or cnt_off goes to 0 then the HW can't support the request
 * and we return an error.
 *
 * NOTE: HW updates new values written to cnt_on and cnt_off registers are kept
 * in internal holding registers until the internal counter completes the OFF
 * time count. Changes to the prescaler in the Config register will take effect
 * immediately. The prescaler controls the rate of the internal counter.
 *
 * Fin = 48MHz
 * Max Fpwm(ps=0, cnt_on=1, cnt_off=1) = 48e6 / 4 = 12 MHz
 * Min Fpwm(ps=15, cnt_on=65535, cnt_off=65535) = 48e6 / (16 * 131072) = 22.9 Hz
 * Fin = PCR slow clock defaults to 100KHz but could be modified by application.
 * Max Fpwm(ps=0, cnt_on=1, cnt_off=1) = 100e3 / 4 = 25 KHz
 * Min Fpwm(ps=15, cnt_on=65535, cnt_off=65535) = 100e3 / (16 * 131072) = 47.7 mHz (T=20.97 s)
 *
 * Max Freq divider = 4
 * Min Freq divider = 16 * 131072 = 2097152 (0x200000)
 *
 * Example: Fin=48MHz period_cycles = 30,000,000. pulse_cycles = 15,000,000
 *          Fpwm = 48e6 / 30e6 = 1.6 which is less than 4.
 *
 *          Fin=100KHz period_cycles = 30,000,000. pulse_cycles = 15,000,000
 *          Scale period_cycles and pulse_cycles?
 *          period_cycles = (100e3/48e6) * 30,000,000 = 62500 which is < 65536
 *          pulse_cycles = (100e3/48e6) * 15,000,000 = 31250 which is < 65536
 *          pulse_off_cycles = 62500 - 31250 = 31250
 *          Fpwm = 100e3 / (1 * (31250 + 31250)) = 1.6
 *
 */
static int prog_pwm_fd(struct mec_pwm_regs *regs, uint32_t period_cycles, uint32_t pulse_cycles)
{
    uint32_t perc, pulc, ps1, cnt_on, cnt_off, cfg, fin, fpwm, flags;

    flags = 0u;
    fin = MEC5_PWM_FIN_HIGH;
    perc = period_cycles;
    pulc = pulse_cycles;

    fpwm = fin / perc;
    if (fpwm < 4u) {
        fin = mec_hal_pcr_slow_clock_freq_get();
        if (!fin) { /* slow clock turned off! */
            return MEC_RET_ERR;
        }
        /* adjust perc and pulc */
        perc = (uint32_t)(((uint64_t)fin * (uint64_t)period_cycles) / MEC5_PWM_FIN_HIGH);
        pulc = (uint32_t)(((uint64_t)fin * (uint64_t)pulse_cycles) / MEC5_PWM_FIN_HIGH);
        flags |= MEC_BIT(0);
    }

    for (ps1 = 1u; ps1 < 17u; ps1++) {
        cnt_on = pulc / ps1;
        cnt_off = (perc - pulc) / ps1;
        if ((cnt_on < 0x10000u) && (cnt_off < 0x10000u)) {
            break;
        }
    }

    if ((ps1 > 16u) || (cnt_on < 2u) || (cnt_off < 2u)) {
        return MEC_RET_ERR;
    }

    ps1--;
    cnt_on--;
    cnt_off--;
    cfg = regs->CONFIG & (uint32_t)~(MEC_PWM_CONFIG_CLKDIV_Msk | MEC_PWM_CONFIG_CLK_SRC_SLOW_Msk);
    cfg |= ((ps1 << MEC_PWM_CONFIG_CLKDIV_Pos) & MEC_PWM_CONFIG_CLKDIV_Msk);
    if (flags & MEC_BIT(0)) {
        cfg |= MEC_BIT(MEC_PWM_CONFIG_CLK_SRC_SLOW_Pos);
    }
    regs->CNT_ON = cnt_on;
    regs->CNT_OFF = cnt_off;
    regs->CONFIG = cfg;

    return MEC_RET_OK;
}

static int prog_pwm(struct mec_pwm_regs *regs, uint32_t period_cycles, uint32_t pulse_cycles)
{
    if (!period_cycles && !pulse_cycles) { /* both 0 disable PWM */
        pwm_disable(regs);
        return MEC_RET_OK;
    }

    /* period_cycles is non-zero and pulse_cycles is zero set output to inactive(off) state */
    if (!period_cycles || !pulse_cycles) {
        pwm_off(regs);
        return MEC_RET_OK;
    }

    /* period_cycles is non-zero and pulse_cycles is zero set output to active(on) state */
    if (period_cycles == pulse_cycles) {
        pwm_on(regs);
        return MEC_RET_OK;
    }

    return prog_pwm_fd(regs, period_cycles, pulse_cycles);
}

/* ---- Public API ---- */

/* Return the maximum PWM frequency in cycles per second for the high
 * frequency range. PWM Finput = 48MHz PLL output.
 */
uint32_t mec_hal_pwm_hi_freq_input(void)
{
    return (uint32_t)MEC5_PWM_FIN_HIGH;
}

/* Return the maximum PWM frequency in cycles per second for the low
 * frequency range. PWM Finput = PCR slow clock (divided down 48MHz PLL output).
 * NOTE: slow clock defaults to 100KHz and is used by other peripherals. The
 * slow clock divider in the PCR block is programmable.
 */
uint32_t mec_hal_pwm_lo_freq_input(void)
{
    return mec_hal_pcr_slow_clock_freq_get();
}

/* set output to inactive state based upon invert bit */
int mec_hal_pwm_off(struct mec_pwm_regs *regs)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    pwm_off(regs);

    return MEC_RET_OK;
}

/* set output to active state based upon invert bit */
int mec_hal_pwm_on(struct mec_pwm_regs *regs)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    pwm_on(regs);

    return MEC_RET_OK;
}

/* Initialze a PWM instance
 * period_cycles is the number of PWM input frequency cycles in the desired
 * PWM output period.
 * pulse_cycles is the number of PMW input frequency cycles in the desired
 * PWM active pulse width.
 * flags - Enable after configuration, use low frequeny range instead of high
 * range, invert output (active output is low instead of high), or reset the
 * PWM using PCR peripheral reset before configuration.
 *
 * Use pulse_cycles as Count_on
 * Use period_cycles as Fpwm
 *
 * Given: Fpwm, Fin, Count_on
 * Derive: ps and Count_off
 *  Count_off = period_cycles - pulse_cycles
 *
 */
int mec_hal_pwm_init(struct mec_pwm_regs *regs, uint32_t period_cycles,
                 uint32_t pulse_cycles, uint32_t flags)
{
    int ret = 0;
    const struct mec5_pwm_info *info = get_pwm_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    regs->CONFIG = 0;

    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);
    if (flags & MEC5_PWM_CFG_RESET) {
        mec_hal_pcr_blk_reset(info->pcr_id);
    }

    if (flags & MEC5_PWM_CFG_INVERT) {
        regs->CONFIG |= MEC_BIT(MEC_PWM_CONFIG_INVERT_Pos);
    }

    ret = prog_pwm(regs, period_cycles, pulse_cycles);
    if (ret) {
        return ret;
    }

    if (flags & MEC5_PWM_CFG_ENABLE) {
        pwm_enable(regs);
    }

    return MEC_RET_OK;
}

int mec_hal_pwm_reset(struct mec_pwm_regs *regs)
{
    const struct mec5_pwm_info *info = get_pwm_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_blk_reset(info->pcr_id);

    return MEC_RET_OK;
}

int mec_hal_pwm_set_polarity(struct mec_pwm_regs *regs, uint8_t polarity_inverted)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (polarity_inverted) {
        regs->CONFIG |= MEC_BIT(MEC_PWM_CONFIG_INVERT_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_PWM_CONFIG_INVERT_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_pwm_enable(struct mec_pwm_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CONFIG |= MEC_BIT(MEC_PWM_CONFIG_ENABLE_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_PWM_CONFIG_ENABLE_Pos);
    }

    return 0;
}

int mec_hal_pwm_is_enabled(struct mec_pwm_regs *regs)
{
    if (regs->CONFIG & MEC_BIT(MEC_PWM_CONFIG_ENABLE_Pos)) {
        return 1;
    }

    return 0;
}

uint32_t mec_hal_pwm_get_freq_in(struct mec_pwm_regs *regs)
{
    uint32_t fin = MEC5_PWM_FIN_HIGH;

    if (regs->CONFIG & MEC_BIT(MEC_PWM_CONFIG_CLK_SRC_SLOW_Pos)) {
        fin = mec_hal_pcr_slow_clock_freq_get();
    }

    return fin;
}

uint32_t mec_hal_pwm_get_count(struct mec_pwm_regs *regs, uint8_t on_count)
{
    if (on_count) {
        return (uint32_t)regs->CNT_ON;
    } else {
        return (uint32_t)regs->CNT_OFF;
    }
}

uint32_t mec_hal_pwm_get_freq_out(struct mec_pwm_regs *regs)
{
    uint32_t fin = MEC5_PWM_FIN_HIGH;
    uint32_t fpwm = 0, ps = 0, cnt_on = 0, cnt_off = 0;

    if (regs->CONFIG & MEC_BIT(MEC_PWM_CONFIG_CLK_SRC_SLOW_Pos)) {
        fin = mec_hal_pcr_slow_clock_freq_get();
    }

    if (!fin) {
        return 0u;
    }

    ps = ((regs->CONFIG & MEC_PWM_CONFIG_CLKDIV_Msk) >> MEC_PWM_CONFIG_CLKDIV_Pos) + 1u;
    cnt_on = regs->CNT_ON + 1u;
    cnt_off = regs->CNT_OFF + 1u;

    /* ps in [1,16], cnt_on and cnt_off in [1, 0x10000]. No overflow */
    fpwm = fin / (ps * (cnt_on + cnt_off));

    return fpwm;
}

int mec_hal_pwm_set_freq_out(struct mec_pwm_regs *regs, uint32_t period_cycles,
                             uint32_t pulse_cycles)
{
    return prog_pwm(regs, period_cycles, pulse_cycles);
}

/* end mec_pwm.c */
