/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_CCT_V1_1_H
#define _MEC5_CCT_V1_1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Capture and Compare Timer (MEC_CCT)
  */

typedef struct mec_cct_regs {                   /*!< (@ 0x40001000) MEC_CCT Structure                                         */
  __IOM uint32_t  TCTRL;                        /*!< (@ 0x00000000) CCT capture and compare timer control                      */
  __IOM uint32_t  CAP_CTRL0;                    /*!< (@ 0x00000004) CCT capture 0 control                                      */
  __IOM uint32_t  CAP_CTRL1;                    /*!< (@ 0x00000008) CCT capture 1 control                                      */
  __IOM uint32_t  FR_COUNT;                     /*!< (@ 0x0000000C) CCT free run counter                                       */
  __IM  uint32_t  CAP0_CNT;                     /*!< (@ 0x00000010) CCT capture 0 count(RO)                                    */
  __IM  uint32_t  CAP1_CNT;                     /*!< (@ 0x00000014) CCT capture 1 count(RO)                                    */
  __IM  uint32_t  CAP2_CNT;                     /*!< (@ 0x00000018) CCT capture 2 count(RO)                                    */
  __IM  uint32_t  CAP3_CNT;                     /*!< (@ 0x0000001C) CCT capture 3 count(RO)                                    */
  __IM  uint32_t  CAP4_CNT;                     /*!< (@ 0x00000020) CCT capture 4 count(RO)                                    */
  __IM  uint32_t  CAP5_CNT;                     /*!< (@ 0x00000024) CCT capture 5 count(RO)                                    */
  __IOM uint32_t  CMP0_CNT;                     /*!< (@ 0x00000028) CCT compare 0 match count                                  */
  __IOM uint32_t  CMP1_CNT;                     /*!< (@ 0x0000002C) CCT compare 1 match count                                  */
  __IOM uint32_t  MUX_SEL;                      /*!< (@ 0x00000030) CCT MUX Select                                             */
} MEC_CCT_Type;                                 /*!< Size = 52 (0x34)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  TCTRL  ========================================================= */
#define MEC_CCT_TCTRL_ACTV_Pos            (0UL)                     /*!< ACTV (Bit 0)                                          */
#define MEC_CCT_TCTRL_ACTV_Msk            (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
#define MEC_CCT_TCTRL_FREN_Pos            (1UL)                     /*!< FREN (Bit 1)                                          */
#define MEC_CCT_TCTRL_FREN_Msk            (0x2UL)                   /*!< FREN (Bitfield-Mask: 0x01)                            */
#define MEC_CCT_TCTRL_FRRST_Pos           (2UL)                     /*!< FRRST (Bit 2)                                         */
#define MEC_CCT_TCTRL_FRRST_Msk           (0x4UL)                   /*!< FRRST (Bitfield-Mask: 0x01)                           */
#define MEC_CCT_TCTRL_TCLK_FREQ_Pos       (4UL)                     /*!< TCLK_FREQ (Bit 4)                                     */
#define MEC_CCT_TCTRL_TCLK_FREQ_Msk       (0x70UL)                  /*!< TCLK_FREQ (Bitfield-Mask: 0x07)                       */
#define MEC_CCT_TCTRL_COMP0_EN_Pos        (8UL)                     /*!< COMP0_EN (Bit 8)                                      */
#define MEC_CCT_TCTRL_COMP0_EN_Msk        (0x100UL)                 /*!< COMP0_EN (Bitfield-Mask: 0x01)                        */
#define MEC_CCT_TCTRL_COMP1_EN_Pos        (9UL)                     /*!< COMP1_EN (Bit 9)                                      */
#define MEC_CCT_TCTRL_COMP1_EN_Msk        (0x200UL)                 /*!< COMP1_EN (Bitfield-Mask: 0x01)                        */
#define MEC_CCT_TCTRL_COMP1_SET_Pos       (16UL)                    /*!< COMP1_SET (Bit 16)                                    */
#define MEC_CCT_TCTRL_COMP1_SET_Msk       (0x10000UL)               /*!< COMP1_SET (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_TCTRL_COMP0_SET_Pos       (17UL)                    /*!< COMP0_SET (Bit 17)                                    */
#define MEC_CCT_TCTRL_COMP0_SET_Msk       (0x20000UL)               /*!< COMP0_SET (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_TCTRL_COMP1_CLR_Pos       (24UL)                    /*!< COMP1_CLR (Bit 24)                                    */
#define MEC_CCT_TCTRL_COMP1_CLR_Msk       (0x1000000UL)             /*!< COMP1_CLR (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_TCTRL_COMP0_CLR_Pos       (25UL)                    /*!< COMP0_CLR (Bit 25)                                    */
#define MEC_CCT_TCTRL_COMP0_CLR_Msk       (0x2000000UL)             /*!< COMP0_CLR (Bitfield-Mask: 0x01)                       */
/* =======================================================  CAP_CTRL0  ======================================================= */
#define MEC_CCT_CAP_CTRL0_CAP0_EDGE_Pos   (0UL)                     /*!< CAP0_EDGE (Bit 0)                                     */
#define MEC_CCT_CAP_CTRL0_CAP0_EDGE_Msk   (0x3UL)                   /*!< CAP0_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL0_FILT0_BYP_Pos   (2UL)                     /*!< FILT0_BYP (Bit 2)                                     */
#define MEC_CCT_CAP_CTRL0_FILT0_BYP_Msk   (0x4UL)                   /*!< FILT0_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL0_FCLK0_SEL_Pos   (5UL)                     /*!< FCLK0_SEL (Bit 5)                                     */
#define MEC_CCT_CAP_CTRL0_FCLK0_SEL_Msk   (0xe0UL)                  /*!< FCLK0_SEL (Bitfield-Mask: 0x07)                       */
#define MEC_CCT_CAP_CTRL0_CAP1_EDGE_Pos   (8UL)                     /*!< CAP1_EDGE (Bit 8)                                     */
#define MEC_CCT_CAP_CTRL0_CAP1_EDGE_Msk   (0x300UL)                 /*!< CAP1_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL0_FILT1_BYP_Pos   (10UL)                    /*!< FILT1_BYP (Bit 10)                                    */
#define MEC_CCT_CAP_CTRL0_FILT1_BYP_Msk   (0x400UL)                 /*!< FILT1_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL0_FCLK1_SEL_Pos   (13UL)                    /*!< FCLK1_SEL (Bit 13)                                    */
#define MEC_CCT_CAP_CTRL0_FCLK1_SEL_Msk   (0xe000UL)                /*!< FCLK1_SEL (Bitfield-Mask: 0x07)                       */
#define MEC_CCT_CAP_CTRL0_CAP2_EDGE_Pos   (16UL)                    /*!< CAP2_EDGE (Bit 16)                                    */
#define MEC_CCT_CAP_CTRL0_CAP2_EDGE_Msk   (0x30000UL)               /*!< CAP2_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL0_FILT2_BYP_Pos   (18UL)                    /*!< FILT2_BYP (Bit 18)                                    */
#define MEC_CCT_CAP_CTRL0_FILT2_BYP_Msk   (0x40000UL)               /*!< FILT2_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL0_FCLK2_SEL_Pos   (21UL)                    /*!< FCLK2_SEL (Bit 21)                                    */
#define MEC_CCT_CAP_CTRL0_FCLK2_SEL_Msk   (0xe00000UL)              /*!< FCLK2_SEL (Bitfield-Mask: 0x07)                       */
#define MEC_CCT_CAP_CTRL0_CAP3_EDGE_Pos   (24UL)                    /*!< CAP3_EDGE (Bit 24)                                    */
#define MEC_CCT_CAP_CTRL0_CAP3_EDGE_Msk   (0x3000000UL)             /*!< CAP3_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL0_FILT3_BYP_Pos   (26UL)                    /*!< FILT3_BYP (Bit 26)                                    */
#define MEC_CCT_CAP_CTRL0_FILT3_BYP_Msk   (0x4000000UL)             /*!< FILT3_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL0_FCLK3_SEL_Pos   (29UL)                    /*!< FCLK3_SEL (Bit 29)                                    */
#define MEC_CCT_CAP_CTRL0_FCLK3_SEL_Msk   (0xe0000000UL)            /*!< FCLK3_SEL (Bitfield-Mask: 0x07)                       */
/* =======================================================  CAP_CTRL1  ======================================================= */
#define MEC_CCT_CAP_CTRL1_CAP4_EDGE_Pos   (0UL)                     /*!< CAP4_EDGE (Bit 0)                                     */
#define MEC_CCT_CAP_CTRL1_CAP4_EDGE_Msk   (0x3UL)                   /*!< CAP4_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL1_FILT4_BYP_Pos   (2UL)                     /*!< FILT4_BYP (Bit 2)                                     */
#define MEC_CCT_CAP_CTRL1_FILT4_BYP_Msk   (0x4UL)                   /*!< FILT4_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL1_FCLK4_SEL_Pos   (5UL)                     /*!< FCLK4_SEL (Bit 5)                                     */
#define MEC_CCT_CAP_CTRL1_FCLK4_SEL_Msk   (0xe0UL)                  /*!< FCLK4_SEL (Bitfield-Mask: 0x07)                       */
#define MEC_CCT_CAP_CTRL1_CAP5_EDGE_Pos   (8UL)                     /*!< CAP5_EDGE (Bit 8)                                     */
#define MEC_CCT_CAP_CTRL1_CAP5_EDGE_Msk   (0x300UL)                 /*!< CAP5_EDGE (Bitfield-Mask: 0x03)                       */
#define MEC_CCT_CAP_CTRL1_FILT5_BYP_Pos   (10UL)                    /*!< FILT5_BYP (Bit 10)                                    */
#define MEC_CCT_CAP_CTRL1_FILT5_BYP_Msk   (0x400UL)                 /*!< FILT5_BYP (Bitfield-Mask: 0x01)                       */
#define MEC_CCT_CAP_CTRL1_FCLK5_SEL_Pos   (13UL)                    /*!< FCLK5_SEL (Bit 13)                                    */
#define MEC_CCT_CAP_CTRL1_FCLK5_SEL_Msk   (0xe000UL)                /*!< FCLK5_SEL (Bitfield-Mask: 0x07)                       */
/* =======================================================  FR_COUNT  ======================================================== */
/* =======================================================  CAP0_CNT  ======================================================== */
/* =======================================================  CAP1_CNT  ======================================================== */
/* =======================================================  CAP2_CNT  ======================================================== */
/* =======================================================  CAP3_CNT  ======================================================== */
/* =======================================================  CAP4_CNT  ======================================================== */
/* =======================================================  CAP5_CNT  ======================================================== */
/* =======================================================  CMP0_CNT  ======================================================== */
/* =======================================================  CMP1_CNT  ======================================================== */
/* ========================================================  MUX_SEL  ======================================================== */
#define MEC_CCT_MUX_SEL_CAP0_SEL_Pos      (0UL)                     /*!< CAP0_SEL (Bit 0)                                      */
#define MEC_CCT_MUX_SEL_CAP0_SEL_Msk      (0xfUL)                   /*!< CAP0_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_CCT_MUX_SEL_CAP1_SEL_Pos      (4UL)                     /*!< CAP1_SEL (Bit 4)                                      */
#define MEC_CCT_MUX_SEL_CAP1_SEL_Msk      (0xf0UL)                  /*!< CAP1_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_CCT_MUX_SEL_CAP2_SEL_Pos      (8UL)                     /*!< CAP2_SEL (Bit 8)                                      */
#define MEC_CCT_MUX_SEL_CAP2_SEL_Msk      (0xf00UL)                 /*!< CAP2_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_CCT_MUX_SEL_CAP3_SEL_Pos      (12UL)                    /*!< CAP3_SEL (Bit 12)                                     */
#define MEC_CCT_MUX_SEL_CAP3_SEL_Msk      (0xf000UL)                /*!< CAP3_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_CCT_MUX_SEL_CAP4_SEL_Pos      (16UL)                    /*!< CAP4_SEL (Bit 16)                                     */
#define MEC_CCT_MUX_SEL_CAP4_SEL_Msk      (0xf0000UL)               /*!< CAP4_SEL (Bitfield-Mask: 0x0f)                        */
#define MEC_CCT_MUX_SEL_CAP5_SEL_Pos      (20UL)                    /*!< CAP5_SEL (Bit 20)                                     */
#define MEC_CCT_MUX_SEL_CAP5_SEL_Msk      (0xf00000UL)              /*!< CAP5_SEL (Bitfield-Mask: 0x0f)                        */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  TCTRL  ========================================================= */
/* ==============================================  MEC_CCT TCTRL ACTV [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_ACTV                                                       */
  MEC_CCT_TCTRL_ACTV_OFF              = 0,     /*!< OFF : CCT off and clocks gated                                            */
  MEC_CCT_TCTRL_ACTV_ON               = 1,     /*!< ON : CCT on and clocks ungated                                            */
} MEC_CCT_TCTRL_ACTV_Enum;

