/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ECS_V2_5_H
#define _MEC5_ECS_V2_5_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief EC subsystem registers (MEC_ECS)
  */

typedef struct mec_ecs_regs {                   /*!< (@ 0x4000FC00) MEC_ECS Structure                                          */
  __IM  uint32_t  RESERVED;
  __IOM uint32_t  AERRA;                        /*!< (@ 0x00000004) ECS AHB Error Address capture                              */
  __IM  uint32_t  RESERVED1[2];
  __IOM uint32_t  OSCID;                        /*!< (@ 0x00000010) ECS Oscillator ID                                          */
  __IOM uint32_t  AERRC;                        /*!< (@ 0x00000014) ECS AHB Error Address capture control                      */
  __IOM uint32_t  INTR_CTRL;                    /*!< (@ 0x00000018) ECS interrupt control                                      */
  __IOM uint32_t  ETM_CTRL;                     /*!< (@ 0x0000001C) ECS ETM trace enable                                       */
  __IOM uint32_t  DBG_CTRL;                     /*!< (@ 0x00000020) ECS Debug enable                                           */
  __IOM uint32_t  SECLK;                        /*!< (@ 0x00000024) ECS security lock                                          */
  __IOM uint32_t  WDTEVC;                       /*!< (@ 0x00000028) ECS WDT event count                                        */
  __IM  uint32_t  RESERVED2[5];
  __IOM uint32_t  PECI_CTRL;                    /*!< (@ 0x00000040) ECS PECI control                                           */
  __IM  uint32_t  RESERVED3[3];
  __IOM uint32_t  VCIFWO;                       /*!< (@ 0x00000050) ECS VCI firmware override                                  */
  __IOM uint32_t  BRSTS;                        /*!< (@ 0x00000054) ECS Boot-ROM status                                        */
  __IOM uint32_t  CRCFG;                        /*!< (@ 0x00000058) ECS crypto config                                          */
  __IOM uint32_t  CRRST;                        /*!< (@ 0x0000005C) ECS crypto reset                                           */
  __IM  uint32_t  RESERVED4[2];
  __IOM uint32_t  FEAT_LOCK;                    /*!< (@ 0x00000068) ECS feature lock                                           */
  __IOM uint32_t  MISC_LOCK;                    /*!< (@ 0x0000006C) ECS miscellaneous lock                                     */
  __IOM uint32_t  JCFG;                         /*!< (@ 0x00000070) ECS JTAG initiator config                                  */
  __IOM uint32_t  JSTS;                         /*!< (@ 0x00000074) ECS JTAG initiator status                                  */
  __IOM uint32_t  JTDO;                         /*!< (@ 0x00000078) ECS JTAG initiator TDO                                     */
  __IOM uint32_t  JTDI;                         /*!< (@ 0x0000007C) ECS JTAG initiator TDI                                     */
  __IOM uint32_t  JTMS;                         /*!< (@ 0x00000080) ECS JTAG initiator TMS                                     */
  __IOM uint32_t  JCMD;                         /*!< (@ 0x00000084) ECS JTAG initiator command                                 */
  __IM  uint32_t  RESERVED5[2];
  __IOM uint32_t  VWSC;                         /*!< (@ 0x00000090) ECS VWire source config                                    */
  __IOM uint32_t  CMPC;                         /*!< (@ 0x00000094) ECS comparator control                                     */
  __IOM uint32_t  CMPSC;                        /*!< (@ 0x00000098) ECS comparator sleep control                               */
  __IM  uint32_t  RESERVED6[5];
  __IOM uint32_t  EMBRST_EN;                    /*!< (@ 0x000000B0) Embedded Reset Enable                                      */
  __IOM uint32_t  EMBRST_TMOUT;                 /*!< (@ 0x000000B4) Embedded Reset timeout value                               */
  __IOM uint32_t  EMBRST_STS;                   /*!< (@ 0x000000B8) Embedded Reset Status                                      */
  __IM  uint32_t  EMBRST_CNT;                   /*!< (@ 0x000000BC) Embedded Reset Count                                       */
  __IM  uint32_t  RESERVED7[12];
  __IOM uint32_t  IPTRIM;                       /*!< (@ 0x000000F0) IP Trim                                                    */
  __IM  uint32_t  RESERVED8[20];
  __IOM uint32_t  SSSMR;                        /*!< (@ 0x00000144) System Sleep Status Mirror register                        */
  __IM  uint32_t  RESERVED9[14];
  __IOM uint32_t  BRSCR0;                       /*!< (@ 0x00000180) Boot-ROM Scratch 0                                         */
  __IOM uint32_t  BRSCR1;                       /*!< (@ 0x00000184) Boot-ROM Scratch 1                                         */
  __IOM uint32_t  BRSCR2;                       /*!< (@ 0x00000188) Boot-ROM Scratch 2                                         */
  __IOM uint32_t  BRSCR3;                       /*!< (@ 0x0000018C) Boot-ROM Scratch 3                                         */
} MEC_ECS_Type;                                 /*!< Size = 400 (0x190)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  AERRA  ========================================================= */
/* =========================================================  OSCID  ========================================================= */
/* =========================================================  AERRC  ========================================================= */
#define MEC_ECS_AERRC_CAP_Pos             (0UL)                     /*!< CAP (Bit 0)                                           */
#define MEC_ECS_AERRC_CAP_Msk             (0x1UL)                   /*!< CAP (Bitfield-Mask: 0x01)                             */
/* =======================================================  INTR_CTRL  ======================================================= */
#define MEC_ECS_INTR_CTRL_DIRECT_Pos      (0UL)                     /*!< DIRECT (Bit 0)                                        */
#define MEC_ECS_INTR_CTRL_DIRECT_Msk      (0x1UL)                   /*!< DIRECT (Bitfield-Mask: 0x01)                          */
/* =======================================================  ETM_CTRL  ======================================================== */
#define MEC_ECS_ETM_CTRL_TRACE_EN_Pos     (0UL)                     /*!< TRACE_EN (Bit 0)                                      */
#define MEC_ECS_ETM_CTRL_TRACE_EN_Msk     (0x1UL)                   /*!< TRACE_EN (Bitfield-Mask: 0x01)                        */
/* =======================================================  DBG_CTRL  ======================================================== */
#define MEC_ECS_DBG_CTRL_EN_Pos           (0UL)                     /*!< EN (Bit 0)                                            */
#define MEC_ECS_DBG_CTRL_EN_Msk           (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define MEC_ECS_DBG_CTRL_CFG_Pos          (1UL)                     /*!< CFG (Bit 1)                                           */
#define MEC_ECS_DBG_CTRL_CFG_Msk          (0x6UL)                   /*!< CFG (Bitfield-Mask: 0x03)                             */
#define MEC_ECS_DBG_CTRL_PULL_UPS_Pos     (3UL)                     /*!< PULL_UPS (Bit 3)                                      */
#define MEC_ECS_DBG_CTRL_PULL_UPS_Msk     (0x8UL)                   /*!< PULL_UPS (Bitfield-Mask: 0x01)                        */
#define MEC_ECS_DBG_CTRL_BNDRY_SCAN_Pos   (4UL)                     /*!< BNDRY_SCAN (Bit 4)                                    */
#define MEC_ECS_DBG_CTRL_BNDRY_SCAN_Msk   (0x10UL)                  /*!< BNDRY_SCAN (Bitfield-Mask: 0x01)                      */
#define MEC_ECS_DBG_CTRL_LOCK_Pos         (5UL)                     /*!< LOCK (Bit 5)                                          */
#define MEC_ECS_DBG_CTRL_LOCK_Msk         (0x20UL)                  /*!< LOCK (Bitfield-Mask: 0x01)                            */
/* =========================================================  SECLK  ========================================================= */
/* ========================================================  WDTEVC  ========================================================= */
/* =======================================================  PECI_CTRL  ======================================================= */
#define MEC_ECS_PECI_CTRL_PINS_Pos        (0UL)                     /*!< PINS (Bit 0)                                          */
#define MEC_ECS_PECI_CTRL_PINS_Msk        (0x1UL)                   /*!< PINS (Bitfield-Mask: 0x01)                            */
/* ========================================================  VCIFWO  ========================================================= */
#define MEC_ECS_VCIFWO_SYS_SHDN_nFW_Pos   (0UL)                     /*!< SYS_SHDN_nFW (Bit 0)                                  */
#define MEC_ECS_VCIFWO_SYS_SHDN_nFW_Msk   (0x1UL)                   /*!< SYS_SHDN_nFW (Bitfield-Mask: 0x01)                    */
/* =========================================================  BRSTS  ========================================================= */
/* =========================================================  CRCFG  ========================================================= */
/* =========================================================  CRRST  ========================================================= */
#define MEC_ECS_CRRST_PK_SRST_Pos         (1UL)                     /*!< PK_SRST (Bit 1)                                       */
#define MEC_ECS_CRRST_PK_SRST_Msk         (0x2UL)                   /*!< PK_SRST (Bitfield-Mask: 0x01)                         */
/* =======================================================  FEAT_LOCK  ======================================================= */
#define MEC_ECS_FEAT_LOCK_FEAT0_Pos       (0UL)                     /*!< FEAT0 (Bit 0)                                         */
#define MEC_ECS_FEAT_LOCK_FEAT0_Msk       (0x1UL)                   /*!< FEAT0 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_FEAT_LOCK_ESPI_Pos        (1UL)                     /*!< ESPI (Bit 1)                                          */
#define MEC_ECS_FEAT_LOCK_ESPI_Msk        (0x2UL)                   /*!< ESPI (Bitfield-Mask: 0x01)                            */
#define MEC_ECS_FEAT_LOCK_PUF_Pos         (2UL)                     /*!< PUF (Bit 2)                                           */
#define MEC_ECS_FEAT_LOCK_PUF_Msk         (0x4UL)                   /*!< PUF (Bitfield-Mask: 0x01)                             */
#define MEC_ECS_FEAT_LOCK_XTAL_Pos        (3UL)                     /*!< XTAL (Bit 3)                                          */
#define MEC_ECS_FEAT_LOCK_XTAL_Msk        (0x8UL)                   /*!< XTAL (Bitfield-Mask: 0x01)                            */
#define MEC_ECS_FEAT_LOCK_PWRGRD_Pos      (6UL)                     /*!< PWRGRD (Bit 6)                                        */
#define MEC_ECS_FEAT_LOCK_PWRGRD_Msk      (0x40UL)                  /*!< PWRGRD (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_KEYSCAN_Pos     (7UL)                     /*!< KEYSCAN (Bit 7)                                       */
#define MEC_ECS_FEAT_LOCK_KEYSCAN_Msk     (0x80UL)                  /*!< KEYSCAN (Bitfield-Mask: 0x01)                         */
#define MEC_ECS_FEAT_LOCK_FEAT8_Pos       (8UL)                     /*!< FEAT8 (Bit 8)                                         */
#define MEC_ECS_FEAT_LOCK_FEAT8_Msk       (0x100UL)                 /*!< FEAT8 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_FEAT_LOCK_ARM_FPU_Pos     (9UL)                     /*!< ARM_FPU (Bit 9)                                       */
#define MEC_ECS_FEAT_LOCK_ARM_FPU_Msk     (0x200UL)                 /*!< ARM_FPU (Bitfield-Mask: 0x01)                         */
#define MEC_ECS_FEAT_LOCK_FEAT10_Pos      (10UL)                    /*!< FEAT10 (Bit 10)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT10_Msk      (0x400UL)                 /*!< FEAT10 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT11_Pos      (11UL)                    /*!< FEAT11 (Bit 11)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT11_Msk      (0x800UL)                 /*!< FEAT11 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT12_Pos      (12UL)                    /*!< FEAT12 (Bit 12)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT12_Msk      (0x1000UL)                /*!< FEAT12 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT13_Pos      (13UL)                    /*!< FEAT13 (Bit 13)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT13_Msk      (0x2000UL)                /*!< FEAT13 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT14_Pos      (14UL)                    /*!< FEAT14 (Bit 14)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT14_Msk      (0x4000UL)                /*!< FEAT14 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_BBRAM_SIZE_Pos  (15UL)                    /*!< BBRAM_SIZE (Bit 15)                                   */
#define MEC_ECS_FEAT_LOCK_BBRAM_SIZE_Msk  (0x8000UL)                /*!< BBRAM_SIZE (Bitfield-Mask: 0x01)                      */
#define MEC_ECS_FEAT_LOCK_FEAT16_Pos      (16UL)                    /*!< FEAT16 (Bit 16)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT16_Msk      (0x10000UL)               /*!< FEAT16 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT17_Pos      (17UL)                    /*!< FEAT17 (Bit 17)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT17_Msk      (0x20000UL)               /*!< FEAT17 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_FEAT18_Pos      (18UL)                    /*!< FEAT18 (Bit 18)                                       */
#define MEC_ECS_FEAT_LOCK_FEAT18_Msk      (0x40000UL)               /*!< FEAT18 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_FEAT_LOCK_TURBO_FREQ_Pos  (19UL)                    /*!< TURBO_FREQ (Bit 19)                                   */
#define MEC_ECS_FEAT_LOCK_TURBO_FREQ_Msk  (0x80000UL)               /*!< TURBO_FREQ (Bitfield-Mask: 0x01)                      */
/* =======================================================  MISC_LOCK  ======================================================= */
#define MEC_ECS_MISC_LOCK_FEAT0_Pos       (0UL)                     /*!< FEAT0 (Bit 0)                                         */
#define MEC_ECS_MISC_LOCK_FEAT0_Msk       (0x1UL)                   /*!< FEAT0 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT1_Pos       (1UL)                     /*!< FEAT1 (Bit 1)                                         */
#define MEC_ECS_MISC_LOCK_FEAT1_Msk       (0x2UL)                   /*!< FEAT1 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT2_Pos       (2UL)                     /*!< FEAT2 (Bit 2)                                         */
#define MEC_ECS_MISC_LOCK_FEAT2_Msk       (0x4UL)                   /*!< FEAT2 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT3_Pos       (3UL)                     /*!< FEAT3 (Bit 3)                                         */
#define MEC_ECS_MISC_LOCK_FEAT3_Msk       (0x8UL)                   /*!< FEAT3 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT4_Pos       (4UL)                     /*!< FEAT4 (Bit 4)                                         */
#define MEC_ECS_MISC_LOCK_FEAT4_Msk       (0x10UL)                  /*!< FEAT4 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT5_Pos       (5UL)                     /*!< FEAT5 (Bit 5)                                         */
#define MEC_ECS_MISC_LOCK_FEAT5_Msk       (0x20UL)                  /*!< FEAT5 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT6_Pos       (6UL)                     /*!< FEAT6 (Bit 6)                                         */
#define MEC_ECS_MISC_LOCK_FEAT6_Msk       (0x40UL)                  /*!< FEAT6 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_MISC_LOCK_FEAT7_Pos       (7UL)                     /*!< FEAT7 (Bit 7)                                         */
#define MEC_ECS_MISC_LOCK_FEAT7_Msk       (0x80UL)                  /*!< FEAT7 (Bitfield-Mask: 0x01)                           */
/* =========================================================  JCFG  ========================================================== */
/* =========================================================  JSTS  ========================================================== */
/* =========================================================  JTDO  ========================================================== */
/* =========================================================  JTDI  ========================================================== */
/* =========================================================  JTMS  ========================================================== */
/* =========================================================  JCMD  ========================================================== */
/* =========================================================  VWSC  ========================================================== */
/* =========================================================  CMPC  ========================================================== */
#define MEC_ECS_CMPC_EN0_Pos              (0UL)                     /*!< EN0 (Bit 0)                                           */
#define MEC_ECS_CMPC_EN0_Msk              (0x1UL)                   /*!< EN0 (Bitfield-Mask: 0x01)                             */
#define MEC_ECS_CMPC_LKCFG0_Pos           (2UL)                     /*!< LKCFG0 (Bit 2)                                        */
#define MEC_ECS_CMPC_LKCFG0_Msk           (0x4UL)                   /*!< LKCFG0 (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_CMPC_EN1_Pos              (4UL)                     /*!< EN1 (Bit 4)                                           */
#define MEC_ECS_CMPC_EN1_Msk              (0x10UL)                  /*!< EN1 (Bitfield-Mask: 0x01)                             */
/* =========================================================  CMPSC  ========================================================= */
#define MEC_ECS_CMPSC_DSLP0_Pos           (0UL)                     /*!< DSLP0 (Bit 0)                                         */
#define MEC_ECS_CMPSC_DSLP0_Msk           (0x1UL)                   /*!< DSLP0 (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_CMPSC_DSLP1_Pos           (1UL)                     /*!< DSLP1 (Bit 1)                                         */
#define MEC_ECS_CMPSC_DSLP1_Msk           (0x2UL)                   /*!< DSLP1 (Bitfield-Mask: 0x01)                           */
/* =======================================================  EMBRST_EN  ======================================================= */
#define MEC_ECS_EMBRST_EN_EN_Pos          (0UL)                     /*!< EN (Bit 0)                                            */
#define MEC_ECS_EMBRST_EN_EN_Msk          (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* =====================================================  EMBRST_TMOUT  ====================================================== */
#define MEC_ECS_EMBRST_TMOUT_TM1_Pos      (0UL)                     /*!< TM1 (Bit 0)                                           */
#define MEC_ECS_EMBRST_TMOUT_TM1_Msk      (0x7UL)                   /*!< TM1 (Bitfield-Mask: 0x07)                             */
/* ======================================================  EMBRST_STS  ======================================================= */
#define MEC_ECS_EMBRST_STS_RST_Pos        (0UL)                     /*!< RST (Bit 0)                                           */
#define MEC_ECS_EMBRST_STS_RST_Msk        (0x1UL)                   /*!< RST (Bitfield-Mask: 0x01)                             */
/* ======================================================  EMBRST_CNT  ======================================================= */
#define MEC_ECS_EMBRST_CNT_CURR_CNT_Pos   (0UL)                     /*!< CURR_CNT (Bit 0)                                      */
#define MEC_ECS_EMBRST_CNT_CURR_CNT_Msk   (0x7ffffUL)               /*!< CURR_CNT (Bitfield-Mask: 0x7ffff)                     */
/* ========================================================  IPTRIM  ========================================================= */
/* =========================================================  SSSMR  ========================================================= */
#define MEC_ECS_SSSMR_MOSCR_Pos           (0UL)                     /*!< MOSCR (Bit 0)                                         */
#define MEC_ECS_SSSMR_MOSCR_Msk           (0x1UL)                   /*!< MOSCR (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_SSSMR_PLLRB_Pos           (1UL)                     /*!< PLLRB (Bit 1)                                         */
#define MEC_ECS_SSSMR_PLLRB_Msk           (0x2UL)                   /*!< PLLRB (Bitfield-Mask: 0x01)                           */
#define MEC_ECS_SSSMR_REGSTDY_Pos         (2UL)                     /*!< REGSTDY (Bit 2)                                       */
#define MEC_ECS_SSSMR_REGSTDY_Msk         (0x4UL)                   /*!< REGSTDY (Bitfield-Mask: 0x01)                         */
#define MEC_ECS_SSSMR_CLKEND_Pos          (3UL)                     /*!< CLKEND (Bit 3)                                        */
#define MEC_ECS_SSSMR_CLKEND_Msk          (0x8UL)                   /*!< CLKEND (Bitfield-Mask: 0x01)                          */
#define MEC_ECS_SSSMR_SLPENALL_Pos        (4UL)                     /*!< SLPENALL (Bit 4)                                      */
#define MEC_ECS_SSSMR_SLPENALL_Msk        (0x10UL)                  /*!< SLPENALL (Bitfield-Mask: 0x01)                        */
#define MEC_ECS_SSSMR_CLKREQN_Pos         (5UL)                     /*!< CLKREQN (Bit 5)                                       */
#define MEC_ECS_SSSMR_CLKREQN_Msk         (0x20UL)                  /*!< CLKREQN (Bitfield-Mask: 0x01)                         */
#define MEC_ECS_SSSMR_ASYNCWK_Pos         (6UL)                     /*!< ASYNCWK (Bit 6)                                       */
#define MEC_ECS_SSSMR_ASYNCWK_Msk         (0x40UL)                  /*!< ASYNCWK (Bitfield-Mask: 0x01)                         */
#define MEC_ECS_SSSMR_ASYNCWK_DBG_Pos     (7UL)                     /*!< ASYNCWK_DBG (Bit 7)                                   */
#define MEC_ECS_SSSMR_ASYNCWK_DBG_Msk     (0x80UL)                  /*!< ASYNCWK_DBG (Bitfield-Mask: 0x01)                     */
#define MEC_ECS_SSSMR_SYSCLK_FSM_Pos      (8UL)                     /*!< SYSCLK_FSM (Bit 8)                                    */
#define MEC_ECS_SSSMR_SYSCLK_FSM_Msk      (0xf00UL)                 /*!< SYSCLK_FSM (Bitfield-Mask: 0x0f)                      */
/* ========================================================  BRSCR0  ========================================================= */
/* ========================================================  BRSCR1  ========================================================= */
/* ========================================================  BRSCR2  ========================================================= */
/* ========================================================  BRSCR3  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  AERRA  ========================================================= */
/* =========================================================  OSCID  ========================================================= */
/* =========================================================  AERRC  ========================================================= */
/* ===============================================  MEC_ECS AERRC CAP [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_ECS_AERRC_CAP                                                         */
  MEC_ECS_AERRC_CAP_DIS                = 1,     /*!< DIS : Disable                                                             */
} MEC_ECS_AERRC_CAP_Enum;

