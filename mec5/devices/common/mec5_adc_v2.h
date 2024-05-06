/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ADC_V2_H
#define _MEC5_ADC_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Analog to Digital converter with up to 16 channels (ADC)
  */

typedef struct adc_regs {                       /*!< (@ 0x40007C00) ADC Structure                                             */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) ADC control                                                */
  __IOM uint32_t  DELAY;                        /*!< (@ 0x00000004) ADC start and repeat delays                                */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000008) ADC channel conversion done status                         */
  __IOM uint32_t  SCHEN;                        /*!< (@ 0x0000000C) ADC channel single conversion channel bit map              */
  __IOM uint32_t  RCHEN;                        /*!< (@ 0x00000010) ADC channel repeat conversion channel bit map              */
  __IOM uint32_t  RD[16];                       /*!< (@ 0x00000014) ADC channel n reading                                      */
  __IM  uint32_t  RESERVED[10];
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x0000007C) ADC configuration                                          */
  __IOM uint32_t  VREF_CHAN;                    /*!< (@ 0x00000080) ADC VREF channel configuration                             */
  __IOM uint32_t  VREF_CTRL;                    /*!< (@ 0x00000084) ADC VREF control                                           */
  __IOM uint32_t  SAR_CTRL;                     /*!< (@ 0x00000088) ADC SAR control                                            */
  __IOM uint32_t  SAR_CFG;                      /*!< (@ 0x0000008C) ADC VREF configuration                                     */
} ADC_Type;                                     /*!< Size = 144 (0x90)                                                         */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define ADC_CTRL_ACTV_Pos                 (0UL)                     /*!< ACTV (Bit 0)                                          */
#define ADC_CTRL_ACTV_Msk                 (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
#define ADC_CTRL_SSTART_Pos               (1UL)                     /*!< SSTART (Bit 1)                                        */
#define ADC_CTRL_SSTART_Msk               (0x2UL)                   /*!< SSTART (Bitfield-Mask: 0x01)                          */
#define ADC_CTRL_RSTART_Pos               (2UL)                     /*!< RSTART (Bit 2)                                        */
#define ADC_CTRL_RSTART_Msk               (0x4UL)                   /*!< RSTART (Bitfield-Mask: 0x01)                          */
#define ADC_CTRL_PWR_SAVE_Pos             (3UL)                     /*!< PWR_SAVE (Bit 3)                                      */
#define ADC_CTRL_PWR_SAVE_Msk             (0x8UL)                   /*!< PWR_SAVE (Bitfield-Mask: 0x01)                        */
#define ADC_CTRL_SRST_Pos                 (4UL)                     /*!< SRST (Bit 4)                                          */
#define ADC_CTRL_SRST_Msk                 (0x10UL)                  /*!< SRST (Bitfield-Mask: 0x01)                            */
#define ADC_CTRL_RDONE_Pos                (6UL)                     /*!< RDONE (Bit 6)                                         */
#define ADC_CTRL_RDONE_Msk                (0x40UL)                  /*!< RDONE (Bitfield-Mask: 0x01)                           */
#define ADC_CTRL_SDONE_Pos                (7UL)                     /*!< SDONE (Bit 7)                                         */
#define ADC_CTRL_SDONE_Msk                (0x80UL)                  /*!< SDONE (Bitfield-Mask: 0x01)                           */
/* =========================================================  DELAY  ========================================================= */
#define ADC_DELAY_RSTART_DLY_Pos          (0UL)                     /*!< RSTART_DLY (Bit 0)                                    */
#define ADC_DELAY_RSTART_DLY_Msk          (0xffffUL)                /*!< RSTART_DLY (Bitfield-Mask: 0xffff)                    */
#define ADC_DELAY_RPT_DLY_Pos             (16UL)                    /*!< RPT_DLY (Bit 16)                                      */
#define ADC_DELAY_RPT_DLY_Msk             (0xffff0000UL)            /*!< RPT_DLY (Bitfield-Mask: 0xffff)                       */
/* ========================================================  STATUS  ========================================================= */
/* =========================================================  SCHEN  ========================================================= */
/* =========================================================  RCHEN  ========================================================= */
/* ==========================================================  RD  =========================================================== */
/* ========================================================  CONFIG  ========================================================= */
#define ADC_CONFIG_CLTM_Pos               (0UL)                     /*!< CLTM (Bit 0)                                          */
#define ADC_CONFIG_CLTM_Msk               (0xffUL)                  /*!< CLTM (Bitfield-Mask: 0xff)                            */
#define ADC_CONFIG_CHTM_Pos               (8UL)                     /*!< CHTM (Bit 8)                                          */
#define ADC_CONFIG_CHTM_Msk               (0xff00UL)                /*!< CHTM (Bitfield-Mask: 0xff)                            */
/* =======================================================  VREF_CHAN  ======================================================= */
#define ADC_VREF_CHAN_VRCH0_Pos           (0UL)                     /*!< VRCH0 (Bit 0)                                         */
#define ADC_VREF_CHAN_VRCH0_Msk           (0x3UL)                   /*!< VRCH0 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH1_Pos           (2UL)                     /*!< VRCH1 (Bit 2)                                         */
#define ADC_VREF_CHAN_VRCH1_Msk           (0xcUL)                   /*!< VRCH1 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH2_Pos           (4UL)                     /*!< VRCH2 (Bit 4)                                         */
#define ADC_VREF_CHAN_VRCH2_Msk           (0x30UL)                  /*!< VRCH2 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH3_Pos           (6UL)                     /*!< VRCH3 (Bit 6)                                         */
#define ADC_VREF_CHAN_VRCH3_Msk           (0xc0UL)                  /*!< VRCH3 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH4_Pos           (8UL)                     /*!< VRCH4 (Bit 8)                                         */
#define ADC_VREF_CHAN_VRCH4_Msk           (0x300UL)                 /*!< VRCH4 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH5_Pos           (10UL)                    /*!< VRCH5 (Bit 10)                                        */
#define ADC_VREF_CHAN_VRCH5_Msk           (0xc00UL)                 /*!< VRCH5 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH6_Pos           (12UL)                    /*!< VRCH6 (Bit 12)                                        */
#define ADC_VREF_CHAN_VRCH6_Msk           (0x3000UL)                /*!< VRCH6 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH7_Pos           (14UL)                    /*!< VRCH7 (Bit 14)                                        */
#define ADC_VREF_CHAN_VRCH7_Msk           (0xc000UL)                /*!< VRCH7 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH8_Pos           (16UL)                    /*!< VRCH8 (Bit 16)                                        */
#define ADC_VREF_CHAN_VRCH8_Msk           (0x30000UL)               /*!< VRCH8 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH9_Pos           (18UL)                    /*!< VRCH9 (Bit 18)                                        */
#define ADC_VREF_CHAN_VRCH9_Msk           (0xc0000UL)               /*!< VRCH9 (Bitfield-Mask: 0x03)                           */
#define ADC_VREF_CHAN_VRCH10_Pos          (20UL)                    /*!< VRCH10 (Bit 20)                                       */
#define ADC_VREF_CHAN_VRCH10_Msk          (0x300000UL)              /*!< VRCH10 (Bitfield-Mask: 0x03)                          */
#define ADC_VREF_CHAN_VRCH11_Pos          (22UL)                    /*!< VRCH11 (Bit 22)                                       */
#define ADC_VREF_CHAN_VRCH11_Msk          (0xc00000UL)              /*!< VRCH11 (Bitfield-Mask: 0x03)                          */
#define ADC_VREF_CHAN_VRCH12_Pos          (24UL)                    /*!< VRCH12 (Bit 24)                                       */
#define ADC_VREF_CHAN_VRCH12_Msk          (0x3000000UL)             /*!< VRCH12 (Bitfield-Mask: 0x03)                          */
#define ADC_VREF_CHAN_VRCH13_Pos          (26UL)                    /*!< VRCH13 (Bit 26)                                       */
#define ADC_VREF_CHAN_VRCH13_Msk          (0xc000000UL)             /*!< VRCH13 (Bitfield-Mask: 0x03)                          */
#define ADC_VREF_CHAN_VRCH14_Pos          (28UL)                    /*!< VRCH14 (Bit 28)                                       */
#define ADC_VREF_CHAN_VRCH14_Msk          (0x30000000UL)            /*!< VRCH14 (Bitfield-Mask: 0x03)                          */
#define ADC_VREF_CHAN_VRCH15_Pos          (30UL)                    /*!< VRCH15 (Bit 30)                                       */
#define ADC_VREF_CHAN_VRCH15_Msk          (0xc0000000UL)            /*!< VRCH15 (Bitfield-Mask: 0x03)                          */
/* =======================================================  VREF_CTRL  ======================================================= */
#define ADC_VREF_CTRL_CHRG_DLY_Pos        (0UL)                     /*!< CHRG_DLY (Bit 0)                                      */
#define ADC_VREF_CTRL_CHRG_DLY_Msk        (0xffffUL)                /*!< CHRG_DLY (Bitfield-Mask: 0xffff)                      */
#define ADC_VREF_CTRL_SWITCH_DLY_Pos      (16UL)                    /*!< SWITCH_DLY (Bit 16)                                   */
#define ADC_VREF_CTRL_SWITCH_DLY_Msk      (0x1fff0000UL)            /*!< SWITCH_DLY (Bitfield-Mask: 0x1fff)                    */
#define ADC_VREF_CTRL_PAD_DLO_Pos         (29UL)                    /*!< PAD_DLO (Bit 29)                                      */
#define ADC_VREF_CTRL_PAD_DLO_Msk         (0x20000000UL)            /*!< PAD_DLO (Bitfield-Mask: 0x01)                         */
#define ADC_VREF_CTRL_VRSEL_Pos           (30UL)                    /*!< VRSEL (Bit 30)                                        */
#define ADC_VREF_CTRL_VRSEL_Msk           (0xc0000000UL)            /*!< VRSEL (Bitfield-Mask: 0x03)                           */
/* =======================================================  SAR_CTRL  ======================================================== */
#define ADC_SAR_CTRL_SELDIFF_Pos          (0UL)                     /*!< SELDIFF (Bit 0)                                       */
#define ADC_SAR_CTRL_SELDIFF_Msk          (0x1UL)                   /*!< SELDIFF (Bitfield-Mask: 0x01)                         */
#define ADC_SAR_CTRL_SELRES_Pos           (1UL)                     /*!< SELRES (Bit 1)                                        */
#define ADC_SAR_CTRL_SELRES_Msk           (0x6UL)                   /*!< SELRES (Bitfield-Mask: 0x03)                          */
#define ADC_SAR_CTRL_SHFT_DATA_Pos        (3UL)                     /*!< SHFT_DATA (Bit 3)                                     */
#define ADC_SAR_CTRL_SHFT_DATA_Msk        (0x8UL)                   /*!< SHFT_DATA (Bitfield-Mask: 0x01)                       */
#define ADC_SAR_CTRL_WARMUPDLY_Pos        (7UL)                     /*!< WARMUPDLY (Bit 7)                                     */
#define ADC_SAR_CTRL_WARMUPDLY_Msk        (0x1ff80UL)               /*!< WARMUPDLY (Bitfield-Mask: 0x3ff)                      */
/* ========================================================  SAR_CFG  ======================================================== */
#define ADC_SAR_CFG_CMBF_Pos              (0UL)                     /*!< CMBF (Bit 0)                                          */
#define ADC_SAR_CFG_CMBF_Msk              (0x1UL)                   /*!< CMBF (Bitfield-Mask: 0x01)                            */
#define ADC_SAR_CFG_PAR_DOUT_Pos          (1UL)                     /*!< PAR_DOUT (Bit 1)                                      */
#define ADC_SAR_CFG_PAR_DOUT_Msk          (0x2UL)                   /*!< PAR_DOUT (Bitfield-Mask: 0x01)                        */
#define ADC_SAR_CFG_DITHER_Pos            (2UL)                     /*!< DITHER (Bit 2)                                        */
#define ADC_SAR_CFG_DITHER_Msk            (0x4UL)                   /*!< DITHER (Bitfield-Mask: 0x01)                          */
#define ADC_SAR_CFG_F_AUTOZ_Pos           (3UL)                     /*!< F_AUTOZ (Bit 3)                                       */
#define ADC_SAR_CFG_F_AUTOZ_Msk           (0x8UL)                   /*!< F_AUTOZ (Bitfield-Mask: 0x01)                         */
#define ADC_SAR_CFG_S_AUTOZ_Pos           (4UL)                     /*!< S_AUTOZ (Bit 4)                                       */
#define ADC_SAR_CFG_S_AUTOZ_Msk           (0x10UL)                  /*!< S_AUTOZ (Bitfield-Mask: 0x01)                         */
#define ADC_SAR_CFG_L_AUTOZ_Pos           (5UL)                     /*!< L_AUTOZ (Bit 5)                                       */
#define ADC_SAR_CFG_L_AUTOZ_Msk           (0x20UL)                  /*!< L_AUTOZ (Bitfield-Mask: 0x01)                         */
#define ADC_SAR_CFG_RADC_Pos              (6UL)                     /*!< RADC (Bit 6)                                          */
#define ADC_SAR_CFG_RADC_Msk              (0x40UL)                  /*!< RADC (Bitfield-Mask: 0x01)                            */
#define ADC_SAR_CFG_REGEN_DLY_VAL_Pos     (9UL)                     /*!< REGEN_DLY_VAL (Bit 9)                                 */
#define ADC_SAR_CFG_REGEN_DLY_VAL_Msk     (0x600UL)                 /*!< REGEN_DLY_VAL (Bitfield-Mask: 0x03)                   */
#define ADC_SAR_CFG_ADC_CLK_DIV_Pos       (11UL)                    /*!< ADC_CLK_DIV (Bit 11)                                  */
#define ADC_SAR_CFG_ADC_CLK_DIV_Msk       (0xf800UL)                /*!< ADC_CLK_DIV (Bitfield-Mask: 0x1f)                     */
#define ADC_SAR_CFG_LADC_RNG2_Pos         (20UL)                    /*!< LADC_RNG2 (Bit 20)                                    */
#define ADC_SAR_CFG_LADC_RNG2_Msk         (0x300000UL)              /*!< LADC_RNG2 (Bitfield-Mask: 0x03)                       */
#define ADC_SAR_CFG_LADC_RNG1_Pos         (22UL)                    /*!< LADC_RNG1 (Bit 22)                                    */
#define ADC_SAR_CFG_LADC_RNG1_Msk         (0xc00000UL)              /*!< LADC_RNG1 (Bitfield-Mask: 0x03)                       */
#define ADC_SAR_CFG_LCMBF_STG1_Pos        (24UL)                    /*!< LCMBF_STG1 (Bit 24)                                   */
#define ADC_SAR_CFG_LCMBF_STG1_Msk        (0x3000000UL)             /*!< LCMBF_STG1 (Bitfield-Mask: 0x03)                      */
#define ADC_SAR_CFG_LCMBF_STG2_Pos        (26UL)                    /*!< LCMBF_STG2 (Bit 26)                                   */
#define ADC_SAR_CFG_LCMBF_STG2_Msk        (0xc000000UL)             /*!< LCMBF_STG2 (Bitfield-Mask: 0x03)                      */
#define ADC_SAR_CFG_EXT_BIAS_Pos          (31UL)                    /*!< EXT_BIAS (Bit 31)                                     */
#define ADC_SAR_CFG_EXT_BIAS_Msk          (0x80000000UL)            /*!< EXT_BIAS (Bitfield-Mask: 0x01)                        */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* =================================================  ADC CTRL ACTV [0..0]  ================================================= */
typedef enum {                                  /*!< ADC_CTRL_ACTV                                                            */
  ADC_CTRL_ACTV_EN                    = 1,     /*!< EN : Enable                                                               */
} ADC_CTRL_ACTV_Enum;

