/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_WKTMR_BGPO_V1_H
#define _MEC5_WKTMR_BGPO_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Week timer plus BGPO pins (WKTMR)
  */

typedef struct wktmr_regs {                     /*!< (@ 0x4000AC80) WKTMR Structure                                           */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) Week timer control                                         */
  __IOM uint32_t  COUNT;                        /*!< (@ 0x00000004) Week timer alarm counter                                   */
  __IOM uint32_t  COMP;                         /*!< (@ 0x00000008) Week timer compare                                         */
  __IOM uint32_t  CLKDIV;                       /*!< (@ 0x0000000C) Week timer clock divider                                   */
  __IOM uint32_t  SSIS;                         /*!< (@ 0x00000010) Week timer sub-second interrupt select                     */
  __IOM uint32_t  SWCR;                         /*!< (@ 0x00000014) Week timer sub-week control                                */
  __IOM uint32_t  SWAC;                         /*!< (@ 0x00000018) Week timer sub-week alarm counter                          */
  __IOM uint32_t  BGPOD;                        /*!< (@ 0x0000001C) Week timer BGPO data                                       */
  __IOM uint32_t  BGPOP;                        /*!< (@ 0x00000020) Week timer BGPO power                                      */
  __IOM uint32_t  BGPOR;                        /*!< (@ 0x00000024) Week timer BGPO reset                                      */
} WKTMR_Type;                                   /*!< Size = 40 (0x28)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define WKTMR_CTRL_TIMER_Pos              (0UL)                     /*!< TIMER (Bit 0)                                         */
#define WKTMR_CTRL_TIMER_Msk              (0x1UL)                   /*!< TIMER (Bitfield-Mask: 0x01)                           */
#define WKTMR_CTRL_PUPEV_Pos              (6UL)                     /*!< PUPEV (Bit 6)                                         */
#define WKTMR_CTRL_PUPEV_Msk              (0x40UL)                  /*!< PUPEV (Bitfield-Mask: 0x01)                           */
/* =========================================================  COUNT  ========================================================= */
/* =========================================================  COMP  ========================================================== */
/* ========================================================  CLKDIV  ========================================================= */
/* =========================================================  SSIS  ========================================================== */
#define WKTMR_SSIS_SPISR_Pos              (0UL)                     /*!< SPISR (Bit 0)                                         */
#define WKTMR_SSIS_SPISR_Msk              (0xfUL)                   /*!< SPISR (Bitfield-Mask: 0x0f)                           */
/* =========================================================  SWCR  ========================================================== */
#define WKTMR_SWCR_SUB_PUPEV_Pos          (0UL)                     /*!< SUB_PUPEV (Bit 0)                                     */
#define WKTMR_SWCR_SUB_PUPEV_Msk          (0x1UL)                   /*!< SUB_PUPEV (Bitfield-Mask: 0x01)                       */
#define WKTMR_SWCR_PUPEV_Pos              (1UL)                     /*!< PUPEV (Bit 1)                                         */
#define WKTMR_SWCR_PUPEV_Msk              (0x2UL)                   /*!< PUPEV (Bitfield-Mask: 0x01)                           */
#define WKTMR_SWCR_SYSPWR_PRES_Pos        (5UL)                     /*!< SYSPWR_PRES (Bit 5)                                   */
#define WKTMR_SWCR_SYSPWR_PRES_Msk        (0x20UL)                  /*!< SYSPWR_PRES (Bitfield-Mask: 0x01)                     */
#define WKTMR_SWCR_AUTO_RELOAD_Pos        (6UL)                     /*!< AUTO_RELOAD (Bit 6)                                   */
#define WKTMR_SWCR_AUTO_RELOAD_Msk        (0x40UL)                  /*!< AUTO_RELOAD (Bitfield-Mask: 0x01)                     */
#define WKTMR_SWCR_SUBSRC_Pos             (7UL)                     /*!< SUBSRC (Bit 7)                                        */
#define WKTMR_SWCR_SUBSRC_Msk             (0x380UL)                 /*!< SUBSRC (Bitfield-Mask: 0x07)                          */
/* =========================================================  SWAC  ========================================================== */
#define WKTMR_SWAC_SUB_LOAD_Pos           (0UL)                     /*!< SUB_LOAD (Bit 0)                                      */
#define WKTMR_SWAC_SUB_LOAD_Msk           (0x1ffUL)                 /*!< SUB_LOAD (Bitfield-Mask: 0x1ff)                       */
#define WKTMR_SWAC_SUB_CNT_Pos            (16UL)                    /*!< SUB_CNT (Bit 16)                                      */
#define WKTMR_SWAC_SUB_CNT_Msk            (0x1ff0000UL)             /*!< SUB_CNT (Bitfield-Mask: 0x1ff)                        */
/* =========================================================  BGPOD  ========================================================= */
/* =========================================================  BGPOP  ========================================================= */
/* =========================================================  BGPOR  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  WKTMR CTRL TIMER [0..0]  ================================================ */
typedef enum {                                  /*!< WKTMR_CTRL_TIMER                                                         */
  WKTMR_CTRL_TIMER_EN                 = 1,     /*!< EN : Enable                                                               */
} WKTMR_CTRL_TIMER_Enum;

/* ===============================================  WKTMR CTRL PUPEV [6..6]  ================================================ */
typedef enum {                                  /*!< WKTMR_CTRL_PUPEV                                                         */
  WKTMR_CTRL_PUPEV_EN                 = 1,     /*!< EN : Enable                                                               */
} WKTMR_CTRL_PUPEV_Enum;

