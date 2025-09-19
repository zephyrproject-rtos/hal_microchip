/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef INCLUDE_DT_BINDINGS_SAM_D5X_E5X_COMMON_MCHP_PINCTRL_PINMUX_SAM_H_
#define INCLUDE_DT_BINDINGS_SAM_D5X_E5X_COMMON_MCHP_PINCTRL_PINMUX_SAM_H_

/**
 * @name Microchip SAM port.
 */

/** PORT */
#define MCHP_PINMUX_PORT_a 0U
#define MCHP_PINMUX_PORT_b 1U
#define MCHP_PINMUX_PORT_c 2U
#define MCHP_PINMUX_PORT_d 3U
#define MCHP_PINMUX_PORT_e 4U
#define MCHP_PINMUX_PORT_f 5U
#define MCHP_PINMUX_PORT_g 6U
#define MCHP_PINMUX_PORT_h 7U
#define MCHP_PINMUX_PORT_i 8U
#define MCHP_PINMUX_PORT_j 9U
#define MCHP_PINMUX_PORT_k 10U
#define MCHP_PINMUX_PORT_l 11U
#define MCHP_PINMUX_PORT_m 12U
#define MCHP_PINMUX_PORT_n 13U
#define MCHP_PINMUX_PORT_o 14U
#define MCHP_PINMUX_PORT_p 15U

/** GPIO */
#define MCHP_PINMUX_PERIPH_gpio 0U
/** Peripherals */
#define MCHP_PINMUX_PERIPH_a 0U
#define MCHP_PINMUX_PERIPH_b 1U
#define MCHP_PINMUX_PERIPH_c 2U
#define MCHP_PINMUX_PERIPH_d 3U
#define MCHP_PINMUX_PERIPH_e 4U
#define MCHP_PINMUX_PERIPH_f 5U
#define MCHP_PINMUX_PERIPH_g 6U
#define MCHP_PINMUX_PERIPH_h 7U
#define MCHP_PINMUX_PERIPH_i 8U
#define MCHP_PINMUX_PERIPH_j 9U
#define MCHP_PINMUX_PERIPH_k 10U
#define MCHP_PINMUX_PERIPH_l 11U
#define MCHP_PINMUX_PERIPH_m 12U
#define MCHP_PINMUX_PERIPH_n 13U
/** Extra */
#define MCHP_PINMUX_PERIPH_x 0U
/** System */
#define MCHP_PINMUX_PERIPH_s 0U
/** LPM */
#define MCHP_PINMUX_PERIPH_lpm 0U
/** Wake-up pin sources */
#define MCHP_PINMUX_PERIPH_wkup0 0U
#define MCHP_PINMUX_PERIPH_wkup1 1U
#define MCHP_PINMUX_PERIPH_wkup2 2U
#define MCHP_PINMUX_PERIPH_wkup3 3U
#define MCHP_PINMUX_PERIPH_wkup4 4U
#define MCHP_PINMUX_PERIPH_wkup5 5U
#define MCHP_PINMUX_PERIPH_wkup6 6U
#define MCHP_PINMUX_PERIPH_wkup7 7U
#define MCHP_PINMUX_PERIPH_wkup8 8U
#define MCHP_PINMUX_PERIPH_wkup9 9U
#define MCHP_PINMUX_PERIPH_wkup10 10U
#define MCHP_PINMUX_PERIPH_wkup11 11U
#define MCHP_PINMUX_PERIPH_wkup12 12U
#define MCHP_PINMUX_PERIPH_wkup13 13U
#define MCHP_PINMUX_PERIPH_wkup14 14U
#define MCHP_PINMUX_PERIPH_wkup15 15U

