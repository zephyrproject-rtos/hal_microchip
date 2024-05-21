/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_GSPI_V1_H
#define _MEC5_GSPI_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief General Purpose SPI (MEC_GSPI0)
  */

typedef struct mec_gspi_regs {                  /*!< (@ 0x40009400) MEC_GSPI0 Structure                                        */
  __IOM uint32_t  ENABLE;                       /*!< (@ 0x00000000) GSPI enable                                                */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000004) GSPI control                                               */
  __IM  uint32_t  STATUS;                       /*!< (@ 0x00000008) GSPI status                                                */
  __IOM uint8_t   TXD;                          /*!< (@ 0x0000000C) GSPI TX data                                               */
  __IM  uint8_t   RESERVED;
  __IM  uint16_t  RESERVED1;
  __IOM uint8_t   RXD;                          /*!< (@ 0x00000010) GSPI TX data                                               */
  __IM  uint8_t   RESERVED2;
  __IM  uint16_t  RESERVED3;
  __IOM uint32_t  CLK_CTRL;                     /*!< (@ 0x00000014) GSPI clock control                                         */
  __IOM uint32_t  PRELOAD;                      /*!< (@ 0x00000018) GPSPI clock generator preload                              */
} MEC_GSPI_Type;                                /*!< Size = 28 (0x1c)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================================================================================== */
/* ================                                         MEC_GSPI                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  ENABLE  ========================================================= */
#define MEC_GSPI_ENABLE_ACTV_Pos          (0UL)                     /*!< ACTV (Bit 0)                                          */
#define MEC_GSPI_ENABLE_ACTV_Msk          (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
/* =========================================================  CTRL  ========================================================== */
#define MEC_GSPI_CTRL_LSBF_Pos            (0UL)                     /*!< LSBF (Bit 0)                                          */
#define MEC_GSPI_CTRL_LSBF_Msk            (0x1UL)                   /*!< LSBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_CTRL_BIOEN_Pos           (1UL)                     /*!< BIOEN (Bit 1)                                         */
#define MEC_GSPI_CTRL_BIOEN_Msk           (0x2UL)                   /*!< BIOEN (Bitfield-Mask: 0x01)                           */
#define MEC_GSPI_CTRL_SPDIN_SEL_Pos       (2UL)                     /*!< SPDIN_SEL (Bit 2)                                     */
#define MEC_GSPI_CTRL_SPDIN_SEL_Msk       (0xcUL)                   /*!< SPDIN_SEL (Bitfield-Mask: 0x03)                       */
#define MEC_GSPI_CTRL_SRST_Pos            (4UL)                     /*!< SRST (Bit 4)                                          */
#define MEC_GSPI_CTRL_SRST_Msk            (0x10UL)                  /*!< SRST (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_CTRL_AUTO_RD_Pos         (5UL)                     /*!< AUTO_RD (Bit 5)                                       */
#define MEC_GSPI_CTRL_AUTO_RD_Msk         (0x20UL)                  /*!< AUTO_RD (Bitfield-Mask: 0x01)                         */
#define MEC_GSPI_CTRL_CE_Pos              (6UL)                     /*!< CE (Bit 6)                                            */
#define MEC_GSPI_CTRL_CE_Msk              (0x40UL)                  /*!< CE (Bitfield-Mask: 0x01)                              */
/* ========================================================  STATUS  ========================================================= */
#define MEC_GSPI_STATUS_TXBE_Pos          (0UL)                     /*!< TXBE (Bit 0)                                          */
#define MEC_GSPI_STATUS_TXBE_Msk          (0x1UL)                   /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_RXBF_Pos          (1UL)                     /*!< RXBF (Bit 1)                                          */
#define MEC_GSPI_STATUS_RXBF_Msk          (0x2UL)                   /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_CLKS_Pos          (2UL)                     /*!< CLKS (Bit 2)                                          */
#define MEC_GSPI_STATUS_CLKS_Msk          (0x4UL)                   /*!< CLKS (Bitfield-Mask: 0x01)                            */
/* ==========================================================  TXD  ========================================================== */
/* ==========================================================  RXD  ========================================================== */
/* =======================================================  CLK_CTRL  ======================================================== */
#define MEC_GSPI_CLK_CTRL_TCLKPH_Pos      (0UL)                     /*!< TCLKPH (Bit 0)                                        */
#define MEC_GSPI_CLK_CTRL_TCLKPH_Msk      (0x1UL)                   /*!< TCLKPH (Bitfield-Mask: 0x01)                          */
#define MEC_GSPI_CLK_CTRL_RCLKPH_Pos      (1UL)                     /*!< RCLKPH (Bit 1)                                        */
#define MEC_GSPI_CLK_CTRL_RCLKPH_Msk      (0x2UL)                   /*!< RCLKPH (Bitfield-Mask: 0x01)                          */
#define MEC_GSPI_CLK_CTRL_CLKPOL_Pos      (2UL)                     /*!< CLKPOL (Bit 2)                                        */
#define MEC_GSPI_CLK_CTRL_CLKPOL_Msk      (0x4UL)                   /*!< CLKPOL (Bitfield-Mask: 0x01)                          */
#define MEC_GSPI_CLK_CTRL_CLKSRC_Pos      (4UL)                     /*!< CLKSRC (Bit 4)                                        */
#define MEC_GSPI_CLK_CTRL_CLKSRC_Msk      (0x10UL)                  /*!< CLKSRC (Bitfield-Mask: 0x01)                          */
/* ========================================================  PRELOAD  ======================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  ENABLE  ========================================================= */
/* =============================================  MEC_GSPI ENABLE ACTV [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_ENABLE_ACTV                                                     */
  MEC_GSPI_ENABLE_ACTV_ON             = 1,     /*!< ON : Enable                                                               */
} MEC_GSPI_ENABLE_ACTV_Enum;

