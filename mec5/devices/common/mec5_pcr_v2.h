/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PCR_V2_H
#define _MEC5_PCR_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Power, Clocks and Reset (PCR) (MEC_PCR)
  */

typedef struct mec_pcr_regs {                   /*!< (@ 0x40080100) MEC_PCR Structure                                          */
  __IOM uint32_t  SSC;                          /*!< (@ 0x00000000) PCR system sleep control                                   */
  __IOM uint32_t  PCC;                          /*!< (@ 0x00000004) PCR processor clock control(divider)                       */
  __IOM uint32_t  SCC;                          /*!< (@ 0x00000008) PCR slow clock control(divider)                            */
  __IOM uint32_t  OID;                          /*!< (@ 0x0000000C) PCR Oscillator ID and PLL lock indicator                   */
  __IOM uint32_t  PRS;                          /*!< (@ 0x00000010) PCR Power Reset Status                                     */
  __IOM uint32_t  PRC;                          /*!< (@ 0x00000014) PCR Power Reset Control                                    */
  __OM  uint32_t  SRST;                         /*!< (@ 0x00000018) PCR System Reset                                           */
  __IOM uint32_t  TURBO_CLK;                    /*!< (@ 0x0000001C) PCR Turbo clock control                                    */
  __IM  uint32_t  RESERVED[4];
  __IOM uint32_t  SLP_EN[5];                    /*!< (@ 0x00000030) The Sleep Enable Register contains bit map for
                                                                    sleeping peripherals when inactive.                        */
  __IM  uint32_t  RESERVED1[3];
  __IOM uint32_t  CLK_REQ[5];                   /*!< (@ 0x00000050) The Clock Required Register contains bit map
                                                                    of peripherals requiring clocks(active).                   */
  __IM  uint32_t  RESERVED2[3];
  __IOM uint32_t  RST_EN[5];                    /*!< (@ 0x00000070) The Reset Register contains bit map of peripherals
                                                                    to reset when unlocked.                                    */
  __IOM uint32_t  RENLK;                        /*!< (@ 0x00000084) PCR Reset Enable Lock register                             */
  __IOM uint32_t  VBSRST;                       /*!< (@ 0x00000088) PCR VBAT Soft Reset register                               */
  __IOM uint32_t  SS32K;                        /*!< (@ 0x0000008C) PCR 32KHz source select register                           */
  __IM  uint32_t  RESERVED3[12];
  __IM  uint32_t  CNT32K;                       /*!< (@ 0x000000C0) PCR 32KHz period counter register                          */
  __IM  uint32_t  CNT32KPH;                     /*!< (@ 0x000000C4) PCR 32KHz pulse high counter register                      */
  __IOM uint32_t  PERMINC;                      /*!< (@ 0x000000C8) PCR 32KHz period minimum count register                    */
  __IOM uint32_t  PERMAXC;                      /*!< (@ 0x000000CC) PCR 32KHz period maximum count register                    */
  __IM  uint32_t  DCVC;                         /*!< (@ 0x000000D0) PCR 32KHz duty cycle variation count register              */
  __IOM uint32_t  DCVMX;                        /*!< (@ 0x000000D4) PCR 32KHz duty cycle variation maximum register            */
  __IM  uint32_t  VCNT32K;                      /*!< (@ 0x000000D8) PCR 32KHz valid count register                             */
  __IOM uint32_t  VCMIN;                        /*!< (@ 0x000000DC) PCR 32KHz valid count mininum register                     */
  __IOM uint32_t  CTRL32K;                      /*!< (@ 0x000000E0) PCR 32KHz control register                                 */
  __IOM uint32_t  SIS32K;                       /*!< (@ 0x000000E4) PCR 32KHz source interrupt status register                 */
  __IOM uint32_t  SIEN32K;                      /*!< (@ 0x000000E8) PCR 32KHz source interrupt enable register                 */
} MEC_PCR_Type;                                 /*!< Size = 236 (0xec)                                                         */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ==========================================================  SSC  ========================================================== */
#define MEC_PCR_SSC_DEEPSLP_Pos           (0UL)                     /*!< DEEPSLP (Bit 0)                                       */
#define MEC_PCR_SSC_DEEPSLP_Msk           (0x1UL)                   /*!< DEEPSLP (Bitfield-Mask: 0x01)                         */
#define MEC_PCR_SSC_SLPALL_Pos            (3UL)                     /*!< SLPALL (Bit 3)                                        */
#define MEC_PCR_SSC_SLPALL_Msk            (0x8UL)                   /*!< SLPALL (Bitfield-Mask: 0x01)                          */
#define MEC_PCR_SSC_SLPIMM_Pos            (8UL)                     /*!< SLPIMM (Bit 8)                                        */
#define MEC_PCR_SSC_SLPIMM_Msk            (0x100UL)                 /*!< SLPIMM (Bitfield-Mask: 0x01)                          */
/* ==========================================================  PCC  ========================================================== */
/* ==========================================================  SCC  ========================================================== */
#define MEC_PCR_SCC_SLOW_CLK_DIV_Pos      (0UL)                     /*!< SLOW_CLK_DIV (Bit 0)                                  */
#define MEC_PCR_SCC_SLOW_CLK_DIV_Msk      (0x3ffUL)                 /*!< SLOW_CLK_DIV (Bitfield-Mask: 0x3ff)                   */
/* ==========================================================  OID  ========================================================== */
#define MEC_PCR_OID_PLL_LOCK_Pos          (8UL)                     /*!< PLL_LOCK (Bit 8)                                      */
#define MEC_PCR_OID_PLL_LOCK_Msk          (0x100UL)                 /*!< PLL_LOCK (Bitfield-Mask: 0x01)                        */
/* ==========================================================  PRS  ========================================================== */
#define MEC_PCR_PRS_VCC_PWRGD_Pos         (2UL)                     /*!< VCC_PWRGD (Bit 2)                                     */
#define MEC_PCR_PRS_VCC_PWRGD_Msk         (0x4UL)                   /*!< VCC_PWRGD (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_PRS_RESET_VCC_Pos         (3UL)                     /*!< RESET_VCC (Bit 3)                                     */
#define MEC_PCR_PRS_RESET_VCC_Msk         (0x8UL)                   /*!< RESET_VCC (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_PRS_RESET_VTR_Pos         (4UL)                     /*!< RESET_VTR (Bit 4)                                     */
#define MEC_PCR_PRS_RESET_VTR_Msk         (0x10UL)                  /*!< RESET_VTR (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_PRS_RESET_VBAT_Pos        (5UL)                     /*!< RESET_VBAT (Bit 5)                                    */
#define MEC_PCR_PRS_RESET_VBAT_Msk        (0x20UL)                  /*!< RESET_VBAT (Bitfield-Mask: 0x01)                      */
#define MEC_PCR_PRS_RESET_SYS_Pos         (6UL)                     /*!< RESET_SYS (Bit 6)                                     */
#define MEC_PCR_PRS_RESET_SYS_Msk         (0x40UL)                  /*!< RESET_SYS (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_PRS_JTAG_TRST_Pos         (7UL)                     /*!< JTAG_TRST (Bit 7)                                     */
#define MEC_PCR_PRS_JTAG_TRST_Msk         (0x80UL)                  /*!< JTAG_TRST (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_PRS_WDTEV_Pos             (8UL)                     /*!< WDTEV (Bit 8)                                         */
#define MEC_PCR_PRS_WDTEV_Msk             (0x100UL)                 /*!< WDTEV (Bitfield-Mask: 0x01)                           */
#define MEC_PCR_PRS_ACT32K_Pos            (10UL)                    /*!< ACT32K (Bit 10)                                       */
#define MEC_PCR_PRS_ACT32K_Msk            (0x400UL)                 /*!< ACT32K (Bitfield-Mask: 0x01)                          */
#define MEC_PCR_PRS_ESPI_CLK_ACT_Pos      (11UL)                    /*!< ESPI_CLK_ACT (Bit 11)                                 */
#define MEC_PCR_PRS_ESPI_CLK_ACT_Msk      (0x800UL)                 /*!< ESPI_CLK_ACT (Bitfield-Mask: 0x01)                    */
/* ==========================================================  PRC  ========================================================== */
#define MEC_PCR_PRC_PWR_INV_Pos           (0UL)                     /*!< PWR_INV (Bit 0)                                       */
#define MEC_PCR_PRC_PWR_INV_Msk           (0x1UL)                   /*!< PWR_INV (Bitfield-Mask: 0x01)                         */
#define MEC_PCR_PRC_HOST_RSEL_Pos         (8UL)                     /*!< HOST_RSEL (Bit 8)                                     */
#define MEC_PCR_PRC_HOST_RSEL_Msk         (0x100UL)                 /*!< HOST_RSEL (Bitfield-Mask: 0x01)                       */
/* =========================================================  SRST  ========================================================== */
#define MEC_PCR_SRST_SYS_RST_Pos          (8UL)                     /*!< SYS_RST (Bit 8)                                       */
#define MEC_PCR_SRST_SYS_RST_Msk          (0x100UL)                 /*!< SYS_RST (Bitfield-Mask: 0x01)                         */
/* =======================================================  TURBO_CLK  ======================================================= */
#define MEC_PCR_TURBO_CLK_FAST_CLK_Pos    (2UL)                     /*!< FAST_CLK (Bit 2)                                      */
#define MEC_PCR_TURBO_CLK_FAST_CLK_Msk    (0x4UL)                   /*!< FAST_CLK (Bitfield-Mask: 0x01)                        */
/* ========================================================  SLP_EN  ========================================================= */
/* ========================================================  CLK_REQ  ======================================================== */
/* ========================================================  RST_EN  ========================================================= */
/* =========================================================  RENLK  ========================================================= */
/* ========================================================  VBSRST  ========================================================= */
#define MEC_PCR_VBSRST_VBAT_SRST_Pos      (0UL)                     /*!< VBAT_SRST (Bit 0)                                     */
#define MEC_PCR_VBSRST_VBAT_SRST_Msk      (0x1UL)                   /*!< VBAT_SRST (Bitfield-Mask: 0x01)                       */
/* =========================================================  SS32K  ========================================================= */
#define MEC_PCR_SS32K_PLL_REF_SRC_Pos     (0UL)                     /*!< PLL_REF_SRC (Bit 0)                                   */
#define MEC_PCR_SS32K_PLL_REF_SRC_Msk     (0x3UL)                   /*!< PLL_REF_SRC (Bitfield-Mask: 0x03)                     */
/* ========================================================  CNT32K  ========================================================= */
/* =======================================================  CNT32KPH  ======================================================== */
/* ========================================================  PERMINC  ======================================================== */
/* ========================================================  PERMAXC  ======================================================== */
/* =========================================================  DCVC  ========================================================== */
/* =========================================================  DCVMX  ========================================================= */
/* ========================================================  VCNT32K  ======================================================== */
/* =========================================================  VCMIN  ========================================================= */
/* ========================================================  CTRL32K  ======================================================== */
#define MEC_PCR_CTRL32K_PERIOD_CNT_Pos    (0UL)                     /*!< PERIOD_CNT (Bit 0)                                    */
#define MEC_PCR_CTRL32K_PERIOD_CNT_Msk    (0x1UL)                   /*!< PERIOD_CNT (Bitfield-Mask: 0x01)                      */
#define MEC_PCR_CTRL32K_DCNT_EN_Pos       (1UL)                     /*!< DCNT_EN (Bit 1)                                       */
#define MEC_PCR_CTRL32K_DCNT_EN_Msk       (0x2UL)                   /*!< DCNT_EN (Bitfield-Mask: 0x01)                         */
#define MEC_PCR_CTRL32K_VALCNT_EN_Pos     (2UL)                     /*!< VALCNT_EN (Bit 2)                                     */
#define MEC_PCR_CTRL32K_VALCNT_EN_Msk     (0x4UL)                   /*!< VALCNT_EN (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_CTRL32K_MINTROSC_Pos      (4UL)                     /*!< MINTROSC (Bit 4)                                      */
#define MEC_PCR_CTRL32K_MINTROSC_Msk      (0x10UL)                  /*!< MINTROSC (Bitfield-Mask: 0x01)                        */
#define MEC_PCR_CTRL32K_CLRCNT_Pos        (24UL)                    /*!< CLRCNT (Bit 24)                                       */
#define MEC_PCR_CTRL32K_CLRCNT_Msk        (0x1000000UL)             /*!< CLRCNT (Bitfield-Mask: 0x01)                          */
/* ========================================================  SIS32K  ========================================================= */
#define MEC_PCR_SIS32K_PULSE_RDY_Pos      (0UL)                     /*!< PULSE_RDY (Bit 0)                                     */
#define MEC_PCR_SIS32K_PULSE_RDY_Msk      (0x1UL)                   /*!< PULSE_RDY (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_SIS32K_PER_PASS_Pos       (1UL)                     /*!< PER_PASS (Bit 1)                                      */
#define MEC_PCR_SIS32K_PER_PASS_Msk       (0x2UL)                   /*!< PER_PASS (Bitfield-Mask: 0x01)                        */
#define MEC_PCR_SIS32K_DUTY_PASS_Pos      (2UL)                     /*!< DUTY_PASS (Bit 2)                                     */
#define MEC_PCR_SIS32K_DUTY_PASS_Msk      (0x4UL)                   /*!< DUTY_PASS (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_SIS32K_PD_FAIL_Pos        (3UL)                     /*!< PD_FAIL (Bit 3)                                       */
#define MEC_PCR_SIS32K_PD_FAIL_Msk        (0x8UL)                   /*!< PD_FAIL (Bitfield-Mask: 0x01)                         */
#define MEC_PCR_SIS32K_STALL_Pos          (4UL)                     /*!< STALL (Bit 4)                                         */
#define MEC_PCR_SIS32K_STALL_Msk          (0x10UL)                  /*!< STALL (Bitfield-Mask: 0x01)                           */
#define MEC_PCR_SIS32K_VALID_Pos          (5UL)                     /*!< VALID (Bit 5)                                         */
#define MEC_PCR_SIS32K_VALID_Msk          (0x20UL)                  /*!< VALID (Bitfield-Mask: 0x01)                           */
#define MEC_PCR_SIS32K_UNWELL_Pos         (6UL)                     /*!< UNWELL (Bit 6)                                        */
#define MEC_PCR_SIS32K_UNWELL_Msk         (0x40UL)                  /*!< UNWELL (Bitfield-Mask: 0x01)                          */
/* ========================================================  SIEN32K  ======================================================== */
#define MEC_PCR_SIEN32K_PULSE_RDY_IEN_Pos (0UL)                     /*!< PULSE_RDY_IEN (Bit 0)                                 */
#define MEC_PCR_SIEN32K_PULSE_RDY_IEN_Msk (0x1UL)                   /*!< PULSE_RDY_IEN (Bitfield-Mask: 0x01)                   */
#define MEC_PCR_SIEN32K_PER_PASS_IEN_Pos  (1UL)                     /*!< PER_PASS_IEN (Bit 1)                                  */
#define MEC_PCR_SIEN32K_PER_PASS_IEN_Msk  (0x2UL)                   /*!< PER_PASS_IEN (Bitfield-Mask: 0x01)                    */
#define MEC_PCR_SIEN32K_DUTY_PASS_IEN_Pos (2UL)                     /*!< DUTY_PASS_IEN (Bit 2)                                 */
#define MEC_PCR_SIEN32K_DUTY_PASS_IEN_Msk (0x4UL)                   /*!< DUTY_PASS_IEN (Bitfield-Mask: 0x01)                   */
#define MEC_PCR_SIEN32K_PD_FAIL_IEN_Pos   (3UL)                     /*!< PD_FAIL_IEN (Bit 3)                                   */
#define MEC_PCR_SIEN32K_PD_FAIL_IEN_Msk   (0x8UL)                   /*!< PD_FAIL_IEN (Bitfield-Mask: 0x01)                     */
#define MEC_PCR_SIEN32K_STALL_IEN_Pos     (4UL)                     /*!< STALL_IEN (Bit 4)                                     */
#define MEC_PCR_SIEN32K_STALL_IEN_Msk     (0x10UL)                  /*!< STALL_IEN (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_SIEN32K_VALID_IEN_Pos     (5UL)                     /*!< VALID_IEN (Bit 5)                                     */
#define MEC_PCR_SIEN32K_VALID_IEN_Msk     (0x20UL)                  /*!< VALID_IEN (Bitfield-Mask: 0x01)                       */
#define MEC_PCR_SIEN32K_UNWELL_IEN_Pos    (6UL)                     /*!< UNWELL_IEN (Bit 6)                                    */
#define MEC_PCR_SIEN32K_UNWELL_IEN_Msk    (0x40UL)                  /*!< UNWELL_IEN (Bitfield-Mask: 0x01)                      */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ==========================================================  SSC  ========================================================== */
/* ==============================================  MEC_PCR SSC DEEPSLP [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_PCR_SSC_DEEPSLP                                                       */
  MEC_PCR_SSC_DEEPSLP_SEL              = 1,     /*!< SEL : Select Deep sleep                                                   */
} MEC_PCR_SSC_DEEPSLP_Enum;

