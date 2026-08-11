/*
 * Microchip PIC32CM5164LS00048 (48-Pin Package)
 * Peripheral I/O (PIO) & GPIO Register Header for Zephyr RTOS
 *
 * Copyright (c) Microchip Technology Inc. and its subsidiaries.
 */

#ifndef _PIC32CM5164LS00048_GPIO_H_
#define _PIC32CM5164LS00048_GPIO_H_

#include <stdint.h>

/* Compiler compatibility macro for uint32_t constants */
#ifndef _UINT32_
#define _UINT32_(x) ((uint32_t)(x))
#endif

/* ========================================================================== */
/* ========== 1. Physical GPIO Pin Numbers (34 Implemented Pins) ============ */
/* ========================================================================== */
#define PIN_PA00                    (    0)  /**< Pin Number for PA00 */
#define PIN_PA01                    (    1)  /**< Pin Number for PA01 */
#define PIN_PA02                    (    2)  /**< Pin Number for PA02 */
#define PIN_PA03                    (    3)  /**< Pin Number for PA03 */
#define PIN_PA04                    (    4)  /**< Pin Number for PA04 */
#define PIN_PA05                    (    5)  /**< Pin Number for PA05 */
#define PIN_PA06                    (    6)  /**< Pin Number for PA06 */
#define PIN_PA07                    (    7)  /**< Pin Number for PA07 */
#define PIN_PA08                    (    8)  /**< Pin Number for PA08 */
#define PIN_PA09                    (    9)  /**< Pin Number for PA09 */
#define PIN_PA10                    (   10)  /**< Pin Number for PA10 */
#define PIN_PA11                    (   11)  /**< Pin Number for PA11 */
#define PIN_PA12                    (   12)  /**< Pin Number for PA12 */
#define PIN_PA13                    (   13)  /**< Pin Number for PA13 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA16                    (   16)  /**< Pin Number for PA16 */
#define PIN_PA17                    (   17)  /**< Pin Number for PA17 */
#define PIN_PA18                    (   18)  /**< Pin Number for PA18 */
#define PIN_PA19                    (   19)  /**< Pin Number for PA19 */
#define PIN_PA20                    (   20)  /**< Pin Number for PA20 */
#define PIN_PA21                    (   21)  /**< Pin Number for PA21 */
#define PIN_PA22                    (   22)  /**< Pin Number for PA22 */
#define PIN_PA23                    (   23)  /**< Pin Number for PA23 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */
#define PIN_PB02                    (   34)  /**< Pin Number for PB02 (LED0) */
#define PIN_PB03                    (   35)  /**< Pin Number for PB03 (SW0) */
#define PIN_PB08                    (   40)  /**< Pin Number for PB08 */
#define PIN_PB09                    (   41)  /**< Pin Number for PB09 */
#define PIN_PB22                    (   54)  /**< Pin Number for PB22 */
#define PIN_PB23                    (   55)  /**< Pin Number for PB23 */

/* ========================================================================== */
/* ========== 2. PORT GPIO Bitmasks (34 Implemented Pins) =================== */
/* ========================================================================== */
#define PORT_PA00                   (_UINT32_(1) << 0)
#define PORT_PA01                   (_UINT32_(1) << 1)
#define PORT_PA02                   (_UINT32_(1) << 2)
#define PORT_PA03                   (_UINT32_(1) << 3)
#define PORT_PA04                   (_UINT32_(1) << 4)
#define PORT_PA05                   (_UINT32_(1) << 5)
#define PORT_PA06                   (_UINT32_(1) << 6)
#define PORT_PA07                   (_UINT32_(1) << 7)
#define PORT_PA08                   (_UINT32_(1) << 8)
#define PORT_PA09                   (_UINT32_(1) << 9)
#define PORT_PA10                   (_UINT32_(1) << 10)
#define PORT_PA11                   (_UINT32_(1) << 11)
#define PORT_PA12                   (_UINT32_(1) << 12)
#define PORT_PA13                   (_UINT32_(1) << 13)
#define PORT_PA14                   (_UINT32_(1) << 14)
#define PORT_PA15                   (_UINT32_(1) << 15)
#define PORT_PA16                   (_UINT32_(1) << 16)
#define PORT_PA17                   (_UINT32_(1) << 17)
#define PORT_PA18                   (_UINT32_(1) << 18)
#define PORT_PA19                   (_UINT32_(1) << 19)
#define PORT_PA20                   (_UINT32_(1) << 20)
#define PORT_PA21                   (_UINT32_(1) << 21)
#define PORT_PA22                   (_UINT32_(1) << 22)
#define PORT_PA23                   (_UINT32_(1) << 23)
#define PORT_PA24                   (_UINT32_(1) << 24)
#define PORT_PA25                   (_UINT32_(1) << 25)
#define PORT_PA30                   (_UINT32_(1) << 30)
#define PORT_PA31                   (_UINT32_(1) << 31)

#define PORT_PB02                   (_UINT32_(1) << 2)  /**< PB02 User LED */
#define PORT_PB03                   (_UINT32_(1) << 3)  /**< PB03 User SW  */
#define PORT_PB08                   (_UINT32_(1) << 8)
#define PORT_PB09                   (_UINT32_(1) << 9)
#define PORT_PB22                   (_UINT32_(1) << 22)
#define PORT_PB23                   (_UINT32_(1) << 23)

/* ========================================================================== */
/* ========== 3. Essential Peripheral PINMUX Definitions ==================== */
/* ========================================================================== */

/* SERCOM0 UART / SPI Pinmux */
#define PIN_PA04D_SERCOM0_PAD0                     _UINT32_(4) 
#define MUX_PA04D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PA04D_SERCOM0_PAD0                  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)

#define PIN_PA05D_SERCOM0_PAD1                     _UINT32_(5) 
#define MUX_PA05D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PA05D_SERCOM0_PAD1                  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)

#define PIN_PA08D_SERCOM0_PAD0                     _UINT32_(8) 
#define MUX_PA08D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PA08D_SERCOM0_PAD0                  ((PIN_PA08D_SERCOM0_PAD0 << 16) | MUX_PA08D_SERCOM0_PAD0)

#define PIN_PA09D_SERCOM0_PAD1                     _UINT32_(9) 
#define MUX_PA09D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PA09D_SERCOM0_PAD1                  ((PIN_PA09D_SERCOM0_PAD1 << 16) | MUX_PA09D_SERCOM0_PAD1)

/* SERCOM1 Console UART Pinmux */
#define PIN_PA16C_SERCOM1_PAD0                     _UINT32_(16)
#define MUX_PA16C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA16C_SERCOM1_PAD0                  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)

#define PIN_PA17C_SERCOM1_PAD1                     _UINT32_(17)
#define MUX_PA17C_SERCOM1_PAD1                     _UINT32_(2) 
#define PINMUX_PA17C_SERCOM1_PAD1                  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)

/* TC0 Timer Output Pinmux */
#define PIN_PA04E_TC0_WO0                          _UINT32_(4) 
#define MUX_PA04E_TC0_WO0                          _UINT32_(4) 
#define PINMUX_PA04E_TC0_WO0                       ((PIN_PA04E_TC0_WO0 << 16) | MUX_PA04E_TC0_WO0)

/* EIC External Interrupts for PB03 Switch */
#define PIN_PB03A_EIC_EXTINT3                      _UINT32_(35)
#define MUX_PB03A_EIC_EXTINT3                      _UINT32_(0)
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)

#endif /* _PIC32CM5164LS00048_GPIO_H_ */