/* =======================================================  INTR_CTRL  ======================================================= */
/* ============================================  MEC_ECS INTR_CTRL DIRECT [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_INTR_CTRL_DIRECT                                                  */
  MEC_ECS_INTR_CTRL_DIRECT_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_INTR_CTRL_DIRECT_Enum;

/* =======================================================  ETM_CTRL  ======================================================== */
/* ===========================================  MEC_ECS ETM_CTRL TRACE_EN [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_ETM_CTRL_TRACE_EN                                                 */
  MEC_ECS_ETM_CTRL_TRACE_EN_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_ETM_CTRL_TRACE_EN_Enum;

/* =======================================================  DBG_CTRL  ======================================================== */
/* ==============================================  MEC_ECS DBG_CTRL EN [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_DBG_CTRL_EN                                                       */
  MEC_ECS_DBG_CTRL_EN_ON               = 1,     /*!< ON : Enable                                                               */
} MEC_ECS_DBG_CTRL_EN_Enum;

/* ==============================================  MEC_ECS DBG_CTRL CFG [1..2]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_DBG_CTRL_CFG                                                      */
  MEC_ECS_DBG_CTRL_CFG_JTAG            = 0,     /*!< JTAG : Use 4-pin JTAG mode                                                */
  MEC_ECS_DBG_CTRL_CFG_SWD_SWV         = 1,     /*!< SWD_SWV : Use 2-pin SWD plus 1-pin SWV                                    */
  MEC_ECS_DBG_CTRL_CFG_SWD_ONLY        = 2,     /*!< SWD_ONLY : Use 2-pin SWD only. No SWV pin                                 */
  MEC_ECS_DBG_CTRL_CFG_RSVD            = 3,     /*!< RSVD : Config reserved value                                              */
} MEC_ECS_DBG_CTRL_CFG_Enum;