/** Selects pin to be used as GPIO */
#define MCHP_PINMUX_FUNC_gpio 0U
/** Selects pin to be used as by some peripheral */
#define MCHP_PINMUX_FUNC_periph 1U
/** Selects pin to be used as extra function */
#define MCHP_PINMUX_FUNC_extra 2U
/** Selects pin to be used as system function */
#define MCHP_PINMUX_FUNC_system 3U
/** Selects and configure pin to be used in Low Power Mode */
#define MCHP_PINMUX_FUNC_lpm 4U
/** Selects and configure wake-up pin sources Low Power Mode */
#define MCHP_PINMUX_FUNC_wakeup 5U

/** Pinmux bit field position. */
#define MCHP_PINCTRL_PINMUX_POS (16U)
/** Pinmux bit field mask. */
#define MCHP_PINCTRL_PINMUX_MASK (0xFFFF)

/** Port field mask. */
#define MCHP_PINMUX_PORT_MSK (0xFU)
/** Port field position. */
#define MCHP_PINMUX_PORT_POS (0U)
/** Pin field mask. */
#define MCHP_PINMUX_PIN_MSK (0x1FU)
/** Pin field position. */
#define MCHP_PINMUX_PIN_POS (MCHP_PINMUX_PORT_POS + 4U)
/** Function field mask. */
#define MCHP_PINMUX_FUNC_MSK (0x7U)
/** Function field position. */
#define MCHP_PINMUX_FUNC_POS (MCHP_PINMUX_PIN_POS + 5U)
/** Peripheral field mask. */
#define MCHP_PINMUX_PERIPH_MSK (0xFU)
/** Peripheral field position. */
#define MCHP_PINMUX_PERIPH_POS (MCHP_PINMUX_FUNC_POS + 3U)

/*
 * MCHP pinmux bit field.
 *
 * Fields:
 *
 * -   0..3: port
 * -   4..8: pin_num
 * -  9..11: func
 * - 12..15: pin_mux
 *
 * port    Port ('A'..'P')
 * pin     Pin  (0..31)
 * func    Function (GPIO, Peripheral, System, Extra, LPM - 0..4)
 * pin_mux Peripheral based on the Function selected (0..15)
 */
#define MCHP_PINMUX(port, pin_num, pin_mux, func)                              \
  ((((MCHP_PINMUX_PORT_##port) & MCHP_PINMUX_PORT_MSK)                         \
    << MCHP_PINMUX_PORT_POS) |                                                 \
   (((pin_num) & MCHP_PINMUX_PIN_MSK) << MCHP_PINMUX_PIN_POS) |                \
   (((MCHP_PINMUX_FUNC_##func) & MCHP_PINMUX_FUNC_MSK)                         \
    << MCHP_PINMUX_FUNC_POS) |                                                 \
   (((MCHP_PINMUX_PERIPH_##pin_mux) & MCHP_PINMUX_PERIPH_MSK)                  \
    << MCHP_PINMUX_PERIPH_POS))

/*
 * Obtain Pinmux value from pinctrl_soc_pin_t configuration.
 *
 * pincfg pinctrl_soc_pin_t bit field value.
 */
#define MCHP_PINMUX_PIN_GET(pincfg)                                            \
  ((pincfg >> MCHP_PINMUX_PIN_POS) & MCHP_PINMUX_PIN_MSK)
#define MCHP_PINMUX_PORT_GET(pincfg)                                           \
  ((pincfg >> MCHP_PINMUX_PORT_POS) & MCHP_PINMUX_PORT_MSK)
#define MCHP_PINMUX_FUNC_GET(pincfg)                                           \
  ((pincfg >> MCHP_PINMUX_FUNC_POS) & MCHP_PINMUX_FUNC_MSK)
#define MCHP_PINMUX_PERIPH_GET(pincfg)                                         \
  ((pincfg >> MCHP_PINMUX_PERIPH_POS) & MCHP_PINMUX_PERIPH_MSK)

#endif /* INCLUDE_DT_BINDINGS_SAM_D5X_E5X_COMMON_MCHP_PINCTRL_PINMUX_SAM_H_ */
