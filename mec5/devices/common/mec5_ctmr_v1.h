/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_CTMR_V1_H
#define _MEC5_CTMR_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief 16-bit Event Counter/Timer (MEC_CTMR0)
  */

typedef struct mec_ctmr_regs {                  /*!< (@ 0x40000D00) MEC_CTMR0 Structure                                        */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) 16-bit Event Counter/Timer Control                         */
  __IOM uint32_t  CEV_CTRL;                     /*!< (@ 0x00000004) 16-bit Event Counter/Timer clock and event control         */
  __IOM uint16_t  RELOAD;                       /*!< (@ 0x00000008) 16-bit Event Counter/Timer reload                          */
  __IM  uint16_t  RESERVED;
  __IOM uint16_t  COUNT;                        /*!< (@ 0x0000000C) 16-bit Event Counter/Timer counter(RO)                     */
  __IM  uint16_t  RESERVED1;
} MEC_CTMR_Type;                                /*!< Size = 16 (0x10)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_CTMR_CTRL_ENABLE_Pos          (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_CTMR_CTRL_ENABLE_Msk          (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_CTMR_CTRL_RESET_Pos           (1UL)                     /*!< RESET (Bit 1)                                         */
#define MEC_CTMR_CTRL_RESET_Msk           (0x2UL)                   /*!< RESET (Bitfield-Mask: 0x01)                           */
#define MEC_CTMR_CTRL_MODE_Pos            (2UL)                     /*!< MODE (Bit 2)                                          */
#define MEC_CTMR_CTRL_MODE_Msk            (0xcUL)                   /*!< MODE (Bitfield-Mask: 0x03)                            */
#define MEC_CTMR_CTRL_INPOL_Pos           (4UL)                     /*!< INPOL (Bit 4)                                         */
#define MEC_CTMR_CTRL_INPOL_Msk           (0x10UL)                  /*!< INPOL (Bitfield-Mask: 0x01)                           */
#define MEC_CTMR_CTRL_CNT_DIR_Pos         (5UL)                     /*!< CNT_DIR (Bit 5)                                       */
#define MEC_CTMR_CTRL_CNT_DIR_Msk         (0x20UL)                  /*!< CNT_DIR (Bitfield-Mask: 0x01)                         */
#define MEC_CTMR_CTRL_TOUT_EN_Pos         (6UL)                     /*!< TOUT_EN (Bit 6)                                       */
#define MEC_CTMR_CTRL_TOUT_EN_Msk         (0x40UL)                  /*!< TOUT_EN (Bitfield-Mask: 0x01)                         */
#define MEC_CTMR_CTRL_RLOAD_Pos           (7UL)                     /*!< RLOAD (Bit 7)                                         */
#define MEC_CTMR_CTRL_RLOAD_Msk           (0x80UL)                  /*!< RLOAD (Bitfield-Mask: 0x01)                           */
#define MEC_CTMR_CTRL_FILT_BYP_Pos        (8UL)                     /*!< FILT_BYP (Bit 8)                                      */
#define MEC_CTMR_CTRL_FILT_BYP_Msk        (0x100UL)                 /*!< FILT_BYP (Bitfield-Mask: 0x01)                        */
#define MEC_CTMR_CTRL_PD_Pos              (9UL)                     /*!< PD (Bit 9)                                            */
#define MEC_CTMR_CTRL_PD_Msk              (0x200UL)                 /*!< PD (Bitfield-Mask: 0x01)                              */
#define MEC_CTMR_CTRL_TOUT_POL_Pos        (10UL)                    /*!< TOUT_POL (Bit 10)                                     */
#define MEC_CTMR_CTRL_TOUT_POL_Msk        (0x400UL)                 /*!< TOUT_POL (Bitfield-Mask: 0x01)                        */
#define MEC_CTMR_CTRL_SLP_EN_Pos          (11UL)                    /*!< SLP_EN (Bit 11)                                       */
#define MEC_CTMR_CTRL_SLP_EN_Msk          (0x800UL)                 /*!< SLP_EN (Bitfield-Mask: 0x01)                          */
#define MEC_CTMR_CTRL_CLK_REQ_Pos         (12UL)                    /*!< CLK_REQ (Bit 12)                                      */
#define MEC_CTMR_CTRL_CLK_REQ_Msk         (0x1000UL)                /*!< CLK_REQ (Bitfield-Mask: 0x01)                         */
/* =======================================================  CEV_CTRL  ======================================================== */
#define MEC_CTMR_CEV_CTRL_TCLK_FREQ_Pos   (0UL)                     /*!< TCLK_FREQ (Bit 0)                                     */
#define MEC_CTMR_CEV_CTRL_TCLK_FREQ_Msk   (0xfUL)                   /*!< TCLK_FREQ (Bitfield-Mask: 0x0f)                       */
#define MEC_CTMR_CEV_CTRL_EDGE_Pos        (5UL)                     /*!< EDGE (Bit 5)                                          */
#define MEC_CTMR_CEV_CTRL_EDGE_Msk        (0x60UL)                  /*!< EDGE (Bitfield-Mask: 0x03)                            */
#define MEC_CTMR_CEV_CTRL_EVENT_SRC_Pos   (7UL)                     /*!< EVENT_SRC (Bit 7)                                     */
#define MEC_CTMR_CEV_CTRL_EVENT_SRC_Msk   (0x80UL)                  /*!< EVENT_SRC (Bitfield-Mask: 0x01)                       */
#define MEC_CTMR_CEV_CTRL_FCLK_FREQ_Pos   (8UL)                     /*!< FCLK_FREQ (Bit 8)                                     */
#define MEC_CTMR_CEV_CTRL_FCLK_FREQ_Msk   (0xf00UL)                 /*!< FCLK_FREQ (Bitfield-Mask: 0x0f)                       */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* =============================================  MEC_CTMR CTRL ENABLE [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_CTMR_CTRL_ENABLE                                                     */
  MEC_CTMR_CTRL_ENABLE_OFF            = 0,     /*!< OFF : Timer block is off and clocks are gated                             */
  MEC_CTMR_CTRL_ENABLE_ON             = 1,     /*!< ON : Timer block is off and clocks are ungated                            */
} MEC_CTMR_CTRL_ENABLE_Enum;