/* ===========================================  MEC_ECS DBG_CTRL PULL_UPS [3..3]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_DBG_CTRL_PULL_UPS                                                 */
  MEC_ECS_DBG_CTRL_PULL_UPS_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_DBG_CTRL_PULL_UPS_Enum;

/* ==========================================  MEC_ECS DBG_CTRL BNDRY_SCAN [4..4]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_DBG_CTRL_BNDRY_SCAN                                               */
  MEC_ECS_DBG_CTRL_BNDRY_SCAN_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_DBG_CTRL_BNDRY_SCAN_Enum;

/* =============================================  MEC_ECS DBG_CTRL LOCK [5..5]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_DBG_CTRL_LOCK                                                     */
  MEC_ECS_DBG_CTRL_LOCK_EN             = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_DBG_CTRL_LOCK_Enum;

/* =========================================================  SECLK  ========================================================= */
/* ========================================================  WDTEVC  ========================================================= */
/* =======================================================  PECI_CTRL  ======================================================= */
/* =============================================  MEC_ECS PECI_CTRL PINS [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_PECI_CTRL_PINS                                                    */
  MEC_ECS_PECI_CTRL_PINS_DIS           = 1,     /*!< DIS : Disable                                                             */
} MEC_ECS_PECI_CTRL_PINS_Enum;