/* ==============================================  MEC_CCT TCTRL FREN [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_FREN                                                       */
  MEC_CCT_TCTRL_FREN_OFF              = 0,     /*!< OFF : Free run counter off                                                */
  MEC_CCT_TCTRL_FREN_ON               = 1,     /*!< ON : Free run counter on and counting                                     */
} MEC_CCT_TCTRL_FREN_Enum;

/* ==============================================  MEC_CCT TCTRL FRRST [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_FRRST                                                      */
  MEC_CCT_TCTRL_FRRST_EN              = 1,     /*!< EN : Self-clearing Free run counter reset                                 */
} MEC_CCT_TCTRL_FRRST_Enum;

/* ============================================  MEC_CCT TCTRL TCLK_FREQ [4..6]  ============================================ */
typedef enum {                                  /*!< MEC_CCT_TCTRL_TCLK_FREQ                                                  */
  MEC_CCT_TCTRL_TCLK_FREQ_48M         = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_TCTRL_TCLK_FREQ_24M         = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_TCTRL_TCLK_FREQ_12M         = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_TCTRL_TCLK_FREQ_6M          = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_TCTRL_TCLK_FREQ_3M          = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_TCTRL_TCLK_FREQ_1500K       = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_TCTRL_TCLK_FREQ_750K        = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_TCTRL_TCLK_FREQ_375K        = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_TCTRL_TCLK_FREQ_Enum;

/* ============================================  MEC_CCT TCTRL COMP0_EN [8..8]  ============================================= */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP0_EN                                                   */
  MEC_CCT_TCTRL_COMP0_EN_ON           = 1,     /*!< ON : Enable free run count comparator 0                                   */
} MEC_CCT_TCTRL_COMP0_EN_Enum;