/* ===============================================  MEC_PCR SSC SLPALL [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_PCR_SSC_SLPALL                                                        */
  MEC_PCR_SSC_SLPALL_EN                = 1,     /*!< EN : Enable Sleep All                                                     */
} MEC_PCR_SSC_SLPALL_Enum;

/* ===============================================  MEC_PCR SSC SLPIMM [8..8]  =============================================== */
typedef enum {                                  /*!< MEC_PCR_SSC_SLPIMM                                                        */
  MEC_PCR_SSC_SLPIMM_EN                = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SSC_SLPIMM_Enum;

/* ==========================================================  SCC  ========================================================== */
/* ============================================  MEC_PCR SCC SLOW_CLK_DIV [0..9]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SCC_SLOW_CLK_DIV                                                  */
  MEC_PCR_SCC_SLOW_CLK_DIV_DFLT        = 480,   /*!< DFLT : Default divider (480) produces 100KHz                              */
} MEC_PCR_SCC_SLOW_CLK_DIV_Enum;

/* ==========================================================  OID  ========================================================== */
/* ==============================================  MEC_PCR OID PLL_LOCK [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_OID_PLL_LOCK                                                      */
  MEC_PCR_OID_PLL_LOCK_ACTIVE          = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_OID_PLL_LOCK_Enum;