/* ==============================================  MEC_CTMR CTRL RESET [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_CTMR_CTRL_RESET                                                      */
  MEC_CTMR_CTRL_RESET_OFF             = 0,     /*!< OFF : Self-reset not active                                               */
  MEC_CTMR_CTRL_RESET_ON              = 1,     /*!< ON : Enable timer self-reset                                              */
} MEC_CTMR_CTRL_RESET_Enum;

/* ==============================================  MEC_CTMR CTRL MODE [2..3]  =============================================== */
typedef enum {                                  /*!< MEC_CTMR_CTRL_MODE                                                       */
  MEC_CTMR_CTRL_MODE_TIMER            = 0,     /*!< TIMER : Timer mode selected                                               */
  MEC_CTMR_CTRL_MODE_EVENT            = 1,     /*!< EVENT : Event mode selected                                               */
  MEC_CTMR_CTRL_MODE_ONE_SHOT         = 2,     /*!< ONE_SHOT : One shot mode selected                                         */
  MEC_CTMR_CTRL_MODE_MEAS             = 3,     /*!< MEAS : Measurement mode selected                                          */
} MEC_CTMR_CTRL_MODE_Enum;

/* ==============================================  MEC_CTMR CTRL INPOL [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_CTMR_CTRL_INPOL                                                      */
  MEC_CTMR_CTRL_INPOL_INVERTED        = 1,     /*!< INVERTED : TIN input signa polarity is inverted                           */
} MEC_CTMR_CTRL_INPOL_Enum;

/* =============================================  MEC_CTMR CTRL CNT_DIR [5..5]  ============================================= */
typedef enum {                                  /*!< MEC_CTMR_CTRL_CNT_DIR                                                    */
  MEC_CTMR_CTRL_CNT_DIR_UP            = 1,     /*!< UP : Event mode(Count up). Timer mode(pause when TIN de-asserted)         */
} MEC_CTMR_CTRL_CNT_DIR_Enum;

/* =============================================  MEC_CTMR CTRL TOUT_EN [6..6]  ============================================= */
typedef enum {                                  /*!< MEC_CTMR_CTRL_TOUT_EN                                                    */
  MEC_CTMR_CTRL_TOUT_EN_ON            = 1,     /*!< ON : TOU pin function enabled                                             */
} MEC_CTMR_CTRL_TOUT_EN_Enum;

/* ==============================================  MEC_CTMR CTRL RLOAD [7..7]  ============================================== */
typedef enum {                                  /*!< MEC_CTMR_CTRL_RLOAD                                                      */
  MEC_CTMR_CTRL_RLOAD_EN              = 1,     /*!< EN : Reload timer from preload register on over/under flow                */
} MEC_CTMR_CTRL_RLOAD_Enum;

/* ============================================  MEC_CTMR CTRL FILT_BYP [8..8]  ============================================= */
typedef enum {                                  /*!< MEC_CTMR_CTRL_FILT_BYP                                                   */
  MEC_CTMR_CTRL_FILT_BYP_EN           = 1,     /*!< EN : Bypass TIN input filter                                              */
} MEC_CTMR_CTRL_FILT_BYP_Enum;

/* ===============================================  MEC_CTMR CTRL PD [9..9]  ================================================ */
typedef enum {                                  /*!< MEC_CTMR_CTRL_PD                                                         */
  MEC_CTMR_CTRL_PD_EN                 = 1,     /*!< EN : Power down (clock gate) timer                                        */
} MEC_CTMR_CTRL_PD_Enum;

