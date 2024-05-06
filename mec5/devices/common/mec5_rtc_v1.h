/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_RTC_V1_H
#define _MEC5_RTC_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Real time clock (RTC)
  */

typedef struct rtc_regs {                       /*!< (@ 0x400F5000) RTC Structure                                              */
  __IOM uint8_t   SECV;                         /*!< (@ 0x00000000) RTC seconds value                                          */
  __IOM uint8_t   SECA;                         /*!< (@ 0x00000001) RTC seconds alarm                                          */
  __IOM uint8_t   MINV;                         /*!< (@ 0x00000002) RTC minutes value                                          */
  __IOM uint8_t   MINA;                         /*!< (@ 0x00000003) RTC minutes alarm                                          */
  __IOM uint8_t   HRSV;                         /*!< (@ 0x00000004) RTC hours value and AM/PM indicator                        */
  __IOM uint8_t   HRSA;                         /*!< (@ 0x00000005) RTC hours alarm                                            */
  __IOM uint8_t   DOWV;                         /*!< (@ 0x00000006) RTC day of week value                                      */
  __IOM uint8_t   DOMV;                         /*!< (@ 0x00000007) RTC day of month value                                     */
  __IOM uint8_t   MONV;                         /*!< (@ 0x00000008) RTC month value                                            */
  __IOM uint8_t   YEARV;                        /*!< (@ 0x00000009) RTC Year value                                             */
  __IOM uint8_t   REGA;                         /*!< (@ 0x0000000A) RTC register A                                             */
  __IOM uint8_t   REGB;                         /*!< (@ 0x0000000B) RTC register B                                             */
  __IOM uint8_t   REGC;                         /*!< (@ 0x0000000C) RTC register C                                             */
  __IOM uint8_t   REGD;                         /*!< (@ 0x0000000D) RTC register D                                             */
  __IM  uint16_t  RESERVED;
  __IOM uint8_t   CTRL;                         /*!< (@ 0x00000010) RTC control                                                */
  __IM  uint8_t   RESERVED1;
  __IM  uint16_t  RESERVED2;
  __IOM uint8_t   WKA;                          /*!< (@ 0x00000014) RTC week alarm                                             */
  __IM  uint8_t   RESERVED3;
  __IM  uint16_t  RESERVED4;
  __IOM uint32_t  DLSF;                         /*!< (@ 0x00000018) RTC daylight savings forward                               */
  __IOM uint32_t  DLSB;                         /*!< (@ 0x0000001C) RTC daylight savings backward                              */
} RTC_Type;                                     /*!< Size = 32 (0x20)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

#endif /* _MEC5_RTC_V1_H */