/* ==========================================================  PRS  ========================================================== */
/* =============================================  MEC_PCR PRS VCC_PWRGD [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_VCC_PWRGD                                                     */
  MEC_PCR_PRS_VCC_PWRGD_STS            = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_VCC_PWRGD_Enum;

/* =============================================  MEC_PCR PRS RESET_VCC [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_RESET_VCC                                                     */
  MEC_PCR_PRS_RESET_VCC_STS            = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_RESET_VCC_Enum;

/* =============================================  MEC_PCR PRS RESET_VTR [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_RESET_VTR                                                     */
  MEC_PCR_PRS_RESET_VTR_STS            = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_RESET_VTR_Enum;

/* =============================================  MEC_PCR PRS RESET_VBAT [5..5]  ============================================= */
typedef enum {                                  /*!< MEC_PCR_PRS_RESET_VBAT                                                    */
  MEC_PCR_PRS_RESET_VBAT_STS           = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_RESET_VBAT_Enum;

/* =============================================  MEC_PCR PRS RESET_SYS [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_RESET_SYS                                                     */
  MEC_PCR_PRS_RESET_SYS_STS            = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_RESET_SYS_Enum;

/* =============================================  MEC_PCR PRS JTAG_TRST [7..7]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_JTAG_TRST                                                     */
  MEC_PCR_PRS_JTAG_TRST_STS            = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_JTAG_TRST_Enum;

/* ===============================================  MEC_PCR PRS WDTEV [8..8]  ================================================ */
typedef enum {                                  /*!< MEC_PCR_PRS_WDTEV                                                         */
  MEC_PCR_PRS_WDTEV_STS                = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_WDTEV_Enum;

/* ==============================================  MEC_PCR PRS ACT32K [10..10]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_ACT32K                                                        */
  MEC_PCR_PRS_ACT32K_STS               = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_ACT32K_Enum;

/* ===========================================  MEC_PCR PRS ESPI_CLK_ACT [11..11]  =========================================== */
typedef enum {                                  /*!< MEC_PCR_PRS_ESPI_CLK_ACT                                                  */
  MEC_PCR_PRS_ESPI_CLK_ACT_STS         = 1,     /*!< STS : Active                                                              */
} MEC_PCR_PRS_ESPI_CLK_ACT_Enum;

/* ==========================================================  PRC  ========================================================== */
/* ==============================================  MEC_PCR PRC PWR_INV [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_PCR_PRC_PWR_INV                                                       */
  MEC_PCR_PRC_PWR_INV_RESET_VCC        = 1,     /*!< RESET_VCC : Block VCC_PWRGD, keeps RESET_VCC asserted                     */
} MEC_PCR_PRC_PWR_INV_Enum;

/* =============================================  MEC_PCR PRC HOST_RSEL [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_PRC_HOST_RSEL                                                     */
  MEC_PCR_PRC_HOST_RSEL_LEGACY         = 1,     /*!< LEGACY : Host reset is legacy signal. Clear this bit to use
                                                     eSPI Reset                                                                */
} MEC_PCR_PRC_HOST_RSEL_Enum;