/* ========================================================  VCIFWO  ========================================================= */
/* ==========================================  MEC_ECS VCIFWO SYS_SHDN_nFW [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_VCIFWO_SYS_SHDN_nFW                                               */
  MEC_ECS_VCIFWO_SYS_SHDN_nFW_DEASSERT = 1,     /*!< DEASSERT : Deassert SYS_SHDN# pin                                         */
} MEC_ECS_VCIFWO_SYS_SHDN_nFW_Enum;

/* =========================================================  BRSTS  ========================================================= */
/* =========================================================  CRCFG  ========================================================= */
/* =========================================================  CRRST  ========================================================= */
/* =============================================  MEC_ECS CRRST PK_SRST [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_CRRST_PK_SRST                                                     */
  MEC_ECS_CRRST_PK_SRST_EN             = 1,     /*!< EN : Assert reset signal to PK block                                      */
} MEC_ECS_CRRST_PK_SRST_Enum;

/* =======================================================  FEAT_LOCK  ======================================================= */
/* ============================================  MEC_ECS FEAT_LOCK FEAT0 [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT0                                                   */
  MEC_ECS_FEAT_LOCK_FEAT0_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT0_Enum;

/* =============================================  MEC_ECS FEAT_LOCK ESPI [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_ESPI                                                    */
  MEC_ECS_FEAT_LOCK_ESPI_DIS           = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_ESPI_Enum;

