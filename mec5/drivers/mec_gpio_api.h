/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_GPIO_API_H
#define _MEC_GPIO_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_GPIO_PORT_0   0
#define MEC_GPIO_PORT_1   1
#define MEC_GPIO_PORT_2   2
#define MEC_GPIO_PORT_3   3
#define MEC_GPIO_PORT_4   4
#define MEC_GPIO_PORT_5   5
#define MEC_GPIO_PORT_MAX 6

/* GPIO Pin ID enum (octal nomenclature matching spec.) */
enum mec_pin_id {
    /* Port 0(A) */
    MEC_PIN_0000 = 0,
    MEC_PIN_0001, MEC_PIN_0002, MEC_PIN_0003, MEC_PIN_0004, MEC_PIN_0005,
    MEC_PIN_0006, MEC_PIN_0007,
    MEC_PIN_0010, MEC_PIN_0011, MEC_PIN_0012, MEC_PIN_0013, MEC_PIN_0014,
    MEC_PIN_0015, MEC_PIN_0016, MEC_PIN_0017,
    MEC_PIN_0020, MEC_PIN_0021, MEC_PIN_0022, MEC_PIN_0023, MEC_PIN_0024,
    MEC_PIN_0025, MEC_PIN_0026, MEC_PIN_0027,
    MEC_PIN_0030, MEC_PIN_0031, MEC_PIN_0032, MEC_PIN_0033, MEC_PIN_0034,
    MEC_PIN_0035, MEC_PIN_0036, MEC_PIN_0037,
    /* Port 1(B) */
    MEC_PIN_0040 = 32U,
    MEC_PIN_0041, MEC_PIN_0042, MEC_PIN_0043, MEC_PIN_0044, MEC_PIN_0045,
    MEC_PIN_0046, MEC_PIN_0047,
    MEC_PIN_0050, MEC_PIN_0051, MEC_PIN_0052, MEC_PIN_0053, MEC_PIN_0054,
    MEC_PIN_0055, MEC_PIN_0056, MEC_PIN_0057,
    MEC_PIN_0060, MEC_PIN_0061, MEC_PIN_0062, MEC_PIN_0063, MEC_PIN_0064,
    MEC_PIN_0065, MEC_PIN_0066, MEC_PIN_0067,
    MEC_PIN_0070, MEC_PIN_0071, MEC_PIN_0072, MEC_PIN_0073, MEC_PIN_0074,
    MEC_PIN_0075, MEC_PIN_0076, MEC_PIN_0077,
    /* Port 2(C) */
    MEC_PIN_0100 = 64U,
    MEC_PIN_0101, MEC_PIN_0102, MEC_PIN_0103, MEC_PIN_0104, MEC_PIN_0105,
    MEC_PIN_0106, MEC_PIN_0107,
    MEC_PIN_0110, MEC_PIN_0111, MEC_PIN_0112, MEC_PIN_0113, MEC_PIN_0114,
    MEC_PIN_0115, MEC_PIN_0116, MEC_PIN_0117,
    MEC_PIN_0120, MEC_PIN_0121, MEC_PIN_0122, MEC_PIN_0123, MEC_PIN_0124,
    MEC_PIN_0125, MEC_PIN_0126, MEC_PIN_0127,
    MEC_PIN_0130, MEC_PIN_0131, MEC_PIN_0132, MEC_PIN_0133, MEC_PIN_0134,
    MEC_PIN_0135, MEC_PIN_0136, MEC_PIN_0137,
    /* Port 3(D) */
    MEC_PIN_0140 = 96U,
    MEC_PIN_0141, MEC_PIN_0142, MEC_PIN_0143, MEC_PIN_0144, MEC_PIN_0145,
    MEC_PIN_0146, MEC_PIN_0147,
    MEC_PIN_0150, MEC_PIN_0151, MEC_PIN_0152, MEC_PIN_0153, MEC_PIN_0154,
    MEC_PIN_0155, MEC_PIN_0156, MEC_PIN_0157,
    MEC_PIN_0160, MEC_PIN_0161, MEC_PIN_0162, MEC_PIN_0163, MEC_PIN_0164,
    MEC_PIN_0165, MEC_PIN_0166, MEC_PIN_0167,
    MEC_PIN_0170, MEC_PIN_0171, MEC_PIN_0172, MEC_PIN_0173, MEC_PIN_0174,
    MEC_PIN_0175, MEC_PIN_0176, MEC_PIN_0177,
    /* Port 4(E) */
    MEC_PIN_0200 = 128U,
    MEC_PIN_0201, MEC_PIN_0202, MEC_PIN_0203, MEC_PIN_0204, MEC_PIN_0205,
    MEC_PIN_0206, MEC_PIN_0207,
    MEC_PIN_0210, MEC_PIN_0211, MEC_PIN_0212, MEC_PIN_0213, MEC_PIN_0214,
    MEC_PIN_0215, MEC_PIN_0216, MEC_PIN_0217,
    MEC_PIN_0220, MEC_PIN_0221, MEC_PIN_0222, MEC_PIN_0223, MEC_PIN_0224,
    MEC_PIN_0225, MEC_PIN_0226, MEC_PIN_0227,
    MEC_PIN_0230, MEC_PIN_0231, MEC_PIN_0232, MEC_PIN_0233, MEC_PIN_0234,
    MEC_PIN_0235, MEC_PIN_0236, MEC_PIN_0237,
    /* Port 5(F) */
    MEC_PIN_0240 = 160U,
    MEC_PIN_0241, MEC_PIN_0242, MEC_PIN_0243, MEC_PIN_0244, MEC_PIN_0245,
    MEC_PIN_0246, MEC_PIN_0247,
    MEC_PIN_0250, MEC_PIN_0251, MEC_PIN_0252, MEC_PIN_0253, MEC_PIN_0254,
    MEC_PIN_0255, MEC_PIN_0256, MEC_PIN_0257,
    MEC_PIN_0260, MEC_PIN_0261, MEC_PIN_0262, MEC_PIN_0263, MEC_PIN_0264,
    MEC_PIN_0265, MEC_PIN_0266, MEC_PIN_0267,
    MEC_PIN_0270, MEC_PIN_0271, MEC_PIN_0272, MEC_PIN_0273, MEC_PIN_0274,
    MEC_PIN_0275, MEC_PIN_0276, MEC_PIN_0277,
    MEC_PIN_MAX
};