/* =========================================================  SRST  ========================================================== */
/* ==============================================  MEC_PCR SRST SYS_RST [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_SRST_SYS_RST                                                      */
  MEC_PCR_SRST_SYS_RST_EN              = 1,     /*!< EN : Generate chip reset                                                  */
} MEC_PCR_SRST_SYS_RST_Enum;

/* =======================================================  TURBO_CLK  ======================================================= */
/* ===========================================  MEC_PCR TURBO_CLK FAST_CLK [2..2]  =========================================== */
typedef enum {                                  /*!< MEC_PCR_TURBO_CLK_FAST_CLK                                                */
  MEC_PCR_TURBO_CLK_FAST_CLK_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_TURBO_CLK_FAST_CLK_Enum;

/* ========================================================  VBSRST  ========================================================= */
/* ============================================  MEC_PCR VBSRST VBAT_SRST [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_VBSRST_VBAT_SRST                                                  */
  MEC_PCR_VBSRST_VBAT_SRST_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_VBSRST_VBAT_SRST_Enum;

/* =========================================================  SS32K  ========================================================= */
/* ===========================================  MEC_PCR SS32K PLL_REF_SRC [0..1]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SS32K_PLL_REF_SRC                                                 */
  MEC_PCR_SS32K_PLL_REF_SRC_INTERNAL_OSC = 0,   /*!< INTERNAL_OSC : Use Silicon OSC                                            */
  MEC_PCR_SS32K_PLL_REF_SRC_CRYSTAL    = 1,     /*!< CRYSTAL : Use external crystal                                            */
  MEC_PCR_SS32K_PLL_REF_SRC_PIN_32K_IN = 2,     /*!< PIN_32K_IN : Use signal on 32KHZ_IN pin                                   */
  MEC_PCR_SS32K_PLL_REF_SRC_NONE       = 3,     /*!< NONE : PLL held in reset                                                  */
} MEC_PCR_SS32K_PLL_REF_SRC_Enum;