/* ============================================  MEC_CCT TCTRL COMP1_EN [9..9]  ============================================= */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP1_EN                                                   */
  MEC_CCT_TCTRL_COMP1_EN_ON           = 1,     /*!< ON : Enable free run count comparator 1                                   */
} MEC_CCT_TCTRL_COMP1_EN_Enum;

/* ===========================================  MEC_CCT TCTRL COMP1_SET [16..16]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP1_SET                                                  */
  MEC_CCT_TCTRL_COMP1_SET_STS         = 1,     /*!< STS : Set Comparator 1 match status                                       */
} MEC_CCT_TCTRL_COMP1_SET_Enum;

/* ===========================================  MEC_CCT TCTRL COMP0_SET [17..17]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP0_SET                                                  */
  MEC_CCT_TCTRL_COMP0_SET_STS         = 1,     /*!< STS : Set Comparator 0 match status                                       */
} MEC_CCT_TCTRL_COMP0_SET_Enum;

/* ===========================================  MEC_CCT TCTRL COMP1_CLR [24..24]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP1_CLR                                                  */
  MEC_CCT_TCTRL_COMP1_CLR_STS         = 1,     /*!< STS : Clear Comparator 1 match status                                     */
} MEC_CCT_TCTRL_COMP1_CLR_Enum;