/* ===========================================  MEC_CTMR CTRL TOUT_POL [10..10]  ============================================ */
typedef enum {                                  /*!< MEC_CTMR_CTRL_TOUT_POL                                                   */
  MEC_CTMR_CTRL_TOUT_POL_INVERT       = 1,     /*!< INVERT : Invert TOUT signal(active low)                                   */
} MEC_CTMR_CTRL_TOUT_POL_Enum;

/* ============================================  MEC_CTMR CTRL SLP_EN [11..11]  ============================================= */
typedef enum {                                  /*!< MEC_CTMR_CTRL_SLP_EN                                                     */
  MEC_CTMR_CTRL_SLP_EN_ACTIVE         = 1,     /*!< ACTIVE : Read-only state of Timer's PCR Sleep Enable bit                  */
} MEC_CTMR_CTRL_SLP_EN_Enum;

/* ============================================  MEC_CTMR CTRL CLK_REQ [12..12]  ============================================ */
typedef enum {                                  /*!< MEC_CTMR_CTRL_CLK_REQ                                                    */
  MEC_CTMR_CTRL_CLK_REQ_ACTIVE        = 1,     /*!< ACTIVE : Read-only state of Timer's PCR Clock Required bit                */
} MEC_CTMR_CTRL_CLK_REQ_Enum;

/* =======================================================  CEV_CTRL  ======================================================== */
/* ==========================================  MEC_CTMR CEV_CTRL TCLK_FREQ [0..3]  ========================================== */
typedef enum {                                  /*!< MEC_CTMR_CEV_CTRL_TCLK_FREQ                                              */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_48M     = 0,     /*!< 48M : Select 48MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_24M     = 1,     /*!< 24M : Select 24MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_12M     = 2,     /*!< 12M : Select 12MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_6M      = 3,     /*!< 6M : Select 6MHz timer clock                                              */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_3M      = 4,     /*!< 3M : Select 3MHz timer clock                                              */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_1500K   = 5,     /*!< 1500K : Select 1500KHz timer clock                                        */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_750K    = 6,     /*!< 750K : Select 750KHz timer clock                                          */
  MEC_CTMR_CEV_CTRL_TCLK_FREQ_375K    = 7,     /*!< 375K : Select 375KHz timer clock                                          */
} MEC_CTMR_CEV_CTRL_TCLK_FREQ_Enum;

/* ============================================  MEC_CTMR CEV_CTRL EDGE [5..6]  ============================================= */
typedef enum {                                  /*!< MEC_CTMR_CEV_CTRL_EDGE                                                   */
  MEC_CTMR_CEV_CTRL_EDGE_FALLING      = 0,     /*!< FALLING : Falling edge trigger                                            */
  MEC_CTMR_CEV_CTRL_EDGE_RISING       = 1,     /*!< RISING : Rising edge trigger                                              */
  MEC_CTMR_CEV_CTRL_EDGE_BOTH         = 2,     /*!< BOTH : Trigger on both edges                                              */
  MEC_CTMR_CEV_CTRL_EDGE_ONE_SHOT_EN  = 3,     /*!< ONE_SHOT_EN : Only for One shot mode: trigger when timer enable
                                                     set                                                                       */
} MEC_CTMR_CEV_CTRL_EDGE_Enum;

/* ==========================================  MEC_CTMR CEV_CTRL EVENT_SRC [7..7]  ========================================== */
typedef enum {                                  /*!< MEC_CTMR_CEV_CTRL_EVENT_SRC                                              */
  MEC_CTMR_CEV_CTRL_EVENT_SRC_OVERFLOW = 0,    /*!< OVERFLOW : Event mode count source is overflow                            */
  MEC_CTMR_CEV_CTRL_EVENT_SRC_TIN     = 1,     /*!< TIN : Event mode count source in TIN pin                                  */
} MEC_CTMR_CEV_CTRL_EVENT_SRC_Enum;

/* =========================================  MEC_CTMR CEV_CTRL FCLK_FREQ [8..11]  ========================================== */
typedef enum {                                  /*!< MEC_CTMR_CEV_CTRL_FCLK_FREQ                                              */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_48M     = 0,     /*!< 48M : Select 48MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_24M     = 1,     /*!< 24M : Select 24MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_12M     = 2,     /*!< 12M : Select 12MHz timer clock                                            */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_6M      = 3,     /*!< 6M : Select 6MHz timer clock                                              */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_3M      = 4,     /*!< 3M : Select 3MHz timer clock                                              */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_1500K   = 5,     /*!< 1500K : Select 1500KHz timer clock                                        */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_750K    = 6,     /*!< 750K : Select 750KHz timer clock                                          */
  MEC_CTMR_CEV_CTRL_FCLK_FREQ_375K    = 7,     /*!< 375K : Select 375KHz timer clock                                          */
} MEC_CTMR_CEV_CTRL_FCLK_FREQ_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CTMR_V1_H */