/* ========================================================  CTRL32K  ======================================================== */
/* ===========================================  MEC_PCR CTRL32K PERIOD_CNT [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_PCR_CTRL32K_PERIOD_CNT                                                */
  MEC_PCR_CTRL32K_PERIOD_CNT_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_CTRL32K_PERIOD_CNT_Enum;

/* ============================================  MEC_PCR CTRL32K DCNT_EN [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_PCR_CTRL32K_DCNT_EN                                                   */
  MEC_PCR_CTRL32K_DCNT_EN_EN           = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_CTRL32K_DCNT_EN_Enum;

/* ===========================================  MEC_PCR CTRL32K VALCNT_EN [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_CTRL32K_VALCNT_EN                                                 */
  MEC_PCR_CTRL32K_VALCNT_EN_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_CTRL32K_VALCNT_EN_Enum;

/* ============================================  MEC_PCR CTRL32K MINTROSC [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_CTRL32K_MINTROSC                                                  */
  MEC_PCR_CTRL32K_MINTROSC_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_CTRL32K_MINTROSC_Enum;

/* ============================================  MEC_PCR CTRL32K CLRCNT [24..24]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_CTRL32K_CLRCNT                                                    */
  MEC_PCR_CTRL32K_CLRCNT_EN            = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_CTRL32K_CLRCNT_Enum;