/* ===========================================  MEC_CCT TCTRL COMP0_CLR [25..25]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_TCTRL_COMP0_CLR                                                  */
  MEC_CCT_TCTRL_COMP0_CLR_STS         = 1,     /*!< STS : Clear Comparator 0 match status                                     */
} MEC_CCT_TCTRL_COMP0_CLR_Enum;

/* =======================================================  CAP_CTRL0  ======================================================= */
/* ==========================================  MEC_CCT CAP_CTRL0 CAP0_EDGE [0..1]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_CAP0_EDGE                                              */
  MEC_CCT_CAP_CTRL0_CAP0_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL0_CAP0_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL0_CAP0_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL0_CAP0_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL0_CAP0_EDGE_Enum;

/* ==========================================  MEC_CCT CAP_CTRL0 FILT0_BYP [2..2]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FILT0_BYP                                              */
  MEC_CCT_CAP_CTRL0_FILT0_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 0 logic                     */
} MEC_CCT_CAP_CTRL0_FILT0_BYP_Enum;

/* ==========================================  MEC_CCT CAP_CTRL0 FCLK0_SEL [5..7]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FCLK0_SEL                                              */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL0_FCLK0_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL0_FCLK0_SEL_Enum;

/* ==========================================  MEC_CCT CAP_CTRL0 CAP1_EDGE [8..9]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_CAP1_EDGE                                              */
  MEC_CCT_CAP_CTRL0_CAP1_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL0_CAP1_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL0_CAP1_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL0_CAP1_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL0_CAP1_EDGE_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FILT1_BYP [10..10]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FILT1_BYP                                              */
  MEC_CCT_CAP_CTRL0_FILT1_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 1 logic                     */
} MEC_CCT_CAP_CTRL0_FILT1_BYP_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FCLK1_SEL [13..15]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FCLK1_SEL                                              */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL0_FCLK1_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL0_FCLK1_SEL_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 CAP2_EDGE [16..17]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_CAP2_EDGE                                              */
  MEC_CCT_CAP_CTRL0_CAP2_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL0_CAP2_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL0_CAP2_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL0_CAP2_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL0_CAP2_EDGE_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FILT2_BYP [18..18]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FILT2_BYP                                              */
  MEC_CCT_CAP_CTRL0_FILT2_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 2 logic                     */
} MEC_CCT_CAP_CTRL0_FILT2_BYP_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FCLK2_SEL [21..23]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FCLK2_SEL                                              */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL0_FCLK2_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL0_FCLK2_SEL_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 CAP3_EDGE [24..25]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_CAP3_EDGE                                              */
  MEC_CCT_CAP_CTRL0_CAP3_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL0_CAP3_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL0_CAP3_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL0_CAP3_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL0_CAP3_EDGE_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FILT3_BYP [26..26]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FILT3_BYP                                              */
  MEC_CCT_CAP_CTRL0_FILT3_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 3 logic                     */
} MEC_CCT_CAP_CTRL0_FILT3_BYP_Enum;