/* ================================================  ADC CTRL SSTART [1..1]  ================================================ */
typedef enum {                                  /*!< ADC_CTRL_SSTART                                                          */
  ADC_CTRL_SSTART_EN                  = 1,     /*!< EN : Enable                                                               */
} ADC_CTRL_SSTART_Enum;

/* ================================================  ADC CTRL RSTART [2..2]  ================================================ */
typedef enum {                                  /*!< ADC_CTRL_RSTART                                                          */
  ADC_CTRL_RSTART_EN                  = 1,     /*!< EN : Enable                                                               */
} ADC_CTRL_RSTART_Enum;

/* ===============================================  ADC CTRL PWR_SAVE [3..3]  =============================================== */
typedef enum {                                  /*!< ADC_CTRL_PWR_SAVE                                                        */
  ADC_CTRL_PWR_SAVE_EN                = 0,     /*!< EN : Enable                                                               */
  ADC_CTRL_PWR_SAVE_DIS               = 1,     /*!< DIS : Disable                                                             */
} ADC_CTRL_PWR_SAVE_Enum;

/* =================================================  ADC CTRL SRST [4..4]  ================================================= */
typedef enum {                                  /*!< ADC_CTRL_SRST                                                            */
  ADC_CTRL_SRST_EN                    = 1,     /*!< EN : Enable                                                               */
} ADC_CTRL_SRST_Enum;