/* ========================================================  SIS32K  ========================================================= */
/* ============================================  MEC_PCR SIS32K PULSE_RDY [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SIS32K_PULSE_RDY                                                  */
  MEC_PCR_SIS32K_PULSE_RDY_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_PULSE_RDY_Enum;

/* ============================================  MEC_PCR SIS32K PER_PASS [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_PCR_SIS32K_PER_PASS                                                   */
  MEC_PCR_SIS32K_PER_PASS_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_PER_PASS_Enum;

/* ============================================  MEC_PCR SIS32K DUTY_PASS [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SIS32K_DUTY_PASS                                                  */
  MEC_PCR_SIS32K_DUTY_PASS_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_DUTY_PASS_Enum;

/* =============================================  MEC_PCR SIS32K PD_FAIL [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_PCR_SIS32K_PD_FAIL                                                    */
  MEC_PCR_SIS32K_PD_FAIL_ACTIVE        = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_PD_FAIL_Enum;

/* ==============================================  MEC_PCR SIS32K STALL [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_SIS32K_STALL                                                      */
  MEC_PCR_SIS32K_STALL_ACTIVE          = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_STALL_Enum;

/* ==============================================  MEC_PCR SIS32K VALID [5..5]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_SIS32K_VALID                                                      */
  MEC_PCR_SIS32K_VALID_ACTIVE          = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_VALID_Enum;