/* =============================================  MEC_ECS FEAT_LOCK PUF [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_PUF                                                     */
  MEC_ECS_FEAT_LOCK_PUF_DIS            = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_PUF_Enum;

/* =============================================  MEC_ECS FEAT_LOCK XTAL [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_XTAL                                                    */
  MEC_ECS_FEAT_LOCK_XTAL_DIS           = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_XTAL_Enum;

/* ============================================  MEC_ECS FEAT_LOCK PWRGRD [6..6]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_PWRGRD                                                  */
  MEC_ECS_FEAT_LOCK_PWRGRD_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_PWRGRD_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK KEYSCAN [7..7]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_KEYSCAN                                                 */
  MEC_ECS_FEAT_LOCK_KEYSCAN_DIS        = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_KEYSCAN_Enum;

/* ============================================  MEC_ECS FEAT_LOCK FEAT8 [8..8]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT8                                                   */
  MEC_ECS_FEAT_LOCK_FEAT8_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT8_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK ARM_FPU [9..9]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_ARM_FPU                                                 */
  MEC_ECS_FEAT_LOCK_ARM_FPU_DIS        = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_ARM_FPU_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT10 [10..10]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT10                                                  */
  MEC_ECS_FEAT_LOCK_FEAT10_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT10_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT11 [11..11]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT11                                                  */
  MEC_ECS_FEAT_LOCK_FEAT11_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT11_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT12 [12..12]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT12                                                  */
  MEC_ECS_FEAT_LOCK_FEAT12_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT12_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT13 [13..13]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT13                                                  */
  MEC_ECS_FEAT_LOCK_FEAT13_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT13_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT14 [14..14]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT14                                                  */
  MEC_ECS_FEAT_LOCK_FEAT14_DIS         = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_FEAT_LOCK_FEAT14_Enum;