/* =========================================================  COUNT  ========================================================= */
/* =========================================================  COMP  ========================================================== */
/* ========================================================  CLKDIV  ========================================================= */
/* =========================================================  SSIS  ========================================================== */
/* ===============================================  WKTMR SSIS SPISR [0..3]  ================================================ */
typedef enum {                                  /*!< WKTMR_SSIS_SPISR                                                         */
  WKTMR_SSIS_SPISR_DIS                = 0,     /*!< DIS : Subsecond interrupt events disabled                                 */
  WKTMR_SSIS_SPISR_2HZ                = 1,     /*!< 2HZ : 2 Hz subsecond interrupt rate                                       */
  WKTMR_SSIS_SPISR_4HZ                = 2,     /*!< 4HZ : 4 Hz subsecond interrupt rate                                       */
  WKTMR_SSIS_SPISR_8HZ                = 3,     /*!< 8HZ : 8 Hz subsecond interrupt rate                                       */
  WKTMR_SSIS_SPISR_16HZ               = 4,     /*!< 16HZ : 16 Hz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_32HZ               = 5,     /*!< 32HZ : 32 Hz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_64HZ               = 6,     /*!< 64HZ : 64 Hz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_128HZ              = 7,     /*!< 128HZ : 128 Hz subsecond interrupt rate                                   */
  WKTMR_SSIS_SPISR_256HZ              = 8,     /*!< 256HZ : 256 Hz subsecond interrupt rate                                   */
  WKTMR_SSIS_SPISR_512HZ              = 9,     /*!< 512HZ : 512 Hz subsecond interrupt rate                                   */
  WKTMR_SSIS_SPISR_1KHZ               = 10,    /*!< 1KHZ : 1 KHz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_2KHZ               = 11,    /*!< 2KHZ : 2 KHz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_4KHZ               = 12,    /*!< 4KHZ : 4 KHz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_8KHZ               = 13,    /*!< 8KHZ : 8 KHz subsecond interrupt rate                                     */
  WKTMR_SSIS_SPISR_16KHZ              = 14,    /*!< 16KHZ : 16 KHz subsecond interrupt rate                                   */
  WKTMR_SSIS_SPISR_32KHZ              = 15,    /*!< 32KHZ : 32 KHz subsecond interrupt rate                                   */
} WKTMR_SSIS_SPISR_Enum;

/* =========================================================  SWCR  ========================================================== */
/* =============================================  WKTMR SWCR SUB_PUPEV [0..0]  ============================================== */
typedef enum {                                  /*!< WKTMR_SWCR_SUB_PUPEV                                                     */
  WKTMR_SWCR_SUB_PUPEV_STS            = 1,     /*!< STS : Status Active                                                       */
} WKTMR_SWCR_SUB_PUPEV_Enum;

/* ===============================================  WKTMR SWCR PUPEV [1..1]  ================================================ */
typedef enum {                                  /*!< WKTMR_SWCR_PUPEV                                                         */
  WKTMR_SWCR_PUPEV_STS                = 1,     /*!< STS : Status Active                                                       */
} WKTMR_SWCR_PUPEV_Enum;

/* ============================================  WKTMR SWCR SYSPWR_PRES [5..5]  ============================================= */
typedef enum {                                  /*!< WKTMR_SWCR_SYSPWR_PRES                                                   */
  WKTMR_SWCR_SYSPWR_PRES_EN           = 1,     /*!< EN : Enable                                                               */
} WKTMR_SWCR_SYSPWR_PRES_Enum;

/* ============================================  WKTMR SWCR AUTO_RELOAD [6..6]  ============================================= */
typedef enum {                                  /*!< WKTMR_SWCR_AUTO_RELOAD                                                   */
  WKTMR_SWCR_AUTO_RELOAD_DIS          = 1,     /*!< DIS : Disable                                                             */
} WKTMR_SWCR_AUTO_RELOAD_Enum;

/* ===============================================  WKTMR SWCR SUBSRC [7..9]  =============================================== */
typedef enum {                                  /*!< WKTMR_SWCR_SUBSRC                                                        */
  WKTMR_SWCR_SUBSRC_DIS               = 0,     /*!< DIS : Disable                                                             */
  WKTMR_SWCR_SUBSRC_SUBSEC            = 1,     /*!< SUBSEC : Sub-week counter uses sub-second as clock source                 */
  WKTMR_SWCR_SUBSRC_SEC               = 2,     /*!< SEC : Sub-week counter uses second as clock source                        */
  WKTMR_SWCR_SUBSRC_WKB3              = 4,     /*!< WKB3 : Sub-week counter uses week counter bit[3] as clock source          */
  WKTMR_SWCR_SUBSRC_WKB5              = 5,     /*!< WKB5 : Sub-week counter uses week counter bit[5] as clock source          */
  WKTMR_SWCR_SUBSRC_WKB7              = 6,     /*!< WKB7 : Sub-week counter uses week counter bit[7] as clock source          */
  WKTMR_SWCR_SUBSRC_WKB9              = 7,     /*!< WKB9 : Sub-week counter uses week counter bit[9] as clock source          */
} WKTMR_SWCR_SUBSRC_Enum;

/* =========================================================  SWAC  ========================================================== */
/* =========================================================  BGPOD  ========================================================= */
/* =========================================================  BGPOP  ========================================================= */
/* =========================================================  BGPOR  ========================================================= */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_WKTMR_BGPO_V1_H */
