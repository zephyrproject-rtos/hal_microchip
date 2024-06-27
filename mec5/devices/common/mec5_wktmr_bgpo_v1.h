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
  * @brief Week timer (MEC_WKTMR)
  */

typedef struct mec_wktmr_regs {                 /*!< (@ 0x4000AC80) MEC_WKTMR Structure                                       */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) Week timer control                                         */
  __IOM uint32_t  COUNT;                        /*!< (@ 0x00000004) Week timer alarm counter                                   */
  __IOM uint32_t  COMP;                         /*!< (@ 0x00000008) Week timer compare                                         */
  __IOM uint32_t  CLKDIV;                       /*!< (@ 0x0000000C) Week timer clock divider                                   */
  __IOM uint32_t  SSIS;                         /*!< (@ 0x00000010) Week timer sub-second interrupt select                     */
  __IOM uint32_t  SWCR;                         /*!< (@ 0x00000014) Week timer sub-week control                                */
  __IOM uint32_t  SWAC;                         /*!< (@ 0x00000018) Week timer sub-week alarm counter                          */
  __IOM uint32_t  BGPO_DATA;                    /*!< (@ 0x0000001C) Week timer BGPO data                                       */
  __IOM uint32_t  BGPO_PWR;                     /*!< (@ 0x00000020) Week timer BGPO power select                               */
  __IOM uint32_t  BGPO_RESET;                   /*!< (@ 0x00000024) Week timer BGPO select reset event                         */
} MEC_WKTMR_Type;                               /*!< Size = 40 (0x28)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_WKTMR_CTRL_TIMER_Pos          (0UL)                     /*!< TIMER (Bit 0)                                         */
#define MEC_WKTMR_CTRL_TIMER_Msk          (0x1UL)                   /*!< TIMER (Bitfield-Mask: 0x01)                           */
#define MEC_WKTMR_CTRL_PUPEV_Pos          (6UL)                     /*!< PUPEV (Bit 6)                                         */
#define MEC_WKTMR_CTRL_PUPEV_Msk          (0x40UL)                  /*!< PUPEV (Bitfield-Mask: 0x01)                           */
/* =========================================================  SSIS  ========================================================== */
#define MEC_WKTMR_SSIS_SPISR_Pos          (0UL)                     /*!< SPISR (Bit 0)                                         */
#define MEC_WKTMR_SSIS_SPISR_Msk          (0xfUL)                   /*!< SPISR (Bitfield-Mask: 0x0f)                           */
/* =========================================================  SWCR  ========================================================== */
#define MEC_WKTMR_SWCR_SUB_PUPEV_Pos      (0UL)                     /*!< SUB_PUPEV (Bit 0)                                     */
#define MEC_WKTMR_SWCR_SUB_PUPEV_Msk      (0x1UL)                   /*!< SUB_PUPEV (Bitfield-Mask: 0x01)                       */
#define MEC_WKTMR_SWCR_PUPEV_Pos          (1UL)                     /*!< PUPEV (Bit 1)                                         */
#define MEC_WKTMR_SWCR_PUPEV_Msk          (0x2UL)                   /*!< PUPEV (Bitfield-Mask: 0x01)                           */
#define MEC_WKTMR_SWCR_SYSPWR_PRES_Pos    (5UL)                     /*!< SYSPWR_PRES (Bit 5)                                   */
#define MEC_WKTMR_SWCR_SYSPWR_PRES_Msk    (0x20UL)                  /*!< SYSPWR_PRES (Bitfield-Mask: 0x01)                     */
#define MEC_WKTMR_SWCR_AUTO_RELOAD_Pos    (6UL)                     /*!< AUTO_RELOAD (Bit 6)                                   */
#define MEC_WKTMR_SWCR_AUTO_RELOAD_Msk    (0x40UL)                  /*!< AUTO_RELOAD (Bitfield-Mask: 0x01)                     */
#define MEC_WKTMR_SWCR_SUBSRC_Pos         (7UL)                     /*!< SUBSRC (Bit 7)                                        */
#define MEC_WKTMR_SWCR_SUBSRC_Msk         (0x380UL)                 /*!< SUBSRC (Bitfield-Mask: 0x07)                          */
/* =========================================================  SWAC  ========================================================== */
#define MEC_WKTMR_SWAC_SUB_LOAD_Pos       (0UL)                     /*!< SUB_LOAD (Bit 0)                                      */
#define MEC_WKTMR_SWAC_SUB_LOAD_Msk       (0x1ffUL)                 /*!< SUB_LOAD (Bitfield-Mask: 0x1ff)                       */
#define MEC_WKTMR_SWAC_SUB_CNT_Pos        (16UL)                    /*!< SUB_CNT (Bit 16)                                      */
#define MEC_WKTMR_SWAC_SUB_CNT_Msk        (0x1ff0000UL)             /*!< SUB_CNT (Bitfield-Mask: 0x1ff)                        */
/* =======================================================  BGPO_DATA  ======================================================= */
#define MEC_WKTMR_BGPO_DATA_BGPO_0_Pos    (0UL)                     /*!< BGPO_0 (Bit 0)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_0_Msk    (0x1UL)                   /*!< BGPO_0 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_DATA_BGPO_1_Pos    (1UL)                     /*!< BGPO_1 (Bit 1)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_1_Msk    (0x2UL)                   /*!< BGPO_1 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_DATA_BGPO_2_Pos    (2UL)                     /*!< BGPO_2 (Bit 2)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_2_Msk    (0x4UL)                   /*!< BGPO_2 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_DATA_BGPO_3_Pos    (3UL)                     /*!< BGPO_3 (Bit 3)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_3_Msk    (0x8UL)                   /*!< BGPO_3 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_DATA_BGPO_4_Pos    (4UL)                     /*!< BGPO_4 (Bit 4)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_4_Msk    (0x10UL)                  /*!< BGPO_4 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_DATA_BGPO_5_Pos    (5UL)                     /*!< BGPO_5 (Bit 5)                                        */
#define MEC_WKTMR_BGPO_DATA_BGPO_5_Msk    (0x20UL)                  /*!< BGPO_5 (Bitfield-Mask: 0x01)                          */
/* =======================================================  BGPO_PWR  ======================================================== */
#define MEC_WKTMR_BGPO_PWR_BGPO_0_Pos     (0UL)                     /*!< BGPO_0 (Bit 0)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_0_Msk     (0x1UL)                   /*!< BGPO_0 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_PWR_BGPO_1_Pos     (1UL)                     /*!< BGPO_1 (Bit 1)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_1_Msk     (0x2UL)                   /*!< BGPO_1 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_PWR_BGPO_2_Pos     (2UL)                     /*!< BGPO_2 (Bit 2)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_2_Msk     (0x4UL)                   /*!< BGPO_2 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_PWR_BGPO_3_Pos     (3UL)                     /*!< BGPO_3 (Bit 3)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_3_Msk     (0x8UL)                   /*!< BGPO_3 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_PWR_BGPO_4_Pos     (4UL)                     /*!< BGPO_4 (Bit 4)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_4_Msk     (0x10UL)                  /*!< BGPO_4 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_PWR_BGPO_5_Pos     (5UL)                     /*!< BGPO_5 (Bit 5)                                        */
#define MEC_WKTMR_BGPO_PWR_BGPO_5_Msk     (0x20UL)                  /*!< BGPO_5 (Bitfield-Mask: 0x01)                          */
/* ======================================================  BGPO_RESET  ======================================================= */
#define MEC_WKTMR_BGPO_RESET_BGPO_0_Pos   (0UL)                     /*!< BGPO_0 (Bit 0)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_0_Msk   (0x1UL)                   /*!< BGPO_0 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_RESET_BGPO_1_Pos   (1UL)                     /*!< BGPO_1 (Bit 1)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_1_Msk   (0x2UL)                   /*!< BGPO_1 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_RESET_BGPO_2_Pos   (2UL)                     /*!< BGPO_2 (Bit 2)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_2_Msk   (0x4UL)                   /*!< BGPO_2 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_RESET_BGPO_3_Pos   (3UL)                     /*!< BGPO_3 (Bit 3)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_3_Msk   (0x8UL)                   /*!< BGPO_3 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_RESET_BGPO_4_Pos   (4UL)                     /*!< BGPO_4 (Bit 4)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_4_Msk   (0x10UL)                  /*!< BGPO_4 (Bitfield-Mask: 0x01)                          */
#define MEC_WKTMR_BGPO_RESET_BGPO_5_Pos   (5UL)                     /*!< BGPO_5 (Bit 5)                                        */
#define MEC_WKTMR_BGPO_RESET_BGPO_5_Msk   (0x20UL)                  /*!< BGPO_5 (Bitfield-Mask: 0x01)                          */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* =============================================  MEC_WKTMR CTRL TIMER [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_WKTMR_CTRL_TIMER                                                     */
  MEC_WKTMR_CTRL_TIMER_EN             = 1,     /*!< EN : Enable                                                               */
} MEC_WKTMR_CTRL_TIMER_Enum;

