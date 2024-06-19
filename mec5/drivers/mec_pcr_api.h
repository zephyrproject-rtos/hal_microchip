/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_PCR_API_H
#define _MEC_PCR_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include <device_mec5.h>

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define PCR_SLP_EN0_IDX    0u
#define PCR_SLP_EN1_IDX    1u
#define PCR_SLP_EN2_IDX    2u
#define PCR_SLP_EN3_IDX    3u
#define PCR_SLP_EN4_IDX    4u
#define PCR_SLP_EN_IDX_MAX 5u

/* UART2 SLP_EN2 b[28]
 * UART3 SLP_EN2 b[30]
 */
enum mec_pcr_scr_id {
    MEC_PCR_STAP_POS = 0, /* index 0 bit 0 */
    MEC_PCR_OTP_POS,
    MEC_PCR_ISPI_POS,
    MEC_PCR_CHIP_TEST_POS,
    MEC_PCR_ECIA = 32, /* index 1 bit 0  */
    MEC_PCR_PECI,
    MEC_PCR_TACH0,
    MEC_PCR_PWM0 = 36, /* index 1 bit 4 */
    MEC_PCR_PMC,
    MEC_PCR_DMA,
    MEC_PCR_TFDP,
    MEC_PCR_CPU,
    MEC_PCR_WDT0,
    MEC_PCR_I2C_SMB0,
    MEC_PCR_TACH1,
    MEC_PCR_TACH2,
    MEC_PCR_TACH3,
    MEC_PCR_PWM1 = 52, /* index 1 bit 20 */
    MEC_PCR_PWM2,
    MEC_PCR_PWM3,
    MEC_PCR_PWM4,
    MEC_PCR_PWM5,
    MEC_PCR_PWM6,
    MEC_PCR_PWM7,
    MEC_PCR_PWM8, /* index 1 bit 27 */
    MEC_PCR_ECS = 61, /* index 1 bit 29 */
    MEC_PCR_BTMR0,
    MEC_PCR_BTMR1,
    MEC_PCR_EMI0, /* 64: index 2 bit 0 */
    MEC_PCR_UART0,
    MEC_PCR_UART1,
    MEC_PCR_EMI1,
    MEC_PCR_EMI2,
    MEC_PCR_GCFG = 76, /* index 2 bit 12 */
    MEC_PCR_ACPI_EC0,
    MEC_PCR_ACPI_EC1,
    MEC_PCR_ACPI_PM1,
    MEC_PCR_KBC0,
    MEC_PCR_MBOX0,
    MEC_PCR_RTC0,
    MEC_PCR_ESPI,
    MEC_PCR_SCR32,
    MEC_PCR_ACPI_EC2,
    MEC_PCR_ACPI_EC3,
    MEC_PCR_ACPI_EC4,
    MEC_PCR_P80BD0 = 89, /* index 2 bit 25 */
    MEC_PCR_ESPI_TAF = 91, /* index 2 bit 27 */
    MEC_PCR_UART2 = 92, /* index 2 bit 28 */
    MEC_PCR_GLUE = 93, /* index 2 bit 29 */
    MEC_PCR_UART3, /* index 2 bit 30 */
    MEC_PCR_ADC0 = 99, /* index 3 bit 3 */
    MEC_PCR_PS2_0 = 101, /* index 3 bit 5 */
    MEC_PCR_PS2_1,
    MEC_PCR_GSPI0 = 105, /* index 3 bit 9 */
    MEC_PCR_HTMR0,
    MEC_PCR_KSCAN0, /* index 3 bit 11 */
    MEC_PCR_RPMPWM0, /* index 3 bit 12 */
    MEC_PCR_I2C_SMB1,
    MEC_PCR_I2C_SMB2,
    MEC_PCR_I2C_SMB3,
    MEC_PCR_BBLED0,
    MEC_PCR_BBLED1,
    MEC_PCR_BBLED2,
    MEC_PCR_BCL,
    MEC_PCR_I2C_SMB4,
    MEC_PCR_BTMR2,
    MEC_PCR_BTMR3,
    MEC_PCR_BTMR4,
    MEC_PCR_BTMR5,
    MEC_PCR_BBLED3,
    MEC_PCR_CRYPTO_ALL,
    MEC_PCR_HTMR1 = 125, /* index 3 bit 29 */
    MEC_PCR_CCT0,
    MEC_PCR_PWM9, /* index 3 bit 31 */
    MEC_PCR_PWM10 = 128, /* index 4 bit 0 */
    MEC_PCR_PWM11,
    MEC_PCR_CTMR0,
    MEC_PCR_CTMR1,
    MEC_PCR_CTMR2,
    MEC_PCR_CTMR3,
    MEC_PCR_RTMR,
    MEC_PCR_RPMPWM1,
    MEC_PCR_QSPI0,
    MEC_PCR_RCID0 = 138, /* index 4 bit 10 */
    MEC_PCR_RCID1,
    MEC_PCR_RCID2,
    MEC_PCR_PROCHOT,
    MEC_PCR_PSPI,
    MEC_PCR_VBATR = 145, /* index 4 bit 17 */
    MEC_PCR_VBATM,
    MEC_PCR_RTC_WT,
    MEC_PCR_VCI0,
    MEC_PCR_GSPI1 = 150, /* index 4 bit 22 */
    MEC_PCR_I3C_HOST = 153, /* index 4 bit 25 */
    MEC_PCR_I3C_SEC = 154, /* index 4 bit 26 */
    MEC_PCR_USB_OTG0 = 155, /* index 4 bit 27 */
    MEC_PCR_ROM_WDT = 156, /* index 4 bit 28 */
    MEC_PCR_MAX_ID = (PCR_SLP_EN_IDX_MAX * 32),
};