/* =========================================================  CTRL  ========================================================== */
/* ==============================================  MEC_GSPI CTRL LSBF [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_LSBF                                                       */
  MEC_GSPI_CTRL_LSBF_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_GSPI_CTRL_LSBF_Enum;

/* ==============================================  MEC_GSPI CTRL BIOEN [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_BIOEN                                                      */
  MEC_GSPI_CTRL_BIOEN_EN              = 1,     /*!< EN : Enable                                                               */
} MEC_GSPI_CTRL_BIOEN_Enum;

/* ============================================  MEC_GSPI CTRL SPDIN_SEL [2..3]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CTRL_SPDIN_SEL                                                  */
  MEC_GSPI_CTRL_SPDIN_SEL_FD          = 0,     /*!< FD : Full Duplex                                                          */
  MEC_GSPI_CTRL_SPDIN_SEL_HD          = 1,     /*!< HD : Half Duplex                                                          */
  MEC_GSPI_CTRL_SPDIN_SEL_DUAL        = 2,     /*!< DUAL : Dual                                                               */
} MEC_GSPI_CTRL_SPDIN_SEL_Enum;

/* ==============================================  MEC_GSPI CTRL SRST [4..4]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_SRST                                                       */
  MEC_GSPI_CTRL_SRST_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_GSPI_CTRL_SRST_Enum;

/* =============================================  MEC_GSPI CTRL AUTO_RD [5..5]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_CTRL_AUTO_RD                                                    */
  MEC_GSPI_CTRL_AUTO_RD_EN            = 1,     /*!< EN : Enable                                                               */
} MEC_GSPI_CTRL_AUTO_RD_Enum;

/* ===============================================  MEC_GSPI CTRL CE [6..6]  ================================================ */
typedef enum {                                  /*!< MEC_GSPI_CTRL_CE                                                         */
  MEC_GSPI_CTRL_CE_ASSERT             = 1,     /*!< ASSERT : Assert chip select                                               */
} MEC_GSPI_CTRL_CE_Enum;

/* ========================================================  STATUS  ========================================================= */
/* =============================================  MEC_GSPI STATUS TXBE [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_TXBE                                                     */
  MEC_GSPI_STATUS_TXBE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_GSPI_STATUS_TXBE_Enum;

/* =============================================  MEC_GSPI STATUS RXBF [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_RXBF                                                     */
  MEC_GSPI_STATUS_RXBF_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_GSPI_STATUS_RXBF_Enum;

/* =============================================  MEC_GSPI STATUS CLKS [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_CLKS                                                     */
  MEC_GSPI_STATUS_CLKS_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_GSPI_STATUS_CLKS_Enum;

/* ==========================================================  TXD  ========================================================== */
/* ==========================================================  RXD  ========================================================== */
/* =======================================================  CLK_CTRL  ======================================================== */
/* ===========================================  MEC_GSPI CLK_CTRL TCLKPH [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CLK_CTRL_TCLKPH                                                 */
  MEC_GSPI_CLK_CTRL_TCLKPH_TXPRE1_RX1 = 0,     /*!< TXPRE1_RX1 : TX data valid on before first clock edge and input
                                                     data sampled on first edge                                                */
  MEC_GSPI_CLK_CTRL_TCLKPH_TX1_RX2    = 1,     /*!< TX1_RX2 : TX data valid on after first clock edge and input
                                                     data sampled on second edge                                               */
} MEC_GSPI_CLK_CTRL_TCLKPH_Enum;

/* ===========================================  MEC_GSPI CLK_CTRL RCLKPH [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CLK_CTRL_RCLKPH                                                 */
  MEC_GSPI_CLK_CTRL_RCLKPH_RXO        = 0,     /*!< RXO : RX data expected valid on first clock edge and sampled
                                                     on first and following odd edges                                          */
  MEC_GSPI_CLK_CTRL_RCLKPH_RXE        = 1,     /*!< RXE : RX data expected valid after first clock edge and sampled
                                                     on following even edges                                                   */
} MEC_GSPI_CLK_CTRL_RCLKPH_Enum;

/* ===========================================  MEC_GSPI CLK_CTRL CLKPOL [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CLK_CTRL_CLKPOL                                                 */
  MEC_GSPI_CLK_CTRL_CLKPOL_LO         = 0,     /*!< LO : SPI clock state is low when idle                                     */
  MEC_GSPI_CLK_CTRL_CLKPOL_HI         = 1,     /*!< HI : SPI clock state is high when idle                                    */
} MEC_GSPI_CLK_CTRL_CLKPOL_Enum;

/* ===========================================  MEC_GSPI CLK_CTRL CLKSRC [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CLK_CTRL_CLKSRC                                                 */
  MEC_GSPI_CLK_CTRL_CLKSRC_48M        = 0,     /*!< 48M : 48MHz input to SPI clock generator                                  */
  MEC_GSPI_CLK_CTRL_CLKSRC_2M         = 1,     /*!< 2M : 2MHz input to SPI clock generator                                    */
} MEC_GSPI_CLK_CTRL_CLKSRC_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_GSPI_V1_H */