/* =========================================  MEC_CCT CAP_CTRL0 FCLK3_SEL [29..31]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL0_FCLK3_SEL                                              */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL0_FCLK3_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL0_FCLK3_SEL_Enum;

/* =======================================================  CAP_CTRL1  ======================================================= */
/* ==========================================  MEC_CCT CAP_CTRL1 CAP4_EDGE [0..1]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_CAP4_EDGE                                              */
  MEC_CCT_CAP_CTRL1_CAP4_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL1_CAP4_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL1_CAP4_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL1_CAP4_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL1_CAP4_EDGE_Enum;

/* ==========================================  MEC_CCT CAP_CTRL1 FILT4_BYP [2..2]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_FILT4_BYP                                              */
  MEC_CCT_CAP_CTRL1_FILT4_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 4 logic                     */
} MEC_CCT_CAP_CTRL1_FILT4_BYP_Enum;

/* ==========================================  MEC_CCT CAP_CTRL1 FCLK4_SEL [5..7]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_FCLK4_SEL                                              */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL1_FCLK4_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL1_FCLK4_SEL_Enum;

/* ==========================================  MEC_CCT CAP_CTRL1 CAP5_EDGE [8..9]  ========================================== */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_CAP5_EDGE                                              */
  MEC_CCT_CAP_CTRL1_CAP5_EDGE_FALLING = 0,     /*!< FALLING : Capture on falling edges                                        */
  MEC_CCT_CAP_CTRL1_CAP5_EDGE_RISING  = 1,     /*!< RISING : Capture on rising edges                                          */
  MEC_CCT_CAP_CTRL1_CAP5_EDGE_BOTH    = 2,     /*!< BOTH : Capture on both edges                                              */
  MEC_CCT_CAP_CTRL1_CAP5_EDGE_DIS     = 3,     /*!< DIS : Capture event disabled                                              */
} MEC_CCT_CAP_CTRL1_CAP5_EDGE_Enum;

/* =========================================  MEC_CCT CAP_CTRL1 FILT5_BYP [10..10]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_FILT5_BYP                                              */
  MEC_CCT_CAP_CTRL1_FILT5_BYP_EN      = 1,     /*!< EN : Enable bypass of input filter to capture 5 logic                     */
} MEC_CCT_CAP_CTRL1_FILT5_BYP_Enum;