typedef enum mec_pin_id MEC_GPIO_PIN;

#define MEC_GPIO_CTRL2_OFS 0x500u
#define MEC_GPIO_PARIN_OFS 0x300u
#define MEC_GPIO_PAROUT_OFS 0x380u
#define MEC_GPIO_LOCK_OFS_HI 0x3fcu

#define MEC_GPIO_CTRL_BASE_ADDR     0x40081000u
#define MEC_GPIO_CTRL2_BASE_ADDR    (MEC_GPIO_CTRL_BASE_ADDR + MEC_GPIO_CTRL2_OFS)
#define MEC_GPIO_PARIN_BASE_ADDR    (MEC_GPIO_CTRL_BASE_ADDR + MEC_GPIO_PARIN_OFS)
#define MEC_GPIO_PAROUT_BASE_ADDR   (MEC_GPIO_CTRL_BASE_ADDR + MEC_GPIO_PAROUT_OFS)
/* NOTE: LOCK0 is at top of range */
#define MEC_GPIO_LOCK_TOP_ADDR      (MEC_GPIO_CTRL_BASE_ADDR + MEC_GPIO_LOCK_OFS_HI)

#define MEC_GPIO_CTRL_REG_ADDR(pin_id) (((uint32_t)(pin_id) * 4u) + (MEC_GPIO_CTRL_BASE_ADDR))
#define MEC_GPIO_CTRL2_REG_ADDR(pin_id) (MEC_GPIO_CTRL_REG_ADDR(pin_id) + (MEC_GPIO_CTRL2_OFS))

/*
 * API
 */

/* Place any C interfaces here */

/* GPIO Pin configuration property ID's and values for use with
 * mec_gpio_get/set_property
 */

