/*
 * Copyright (c) 2024 Microchip
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DT_BINDINGS_PINCTRL_MCHP_PIC32CXSG_PINCTRL_H_
#define DT_BINDINGS_PINCTRL_MCHP_PIC32CXSG_PINCTRL_H_

/*
 * @name Atmel PIC32 gpio port list.
 * @{
 */

#define PIC32CXSG_PINMUX_PORT_a		0U
#define PIC32CXSG_PINMUX_PORT_b		1U
#define PIC32CXSG_PINMUX_PORT_c		2U
#define PIC32CXSG_PINMUX_PORT_d		3U
#define PIC32CXSG_PINMUX_PORT_e		4U
#define PIC32CXSG_PINMUX_PORT_f		5U
#define PIC32CXSG_PINMUX_PORT_g		6U
#define PIC32CXSG_PINMUX_PORT_h		7U
#define PIC32CXSG_PINMUX_PORT_i		8U
#define PIC32CXSG_PINMUX_PORT_j		9U
#define PIC32CXSG_PINMUX_PORT_k		10U
#define PIC32CXSG_PINMUX_PORT_l		11U
#define PIC32CXSG_PINMUX_PORT_m		12U
#define PIC32CXSG_PINMUX_PORT_n		13U
#define PIC32CXSG_PINMUX_PORT_o		14U
#define PIC32CXSG_PINMUX_PORT_p		15U

/** @} */

/**
 * @name Atmel PIC32 peripheral list.
 * @{
 */

/** GPIO */
#define PIC32CXSG_PINMUX_PERIPH_gpio		0U
/** Peripherals */
#define PIC32CXSG_PINMUX_PERIPH_a		0U
#define PIC32CXSG_PINMUX_PERIPH_b		1U
#define PIC32CXSG_PINMUX_PERIPH_c		2U
#define PIC32CXSG_PINMUX_PERIPH_d		3U
#define PIC32CXSG_PINMUX_PERIPH_e		4U
#define PIC32CXSG_PINMUX_PERIPH_f		5U
#define PIC32CXSG_PINMUX_PERIPH_g		6U
#define PIC32CXSG_PINMUX_PERIPH_h		7U
#define PIC32CXSG_PINMUX_PERIPH_i		8U
#define PIC32CXSG_PINMUX_PERIPH_j		9U
#define PIC32CXSG_PINMUX_PERIPH_k		10U
#define PIC32CXSG_PINMUX_PERIPH_l		11U
#define PIC32CXSG_PINMUX_PERIPH_m		12U
#define PIC32CXSG_PINMUX_PERIPH_n		13U
/** Extra */
#define PIC32CXSG_PINMUX_PERIPH_x		0U
/** System */
#define PIC32CXSG_PINMUX_PERIPH_s		0U
/** LPM */
#define PIC32CXSG_PINMUX_PERIPH_lpm		0U
/** Wake-up pin sources */
#define PIC32CXSG_PINMUX_PERIPH_wkup0		0U
#define PIC32CXSG_PINMUX_PERIPH_wkup1		1U
#define PIC32CXSG_PINMUX_PERIPH_wkup2		2U
#define PIC32CXSG_PINMUX_PERIPH_wkup3		3U
#define PIC32CXSG_PINMUX_PERIPH_wkup4		4U
#define PIC32CXSG_PINMUX_PERIPH_wkup5		5U
#define PIC32CXSG_PINMUX_PERIPH_wkup6		6U
#define PIC32CXSG_PINMUX_PERIPH_wkup7		7U
#define PIC32CXSG_PINMUX_PERIPH_wkup8		8U
#define PIC32CXSG_PINMUX_PERIPH_wkup9		9U
#define PIC32CXSG_PINMUX_PERIPH_wkup10	10U
#define PIC32CXSG_PINMUX_PERIPH_wkup11	11U
#define PIC32CXSG_PINMUX_PERIPH_wkup12	12U
#define PIC32CXSG_PINMUX_PERIPH_wkup13	13U
#define PIC32CXSG_PINMUX_PERIPH_wkup14	14U
#define PIC32CXSG_PINMUX_PERIPH_wkup15	15U
/** @} */

/**
 * @name Atmel PIC32 pin function list.
 * @{
 */

/** Selects pin to be used as GPIO */
#define PIC32CXSG_PINMUX_FUNC_gpio		0U
/** Selects pin to be used as by some peripheral */
#define PIC32CXSG_PINMUX_FUNC_periph		1U
/** Selects pin to be used as extra function */
#define PIC32CXSG_PINMUX_FUNC_extra		2U
/** Selects pin to be used as system function */
#define PIC32CXSG_PINMUX_FUNC_system		3U
/** Selects and configure pin to be used in Low Power Mode */
#define PIC32CXSG_PINMUX_FUNC_lpm		4U
/** Selects and configure wake-up pin sources Low Power Mode */
#define PIC32CXSG_PINMUX_FUNC_wakeup		5U