/* =========================================  MEC_CCT CAP_CTRL1 FCLK5_SEL [13..15]  ========================================= */
typedef enum {                                  /*!< MEC_CCT_CAP_CTRL1_FCLK5_SEL                                              */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_48M     = 0,     /*!< 48M : 48MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_24M     = 1,     /*!< 24M : 24MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_12M     = 2,     /*!< 12M : 12MHz CCT frequency                                                 */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_6M      = 3,     /*!< 6M : 6MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_3M      = 4,     /*!< 3M : 3MHz CCT frequency                                                   */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_1500K   = 5,     /*!< 1500K : 1500KHz CCT frequency                                             */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_750K    = 6,     /*!< 750K : 750KHz CCT frequency                                               */
  MEC_CCT_CAP_CTRL1_FCLK5_SEL_375K    = 7,     /*!< 375K : 357KHz CCT frequency                                               */
} MEC_CCT_CAP_CTRL1_FCLK5_SEL_Enum;

/* =======================================================  FR_COUNT  ======================================================== */
/* =======================================================  CAP0_CNT  ======================================================== */
/* =======================================================  CAP1_CNT  ======================================================== */
/* =======================================================  CAP2_CNT  ======================================================== */
/* =======================================================  CAP3_CNT  ======================================================== */
/* =======================================================  CAP4_CNT  ======================================================== */
/* =======================================================  CAP5_CNT  ======================================================== */
/* =======================================================  CMP0_CNT  ======================================================== */
/* =======================================================  CMP1_CNT  ======================================================== */
/* ========================================================  MUX_SEL  ======================================================== */
/* ===========================================  MEC_CCT MUX_SEL CAP0_SEL [0..3]  ============================================ */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP0_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 0                            */
  MEC_CCT_MUX_SEL_CAP0_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 0                            */
} MEC_CCT_MUX_SEL_CAP0_SEL_Enum;

/* ===========================================  MEC_CCT MUX_SEL CAP1_SEL [4..7]  ============================================ */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP1_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 1                            */
  MEC_CCT_MUX_SEL_CAP1_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 1                            */
} MEC_CCT_MUX_SEL_CAP1_SEL_Enum;

/* ===========================================  MEC_CCT MUX_SEL CAP2_SEL [8..11]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP2_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 2                            */
  MEC_CCT_MUX_SEL_CAP2_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 2                            */
} MEC_CCT_MUX_SEL_CAP2_SEL_Enum;

/* ==========================================  MEC_CCT MUX_SEL CAP3_SEL [12..15]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP3_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 3                            */
  MEC_CCT_MUX_SEL_CAP3_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 3                            */
} MEC_CCT_MUX_SEL_CAP3_SEL_Enum;

/* ==========================================  MEC_CCT MUX_SEL CAP4_SEL [16..19]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP4_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 4                            */
  MEC_CCT_MUX_SEL_CAP4_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 4                            */
} MEC_CCT_MUX_SEL_CAP4_SEL_Enum;

/* ==========================================  MEC_CCT MUX_SEL CAP5_SEL [20..23]  =========================================== */
typedef enum {                                  /*!< MEC_CCT_MUX_SEL_CAP5_SEL                                                 */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT00      = 0,     /*!< ICT00 : Select ICT00 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT01      = 1,     /*!< ICT01 : Select ICT01 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT02      = 2,     /*!< ICT02 : Select ICT02 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT03      = 3,     /*!< ICT03 : Select ICT03 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT04      = 4,     /*!< ICT04 : Select ICT04 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT05      = 5,     /*!< ICT05 : Select ICT05 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT06      = 6,     /*!< ICT06 : Select ICT06 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT07      = 7,     /*!< ICT07 : Select ICT07 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT08      = 8,     /*!< ICT08 : Select ICT08 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT09      = 9,     /*!< ICT09 : Select ICT09 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT10      = 10,    /*!< ICT10 : Select ICT10 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT11      = 11,    /*!< ICT11 : Select ICT11 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT12      = 12,    /*!< ICT12 : Select ICT12 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT13      = 13,    /*!< ICT13 : Select ICT13 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT14      = 14,    /*!< ICT14 : Select ICT14 pin as input to Capture 5                            */
  MEC_CCT_MUX_SEL_CAP5_SEL_ICT15      = 15,    /*!< ICT15 : Select ICT15 pin as input to Capture 5                            */
} MEC_CCT_MUX_SEL_CAP5_SEL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CCT_V1_1_H */