#define MEC_GPIO_PUD_PROP_ID        0
#define MEC_GPIO_PWRGT_PROP_ID      1
#define MEC_GPIO_IDET_PROP_ID       2
#define MEC_GPIO_OBUFT_PROP_ID      3
#define MEC_GPIO_DIR_PROP_ID        4
#define MEC_GPIO_OSEL_PROP_ID       5
#define MEC_GPIO_FUNC_POL_PROP_ID   6
#define MEC_GPIO_MUX_PROP_ID        7
#define MEC_GPIO_INPAD_DIS_PROP_ID  8
#define MEC_GPIO_CTRL_OUT_VAL_ID    9
#define MEC_GPIO_SLEW_RATE_ID       10
#define MEC_GPIO_DRV_STR_ID         11
#define MEC_GPIO_MAX_PROP_ID        12

#define MEC_GPIO_PROP_NO_PUD   0u
#define MEC_GPIO_PROP_PULL_UP  0x01u
#define MEC_GPIO_PROP_PULL_DN  0x02u
#define MEC_GPIO_PROP_REPEATER 0x03u

#define MEC_GPIO_PROP_PWRGT_VTR 0u
#define MEC_GPIO_PROP_PWRGT_VCC 0x01u
#define MEC_GPIO_PROP_PWRGT_OFF 0x02u

#define MEC_GPIO_PROP_IDET_LO_LVL    0u
#define MEC_GPIO_PROP_IDET_HI_LVL    0x01u
#define MEC_GPIO_PROP_IDET_DIS       0x04u
#define MEC_GPIO_PROP_IDET_EDGE_UP   0x0Du
#define MEC_GPIO_PROP_IDET_EDGE_DN   0x0Eu
#define MEC_GPIO_PROP_IDET_EDGE_BOTH 0x0Fu

#define MEC_GPIO_PROP_PUSH_PULL  0u
#define MEC_GPIO_PROP_OPEN_DRAIN 1u

#define MEC_GPIO_PROP_DIR_IN  0u
#define MEC_GPIO_PROP_DIR_OUT 1u

#define MEC_GPIO_PROP_OSEL_CTRL   0u
#define MEC_GPIO_PROP_OSEL_PAROUT 1u

#define MEC_GPIO_PROP_FUNC_OUT_NON_INV 0u
#define MEC_GPIO_PROP_FUNC_OUT_INV     1u

#define MEC_GPIO_PROP_MUX_GPIO  0u
#define MEC_GPIO_PROP_MUX_FUNC1 1u
#define MEC_GPIO_PROP_MUX_FUNC2 2u
#define MEC_GPIO_PROP_MUX_FUNC3 3u
#define MEC_GPIO_PROP_MUX_FUNC4 4u
#define MEC_GPIO_PROP_MUX_FUNC5 5u
#define MEC_GPIO_PROP_MUX_FUNC6 6u
#define MEC_GPIO_PROP_MUX_FUNC7 7u

#define MEC_GPIO_PROP_INPAD_EN  0u
#define MEC_GPIO_PROP_INPAD_DIS 1u

enum mec_gpio_drive_str {
    MEC_GPIO_DRIVE_STR_1X = 0,
    MEC_GPIO_DRIVE_STR_2X,
    MEC_GPIO_DRIVE_STR_4X,
    MEC_GPIO_DRIVE_STR_6X,
    MEC_GPIO_DRIVE_STR_NUM_ELEM,
};

enum mec_gpio_slew_rate {
    MEC_GPIO_SLEW_RATE_SLOW = 0,
    MEC_GPIO_SLEW_RATE_FAST,
    MEC_GPIO_SLEW_RATE_NUM_ELEM,
};

struct mec_gpio_props {
    uint8_t prop;
    uint8_t val;
};

