/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_RPMFAN_V1_H
#define _MEC5_RPMFAN_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief PWM Fan controller with algorithms (MEC_RPMFAN)
  */

typedef struct mec_rpmfan_regs {                /*!< (@ 0x4000A000) MEC_RPMFAN Structure                                      */
  __IOM uint16_t  FAN_SET;                      /*!< (@ 0x00000000) RPMFAN fan setting                                         */
  __IOM uint16_t  FAN_CFG;                      /*!< (@ 0x00000002) RPMFAN fan configuration                                   */
  __IOM uint8_t   PWM_DIV;                      /*!< (@ 0x00000004) RPMFAN PWM divider                                         */
  __IOM uint8_t   GAIN;                         /*!< (@ 0x00000005) RPMFAN gain                                                */
  __IOM uint8_t   SPINUP;                       /*!< (@ 0x00000006) RPMFAN spin up                                             */
  __IOM uint8_t   STEP;                         /*!< (@ 0x00000007) RPMFAN step                                                */
  __IOM uint8_t   MIN_DRV;                      /*!< (@ 0x00000008) RPMFAN minimum drive                                       */
  __IOM uint8_t   VAL_TACH_CNT;                 /*!< (@ 0x00000009) RPMFAN valid TACH count                                    */
  __IOM uint16_t  DRV_FAIL_BAND;                /*!< (@ 0x0000000A) RPMFAN drive fail band                                     */
  __IOM uint16_t  TACH_TARGET;                  /*!< (@ 0x0000000C) RPMFAN TACH target                                         */
  __IOM uint16_t  TACH_RD;                      /*!< (@ 0x0000000E) RPMFAN TACH reading                                        */
  __IOM uint8_t   DRV_BASE_FREQ;                /*!< (@ 0x00000010) RPMFAN driver base frequency                               */
  __IOM uint8_t   FAN_STATUS;                   /*!< (@ 0x00000011) RPMFAN fan status                                          */
} MEC_RPMFAN_Type;                              /*!< Size = 18 (0x12)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  FAN_SET  ======================================================== */
#define MEC_RPMFAN_FAN_SET_FSET_Pos       (6UL)                     /*!< FSET (Bit 6)                                          */
#define MEC_RPMFAN_FAN_SET_FSET_Msk       (0xffc0UL)                /*!< FSET (Bitfield-Mask: 0x3ff)                           */
/* ========================================================  FAN_CFG  ======================================================== */
#define MEC_RPMFAN_FAN_CFG_UPDINTRV_Pos   (0UL)                     /*!< UPDINTRV (Bit 0)                                      */
#define MEC_RPMFAN_FAN_CFG_UPDINTRV_Msk   (0x7UL)                   /*!< UPDINTRV (Bitfield-Mask: 0x07)                        */
#define MEC_RPMFAN_FAN_CFG_EDGES_Pos      (3UL)                     /*!< EDGES (Bit 3)                                         */
#define MEC_RPMFAN_FAN_CFG_EDGES_Msk      (0x18UL)                  /*!< EDGES (Bitfield-Mask: 0x03)                           */
#define MEC_RPMFAN_FAN_CFG_RANGE_Pos      (5UL)                     /*!< RANGE (Bit 5)                                         */
#define MEC_RPMFAN_FAN_CFG_RANGE_Msk      (0x60UL)                  /*!< RANGE (Bitfield-Mask: 0x03)                           */
#define MEC_RPMFAN_FAN_CFG_EN_ALGO_Pos    (7UL)                     /*!< EN_ALGO (Bit 7)                                       */
#define MEC_RPMFAN_FAN_CFG_EN_ALGO_Msk    (0x80UL)                  /*!< EN_ALGO (Bitfield-Mask: 0x01)                         */
#define MEC_RPMFAN_FAN_CFG_INVPOL_Pos     (9UL)                     /*!< INVPOL (Bit 9)                                        */
#define MEC_RPMFAN_FAN_CFG_INVPOL_Msk     (0x200UL)                 /*!< INVPOL (Bitfield-Mask: 0x01)                          */
#define MEC_RPMFAN_FAN_CFG_ERR_RNG_Pos    (10UL)                    /*!< ERR_RNG (Bit 10)                                      */
#define MEC_RPMFAN_FAN_CFG_ERR_RNG_Msk    (0xc00UL)                 /*!< ERR_RNG (Bitfield-Mask: 0x03)                         */
#define MEC_RPMFAN_FAN_CFG_DERIV_Pos      (12UL)                    /*!< DERIV (Bit 12)                                        */
#define MEC_RPMFAN_FAN_CFG_DERIV_Msk      (0x3000UL)                /*!< DERIV (Bitfield-Mask: 0x03)                           */
#define MEC_RPMFAN_FAN_CFG_GLPF_Pos       (14UL)                    /*!< GLPF (Bit 14)                                         */
#define MEC_RPMFAN_FAN_CFG_GLPF_Msk       (0x4000UL)                /*!< GLPF (Bitfield-Mask: 0x01)                            */
#define MEC_RPMFAN_FAN_CFG_RRC_Pos        (15UL)                    /*!< RRC (Bit 15)                                          */
#define MEC_RPMFAN_FAN_CFG_RRC_Msk        (0x8000UL)                /*!< RRC (Bitfield-Mask: 0x01)                             */
/* ========================================================  PWM_DIV  ======================================================== */
/* =========================================================  GAIN  ========================================================== */
#define MEC_RPMFAN_GAIN_GAINP_Pos         (0UL)                     /*!< GAINP (Bit 0)                                         */
#define MEC_RPMFAN_GAIN_GAINP_Msk         (0x3UL)                   /*!< GAINP (Bitfield-Mask: 0x03)                           */
#define MEC_RPMFAN_GAIN_GAINI_Pos         (2UL)                     /*!< GAINI (Bit 2)                                         */
#define MEC_RPMFAN_GAIN_GAINI_Msk         (0xcUL)                   /*!< GAINI (Bitfield-Mask: 0x03)                           */
#define MEC_RPMFAN_GAIN_GAIND_Pos         (4UL)                     /*!< GAIND (Bit 4)                                         */
#define MEC_RPMFAN_GAIN_GAIND_Msk         (0x30UL)                  /*!< GAIND (Bitfield-Mask: 0x03)                           */
/* ========================================================  SPINUP  ========================================================= */
#define MEC_RPMFAN_SPINUP_SPINUPTM_Pos    (0UL)                     /*!< SPINUPTM (Bit 0)                                      */
#define MEC_RPMFAN_SPINUP_SPINUPTM_Msk    (0x3UL)                   /*!< SPINUPTM (Bitfield-Mask: 0x03)                        */
#define MEC_RPMFAN_SPINUP_SPINLVL_Pos     (2UL)                     /*!< SPINLVL (Bit 2)                                       */
#define MEC_RPMFAN_SPINUP_SPINLVL_Msk     (0x1cUL)                  /*!< SPINLVL (Bitfield-Mask: 0x07)                         */
#define MEC_RPMFAN_SPINUP_NOKICK_Pos      (5UL)                     /*!< NOKICK (Bit 5)                                        */
#define MEC_RPMFAN_SPINUP_NOKICK_Msk      (0x20UL)                  /*!< NOKICK (Bitfield-Mask: 0x01)                          */
#define MEC_RPMFAN_SPINUP_DFCNT_Pos       (6UL)                     /*!< DFCNT (Bit 6)                                         */
#define MEC_RPMFAN_SPINUP_DFCNT_Msk       (0xc0UL)                  /*!< DFCNT (Bitfield-Mask: 0x03)                           */
/* =========================================================  STEP  ========================================================== */
/* ========================================================  MIN_DRV  ======================================================== */
/* =====================================================  VAL_TACH_CNT  ====================================================== */
/* =====================================================  DRV_FAIL_BAND  ===================================================== */
#define MEC_RPMFAN_DRV_FAIL_BAND_TCNTS_Pos (3UL)                    /*!< TCNTS (Bit 3)                                         */
#define MEC_RPMFAN_DRV_FAIL_BAND_TCNTS_Msk (0xfff8UL)               /*!< TCNTS (Bitfield-Mask: 0x1fff)                         */
/* ======================================================  TACH_TARGET  ====================================================== */
#define MEC_RPMFAN_TACH_TARGET_TARGTV_Pos (3UL)                     /*!< TARGTV (Bit 3)                                        */
#define MEC_RPMFAN_TACH_TARGET_TARGTV_Msk (0xfff8UL)                /*!< TARGTV (Bitfield-Mask: 0x1fff)                        */
/* ========================================================  TACH_RD  ======================================================== */
#define MEC_RPMFAN_TACH_RD_TRD_Pos        (3UL)                     /*!< TRD (Bit 3)                                           */
#define MEC_RPMFAN_TACH_RD_TRD_Msk        (0xfff8UL)                /*!< TRD (Bitfield-Mask: 0x1fff)                           */
/* =====================================================  DRV_BASE_FREQ  ===================================================== */
#define MEC_RPMFAN_DRV_BASE_FREQ_FREQ_Pos (0UL)                     /*!< FREQ (Bit 0)                                          */
#define MEC_RPMFAN_DRV_BASE_FREQ_FREQ_Msk (0x3UL)                   /*!< FREQ (Bitfield-Mask: 0x03)                            */
/* ======================================================  FAN_STATUS  ======================================================= */
#define MEC_RPMFAN_FAN_STATUS_STALL_Pos   (0UL)                     /*!< STALL (Bit 0)                                         */
#define MEC_RPMFAN_FAN_STATUS_STALL_Msk   (0x1UL)                   /*!< STALL (Bitfield-Mask: 0x01)                           */
#define MEC_RPMFAN_FAN_STATUS_SPINUP_Pos  (1UL)                     /*!< SPINUP (Bit 1)                                        */
#define MEC_RPMFAN_FAN_STATUS_SPINUP_Msk  (0x2UL)                   /*!< SPINUP (Bitfield-Mask: 0x01)                          */
#define MEC_RPMFAN_FAN_STATUS_DRVFAIL_Pos (5UL)                     /*!< DRVFAIL (Bit 5)                                       */
#define MEC_RPMFAN_FAN_STATUS_DRVFAIL_Msk (0x20UL)                  /*!< DRVFAIL (Bitfield-Mask: 0x01)                         */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  FAN_CFG  ======================================================== */
/* ==========================================  MEC_RPMFAN FAN_CFG UPDINTRV [0..2]  ========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_UPDINTRV                                              */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_100MS   = 0,     /*!< 100MS : Update fan driver every 100 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_200MS   = 1,     /*!< 200MS : Update fan driver every 200 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_300MS   = 2,     /*!< 300MS : Update fan driver every 300 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_400MS   = 3,     /*!< 400MS : Update fan driver every 400 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_500MS   = 4,     /*!< 500MS : Update fan driver every 500 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_800MS   = 5,     /*!< 800MS : Update fan driver every 800 ms                                    */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_1200MS  = 6,     /*!< 1200MS : Update fan driver every 1200 ms                                  */
  MEC_RPMFAN_FAN_CFG_UPDINTRV_1600MS  = 7,     /*!< 1600MS : Update fan driver every 1600 ms                                  */
} MEC_RPMFAN_FAN_CFG_UPDINTRV_Enum;

