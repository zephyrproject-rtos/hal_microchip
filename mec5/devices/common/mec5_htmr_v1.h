/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_HTMR_V1_H
#define _MEC5_HTMR_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Hibernation timer on 32KHz clock domain (HTMR)
  */

typedef struct htmr_regs {                      /*!< (@ 0x40009800) HTMR Structure                                            */
  __IOM uint32_t  PRELOAD;                      /*!< (@ 0x00000000) Hibernation timer preload                                  */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000004) Hibernation timer control                                  */
  __IM  uint32_t  COUNT;                        /*!< (@ 0x00000008) Hibernation timer count                                    */
} HTMR_Type;                                    /*!< Size = 12 (0xc)                                                           */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  PRELOAD  ======================================================== */
/* =========================================================  CTRL  ========================================================== */
#define HTMR_CTRL_RES_Pos                 (0UL)                     /*!< RES (Bit 0)                                           */
#define HTMR_CTRL_RES_Msk                 (0x1UL)                   /*!< RES (Bitfield-Mask: 0x01)                             */
/* =========================================================  COUNT  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  PRELOAD  ======================================================== */
/* =========================================================  CTRL  ========================================================== */
/* =================================================  HTMR CTRL RES [0..0]  ================================================= */
typedef enum {                                 /*!< HTMR_CTRL_RES                                                            */
  HTMR_CTRL_RES_32KHZ                 = 0,     /*!< 32KHZ : Count at 32KHz rate (30.5 us per tick)                            */
  HTMR_CTRL_RES_8HZ                   = 1,     /*!< 8HZ : Count at 1/8 second (0.125 seconds per tick)                        */
} HTMR_CTRL_RES_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_HTMR_V1_H */