/* Pin configuration using a single 32-bit unsigned word */
#define MEC5_GPIO_CFG_PULL_POS 0
#define MEC5_GPIO_CFG_PULL_MSK 0x3u
#define MEC5_GPIO_CFG_PWR_GATE_POS 2
#define MEC5_GPIO_CFG_PWR_GATE_MSK 0xcu
#define MEC5_GPIO_CFG_OUT_OPEN_DRAIN_POS 4
#define MEC5_GPIO_CFG_OUT_OPEN_DRAIN_MSK 0x10
#define MEC5_GPIO_CFG_DIR_OUT_POS 5
#define MEC5_GPIO_CFG_DIR_OUT_MSK 0x20u
#define MEC5_GPIO_CFG_PAR_OUT_EN_POS 6
#define MEC5_GPIO_CFG_PAR_OUT_EN_MSK 0x40
#define MEC5_GPIO_CFG_FUNC_INV_POS 7
#define MEC5_GPIO_CFG_FUNC_INV_MSK 0x80
#define MEC5_GPIO_CFG_FUNC_POS 8
#define MEC5_GPIO_CFG_FUNC_MSK 0x700
#define MEC5_GPIO_CFG_IDET_POS 12
#define MEC5_GPIO_CFG_IDET_MSK 0x7000u
#define MEC5_GPIO_CFG_INPAD_DIS_POS 15
#define MEC5_GPIO_CFG_INPAD_DIS_MSK 0x8000u
#define MEC5_GPIO_CFG_DRV_STR_POS 16
#define MEC5_GPIO_CFG_DRV_STR_MSK 0x30000u
#define MEC5_GPIO_CFG_SLEW_RATE_POS 18
#define MEC5_GPIO_CFG_SLEW_RATE_MSK 0x40000u
#define MEC5_GPIO_CFG_SET_OUT_VAL_POS 20
#define MEC5_GPIO_CFG_SET_OUT_VAL_MSK 0x100000u
#define MEC5_GPIO_CFG_OUT_VAL_POS 21
#define MEC5_GPIO_CFG_OUT_VAL_MSK 0x200000u

/* internal weak pulls */
#define MEC5_GPIO_CFG_PULL_NONE 0
#define MEC5_GPIO_CFG_PULL_UP 0x1u
#define MEC5_GPIO_CFG_PULL_DN 0x2u
#define MEC5_GPIO_CFG_PULL_KEEPER 0x3u

#define MEC5_GPIO_CFG_PWRGT_VTR 0
#define MEC5_GPIO_CFG_PWRGT_VCC (1u << MEC5_GPIO_CFG_PWR_GATE_POS)
/* turn off HW pin pad logic, etc. */
#define MEC5_GPIO_CFG_PWRGT_OFF (2u << MEC5_GPIO_CFG_PWR_GATE_POS)

#define MEC5_GPIO_CFG_OUT_BUF_PUSH_PULL 0
#define MEC5_GPIO_CFG_OUT_BUF_OPEN_DRAIN (1u << MEC5_GPIO_CFG_OUT_OPEN_DRAIN_POS)

#define MEC5_GPIO_CFG_DIR_INPUT 0
#define MEC5_GPIO_CFG_DIR_OUTPUT (1u << MEC5_GPIO_CFG_DIR_OUT_POS)

/* Enable pin output state to be set by the GPIO parallel output register
 * containing this pin.  Otherwise pin output state set in GPIO pin control
 * register.
 */
#define MEC5_GPIO_CFG_PAR_OUT_DIS 0
#define MEC5_GPIO_CFG_PAR_OUT_EN (1u << MEC5_GPIO_CFG_PAR_OUT_EN_POS)

/* GPIO HW can invert the input and output of an alternate function.
 * Does not apply when pin configured as GPIO function.
 */
#define MEC5_GPIO_CFG_FUNC_INV_DIS 0
#define MEC5_GPIO_CFG_FUNC_INV_EN (1u << MEC5_GPIO_CFG_FUNC_INV_POS)

#define MEC5_GPIO_CFG_FUNC_GPIO 0
#define MEC5_GPIO_CFG_FUNC_ALT1 (1u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT2 (2u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT3 (3u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT4 (4u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT5 (5u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT6 (6u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT7 (7u << MEC5_GPIO_CFG_FUNC_POS)
#define MEC5_GPIO_CFG_FUNC_ALT(n) \
        (((uint32_t)(n) & 0x7u) << MEC5_GPIO_CFG_FUNC_POS)

#define MEC5_GPIO_CFG_IDET_DIS 0
#define MEC5_GPIO_CFG_IDET_LVL_LO (1u << MEC5_GPIO_CFG_IDET_POS)
#define MEC5_GPIO_CFG_IDET_LVL_HI (2u << MEC5_GPIO_CFG_IDET_POS)
#define MEC5_GPIO_CFG_IDET_RISING_EDG (3 << MEC5_GPIO_CFG_IDET_POS)
#define MEC5_GPIO_CFG_IDET_FALLING_EDG (4u << MEC5_GPIO_CFG_IDET_POS)
#define MEC5_GPIO_CFG_IDET_BOTH_EDG (5u << MEC5_GPIO_CFG_IDET_POS)