/* ================================================  ADC CTRL RDONE [6..6]  ================================================= */
typedef enum {                                  /*!< ADC_CTRL_RDONE                                                           */
  ADC_CTRL_RDONE_ACTIVE               = 1,     /*!< ACTIVE : Active                                                           */
} ADC_CTRL_RDONE_Enum;

/* ================================================  ADC CTRL SDONE [7..7]  ================================================= */
typedef enum {                                  /*!< ADC_CTRL_SDONE                                                           */
  ADC_CTRL_SDONE_ACTIVE               = 1,     /*!< ACTIVE : Active                                                           */
} ADC_CTRL_SDONE_Enum;

/* ==============================================  ADC VREF_CHAN VRCH0 [0..1]  ============================================== */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH0                                                      */
  ADC_VREF_CHAN_VRCH0_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH0_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH0_Enum;

/* ==============================================  ADC VREF_CHAN VRCH1 [2..3]  ============================================== */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH1                                                      */
  ADC_VREF_CHAN_VRCH1_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH1_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH1_Enum;

/* ==============================================  ADC VREF_CHAN VRCH2 [4..5]  ============================================== */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH2                                                      */
  ADC_VREF_CHAN_VRCH2_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH2_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH2_Enum;

/* ==============================================  ADC VREF_CHAN VRCH3 [6..7]  ============================================== */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH3                                                      */
  ADC_VREF_CHAN_VRCH3_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH3_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH3_Enum;