/* =========================================  MEC_ECS FEAT_LOCK BBRAM_SIZE [15..15]  ========================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_BBRAM_SIZE                                              */
  MEC_ECS_FEAT_LOCK_BBRAM_SIZE_BYTES_128 = 0,   /*!< BYTES_128 : BBRAM size is 128 bytes                                       */
  MEC_ECS_FEAT_LOCK_BBRAM_SIZE_BYTES_64 = 1,    /*!< BYTES_64 : BBRAM size is 64 bytes                                         */
} MEC_ECS_FEAT_LOCK_BBRAM_SIZE_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT16 [16..16]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT16                                                  */
  MEC_ECS_FEAT_LOCK_FEAT16_DIS         = 1,     /*!< DIS : BBRAM size is 64 bytes                                              */
} MEC_ECS_FEAT_LOCK_FEAT16_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT17 [17..17]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT17                                                  */
  MEC_ECS_FEAT_LOCK_FEAT17_DIS         = 1,     /*!< DIS : I3C Host controller not present                                     */
} MEC_ECS_FEAT_LOCK_FEAT17_Enum;

/* ===========================================  MEC_ECS FEAT_LOCK FEAT18 [18..18]  =========================================== */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_FEAT18                                                  */
  MEC_ECS_FEAT_LOCK_FEAT18_DIS         = 1,     /*!< DIS : I3C Target controller not present                                   */
} MEC_ECS_FEAT_LOCK_FEAT18_Enum;