/* Set GPIO pad drive strength as a multiple of the base drive strength based
 * on the pad type.
 * PIO-12 pads base drive strength is 2mA
 * PIO-24 pads base drive strength is 4mA
 */
#define MEC5_GPIO_CFG_DRV_STR_1X 0
#define MEC5_GPIO_CFG_DRV_STR_2X (1u << MEC5_GPIO_CFG_DRV_STR_POS)
#define MEC5_GPIO_CFG_DRV_STR_4X (2u << MEC5_GPIO_CFG_DRV_STR_POS)
#define MEC5_GPIO_CFG_DRV_STR_6X (3u << MEC5_GPIO_CFG_DRV_STR_POS)

/* GPIO pad slew rate. NOTE: eSPI pins do not support slew rate adjustment */
#define MEC5_GPIO_CFG_SLEW_RATE_SLOW 0
#define MEC5_GPIO_CFG_SLEW_RATE_FAST (1u << MEC5_GPIO_CFG_SLEW_RATE_POS)

/* Set pin output value before enabling the pin for output.
 * This property has both an enable flag and output state value.
 */
#define MEC5_GPIO_CFG_SET_OUT_VAL_DIS 0
#define MEC5_GPIO_CFG_SET_OUT_VAL_EN (1u << MEC5_GPIO_CFG_SET_OUT_VAL_POS)

#define MEC5_GPIO_CFG_OUT_VAL_LO 0
#define MEC5_GPIO_CFG_OUT_VAL_HI (1u << MEC5_GPIO_CFG_OUT_VAL_POS)


static inline uint32_t mec_hal_gpio_pin_num_nc(uint8_t port, uint8_t pin_port_pos)
{
    return ((uint32_t)(port & 0x7u) * 32u) + (pin_port_pos & 0x1fu);
}

int mec_hal_gpio_pin_num(uint8_t port, uint8_t pin_port_pos, uint32_t *pin_num);
int mec_hal_gpio_pin_valid(uint32_t pin);
int mec_hal_gpio_port_pin_valid(uint8_t port, uint8_t pin_port_pos);
int mec_hal_gpio_port_valid_mask(uint8_t port, uint32_t *valid_msk);

int mec_hal_gpio_pin_config(uint32_t pin, uint32_t config);

/* Extract property from 32-bit GPIO control value */
int mec_hal_gpio_get_ctrl_property(uint32_t ctrl, uint8_t prop_id, uint8_t *prop);

/* Modify property of 32-bit GPIO control register value passed in ctrl.
 * Returns modified value. Does not touch HW. If property is out of range,
 * return unmodified ctrl.
 */
uint32_t mec_hal_gpio_set_ctrl_property(uint32_t ctrl, uint8_t prop_id, uint8_t val);

/* Get specified property from GPIO Control register */
int mec_hal_gpio_get_property(uint32_t pin, uint8_t prop_id, uint8_t *prop);
/* Modify specified propertie(s) of GPIO Control register */
int mec_hal_gpio_set_property(uint32_t pin, uint8_t prop_id, uint8_t new_val);
int mec_hal_gpio_set_props(uint32_t pin, const struct mec_gpio_props *gprops, size_t nprops);

/* returns 1 if pin direction is configured as output else 0 */
int mec_hal_gpio_is_output(uint32_t pin);

/* disable a pin: turns off input pad */
int mec_hal_gpio_disable_input_pad(uint32_t pin);
/* enable a pin: turns on input pad */
int mec_hal_gpio_enable_input_pad(uint32_t pin);

/* Check if pin control registers are locked */
int mec_hal_gpio_is_locked(uint32_t pin);

/* Get address of GPIO Control and Control2 registers */
uintptr_t mec_hal_gpio_ctrl_addr(uint32_t pin);
uintptr_t mec_hal_gpio_ctrl2_addr(uint32_t pin);