/* ==============================================  ADC VREF_CHAN VRCH4 [8..9]  ============================================== */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH4                                                      */
  ADC_VREF_CHAN_VRCH4_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH4_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH4_Enum;

/* =============================================  ADC VREF_CHAN VRCH5 [10..11]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH5                                                      */
  ADC_VREF_CHAN_VRCH5_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH5_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH5_Enum;

/* =============================================  ADC VREF_CHAN VRCH6 [12..13]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH6                                                      */
  ADC_VREF_CHAN_VRCH6_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH6_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH6_Enum;

/* =============================================  ADC VREF_CHAN VRCH7 [14..15]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH7                                                      */
  ADC_VREF_CHAN_VRCH7_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH7_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH7_Enum;

/* =============================================  ADC VREF_CHAN VRCH8 [16..17]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH8                                                      */
  ADC_VREF_CHAN_VRCH8_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH8_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH8_Enum;

/* =============================================  ADC VREF_CHAN VRCH9 [18..19]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH9                                                      */
  ADC_VREF_CHAN_VRCH9_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH9_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH9_Enum;

/* ============================================  ADC VREF_CHAN VRCH10 [20..21]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH10                                                     */
  ADC_VREF_CHAN_VRCH10_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH10_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH10_Enum;

/* ============================================  ADC VREF_CHAN VRCH11 [22..23]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH11                                                     */
  ADC_VREF_CHAN_VRCH11_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH11_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH11_Enum;