/* ===========================================  MEC_RPMFAN FAN_CFG EDGES [3..4]  ============================================ */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_EDGES                                                 */
  MEC_RPMFAN_FAN_CFG_EDGES_3          = 0,     /*!< 3 : Minimum of 3 edges per rotation                                       */
  MEC_RPMFAN_FAN_CFG_EDGES_5          = 1,     /*!< 5 : Minimum of 5 edges per rotation                                       */
  MEC_RPMFAN_FAN_CFG_EDGES_7          = 2,     /*!< 7 : Minimum of 7 edges per rotation                                       */
  MEC_RPMFAN_FAN_CFG_EDGES_9          = 3,     /*!< 9 : Minimum of 9 edges per rotation                                       */
} MEC_RPMFAN_FAN_CFG_EDGES_Enum;

/* ===========================================  MEC_RPMFAN FAN_CFG RANGE [5..6]  ============================================ */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_RANGE                                                 */
  MEC_RPMFAN_FAN_CFG_RANGE_MULT1      = 0,     /*!< MULT1 : Tachometer count multiplier is 1                                  */
  MEC_RPMFAN_FAN_CFG_RANGE_MULT2      = 1,     /*!< MULT2 : Tachometer count multiplier is 2                                  */
  MEC_RPMFAN_FAN_CFG_RANGE_MULT4      = 2,     /*!< MULT4 : Tachometer count multiplier is 4                                  */
  MEC_RPMFAN_FAN_CFG_RANGE_MULT8      = 3,     /*!< MULT8 : Tachometer count multiplier is 8                                  */
} MEC_RPMFAN_FAN_CFG_RANGE_Enum;