/* Get/Set GPIO Control configuration b[15:0] */
int mec_hal_gpio_get_config(uint32_t pin, uint32_t *config);
int mec_hal_gpio_set_config(uint32_t pin, uint32_t new_cfg);
int mec_hal_gpio_set_config_mask(uint32_t pin, uint32_t new_cfg, uint32_t mask);

/* Get/Set GPIO Control full register */
int mec_hal_gpio_get_ctrl(uint32_t pin, uint32_t *ctrl);
int mec_hal_gpio_set_ctrl(uint32_t pin, uint32_t new_ctrl);
int mec_hal_gpio_set_ctrl_mask(uint32_t pin, uint32_t val, uint32_t mask);

uint32_t mec_hal_gpio_get_ctrl_nc(uint32_t pin);
void mec_hal_gpio_set_ctrl_nc(uint32_t pin, uint32_t ctrl_val);

uint32_t mec_hal_gpio_get_ctrl_nc(uint32_t pin);
void mec_hal_gpio_set_ctrl_nc(uint32_t pin, uint32_t ctrl_val);
uint32_t mec_hal_gpio_port_get_ctrl_nc(uint8_t port, uint8_t port_pin_pos);
void mec_hal_gpio_port_set_ctrl_nc(uint8_t port, uint8_t port_pin_pos, uint32_t ctrl_val);

int mec_hal_gpio_get_ctrl2(uint32_t pin, uint32_t *ctrl2);
int mec_hal_gpio_set_ctrl2(uint32_t pin, uint32_t new_ctrl2);
int mec_hal_gpio_ctrl2_mask(const uint32_t pin, uint32_t val, uint32_t mask);

int mec_hal_gpio_get_slew_rate(uint32_t pin);
int mec_hal_gpio_set_slew_rate(uint32_t pin, enum mec_gpio_slew_rate slew_rate);

int mec_hal_gpio_get_drive_strength(uint32_t pin);
int mec_hal_gpio_set_drive_strength(uint32_t pin, enum mec_gpio_drive_str drive_str);

int mec_hal_gpio_alt_out(const uint32_t pin, uint8_t new_val);
int mec_hal_gpio_alt_out_toggle(const uint32_t pin);

int mec_hal_gpio_pad_in(const uint32_t pin, uint8_t *padin);

int mec_hal_gpio_par_in(const uint32_t pin, uint8_t *pinval);
int mec_hal_gpio_par_out(const uint32_t pin, const uint8_t pin_state);

int mec_hal_gpio_parin_port(const uint8_t port, uint32_t *val);
int mec_hal_gpio_parin_by_pin(uint32_t pin, uint32_t *val);
int mec_hal_gpio_parout_port_get(const uint8_t port, uint32_t *val);
int mec_hal_gpio_parout_port_get_by_pin(uint32_t pin, uint32_t *val);
int mec_hal_gpio_parout_port(const uint8_t port, const uint32_t newval);
int mec_hal_gpio_parout_port_set_bits(const uint8_t port, const uint32_t mask);
int mec_hal_gpio_parout_port_xor(const uint8_t port, const uint32_t xormask);
int mec_hal_gpio_parout_port_mask(const uint8_t port, const uint32_t newval,
                                  const uint32_t mask);

int mec_hal_gpio_port_ia_ctrl(uint8_t port, uint8_t enable);
int mec_hal_gpio_port_pin_ia_enable(uint8_t port, uint8_t port_pin_pos, uint8_t enable);
int mec_hal_gpio_pin_ia_enable(uint8_t pin, uint8_t enable);
int mec_hal_gpio_pin_ia_status_clr(uint8_t pin);
int mec_hal_gpio_port_pin_ia_status_clr(uint8_t port, uint8_t port_pin_pos);
int mec_hal_gpio_port_ia_status(uint8_t port, uint32_t *status);
int mec_hal_gpio_port_ia_status_clr_mask(uint8_t port, uint32_t mask);
int mec_hal_gpio_port_ia_result(uint8_t port, uint32_t *result);

/* VCI capable GPIO pins */
bool mec_hal_gpio_pin_is_vci_capable(uint16_t pin);
int mec_hal_gpio_vci_disable(uint16_t pin);
int mec_hal_gpio_vci_get_func(uint16_t pin, uint8_t *func);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_GPIO_API_H */