/* ============================================  ADC VREF_CHAN VRCH12 [24..25]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH12                                                     */
  ADC_VREF_CHAN_VRCH12_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH12_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH12_Enum;

/* ============================================  ADC VREF_CHAN VRCH13 [26..27]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH13                                                     */
  ADC_VREF_CHAN_VRCH13_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH13_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH13_Enum;

/* ============================================  ADC VREF_CHAN VRCH14 [28..29]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH14                                                     */
  ADC_VREF_CHAN_VRCH14_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH14_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH14_Enum;

/* ============================================  ADC VREF_CHAN VRCH15 [30..31]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CHAN_VRCH15                                                     */
  ADC_VREF_CHAN_VRCH15_VREF_PAD       = 0,     /*!< VREF_PAD : Vref pad                                                       */
  ADC_VREF_CHAN_VRCH15_VREF_GPIO      = 1,     /*!< VREF_GPIO : Vref GPIO                                                     */
} ADC_VREF_CHAN_VRCH15_Enum;

/* =======================================================  VREF_CTRL  ======================================================= */
/* ============================================  ADC VREF_CTRL PAD_DLO [29..29]  ============================================ */
typedef enum {                                  /*!< ADC_VREF_CTRL_PAD_DLO                                                    */
  ADC_VREF_CTRL_PAD_DLO_VREF_PAD_FLOAT = 0,    /*!< VREF_PAD_FLOAT : Let Vref pad(s) float                                    */
  ADC_VREF_CTRL_PAD_DLO_VREF_PAD_DRV_LO = 1,   /*!< VREF_PAD_DRV_LO : Drive Vref pad(s) low                                   */
} ADC_VREF_CTRL_PAD_DLO_Enum;