/* ==========================================  MEC_RPMFAN FAN_CFG EN_ALGO [7..7]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_EN_ALGO                                               */
  MEC_RPMFAN_FAN_CFG_EN_ALGO_ON       = 1,     /*!< ON : Enable                                                               */
} MEC_RPMFAN_FAN_CFG_EN_ALGO_Enum;

/* ===========================================  MEC_RPMFAN FAN_CFG INVPOL [9..9]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_INVPOL                                                */
  MEC_RPMFAN_FAN_CFG_INVPOL_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_RPMFAN_FAN_CFG_INVPOL_Enum;

/* =========================================  MEC_RPMFAN FAN_CFG ERR_RNG [10..11]  ========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_ERR_RNG                                               */
  MEC_RPMFAN_FAN_CFG_ERR_RNG_RPM0     = 0,     /*!< RPM0 : No adjust if speed within 0 RPM of target RPM                      */
  MEC_RPMFAN_FAN_CFG_ERR_RNG_RPM50    = 1,     /*!< RPM50 : No adjust if speed within 50 RPM of target RPM                    */
  MEC_RPMFAN_FAN_CFG_ERR_RNG_RPM100   = 2,     /*!< RPM100 : No adjust if speed within 100 RPM of target RPM                  */
  MEC_RPMFAN_FAN_CFG_ERR_RNG_RPM200   = 3,     /*!< RPM200 : No adjust if speed within 200 RPM of target RPM                  */
} MEC_RPMFAN_FAN_CFG_ERR_RNG_Enum;