int mec_hal_pcr_is_host_reset(void);
int mec_hal_pcr_is_vcc_pwrgd(void);
int mec_hal_pcr_is_turbo_clock(void);

#define MEC_PCR_VCC_PWRGD_ACTIVE 0x01
#define MEC_PCR_VCC_PWRGD2_ACTIVE 0x02
uint32_t mec_hal_pcr_vcc_power_good_state(void);

uint32_t mec_hal_pcr_cpu_max_freq(void);
uint32_t mec_hal_pcr_cpu_clk_speed(void);
int mec_hal_pcr_cpu_clk_speed_set(uint32_t fhz);
uint32_t mec_hal_pcr_slow_clock_freq_get(void);
void mec_hal_pcr_slow_clock_freq_set(uint32_t freqhz);

/* Get/set PCR CPU clock divider. Caller should know PLL input frequency. */
enum mec_pcr_cpu_clk_div {
    MEC_PCR_CPU_CLK_DIV_1 = 1,
    MEC_PCR_CPU_CLK_DIV_2 = 2,
    MEC_PCR_CPU_CLK_DIV_4 = 4,
    MEC_PCR_CPU_CLK_DIV_16 = 16,
    MEC_PCR_CPU_CLK_DIV_48 = 48,
};

uint32_t mec_hal_pcr_cpu_clock_divider(void);
int mec_hal_pcr_cpu_clock_divider_set(enum mec_pcr_cpu_clk_div clk_div);

bool mec_hal_pcr_is_pll_locked(void);

void mec_hal_pcr_set_blk_slp_en(uint16_t scr);
void mec_hal_pcr_clr_blk_slp_en(uint16_t scr);
void mec_hal_pcr_blk_slp_en(uint16_t src, uint8_t enable);
uint8_t mec_hal_pcr_is_blk_slp_en(uint16_t src);

uint32_t mec_hal_pcr_blk_reset(uint16_t src);
uint32_t mec_hal_pcr_blk_reset_critical(uint16_t src);

int mec_hal_pcr_slp_en_set(uint8_t regid, uint32_t val);
int mec_hal_pcr_slp_en_mask(uint8_t regid, uint32_t val, uint32_t mask);
void mec_hal_pcr_slp_en_set_all(void);
void mec_hal_pcr_slp_en_por(void);

/* Disable sleep */
static inline void mec_hal_pcr_sleep_disable(void)
{
    MEC_PCR->SSC = 0;
    SCB->SCR &= ~MEC_BIT(2);
}

/* Trigger lite or heavy sleep */
static inline void mec_hal_pcr_lite_sleep(void)
{
    SCB->SCR &= ~MEC_BIT(2);
    MEC_PCR->SSC = MEC_BIT(MEC_PCR_SSC_SLPALL_Pos);
}

static inline void mec_hal_pcr_deep_sleep(void)
{
    SCB->SCR |= MEC_BIT(2);
    MEC_PCR->SSC = MEC_BIT(MEC_PCR_SSC_DEEPSLP_Pos) | MEC_BIT(MEC_PCR_SSC_SLPALL_Pos);
}

/* SoC reset */
void mec_hal_pcr_reset_system(void) __attribute__((__noreturn__));

#define MEC_PCR_PLATFORM_RST_IS_ESPI_PLTRST 1
void mec_hal_pcr_host_reset_select(uint8_t use_espi_platform_reset);
void mec_hal_pcr_release_reset_vcc(uint8_t release);

/* or separate sources */
enum mec_pll_clk32k_src {
    MEC_PLL_CLK32K_SRC_NONE = 0,
    MEC_PLL_CLK32K_SRC_SI,
    MEC_PLL_CLK32K_SRC_XTAL,
    MEC_PLL_CLK32K_SRC_PIN,
};

enum mec_periph_clk32k_src {
    MEC_PERIPH_CLK32K_SRC_SI_SI,
    MEC_PERIPH_CLK32K_SRC_XTAL_XTAL,
    MEC_PERIPH_CLK32K_SRC_PIN_SI,
    MEC_PERIPH_CLK32K_SRC_PIN_XTAL,
};

/* Single-endend crystal on XTAL2 pin instead of parallel on XTAL1 and XTAL2 */
#define MEC_CLK32K_FLAG_XTAL_SE_POS 0

#define MEC_CLK32K_PERIOD_MIN 1435u
#define MEC_CLK32K_PERIOD_MAX 1495u
#define MEC_CLK32K_DUTY_VARIATION_MAX 74u
#define MEC_CLK32K_VALID_COUNT_MIN 4u

struct mec_pcr_clkmon_cfg {
    uint16_t period_min;
    uint16_t period_max;
    uint16_t duty_var;
    uint8_t valid_min;
};

int mec_hal_pcr_clk32k_init(enum mec_pll_clk32k_src pll_src,
                            enum mec_periph_clk32k_src periph_src,
                            struct mec_pcr_clkmon_cfg *cfg,
                            uint32_t flags,
                            uint32_t lock_wait);

enum mec_pll_clk32k_src mec_hal_pll_get_clk32k_source(void);
enum mec_periph_clk32k_src mec_hal_vbr_get_periph_clk32_source(void);

#ifdef MEC5_HAS_PERIPH_PRIVILEGE
uint32_t mec_hal_pcr_blk_privilege_enable(uint8_t pid, uint8_t enable);
uint32_t mec_hal_pcr_blk_privilege_mask(uint8_t priv_idx, uint32_t en_mask, uint32_t dis_mask);
#endif

void mec_hal_pcr_save_clk_req_to_vbatm(uint16_t vbatm_byte_ofs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_PCR_API_H */