/* =============================================  ADC VREF_CTRL VRSEL [30..31]  ============================================= */
typedef enum {                                  /*!< ADC_VREF_CTRL_VRSEL                                                      */
  ADC_VREF_CTRL_VRSEL_VREF_PAD        = 0,     /*!< VREF_PAD : Vref pad was selected                                          */
  ADC_VREF_CTRL_VRSEL_VREF_GPIO       = 1,     /*!< VREF_GPIO : Vref GPIO was selected                                        */
} ADC_VREF_CTRL_VRSEL_Enum;

/* =======================================================  SAR_CTRL  ======================================================== */
/* =============================================  ADC SAR_CTRL SELDIFF [0..0]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CTRL_SELDIFF                                                     */
  ADC_SAR_CTRL_SELDIFF_EN             = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CTRL_SELDIFF_Enum;

/* ==============================================  ADC SAR_CTRL SELRES [1..2]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CTRL_SELRES                                                      */
  ADC_SAR_CTRL_SELRES_6BIT            = 0,     /*!< 6BIT : Resolution is 6-bit                                                */
  ADC_SAR_CTRL_SELRES_8BIT            = 1,     /*!< 8BIT : Resolution is 8-bit                                                */
  ADC_SAR_CTRL_SELRES_10BIT           = 2,     /*!< 10BIT : Resolution is 10-bit                                              */
  ADC_SAR_CTRL_SELRES_12BIT           = 3,     /*!< 12BIT : Resolution is 12-bit                                              */
} ADC_SAR_CTRL_SELRES_Enum;