/* =============================================  MEC_WKTMR CTRL PUPEV [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_WKTMR_CTRL_PUPEV                                                     */
  MEC_WKTMR_CTRL_PUPEV_EN             = 1,     /*!< EN : Enable                                                               */
} MEC_WKTMR_CTRL_PUPEV_Enum;

/* =========================================================  COUNT  ========================================================= */
/* =========================================================  COMP  ========================================================== */
/* ========================================================  CLKDIV  ========================================================= */
/* =========================================================  SSIS  ========================================================== */
/* =============================================  MEC_WKTMR SSIS SPISR [0..3]  ============================================== */
typedef enum {                                  /*!< MEC_WKTMR_SSIS_SPISR                                                     */
  MEC_WKTMR_SSIS_SPISR_DIS            = 0,     /*!< DIS : Subsecond interrupt events disabled                                 */
  MEC_WKTMR_SSIS_SPISR_HZ_2           = 1,     /*!< HZ_2 : 2 Hz subsecond interrupt rate                                      */
  MEC_WKTMR_SSIS_SPISR_HZ_4           = 2,     /*!< HZ_4 : 4 Hz subsecond interrupt rate                                      */
  MEC_WKTMR_SSIS_SPISR_HZ_8           = 3,     /*!< HZ_8 : 8 Hz subsecond interrupt rate                                      */
  MEC_WKTMR_SSIS_SPISR_HZ_16          = 4,     /*!< HZ_16 : 16 Hz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_HZ_32          = 5,     /*!< HZ_32 : 32 Hz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_HZ_64          = 6,     /*!< HZ_64 : 64 Hz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_HZ_128         = 7,     /*!< HZ_128 : 128 Hz subsecond interrupt rate                                  */
  MEC_WKTMR_SSIS_SPISR_HZ_256         = 8,     /*!< HZ_256 : 256 Hz subsecond interrupt rate                                  */
  MEC_WKTMR_SSIS_SPISR_HZ_512         = 9,     /*!< HZ_512 : 512 Hz subsecond interrupt rate                                  */
  MEC_WKTMR_SSIS_SPISR_KHZ_1          = 10,    /*!< KHZ_1 : 1 KHz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_KHZ_2          = 11,    /*!< KHZ_2 : 2 KHz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_KHZ_4          = 12,    /*!< KHZ_4 : 4 KHz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_KHZ_8          = 13,    /*!< KHZ_8 : 8 KHz subsecond interrupt rate                                    */
  MEC_WKTMR_SSIS_SPISR_KHZ_16         = 14,    /*!< KHZ_16 : 16 KHz subsecond interrupt rate                                  */
  MEC_WKTMR_SSIS_SPISR_KHZ_32         = 15,    /*!< KHZ_32 : 32 KHz subsecond interrupt rate                                  */
} MEC_WKTMR_SSIS_SPISR_Enum;

