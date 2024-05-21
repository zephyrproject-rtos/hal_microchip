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
  * @brief Real time clock (MEC_RTC)
  */

typedef struct mec_rtc_regs {                   /*!< (@ 0x400F5000) MEC_RTC Structure                                         */
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
  __IM  uint8_t   REGC;                         /*!< (@ 0x0000000C) RTC register C                                             */
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
} MEC_RTC_Type;                                 /*!< Size = 32 (0x20)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  HRSV  ========================================================== */
#define MEC_RTC_HRSV_HOURS_Pos            (0UL)                     /*!< HOURS (Bit 0)                                         */
#define MEC_RTC_HRSV_HOURS_Msk            (0x7fUL)                  /*!< HOURS (Bitfield-Mask: 0x7f)                           */
#define MEC_RTC_HRSV_AM_PM_Pos            (7UL)                     /*!< AM_PM (Bit 7)                                         */
#define MEC_RTC_HRSV_AM_PM_Msk            (0x80UL)                  /*!< AM_PM (Bitfield-Mask: 0x01)                           */
/* =========================================================  REGA  ========================================================== */
#define MEC_RTC_REGA_RATE_SEL_Pos         (0UL)                     /*!< RATE_SEL (Bit 0)                                      */
#define MEC_RTC_REGA_RATE_SEL_Msk         (0xfUL)                   /*!< RATE_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_RTC_REGA_DIV_CHAIN_SEL_Pos    (4UL)                     /*!< DIV_CHAIN_SEL (Bit 4)                                 */
#define MEC_RTC_REGA_DIV_CHAIN_SEL_Msk    (0x70UL)                  /*!< DIV_CHAIN_SEL (Bitfield-Mask: 0x07)                   */
#define MEC_RTC_REGA_UPDATE_IN_PROGRESS_Pos (7UL)                   /*!< UPDATE_IN_PROGRESS (Bit 7)                            */
#define MEC_RTC_REGA_UPDATE_IN_PROGRESS_Msk (0x80UL)                /*!< UPDATE_IN_PROGRESS (Bitfield-Mask: 0x01)              */
/* =========================================================  REGB  ========================================================== */
#define MEC_RTC_REGB_DSV_EN_Pos           (0UL)                     /*!< DSV_EN (Bit 0)                                        */
#define MEC_RTC_REGB_DSV_EN_Msk           (0x1UL)                   /*!< DSV_EN (Bitfield-Mask: 0x01)                          */
#define MEC_RTC_REGB_HOUR24_EN_Pos        (1UL)                     /*!< HOUR24_EN (Bit 1)                                     */
#define MEC_RTC_REGB_HOUR24_EN_Msk        (0x2UL)                   /*!< HOUR24_EN (Bitfield-Mask: 0x01)                       */
#define MEC_RTC_REGB_BINARY_DATA_EN_Pos   (2UL)                     /*!< BINARY_DATA_EN (Bit 2)                                */
#define MEC_RTC_REGB_BINARY_DATA_EN_Msk   (0x4UL)                   /*!< BINARY_DATA_EN (Bitfield-Mask: 0x01)                  */
#define MEC_RTC_REGB_UPD_END_IEN_Pos      (4UL)                     /*!< UPD_END_IEN (Bit 4)                                   */
#define MEC_RTC_REGB_UPD_END_IEN_Msk      (0x10UL)                  /*!< UPD_END_IEN (Bitfield-Mask: 0x01)                     */
#define MEC_RTC_REGB_ALARM_IEN_Pos        (5UL)                     /*!< ALARM_IEN (Bit 5)                                     */
#define MEC_RTC_REGB_ALARM_IEN_Msk        (0x20UL)                  /*!< ALARM_IEN (Bitfield-Mask: 0x01)                       */
#define MEC_RTC_REGB_PERIODIC_IEN_Pos     (6UL)                     /*!< PERIODIC_IEN (Bit 6)                                  */
#define MEC_RTC_REGB_PERIODIC_IEN_Msk     (0x40UL)                  /*!< PERIODIC_IEN (Bitfield-Mask: 0x01)                    */
#define MEC_RTC_REGB_UPD_INHIBIT_Pos      (7UL)                     /*!< UPD_INHIBIT (Bit 7)                                   */
#define MEC_RTC_REGB_UPD_INHIBIT_Msk      (0x80UL)                  /*!< UPD_INHIBIT (Bitfield-Mask: 0x01)                     */
/* =========================================================  REGC  ========================================================== */
#define MEC_RTC_REGC_UPD_END_STS_Pos      (4UL)                     /*!< UPD_END_STS (Bit 4)                                   */
#define MEC_RTC_REGC_UPD_END_STS_Msk      (0x10UL)                  /*!< UPD_END_STS (Bitfield-Mask: 0x01)                     */
#define MEC_RTC_REGC_ALARM_STS_Pos        (5UL)                     /*!< ALARM_STS (Bit 5)                                     */
#define MEC_RTC_REGC_ALARM_STS_Msk        (0x20UL)                  /*!< ALARM_STS (Bitfield-Mask: 0x01)                       */
#define MEC_RTC_REGC_PERIODIC_STS_Pos     (6UL)                     /*!< PERIODIC_STS (Bit 6)                                  */
#define MEC_RTC_REGC_PERIODIC_STS_Msk     (0x40UL)                  /*!< PERIODIC_STS (Bitfield-Mask: 0x01)                    */
#define MEC_RTC_REGC_REQUEST_STS_Pos      (7UL)                     /*!< REQUEST_STS (Bit 7)                                   */
#define MEC_RTC_REGC_REQUEST_STS_Msk      (0x80UL)                  /*!< REQUEST_STS (Bitfield-Mask: 0x01)                     */
/* =========================================================  REGD  ========================================================== */
#define MEC_RTC_REGD_DATE_ALARM_Pos       (0UL)                     /*!< DATE_ALARM (Bit 0)                                    */
#define MEC_RTC_REGD_DATE_ALARM_Msk       (0x3fUL)                  /*!< DATE_ALARM (Bitfield-Mask: 0x3f)                      */
/* =========================================================  CTRL  ========================================================== */
#define MEC_RTC_CTRL_BLOCK_ENABLE_Pos     (0UL)                     /*!< BLOCK_ENABLE (Bit 0)                                  */
#define MEC_RTC_CTRL_BLOCK_ENABLE_Msk     (0x1UL)                   /*!< BLOCK_ENABLE (Bitfield-Mask: 0x01)                    */
#define MEC_RTC_CTRL_SOFT_RESET_Pos       (1UL)                     /*!< SOFT_RESET (Bit 1)                                    */
#define MEC_RTC_CTRL_SOFT_RESET_Msk       (0x2UL)                   /*!< SOFT_RESET (Bitfield-Mask: 0x01)                      */
#define MEC_RTC_CTRL_ALARM_TO_VCI_EN_Pos  (2UL)                     /*!< ALARM_TO_VCI_EN (Bit 2)                               */
#define MEC_RTC_CTRL_ALARM_TO_VCI_EN_Msk  (0x4UL)                   /*!< ALARM_TO_VCI_EN (Bitfield-Mask: 0x01)                 */
#define MEC_RTC_CTRL_ALARM_EN_Pos         (3UL)                     /*!< ALARM_EN (Bit 3)                                      */
#define MEC_RTC_CTRL_ALARM_EN_Msk         (0x8UL)                   /*!< ALARM_EN (Bitfield-Mask: 0x01)                        */
/* =========================================================  DLSF  ========================================================== */
#define MEC_RTC_DLSF_FORWARD_MONTH_Pos    (0UL)                     /*!< FORWARD_MONTH (Bit 0)                                 */
#define MEC_RTC_DLSF_FORWARD_MONTH_Msk    (0xffUL)                  /*!< FORWARD_MONTH (Bitfield-Mask: 0xff)                   */
#define MEC_RTC_DLSF_FORWARD_DOW_Pos      (8UL)                     /*!< FORWARD_DOW (Bit 8)                                   */
#define MEC_RTC_DLSF_FORWARD_DOW_Msk      (0x700UL)                 /*!< FORWARD_DOW (Bitfield-Mask: 0x07)                     */
#define MEC_RTC_DLSF_FORWARD_WEEK_Pos     (16UL)                    /*!< FORWARD_WEEK (Bit 16)                                 */
#define MEC_RTC_DLSF_FORWARD_WEEK_Msk     (0x70000UL)               /*!< FORWARD_WEEK (Bitfield-Mask: 0x07)                    */
#define MEC_RTC_DLSF_FORWARD_HOUR_Pos     (24UL)                    /*!< FORWARD_HOUR (Bit 24)                                 */
#define MEC_RTC_DLSF_FORWARD_HOUR_Msk     (0x7f000000UL)            /*!< FORWARD_HOUR (Bitfield-Mask: 0x7f)                    */
#define MEC_RTC_DLSF_FORWARD_AM_PM_Pos    (31UL)                    /*!< FORWARD_AM_PM (Bit 31)                                */
#define MEC_RTC_DLSF_FORWARD_AM_PM_Msk    (0x80000000UL)            /*!< FORWARD_AM_PM (Bitfield-Mask: 0x01)                   */
/* =========================================================  DLSB  ========================================================== */
#define MEC_RTC_DLSB_BACK_MONTH_Pos       (0UL)                     /*!< BACK_MONTH (Bit 0)                                    */
#define MEC_RTC_DLSB_BACK_MONTH_Msk       (0xffUL)                  /*!< BACK_MONTH (Bitfield-Mask: 0xff)                      */
#define MEC_RTC_DLSB_BACK_DOW_Pos         (8UL)                     /*!< BACK_DOW (Bit 8)                                      */
#define MEC_RTC_DLSB_BACK_DOW_Msk         (0x700UL)                 /*!< BACK_DOW (Bitfield-Mask: 0x07)                        */
#define MEC_RTC_DLSB_BACK_WEEK_Pos        (16UL)                    /*!< BACK_WEEK (Bit 16)                                    */
#define MEC_RTC_DLSB_BACK_WEEK_Msk        (0x70000UL)               /*!< BACK_WEEK (Bitfield-Mask: 0x07)                       */
#define MEC_RTC_DLSB_BACK_HOUR_Pos        (24UL)                    /*!< BACK_HOUR (Bit 24)                                    */
#define MEC_RTC_DLSB_BACK_HOUR_Msk        (0x7f000000UL)            /*!< BACK_HOUR (Bitfield-Mask: 0x7f)                       */
#define MEC_RTC_DLSB_BACK_AM_PM_Pos       (31UL)                    /*!< BACK_AM_PM (Bit 31)                                   */
#define MEC_RTC_DLSB_BACK_AM_PM_Msk       (0x80000000UL)            /*!< BACK_AM_PM (Bitfield-Mask: 0x01)                      */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  HRSV  ========================================================== */
/* ==============================================  MEC_RTC HRSV AM_PM [7..7]  =============================================== */
typedef enum {                                  /*!< MEC_RTC_HRSV_AM_PM                                                       */
  MEC_RTC_HRSV_AM_PM_AM               = 0,     /*!< AM : Time value is AM                                                     */
  MEC_RTC_HRSV_AM_PM_PM               = 1,     /*!< PM : Time value is PM                                                     */
} MEC_RTC_HRSV_AM_PM_Enum;