/* ============================================  ADC SAR_CTRL SHFT_DATA [3..3]  ============================================= */
typedef enum {                                  /*!< ADC_SAR_CTRL_SHFT_DATA                                                   */
  ADC_SAR_CTRL_SHFT_DATA_EN           = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CTRL_SHFT_DATA_Enum;

/* ========================================================  SAR_CFG  ======================================================== */
/* ===============================================  ADC SAR_CFG CMBF [0..0]  ================================================ */
typedef enum {                                  /*!< ADC_SAR_CFG_CMBF                                                         */
  ADC_SAR_CFG_CMBF_DIS                = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_CMBF_EN                 = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_CMBF_Enum;

/* =============================================  ADC SAR_CFG PAR_DOUT [1..1]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_PAR_DOUT                                                     */
  ADC_SAR_CFG_PAR_DOUT_EN             = 0,     /*!< EN : Enable                                                               */
  ADC_SAR_CFG_PAR_DOUT_DIS            = 1,     /*!< DIS : Disable                                                             */
} ADC_SAR_CFG_PAR_DOUT_Enum;

/* ==============================================  ADC SAR_CFG DITHER [2..2]  =============================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_DITHER                                                       */
  ADC_SAR_CFG_DITHER_DIS              = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_DITHER_EN               = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_DITHER_Enum;

/* ==============================================  ADC SAR_CFG F_AUTOZ [3..3]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_F_AUTOZ                                                      */
  ADC_SAR_CFG_F_AUTOZ_DIS             = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_F_AUTOZ_EN              = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_F_AUTOZ_Enum;

/* ==============================================  ADC SAR_CFG S_AUTOZ [4..4]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_S_AUTOZ                                                      */
  ADC_SAR_CFG_S_AUTOZ_DIS             = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_S_AUTOZ_EN              = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_S_AUTOZ_Enum;

/* ==============================================  ADC SAR_CFG L_AUTOZ [5..5]  ============================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_L_AUTOZ                                                      */
  ADC_SAR_CFG_L_AUTOZ_DIS             = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_L_AUTOZ_EN              = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_L_AUTOZ_Enum;

/* ===============================================  ADC SAR_CFG RADC [6..6]  ================================================ */
typedef enum {                                  /*!< ADC_SAR_CFG_RADC                                                         */
  ADC_SAR_CFG_RADC_DIS                = 0,     /*!< DIS : Disable                                                             */
  ADC_SAR_CFG_RADC_EN                 = 1,     /*!< EN : Enable                                                               */
} ADC_SAR_CFG_RADC_Enum;

/* ===========================================  ADC SAR_CFG ADC_CLK_DIV [11..15]  =========================================== */
typedef enum {                                  /*!< ADC_SAR_CFG_ADC_CLK_DIV                                                  */
  ADC_SAR_CFG_ADC_CLK_DIV_DIV16       = 0,     /*!< DIV16 : Sample clock is 48MHz / 16                                        */
  ADC_SAR_CFG_ADC_CLK_DIV_DIV32       = 1,     /*!< DIV32 : Sample clock is 48MHz / 32                                        */
  ADC_SAR_CFG_ADC_CLK_DIV_DIV64       = 2,     /*!< DIV64 : Sample clock is 48MHz / 64                                        */
  ADC_SAR_CFG_ADC_CLK_DIV_DIV128      = 3,     /*!< DIV128 : Sample clock is 48MHz / 128                                      */
  ADC_SAR_CFG_ADC_CLK_DIV_DIV256      = 4,     /*!< DIV256 : Sample clock is 48MHz / 256                                      */
} ADC_SAR_CFG_ADC_CLK_DIV_Enum;

/* ============================================  ADC SAR_CFG EXT_BIAS [31..31]  ============================================= */
typedef enum {                                  /*!< ADC_SAR_CFG_EXT_BIAS                                                     */
  ADC_SAR_CFG_EXT_BIAS_DIS            = 0,     /*!< DIS : Disable internal switch capacitor bias current                      */
  ADC_SAR_CFG_EXT_BIAS_EN             = 1,     /*!< EN : Enable internal switch capacitor bias current                        */
} ADC_SAR_CFG_EXT_BIAS_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_ADC_V2_H */