/* =========================================  MEC_ECS FEAT_LOCK TURBO_FREQ [19..19]  ========================================= */
typedef enum {                                  /*!< MEC_ECS_FEAT_LOCK_TURBO_FREQ                                              */
  MEC_ECS_FEAT_LOCK_TURBO_FREQ_EN      = 0,     /*!< EN : CPU, QSPI, and PK clock is 96MHz (default)                           */
  MEC_ECS_FEAT_LOCK_TURBO_FREQ_DIS     = 1,     /*!< DIS : CPU, QSPI, and PK clock is 48MHz                                    */
} MEC_ECS_FEAT_LOCK_TURBO_FREQ_Enum;

/* =======================================================  MISC_LOCK  ======================================================= */
/* ============================================  MEC_ECS MISC_LOCK FEAT0 [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT0                                                   */
  MEC_ECS_MISC_LOCK_FEAT0_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT0_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT1 [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT1                                                   */
  MEC_ECS_MISC_LOCK_FEAT1_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT1_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT2 [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT2                                                   */
  MEC_ECS_MISC_LOCK_FEAT2_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT2_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT3 [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT3                                                   */
  MEC_ECS_MISC_LOCK_FEAT3_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT3_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT4 [4..4]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT4                                                   */
  MEC_ECS_MISC_LOCK_FEAT4_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT4_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT5 [5..5]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT5                                                   */
  MEC_ECS_MISC_LOCK_FEAT5_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT5_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT6 [6..6]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT6                                                   */
  MEC_ECS_MISC_LOCK_FEAT6_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT6_Enum;

/* ============================================  MEC_ECS MISC_LOCK FEAT7 [7..7]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_MISC_LOCK_FEAT7                                                   */
  MEC_ECS_MISC_LOCK_FEAT7_DIS          = 1,     /*!< DIS : HW disabled                                                         */
} MEC_ECS_MISC_LOCK_FEAT7_Enum;

/* =========================================================  JCFG  ========================================================== */
/* =========================================================  JSTS  ========================================================== */
/* =========================================================  JTDO  ========================================================== */
/* =========================================================  JTDI  ========================================================== */
/* =========================================================  JTMS  ========================================================== */
/* =========================================================  JCMD  ========================================================== */
/* =========================================================  VWSC  ========================================================== */
/* =========================================================  CMPC  ========================================================== */
/* ================================================  MEC_ECS CMPC EN0 [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_ECS_CMPC_EN0                                                          */
  MEC_ECS_CMPC_EN0_ON                  = 1,     /*!< ON : Enable                                                               */
} MEC_ECS_CMPC_EN0_Enum;

/* ==============================================  MEC_ECS CMPC LKCFG0 [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_CMPC_LKCFG0                                                       */
  MEC_ECS_CMPC_LKCFG0_LOCKED           = 1,     /*!< LOCKED : Enable                                                           */
} MEC_ECS_CMPC_LKCFG0_Enum;

/* ================================================  MEC_ECS CMPC EN1 [4..4]  ================================================ */
typedef enum {                                  /*!< MEC_ECS_CMPC_EN1                                                          */
  MEC_ECS_CMPC_EN1_ON                  = 1,     /*!< ON : Enable                                                               */
} MEC_ECS_CMPC_EN1_Enum;

/* =========================================================  CMPSC  ========================================================= */
/* ==============================================  MEC_ECS CMPSC DSLP0 [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_CMPSC_DSLP0                                                       */
  MEC_ECS_CMPSC_DSLP0_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_CMPSC_DSLP0_Enum;