/* =============================================  MEC_PCR SIS32K UNWELL [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_PCR_SIS32K_UNWELL                                                     */
  MEC_PCR_SIS32K_UNWELL_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PCR_SIS32K_UNWELL_Enum;

/* ========================================================  SIEN32K  ======================================================== */
/* =========================================  MEC_PCR SIEN32K PULSE_RDY_IEN [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_PULSE_RDY_IEN                                             */
  MEC_PCR_SIEN32K_PULSE_RDY_IEN_EN     = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_PULSE_RDY_IEN_Enum;

/* ==========================================  MEC_PCR SIEN32K PER_PASS_IEN [1..1]  ========================================== */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_PER_PASS_IEN                                              */
  MEC_PCR_SIEN32K_PER_PASS_IEN_EN      = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_PER_PASS_IEN_Enum;

/* =========================================  MEC_PCR SIEN32K DUTY_PASS_IEN [2..2]  ========================================== */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_DUTY_PASS_IEN                                             */
  MEC_PCR_SIEN32K_DUTY_PASS_IEN_EN     = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_DUTY_PASS_IEN_Enum;

/* ==========================================  MEC_PCR SIEN32K PD_FAIL_IEN [3..3]  =========================================== */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_PD_FAIL_IEN                                               */
  MEC_PCR_SIEN32K_PD_FAIL_IEN_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_PD_FAIL_IEN_Enum;

/* ===========================================  MEC_PCR SIEN32K STALL_IEN [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_STALL_IEN                                                 */
  MEC_PCR_SIEN32K_STALL_IEN_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_STALL_IEN_Enum;

/* ===========================================  MEC_PCR SIEN32K VALID_IEN [5..5]  ============================================ */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_VALID_IEN                                                 */
  MEC_PCR_SIEN32K_VALID_IEN_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_VALID_IEN_Enum;

/* ===========================================  MEC_PCR SIEN32K UNWELL_IEN [6..6]  =========================================== */
typedef enum {                                  /*!< MEC_PCR_SIEN32K_UNWELL_IEN                                                */
  MEC_PCR_SIEN32K_UNWELL_IEN_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_PCR_SIEN32K_UNWELL_IEN_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_PCR_V2_H */