/* =========================================================  REGA  ========================================================== */
/* =============================================  MEC_RTC REGA RATE_SEL [0..3]  ============================================= */
typedef enum {                                  /*!< MEC_RTC_REGA_RATE_SEL                                                    */
  MEC_RTC_REGA_RATE_SEL_NONE          = 0,     /*!< NONE : Period interrupt will not trigger                                  */
  MEC_RTC_REGA_RATE_SEL_CYC128        = 1,     /*!< CYC128 : Period interrupt every 128 32KHz cycles (3.90625 ms)             */
  MEC_RTC_REGA_RATE_SEL_CYC256        = 2,     /*!< CYC256 : Period interrupt every 256 32KHz cycles (7.8125 ms)              */
  MEC_RTC_REGA_RATE_SEL_CYC4          = 3,     /*!< CYC4 : Period interrupt every 4 32KHz cycles (122.070 us)                 */
  MEC_RTC_REGA_RATE_SEL_CYC8          = 4,     /*!< CYC8 : Period interrupt every 8 32KHz cycles (244.141 us)                 */
  MEC_RTC_REGA_RATE_SEL_CYC16         = 5,     /*!< CYC16 : Period interrupt every 16 32KHz cycles (488.281 us)               */
  MEC_RTC_REGA_RATE_SEL_CYC32         = 6,     /*!< CYC32 : Period interrupt every 32 32KHz cycles (975.5625 us)              */
  MEC_RTC_REGA_RATE_SEL_CYC64         = 7,     /*!< CYC64 : Period interrupt every 64 32KHz cycles (1.953125 ms)              */
  MEC_RTC_REGA_RATE_SEL_CYC128_ALT    = 8,     /*!< CYC128_ALT : Period interrupt every 128 32KHz cycles (3.90625
                                                     ms)                                                                       */
  MEC_RTC_REGA_RATE_SEL_CYC256_ALT    = 9,     /*!< CYC256_ALT : Period interrupt every 256 32KHz cycles (7.8125
                                                     ms)                                                                       */
  MEC_RTC_REGA_RATE_SEL_CYC512        = 10,    /*!< CYC512 : Period interrupt every 512 32KHz cycles (15.625 ms)              */
  MEC_RTC_REGA_RATE_SEL_CYC1K         = 11,    /*!< CYC1K : Period interrupt every 1024 32KHz cycles (31.25 ms)               */
  MEC_RTC_REGA_RATE_SEL_CYC2K         = 12,    /*!< CYC2K : Period interrupt every 2048 32KHz cycles (62.5 ms)                */
  MEC_RTC_REGA_RATE_SEL_CYC4K         = 13,    /*!< CYC4K : Period interrupt every 4096 32KHz cycles (125 ms)                 */
  MEC_RTC_REGA_RATE_SEL_CYC8K         = 14,    /*!< CYC8K : Period interrupt every 8192 32KHz cycles (250 ms)                 */
  MEC_RTC_REGA_RATE_SEL_CYC16K        = 15,    /*!< CYC16K : Period interrupt every 16384 32KHz cycles (500 ms)               */
} MEC_RTC_REGA_RATE_SEL_Enum;

/* ==========================================  MEC_RTC REGA DIV_CHAIN_SEL [4..6]  =========================================== */
typedef enum {                                  /*!< MEC_RTC_REGA_DIV_CHAIN_SEL                                               */
  MEC_RTC_REGA_DIV_CHAIN_SEL_UNINT    = 0,     /*!< UNINT : Set to another value before enabling the RTC                      */
  MEC_RTC_REGA_DIV_CHAIN_SEL_NORMAL   = 2,     /*!< NORMAL : Value for RTC normal operation                                   */
  MEC_RTC_REGA_DIV_CHAIN_SEL_HALT     = 6,     /*!< HALT : Value for halting RTC counting                                     */
} MEC_RTC_REGA_DIV_CHAIN_SEL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_RTC_V1_H */