/* ==============================================  MEC_ECS CMPSC DSLP1 [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_CMPSC_DSLP1                                                       */
  MEC_ECS_CMPSC_DSLP1_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_ECS_CMPSC_DSLP1_Enum;

/* =======================================================  EMBRST_EN  ======================================================= */
/* ==============================================  MEC_ECS EMBRST_EN EN [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_EMBRST_EN_EN                                                      */
  MEC_ECS_EMBRST_EN_EN_ON              = 1,     /*!< ON : Enable                                                               */
} MEC_ECS_EMBRST_EN_EN_Enum;

/* =====================================================  EMBRST_TMOUT  ====================================================== */
/* ============================================  MEC_ECS EMBRST_TMOUT TM1 [0..2]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_EMBRST_TMOUT_TM1                                                  */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC6        = 0,     /*!< SEC6 : six seconds                                                        */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC7        = 1,     /*!< SEC7 : seven seconds                                                      */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC8        = 2,     /*!< SEC8 : eight seconds                                                      */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC9        = 3,     /*!< SEC9 : nine seconds                                                       */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC10       = 4,     /*!< SEC10 : ten seconds                                                       */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC11       = 5,     /*!< SEC11 : eleven seconds                                                    */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC12       = 6,     /*!< SEC12 : twelve seconds                                                    */
  MEC_ECS_EMBRST_TMOUT_TM1_SEC14       = 7,     /*!< SEC14 : fourteen seconds                                                  */
} MEC_ECS_EMBRST_TMOUT_TM1_Enum;

/* ======================================================  EMBRST_STS  ======================================================= */
/* =============================================  MEC_ECS EMBRST_STS RST [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_EMBRST_STS_RST                                                    */
  MEC_ECS_EMBRST_STS_RST_ACTIVE        = 1,     /*!< ACTIVE : Active                                                           */
} MEC_ECS_EMBRST_STS_RST_Enum;

/* ======================================================  EMBRST_CNT  ======================================================= */
/* ========================================================  IPTRIM  ========================================================= */
/* =========================================================  SSSMR  ========================================================= */
/* ==============================================  MEC_ECS SSSMR MOSCR [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_MOSCR                                                       */
  MEC_ECS_SSSMR_MOSCR_STS              = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_MOSCR_Enum;

/* ==============================================  MEC_ECS SSSMR PLLRB [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_PLLRB                                                       */
  MEC_ECS_SSSMR_PLLRB_STS              = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_PLLRB_Enum;

/* =============================================  MEC_ECS SSSMR REGSTDY [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_REGSTDY                                                     */
  MEC_ECS_SSSMR_REGSTDY_STS            = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_REGSTDY_Enum;

/* ==============================================  MEC_ECS SSSMR CLKEND [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_CLKEND                                                      */
  MEC_ECS_SSSMR_CLKEND_STS             = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_CLKEND_Enum;

/* =============================================  MEC_ECS SSSMR SLPENALL [4..4]  ============================================= */
typedef enum {                                  /*!< MEC_ECS_SSSMR_SLPENALL                                                    */
  MEC_ECS_SSSMR_SLPENALL_STS           = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_SLPENALL_Enum;

/* =============================================  MEC_ECS SSSMR CLKREQN [5..5]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_CLKREQN                                                     */
  MEC_ECS_SSSMR_CLKREQN_STS            = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_CLKREQN_Enum;

/* =============================================  MEC_ECS SSSMR ASYNCWK [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_ECS_SSSMR_ASYNCWK                                                     */
  MEC_ECS_SSSMR_ASYNCWK_STS            = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_ASYNCWK_Enum;

/* ===========================================  MEC_ECS SSSMR ASYNCWK_DBG [7..7]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_SSSMR_ASYNCWK_DBG                                                 */
  MEC_ECS_SSSMR_ASYNCWK_DBG_STS        = 1,     /*!< STS : Active                                                              */
} MEC_ECS_SSSMR_ASYNCWK_DBG_Enum;

/* ===========================================  MEC_ECS SSSMR SYSCLK_FSM [8..11]  ============================================ */
typedef enum {                                  /*!< MEC_ECS_SSSMR_SYSCLK_FSM                                                  */
  MEC_ECS_SSSMR_SYSCLK_FSM_SYSCLK_STATE0 = 0,   /*!< SYSCLK_STATE0 : State0                                                    */
} MEC_ECS_SSSMR_SYSCLK_FSM_Enum;

/* ========================================================  BRSCR0  ========================================================= */
/* ========================================================  BRSCR1  ========================================================= */
/* ========================================================  BRSCR2  ========================================================= */
/* ========================================================  BRSCR3  ========================================================= */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_ECS_V2_5_H */