/** @} */

/**
 * @name Atmel PIC32 pinmux bit field mask and positions.
 * @{
 */

/** Pinmux bit field position. */
#define PIC32_PINCTRL_PINMUX_POS  	(16U)
/** Pinmux bit field mask. */
#define PIC32_PINCTRL_PINMUX_MASK 	(0xFFFF)

/** Port field mask. */
#define PIC32CXSG_PINMUX_PORT_MSK		(0xFU)
/** Port field position. */
#define PIC32CXSG_PINMUX_PORT_POS		(0U)
/** Pin field mask. */
#define PIC32CXSG_PINMUX_PIN_MSK		(0x1FU)
/** Pin field position. */
#define PIC32CXSG_PINMUX_PIN_POS		(PIC32CXSG_PINMUX_PORT_POS + 4U)
/** Function field mask. */
#define PIC32CXSG_PINMUX_FUNC_MSK		(0x7U)
/** Function field position. */
#define PIC32CXSG_PINMUX_FUNC_POS		(PIC32CXSG_PINMUX_PIN_POS + 5U)
/** Peripheral field mask. */
#define PIC32CXSG_PINMUX_PERIPH_MSK		(0xFU)
/** Peripheral field position. */
#define PIC32CXSG_PINMUX_PERIPH_POS		(PIC32CXSG_PINMUX_FUNC_POS + 3U)

/** @} */

/**
 * @brief Microchip PIC32CXSG pinmux bit field.
 * @anchor PIC32CXSG_PINMUX
 *
 * Fields:
 *
 * -   0..3: port
 * -   4..8: pin_num
 * -  9..11: func
 * - 12..15: pin_mux
 *
 * @param port    Port ('A'..'P')
 * @param pin     Pin  (0..31)
 * @param func    Function (GPIO, Peripheral, System, Extra, LPM - 0..4)
 * @param pin_mux Peripheral based on the Function selected (0..15)
 */
#define PIC32CXSG_PINMUX(port, pin_num, pin_mux, func)			  \
	((((PIC32CXSG_PINMUX_PORT_##port) & PIC32CXSG_PINMUX_PORT_MSK)		  \
	 << PIC32CXSG_PINMUX_PORT_POS)					| \
	 (((pin_num) & PIC32CXSG_PINMUX_PIN_MSK)				  \
	 << PIC32CXSG_PINMUX_PIN_POS)						| \
	 (((PIC32CXSG_PINMUX_FUNC_##func) & PIC32CXSG_PINMUX_FUNC_MSK)		  \
	 << PIC32CXSG_PINMUX_FUNC_POS)					| \
	 (((PIC32CXSG_PINMUX_PERIPH_##pin_mux) & PIC32CXSG_PINMUX_PERIPH_MSK)	  \
	 << PIC32CXSG_PINMUX_PERIPH_POS))

/**
 * Obtain Pinmux value from pinctrl_soc_pin_t configuration.
 *
 * @param pincfg pinctrl_soc_pin_t bit field value.
 */
#define PIC32CXSG_PINMUX_GET(pincfg) \
	(((pincfg) >> PIC32CXSG_PINCTRL_PINMUX_POS) & PIC32CXSG_PINCTRL_PINMUX_MASK)

#define PIC32CXSG_PINMUX_PORT_GET(pincfg) \
	((PIC32CXSG_PINMUX_GET(pincfg) >> PIC32CXSG_PINMUX_PORT_POS) \
	 & PIC32CXSG_PINMUX_PORT_MSK)

#define PIC32CXSG_PINMUX_PIN_GET(pincfg) \
	((PIC32CXSG_PINMUX_GET(pincfg) >> PIC32CXSG_PINMUX_PIN_POS) \
	 & PIC32CXSG_PINMUX_PIN_MSK)

#define PIC32CXSG_PINMUX_FUNC_GET(pincfg) \
	((PIC32CXSG_PINMUX_GET(pincfg) >> PIC32CXSG_PINMUX_FUNC_POS) \
	 & PIC32CXSG_PINMUX_FUNC_MSK)

#define PIC32CXSG_PINMUX_PERIPH_GET(pincfg) \
	((PIC32CXSG_PINMUX_GET(pincfg) >> PIC32CXSG_PINMUX_PERIPH_POS) \
	 & PIC32CXSG_PINMUX_PERIPH_MSK)

#endif  /* DT_BINDINGS_PINCTRL_MCHP_PIC32CXSG_PINCTRL_H_ */