/* =========================================================  SWCR  ========================================================== */
/* ===========================================  MEC_WKTMR SWCR SUB_PUPEV [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_WKTMR_SWCR_SUB_PUPEV                                                 */
  MEC_WKTMR_SWCR_SUB_PUPEV_STS        = 1,     /*!< STS : Status Active                                                       */
} MEC_WKTMR_SWCR_SUB_PUPEV_Enum;

/* =============================================  MEC_WKTMR SWCR PUPEV [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_WKTMR_SWCR_PUPEV                                                     */
  MEC_WKTMR_SWCR_PUPEV_STS            = 1,     /*!< STS : Status Active                                                       */
} MEC_WKTMR_SWCR_PUPEV_Enum;

/* ==========================================  MEC_WKTMR SWCR SYSPWR_PRES [5..5]  =========================================== */
typedef enum {                                  /*!< MEC_WKTMR_SWCR_SYSPWR_PRES                                               */
  MEC_WKTMR_SWCR_SYSPWR_PRES_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_WKTMR_SWCR_SYSPWR_PRES_Enum;

/* ==========================================  MEC_WKTMR SWCR AUTO_RELOAD [6..6]  =========================================== */
typedef enum {                                  /*!< MEC_WKTMR_SWCR_AUTO_RELOAD                                               */
  MEC_WKTMR_SWCR_AUTO_RELOAD_DIS      = 1,     /*!< DIS : Disable                                                             */
} MEC_WKTMR_SWCR_AUTO_RELOAD_Enum;

/* =============================================  MEC_WKTMR SWCR SUBSRC [7..9]  ============================================= */
typedef enum {                                  /*!< MEC_WKTMR_SWCR_SUBSRC                                                    */
  MEC_WKTMR_SWCR_SUBSRC_DIS           = 0,     /*!< DIS : Disable                                                             */
  MEC_WKTMR_SWCR_SUBSRC_SUBSEC        = 1,     /*!< SUBSEC : Sub-week counter uses sub-second as clock source                 */
  MEC_WKTMR_SWCR_SUBSRC_SEC           = 2,     /*!< SEC : Sub-week counter uses second as clock source                        */
  MEC_WKTMR_SWCR_SUBSRC_WKB3          = 4,     /*!< WKB3 : Sub-week counter uses week counter bit[3] as clock source          */
  MEC_WKTMR_SWCR_SUBSRC_WKB5          = 5,     /*!< WKB5 : Sub-week counter uses week counter bit[5] as clock source          */
  MEC_WKTMR_SWCR_SUBSRC_WKB7          = 6,     /*!< WKB7 : Sub-week counter uses week counter bit[7] as clock source          */
  MEC_WKTMR_SWCR_SUBSRC_WKB9          = 7,     /*!< WKB9 : Sub-week counter uses week counter bit[9] as clock source          */
} MEC_WKTMR_SWCR_SUBSRC_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_WKTMR_BGPO_V1_H */