/* ==========================================  MEC_RPMFAN FAN_CFG DERIV [12..13]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_DERIV                                                 */
  MEC_RPMFAN_FAN_CFG_DERIV_NONE       = 0,     /*!< NONE : No derivative value used                                           */
  MEC_RPMFAN_FAN_CFG_DERIV_BASIC      = 1,     /*!< BASIC : Basic derivative computation used                                 */
  MEC_RPMFAN_FAN_CFG_DERIV_STEP       = 2,     /*!< STEP : Step derivative computation used                                   */
  MEC_RPMFAN_FAN_CFG_DERIV_BOTH       = 3,     /*!< BOTH : Both basic and step derivative terms used                          */
} MEC_RPMFAN_FAN_CFG_DERIV_Enum;

/* ===========================================  MEC_RPMFAN FAN_CFG GLPF [14..14]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_GLPF                                                  */
  MEC_RPMFAN_FAN_CFG_GLPF_EN          = 0,     /*!< EN : Enable                                                               */
  MEC_RPMFAN_FAN_CFG_GLPF_DIS         = 1,     /*!< DIS : Disable                                                             */
} MEC_RPMFAN_FAN_CFG_GLPF_Enum;

/* ===========================================  MEC_RPMFAN FAN_CFG RRC [15..15]  ============================================ */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_CFG_RRC                                                   */
  MEC_RPMFAN_FAN_CFG_RRC_EN           = 1,     /*!< EN : Enable ramp control for manual mode                                  */
} MEC_RPMFAN_FAN_CFG_RRC_Enum;

