/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef INCLUDE_DT_BINDINGS_MCHP_PINCTRL_PINMUX_PIC32CXBZ_H_
#define INCLUDE_DT_BINDINGS_MCHP_PINCTRL_PINMUX_PIC32CXBZ_H_

/**
 * @name Microchip PIC32CXBZ port.
 */

/** Port Values */
#define MCHP_PINMUX_PORT_a      0U
#define MCHP_PINMUX_PORT_b      1U
#define MCHP_PINMUX_PORT_c      2U
#define MCHP_PINMUX_PORT_d      3U
#define MCHP_PINMUX_PORT_e      4U
#define MCHP_PINMUX_PORT_direct 7U

/** Selects pin to be used as GPIO */
#define MCHP_PINMUX_FUNC_gpio       0U
/** Selects pin to be used as by some peripheral */
#define MCHP_PINMUX_FUNC_periph     1U
/** Direct mode functionality enable */
#define MCHP_PINMUX_FUNC_directmode 7U

/** Not applicable field */
#define NA 0

/** Port field mask. */
#define MCHP_PINMUX_PORT_MSK      (0x7U)
/** Port field position. */
#define MCHP_PINMUX_PORT_POS      (0U)
/** Pin field mask. */
#define MCHP_PINMUX_PIN_MSK       (0x1FU)
/** Pin field position. */
#define MCHP_PINMUX_PIN_POS       (MCHP_PINMUX_PORT_POS + 3U)
/** Function field mask. */
#define MCHP_PINMUX_FUNC_MSK      (0x7U)
/** Function field position. */
#define MCHP_PINMUX_FUNC_POS      (MCHP_PINMUX_PIN_POS + 5U)
/** Peripheral field mask. */
#define MCHP_PINMUX_REGVAL_MSK    (0x3FU)
/** Peripheral field position. */
#define MCHP_PINMUX_REGVAL_POS    (MCHP_PINMUX_FUNC_POS + 3U)
/** Peripheral field mask. */
#define MCHP_PINMUX_PINOFFSET_MSK (0x7FFU)
/** Peripheral field position. */
#define MCHP_PINMUX_PINOFFSET_POS (MCHP_PINMUX_REGVAL_POS + 6U)
/**
 * @brief Utility macro to build Microchip PIC32CXBZ psels property entry.
 *
 * @param fun Pin function configuration.
 * @param port Port.
 * @param pin Pin.
 */

/*
 * MCHP pinmux bit field.
 *
 * Fields:
 *
 * -   0..2: port
 * -   3..7: pin_num
 * -   8..10: func
 * -   11..16: reg_value
 * -   17..27: pin_offset
 *
 * port    Port ('A','B','C','D''E')
 * pin     Pin  (0..15)
 * func    Function (GPIO, Peripheral)
 * reg_value Register value to be set
 * pin_offset Offset address of register
 */
#define MCHP_PINMUX(port, pin_num, pin_offset, reg_value, func)                                    \
	((((MCHP_PINMUX_PORT_##port) & MCHP_PINMUX_PORT_MSK) << MCHP_PINMUX_PORT_POS) |            \
	 (((pin_num) & MCHP_PINMUX_PIN_MSK) << MCHP_PINMUX_PIN_POS) |                              \
	 (((MCHP_PINMUX_FUNC_##func) & MCHP_PINMUX_FUNC_MSK) << MCHP_PINMUX_FUNC_POS) |            \
	 (((reg_value) & MCHP_PINMUX_REGVAL_MSK) << MCHP_PINMUX_REGVAL_POS) |                      \
	 (((pin_offset) & MCHP_PINMUX_PINOFFSET_MSK) << MCHP_PINMUX_PINOFFSET_POS))

/*
 * Obtain Pinmux value from pinctrl_soc_pin_t configuration.
 *
 * pincfg pinctrl_soc_pin_t bit field value.
 */
#define MCHP_PINMUX_PIN_GET(pincfg) ((pincfg >> MCHP_PINMUX_PIN_POS) & MCHP_PINMUX_PIN_MSK)

#define MCHP_PINMUX_PORT_GET(pincfg) ((pincfg >> MCHP_PINMUX_PORT_POS) & MCHP_PINMUX_PORT_MSK)

#define MCHP_PINMUX_FUNC_GET(pincfg) (((pincfg) >> MCHP_PINMUX_FUNC_POS) & MCHP_PINMUX_FUNC_MSK)

#define MCHP_PINMUX_REGVAL_GET(pincfg)                                                             \
	(((pincfg) >> MCHP_PINMUX_REGVAL_POS) & MCHP_PINMUX_REGVAL_MSK)

#define MCHP_PINMUX_PINOFFSET_GET(pincfg)                                                          \
	(((pincfg) >> MCHP_PINMUX_PINOFFSET_POS) & MCHP_PINMUX_PINOFFSET_MSK)

#endif /* INCLUDE_DT_BINDINGS_MCHP_PINCTRL_PINMUX_PIC32CXBZ_H_ */