/* =========================================================  GAIN  ========================================================== */
/* =============================================  MEC_RPMFAN GAIN GAINP [0..1]  ============================================= */
typedef enum {                                  /*!< MEC_RPMFAN_GAIN_GAINP                                                    */
  MEC_RPMFAN_GAIN_GAINP_1X            = 0,     /*!< 1X : Proportional gain of 1X                                              */
  MEC_RPMFAN_GAIN_GAINP_2X            = 1,     /*!< 2X : Proportional gain of 2X                                              */
  MEC_RPMFAN_GAIN_GAINP_4X            = 2,     /*!< 4X : Proportional gain of 4X                                              */
  MEC_RPMFAN_GAIN_GAINP_8X            = 3,     /*!< 8X : Proportional gain of 8X                                              */
} MEC_RPMFAN_GAIN_GAINP_Enum;

/* =============================================  MEC_RPMFAN GAIN GAINI [2..3]  ============================================= */
typedef enum {                                  /*!< MEC_RPMFAN_GAIN_GAINI                                                    */
  MEC_RPMFAN_GAIN_GAINI_1X            = 0,     /*!< 1X : Integral gain of 1X                                                  */
  MEC_RPMFAN_GAIN_GAINI_2X            = 1,     /*!< 2X : Integral gain of 2X                                                  */
  MEC_RPMFAN_GAIN_GAINI_4X            = 2,     /*!< 4X : Integral gain of 4X                                                  */
  MEC_RPMFAN_GAIN_GAINI_8X            = 3,     /*!< 8X : Integral gain of 8X                                                  */
} MEC_RPMFAN_GAIN_GAINI_Enum;

/* =============================================  MEC_RPMFAN GAIN GAIND [4..5]  ============================================= */
typedef enum {                                  /*!< MEC_RPMFAN_GAIN_GAIND                                                    */
  MEC_RPMFAN_GAIN_GAIND_1X            = 0,     /*!< 1X : Derviative gain of 1X                                                */
  MEC_RPMFAN_GAIN_GAIND_2X            = 1,     /*!< 2X : Derviative gain of 2X                                                */
  MEC_RPMFAN_GAIN_GAIND_4X            = 2,     /*!< 4X : Derviative gain of 4X                                                */
  MEC_RPMFAN_GAIN_GAIND_8X            = 3,     /*!< 8X : Derviative gain of 8X                                                */
} MEC_RPMFAN_GAIN_GAIND_Enum;

/* ========================================================  SPINUP  ========================================================= */
/* ==========================================  MEC_RPMFAN SPINUP SPINUPTM [0..1]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_SPINUP_SPINUPTM                                               */
  MEC_RPMFAN_SPINUP_SPINUPTM_250MS    = 0,     /*!< 250MS : Maximum spin up time is 250 ms                                    */
  MEC_RPMFAN_SPINUP_SPINUPTM_500MS    = 1,     /*!< 500MS : Maximum spin up time is 500 ms                                    */
  MEC_RPMFAN_SPINUP_SPINUPTM_1S       = 2,     /*!< 1S : Maximum spin up time is 1 second                                     */
  MEC_RPMFAN_SPINUP_SPINUPTM_2S       = 3,     /*!< 2S : Maximum spin up time is 2 seconds                                    */
} MEC_RPMFAN_SPINUP_SPINUPTM_Enum;

/* ===========================================  MEC_RPMFAN SPINUP SPINLVL [2..4]  =========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_SPINUP_SPINLVL                                                */
  MEC_RPMFAN_SPINUP_SPINLVL_30P       = 0,     /*!< 30P : Final spin drive level of 30 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_35P       = 1,     /*!< 35P : Final spin drive level of 35 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_40P       = 2,     /*!< 40P : Final spin drive level of 40 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_45P       = 3,     /*!< 45P : Final spin drive level of 45 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_50P       = 4,     /*!< 50P : Final spin drive level of 50 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_55P       = 5,     /*!< 55P : Final spin drive level of 55 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_60P       = 6,     /*!< 60P : Final spin drive level of 60 percent                                */
  MEC_RPMFAN_SPINUP_SPINLVL_65P       = 7,     /*!< 65P : Final spin drive level of 65 percent                                */
} MEC_RPMFAN_SPINUP_SPINLVL_Enum;

/* ===========================================  MEC_RPMFAN SPINUP NOKICK [5..5]  ============================================ */
typedef enum {                                  /*!< MEC_RPMFAN_SPINUP_NOKICK                                                 */
  MEC_RPMFAN_SPINUP_NOKICK_ON         = 1,     /*!< ON : Do not drive fan to 100% during spin up                              */
} MEC_RPMFAN_SPINUP_NOKICK_Enum;

/* ============================================  MEC_RPMFAN SPINUP DFCNT [6..7]  ============================================ */
typedef enum {                                  /*!< MEC_RPMFAN_SPINUP_DFCNT                                                  */
  MEC_RPMFAN_SPINUP_DFCNT_NONE        = 0,     /*!< NONE : Drive fail detection disabled                                      */
  MEC_RPMFAN_SPINUP_DFCNT_16          = 1,     /*!< 16 : Try 16 update cycles                                                 */
  MEC_RPMFAN_SPINUP_DFCNT_32          = 2,     /*!< 32 : Try 32 update cycles                                                 */
  MEC_RPMFAN_SPINUP_DFCNT_2S          = 3,     /*!< 2S : Try 64 update cycles                                                 */
} MEC_RPMFAN_SPINUP_DFCNT_Enum;

/* =====================================================  DRV_BASE_FREQ  ===================================================== */
/* =========================================  MEC_RPMFAN DRV_BASE_FREQ FREQ [0..1]  ========================================= */
typedef enum {                                  /*!< MEC_RPMFAN_DRV_BASE_FREQ_FREQ                                            */
  MEC_RPMFAN_DRV_BASE_FREQ_FREQ_26P8K = 0,     /*!< 26P8K : PWM base frequency of 26.8 KHz                                    */
  MEC_RPMFAN_DRV_BASE_FREQ_FREQ_23P4K = 1,     /*!< 23P4K : PWM base frequency of 23.4 KHz                                    */
  MEC_RPMFAN_DRV_BASE_FREQ_FREQ_4P67K = 2,     /*!< 4P67K : PWM base frequency of 4.67 KHz                                    */
  MEC_RPMFAN_DRV_BASE_FREQ_FREQ_2P34K = 3,     /*!< 2P34K : PWM base frequency of 2.34 KHz                                    */
} MEC_RPMFAN_DRV_BASE_FREQ_FREQ_Enum;

/* ======================================================  FAN_STATUS  ======================================================= */
/* ==========================================  MEC_RPMFAN FAN_STATUS STALL [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_STATUS_STALL                                              */
  MEC_RPMFAN_FAN_STATUS_STALL_ACTIVE  = 1,     /*!< ACTIVE : Active                                                           */
} MEC_RPMFAN_FAN_STATUS_STALL_Enum;

/* =========================================  MEC_RPMFAN FAN_STATUS SPINUP [1..1]  ========================================== */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_STATUS_SPINUP                                             */
  MEC_RPMFAN_FAN_STATUS_SPINUP_ACTIVE = 1,     /*!< ACTIVE : Active                                                           */
} MEC_RPMFAN_FAN_STATUS_SPINUP_Enum;

/* =========================================  MEC_RPMFAN FAN_STATUS DRVFAIL [5..5]  ========================================= */
typedef enum {                                  /*!< MEC_RPMFAN_FAN_STATUS_DRVFAIL                                            */
  MEC_RPMFAN_FAN_STATUS_DRVFAIL_ACTIVE = 1,    /*!< ACTIVE : Active                                                           */
} MEC_RPMFAN_FAN_STATUS_DRVFAIL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_RPMFAN_V1_H */
