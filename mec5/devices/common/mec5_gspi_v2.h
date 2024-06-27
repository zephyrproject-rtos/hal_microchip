/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_GSPI_V2_H
#define _MEC5_GSPI_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief General Purpose SPI version 2 (MEC_GSPI)
  */

typedef struct mec_gspi_regs {                  /*!< (@ 0x40009400) MEC_GSPI Structure                                        */
  __IOM uint32_t  MODE;                         /*!< (@ 0x00000000) GSPI Mode                                                  */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000004) GSPI control                                               */
  __OM  uint32_t  EXE;                          /*!< (@ 0x00000008) GSPI execute. Only one bit at a time should be
                                                                    written                                                    */
  __IM  uint32_t  RESERVED;
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000010) GSPI status                                                */
  __IM  uint32_t  BUF_CNT_STS;                  /*!< (@ 0x00000014) GSPI buffer count status                                   */
  __IOM uint32_t  INTREN;                       /*!< (@ 0x00000018) GSPI status                                                */
  __IOM uint32_t  CSTM;                         /*!< (@ 0x0000001C) GPSPI chip select timing                                   */
  __IOM uint32_t  TX_FIFO;                      /*!< (@ 0x00000020) GPSPI TX FIFO                                              */
  __IOM uint32_t  RX_FIFO;                      /*!< (@ 0x00000024) GPSPI RX FIFO                                              */
} MEC_GSPI_Type;                                /*!< Size = 40 (0x28)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
#define MEC_GSPI_MODE_ENABLE_Pos          (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_GSPI_MODE_ENABLE_Msk          (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_GSPI_MODE_SRST_Pos            (1UL)                     /*!< SRST (Bit 1)                                          */
#define MEC_GSPI_MODE_SRST_Msk            (0x2UL)                   /*!< SRST (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_MODE_CPOL_Pos            (8UL)                     /*!< CPOL (Bit 8)                                          */
#define MEC_GSPI_MODE_CPOL_Msk            (0x100UL)                 /*!< CPOL (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_MODE_CPHA_MOSI_Pos       (9UL)                     /*!< CPHA_MOSI (Bit 9)                                     */
#define MEC_GSPI_MODE_CPHA_MOSI_Msk       (0x200UL)                 /*!< CPHA_MOSI (Bitfield-Mask: 0x01)                       */
#define MEC_GSPI_MODE_CPHA_MISO_Pos       (10UL)                    /*!< CPHA_MISO (Bit 10)                                    */
#define MEC_GSPI_MODE_CPHA_MISO_Msk       (0x400UL)                 /*!< CPHA_MISO (Bitfield-Mask: 0x01)                       */
#define MEC_GSPI_MODE_CLK_DIV_Pos         (16UL)                    /*!< CLK_DIV (Bit 16)                                      */
#define MEC_GSPI_MODE_CLK_DIV_Msk         (0xff0000UL)              /*!< CLK_DIV (Bitfield-Mask: 0xff)                         */
/* =========================================================  CTRL  ========================================================== */
#define MEC_GSPI_CTRL_IFM_Pos             (0UL)                     /*!< IFM (Bit 0)                                           */
#define MEC_GSPI_CTRL_IFM_Msk             (0x1UL)                   /*!< IFM (Bitfield-Mask: 0x01)                             */
#define MEC_GSPI_CTRL_TX_XFR_Pos          (2UL)                     /*!< TX_XFR (Bit 2)                                        */
#define MEC_GSPI_CTRL_TX_XFR_Msk          (0xcUL)                   /*!< TX_XFR (Bitfield-Mask: 0x03)                          */
#define MEC_GSPI_CTRL_TX_DMA_Pos          (4UL)                     /*!< TX_DMA (Bit 4)                                        */
#define MEC_GSPI_CTRL_TX_DMA_Msk          (0x30UL)                  /*!< TX_DMA (Bitfield-Mask: 0x03)                          */
#define MEC_GSPI_CTRL_RX_XFR_Pos          (6UL)                     /*!< RX_XFR (Bit 6)                                        */
#define MEC_GSPI_CTRL_RX_XFR_Msk          (0x40UL)                  /*!< RX_XFR (Bitfield-Mask: 0x01)                          */
#define MEC_GSPI_CTRL_RX_DMA_Pos          (7UL)                     /*!< RX_DMA (Bit 7)                                        */
#define MEC_GSPI_CTRL_RX_DMA_Msk          (0x180UL)                 /*!< RX_DMA (Bitfield-Mask: 0x03)                          */
#define MEC_GSPI_CTRL_XFR_CLOSE_Pos       (9UL)                     /*!< XFR_CLOSE (Bit 9)                                     */
#define MEC_GSPI_CTRL_XFR_CLOSE_Msk       (0x200UL)                 /*!< XFR_CLOSE (Bitfield-Mask: 0x01)                       */
#define MEC_GSPI_CTRL_XFR_LEN_UNITS_Pos   (10UL)                    /*!< XFR_LEN_UNITS (Bit 10)                                */
#define MEC_GSPI_CTRL_XFR_LEN_UNITS_Msk   (0x400UL)                 /*!< XFR_LEN_UNITS (Bitfield-Mask: 0x01)                   */
#define MEC_GSPI_CTRL_XFR_LEN_Pos         (17UL)                    /*!< XFR_LEN (Bit 17)                                      */
#define MEC_GSPI_CTRL_XFR_LEN_Msk         (0xfffe0000UL)            /*!< XFR_LEN (Bitfield-Mask: 0x7fff)                       */
/* ==========================================================  EXE  ========================================================== */
#define MEC_GSPI_EXE_START_Pos            (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_GSPI_EXE_START_Msk            (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_GSPI_EXE_STOP_Pos             (1UL)                     /*!< STOP (Bit 1)                                          */
#define MEC_GSPI_EXE_STOP_Msk             (0x2UL)                   /*!< STOP (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_EXE_CLR_FIFOS_Pos        (2UL)                     /*!< CLR_FIFOS (Bit 2)                                     */
#define MEC_GSPI_EXE_CLR_FIFOS_Msk        (0x4UL)                   /*!< CLR_FIFOS (Bitfield-Mask: 0x01)                       */
/* ========================================================  STATUS  ========================================================= */
#define MEC_GSPI_STATUS_XFR_DONE_Pos      (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define MEC_GSPI_STATUS_XFR_DONE_Msk      (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_STATUS_DMA_DONE_Pos      (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define MEC_GSPI_STATUS_DMA_DONE_Msk      (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_STATUS_TXB_ERR_Pos       (2UL)                     /*!< TXB_ERR (Bit 2)                                       */
#define MEC_GSPI_STATUS_TXB_ERR_Msk       (0x4UL)                   /*!< TXB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_GSPI_STATUS_RXB_ERR_Pos       (3UL)                     /*!< RXB_ERR (Bit 3)                                       */
#define MEC_GSPI_STATUS_RXB_ERR_Msk       (0x8UL)                   /*!< RXB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_GSPI_STATUS_PROG_ERR_Pos      (4UL)                     /*!< PROG_ERR (Bit 4)                                      */
#define MEC_GSPI_STATUS_PROG_ERR_Msk      (0x10UL)                  /*!< PROG_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_STATUS_TXBF_Pos          (8UL)                     /*!< TXBF (Bit 8)                                          */
#define MEC_GSPI_STATUS_TXBF_Msk          (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_TXBE_Pos          (9UL)                     /*!< TXBE (Bit 9)                                          */
#define MEC_GSPI_STATUS_TXBE_Msk          (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_TXBS_Pos          (11UL)                    /*!< TXBS (Bit 11)                                         */
#define MEC_GSPI_STATUS_TXBS_Msk          (0x800UL)                 /*!< TXBS (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_RXBF_Pos          (12UL)                    /*!< RXBF (Bit 12)                                         */
#define MEC_GSPI_STATUS_RXBF_Msk          (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_RXBE_Pos          (13UL)                    /*!< RXBE (Bit 13)                                         */
#define MEC_GSPI_STATUS_RXBE_Msk          (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_RXBS_Pos          (15UL)                    /*!< RXBS (Bit 15)                                         */
#define MEC_GSPI_STATUS_RXBS_Msk          (0x8000UL)                /*!< RXBS (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_STATUS_XFR_ACTIVE_Pos    (16UL)                    /*!< XFR_ACTIVE (Bit 16)                                   */
#define MEC_GSPI_STATUS_XFR_ACTIVE_Msk    (0x10000UL)               /*!< XFR_ACTIVE (Bitfield-Mask: 0x01)                      */
/* ======================================================  BUF_CNT_STS  ====================================================== */
#define MEC_GSPI_BUF_CNT_STS_TX_Pos       (0UL)                     /*!< TX (Bit 0)                                            */
#define MEC_GSPI_BUF_CNT_STS_TX_Msk       (0xfUL)                   /*!< TX (Bitfield-Mask: 0x0f)                              */
#define MEC_GSPI_BUF_CNT_STS_RX_Pos       (16UL)                    /*!< RX (Bit 16)                                           */
#define MEC_GSPI_BUF_CNT_STS_RX_Msk       (0xf0000UL)               /*!< RX (Bitfield-Mask: 0x0f)                              */
/* ========================================================  INTREN  ========================================================= */
#define MEC_GSPI_INTREN_XFR_DONE_Pos      (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define MEC_GSPI_INTREN_XFR_DONE_Msk      (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_INTREN_DMA_DONE_Pos      (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define MEC_GSPI_INTREN_DMA_DONE_Msk      (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_INTREN_TXB_ERR_Pos       (2UL)                     /*!< TXB_ERR (Bit 2)                                       */
#define MEC_GSPI_INTREN_TXB_ERR_Msk       (0x4UL)                   /*!< TXB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_GSPI_INTREN_RXB_ERR_Pos       (3UL)                     /*!< RXB_ERR (Bit 3)                                       */
#define MEC_GSPI_INTREN_RXB_ERR_Msk       (0x8UL)                   /*!< RXB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_GSPI_INTREN_PROG_ERR_Pos      (4UL)                     /*!< PROG_ERR (Bit 4)                                      */
#define MEC_GSPI_INTREN_PROG_ERR_Msk      (0x10UL)                  /*!< PROG_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_GSPI_INTREN_TXBF_Pos          (8UL)                     /*!< TXBF (Bit 8)                                          */
#define MEC_GSPI_INTREN_TXBF_Msk          (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_INTREN_TXBE_Pos          (9UL)                     /*!< TXBE (Bit 9)                                          */
#define MEC_GSPI_INTREN_TXBE_Msk          (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_INTREN_TXBS_Pos          (11UL)                    /*!< TXBS (Bit 11)                                         */
#define MEC_GSPI_INTREN_TXBS_Msk          (0x800UL)                 /*!< TXBS (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_INTREN_RXBF_Pos          (12UL)                    /*!< RXBF (Bit 12)                                         */
#define MEC_GSPI_INTREN_RXBF_Msk          (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_INTREN_RXBE_Pos          (13UL)                    /*!< RXBE (Bit 13)                                         */
#define MEC_GSPI_INTREN_RXBE_Msk          (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define MEC_GSPI_INTREN_RXBS_Pos          (15UL)                    /*!< RXBS (Bit 15)                                         */
#define MEC_GSPI_INTREN_RXBS_Msk          (0x8000UL)                /*!< RXBS (Bitfield-Mask: 0x01)                            */
/* =========================================================  CSTM  ========================================================== */
#define MEC_GSPI_CSTM_DLY_CS_TO_CLK_Pos   (0UL)                     /*!< DLY_CS_TO_CLK (Bit 0)                                 */
#define MEC_GSPI_CSTM_DLY_CS_TO_CLK_Msk   (0xfUL)                   /*!< DLY_CS_TO_CLK (Bitfield-Mask: 0x0f)                   */
#define MEC_GSPI_CSTM_DLY_CLK_TO_CS_Pos   (8UL)                     /*!< DLY_CLK_TO_CS (Bit 8)                                 */
#define MEC_GSPI_CSTM_DLY_CLK_TO_CS_Msk   (0xf00UL)                 /*!< DLY_CLK_TO_CS (Bitfield-Mask: 0x0f)                   */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
/* =============================================  MEC_GSPI MODE ENABLE [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_MODE_ENABLE                                                     */
  MEC_GSPI_MODE_ENABLE_ON             = 1,     /*!< ON : Enable                                                               */
} MEC_GSPI_MODE_ENABLE_Enum;

/* ==============================================  MEC_GSPI MODE SRST [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_MODE_SRST                                                       */
  MEC_GSPI_MODE_SRST_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_GSPI_MODE_SRST_Enum;

/* ==============================================  MEC_GSPI MODE CPOL [8..8]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_MODE_CPOL                                                       */
  MEC_GSPI_MODE_CPOL_LO               = 0,     /*!< LO : clock idle state is low                                              */
  MEC_GSPI_MODE_CPOL_HI               = 1,     /*!< HI : clock idle state is high                                             */
} MEC_GSPI_MODE_CPOL_Enum;

/* ============================================  MEC_GSPI MODE CPHA_MOSI [9..9]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_MODE_CPHA_MOSI                                                  */
  MEC_GSPI_MODE_CPHA_MOSI_FIRST       = 0,     /*!< FIRST : Transmitted data changes on first clock edge                      */
  MEC_GSPI_MODE_CPHA_MOSI_SECOND      = 1,     /*!< SECOND : Transmitted data changes on second clock edge                    */
} MEC_GSPI_MODE_CPHA_MOSI_Enum;

/* ===========================================  MEC_GSPI MODE CPHA_MISO [10..10]  =========================================== */
typedef enum {                                  /*!< MEC_GSPI_MODE_CPHA_MISO                                                  */
  MEC_GSPI_MODE_CPHA_MISO_FIRST       = 0,     /*!< FIRST : Received data captured on second clock edge                       */
  MEC_GSPI_MODE_CPHA_MISO_SECOND      = 1,     /*!< SECOND : Received data captured on first clock edge                       */
} MEC_GSPI_MODE_CPHA_MISO_Enum;

/* ============================================  MEC_GSPI MODE CLK_DIV [16..23]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_MODE_CLK_DIV                                                    */
  MEC_GSPI_MODE_CLK_DIV_256           = 0,     /*!< 256 : Clock divider is 256 for 187500 Hz                                  */
  MEC_GSPI_MODE_CLK_DIV_48M           = 1,     /*!< 48M : Clock divider is 1 for 48MHz                                        */
  MEC_GSPI_MODE_CLK_DIV_24M           = 2,     /*!< 24M : Clock divider is 2 for 24MHz                                        */
  MEC_GSPI_MODE_CLK_DIV_16M           = 3,     /*!< 16M : Clock divider is 3 for 16MHz                                        */
  MEC_GSPI_MODE_CLK_DIV_12M           = 4,     /*!< 12M : Clock divider is 4 for 16MHz                                        */
  MEC_GSPI_MODE_CLK_DIV_8M            = 6,     /*!< 8M : Clock divider is 6 for 8MHz                                          */
  MEC_GSPI_MODE_CLK_DIV_6M            = 8,     /*!< 6M : Clock divider is 8 for 6MHz                                          */
  MEC_GSPI_MODE_CLK_DIV_4M            = 12,    /*!< 4M : Clock divider is 12 for 4MHz                                         */
  MEC_GSPI_MODE_CLK_DIV_2M            = 24,    /*!< 2M : Clock divider is 24 for 2MHz                                         */
  MEC_GSPI_MODE_CLK_DIV_1M            = 48,    /*!< 1M : Clock divider is 48 for 1MHz                                         */
} MEC_GSPI_MODE_CLK_DIV_Enum;

/* =========================================================  CTRL  ========================================================== */
/* ===============================================  MEC_GSPI CTRL IFM [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_IFM                                                        */
  MEC_GSPI_CTRL_IFM_FULL_DUPLEX       = 0,     /*!< FULL_DUPLEX : Full duplex I/O                                             */
  MEC_GSPI_CTRL_IFM_DUAL              = 1,     /*!< DUAL : Dual I/O                                                           */
} MEC_GSPI_CTRL_IFM_Enum;

/* =============================================  MEC_GSPI CTRL TX_XFR [2..3]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_TX_XFR                                                     */
  MEC_GSPI_CTRL_TX_XFR_DIS            = 0,     /*!< DIS : Transmit is disabled, clocks only                                   */
  MEC_GSPI_CTRL_TX_XFR_EN_DATA        = 1,     /*!< EN_DATA : Transmit data from TX FIFO                                      */
  MEC_GSPI_CTRL_TX_XFR_EN_ZEROS       = 2,     /*!< EN_ZEROS : Transmit zeros as data                                         */
  MEC_GSPI_CTRL_TX_XFR_EN_ONES        = 3,     /*!< EN_ONES : Transmit ones as data                                           */
} MEC_GSPI_CTRL_TX_XFR_Enum;

/* =============================================  MEC_GSPI CTRL TX_DMA [4..5]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_TX_DMA                                                     */
  MEC_GSPI_CTRL_TX_DMA_DIS            = 0,     /*!< DIS : TX DMA is disabled                                                  */
  MEC_GSPI_CTRL_TX_DMA_EN_1BYTE       = 1,     /*!< EN_1BYTE : TX DMA enabled for units of 1 bytes                            */
  MEC_GSPI_CTRL_TX_DMA_EN_2BYTE       = 2,     /*!< EN_2BYTE : TX DMA enabled for units of 2 bytes                            */
  MEC_GSPI_CTRL_TX_DMA_EN_4BYTE       = 3,     /*!< EN_4BYTE : TX DMA enabled for units of 4 bytes                            */
} MEC_GSPI_CTRL_TX_DMA_Enum;

/* =============================================  MEC_GSPI CTRL RX_XFR [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_RX_XFR                                                     */
  MEC_GSPI_CTRL_RX_XFR_EN             = 1,     /*!< EN : Enable receive                                                       */
} MEC_GSPI_CTRL_RX_XFR_Enum;

/* =============================================  MEC_GSPI CTRL RX_DMA [7..8]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_CTRL_RX_DMA                                                     */
  MEC_GSPI_CTRL_RX_DMA_DIS            = 0,     /*!< DIS : Disable RX DMA                                                      */
  MEC_GSPI_CTRL_RX_DMA_EN_1BYTE       = 1,     /*!< EN_1BYTE : RX DMA enable for units of 1 byte                              */
  MEC_GSPI_CTRL_RX_DMA_EN_2BYTE       = 2,     /*!< EN_2BYTE : RX DMA enable for units of 2 bytes                             */
  MEC_GSPI_CTRL_RX_DMA_EN_4BYTE       = 3,     /*!< EN_4BYTE : RX DMA enable for units of 4 bytes                             */
} MEC_GSPI_CTRL_RX_DMA_Enum;

/* ============================================  MEC_GSPI CTRL XFR_CLOSE [9..9]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CTRL_XFR_CLOSE                                                  */
  MEC_GSPI_CTRL_XFR_CLOSE_EN          = 1,     /*!< EN : Enable close of transfer                                             */
} MEC_GSPI_CTRL_XFR_CLOSE_Enum;

/* =========================================  MEC_GSPI CTRL XFR_LEN_UNITS [10..10]  ========================================= */
typedef enum {                                  /*!< MEC_GSPI_CTRL_XFR_LEN_UNITS                                              */
  MEC_GSPI_CTRL_XFR_LEN_UNITS_BITS    = 0,     /*!< BITS : Transfer length is in bit units                                    */
  MEC_GSPI_CTRL_XFR_LEN_UNITS_BYTES   = 1,     /*!< BYTES : Transfer length is in byte units                                  */
} MEC_GSPI_CTRL_XFR_LEN_UNITS_Enum;

/* ============================================  MEC_GSPI CTRL XFR_LEN [17..31]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_CTRL_XFR_LEN                                                    */
  MEC_GSPI_CTRL_XFR_LEN_UNLIMITED     = 0,     /*!< UNLIMITED : Zero transfer units is unlimited. Controller will
                                                     continuously generated clocks only throttled by TX FIFO
                                                     empty or RX FIFO full                                                     */
  MEC_GSPI_CTRL_XFR_LEN_MAX           = 32767, /*!< MAX : Maximum number of units to transfer                                 */
} MEC_GSPI_CTRL_XFR_LEN_Enum;

/* ==========================================================  EXE  ========================================================== */
/* ==============================================  MEC_GSPI EXE START [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_EXE_START                                                       */
  MEC_GSPI_EXE_START_EN               = 1,     /*!< EN : Begin configured transaction                                         */
} MEC_GSPI_EXE_START_Enum;

/* ===============================================  MEC_GSPI EXE STOP [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_GSPI_EXE_STOP                                                        */
  MEC_GSPI_EXE_STOP_EN                = 1,     /*!< EN : Stop transaction                                                     */
} MEC_GSPI_EXE_STOP_Enum;

/* ============================================  MEC_GSPI EXE CLR_FIFOS [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_EXE_CLR_FIFOS                                                   */
  MEC_GSPI_EXE_CLR_FIFOS_EN           = 1,     /*!< EN : Clear TX and RX FIFOs                                                */
} MEC_GSPI_EXE_CLR_FIFOS_Enum;

/* ========================================================  STATUS  ========================================================= */
/* ===========================================  MEC_GSPI STATUS XFR_DONE [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_STATUS_XFR_DONE                                                 */
  MEC_GSPI_STATUS_XFR_DONE_ON         = 1,     /*!< ON : Transfer done status is active                                       */
} MEC_GSPI_STATUS_XFR_DONE_Enum;

/* ===========================================  MEC_GSPI STATUS DMA_DONE [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_STATUS_DMA_DONE                                                 */
  MEC_GSPI_STATUS_DMA_DONE_ON         = 1,     /*!< ON : External DMA channel is done                                         */
} MEC_GSPI_STATUS_DMA_DONE_Enum;

/* ============================================  MEC_GSPI STATUS TXB_ERR [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_STATUS_TXB_ERR                                                  */
  MEC_GSPI_STATUS_TXB_ERR_ON          = 1,     /*!< ON : TX FIFO was written while full                                       */
} MEC_GSPI_STATUS_TXB_ERR_Enum;

/* ============================================  MEC_GSPI STATUS RXB_ERR [3..3]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_STATUS_RXB_ERR                                                  */
  MEC_GSPI_STATUS_RXB_ERR_ON          = 1,     /*!< ON : RX FIFO was read while empty                                         */
} MEC_GSPI_STATUS_RXB_ERR_Enum;

/* ===========================================  MEC_GSPI STATUS PROG_ERR [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_STATUS_PROG_ERR                                                 */
  MEC_GSPI_STATUS_PROG_ERR_ON         = 1,     /*!< ON : Software misconfigured registers                                     */
} MEC_GSPI_STATUS_PROG_ERR_Enum;

/* =============================================  MEC_GSPI STATUS TXBF [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_TXBF                                                     */
  MEC_GSPI_STATUS_TXBF_ON             = 1,     /*!< ON : TX FIFO is full(RO)                                                  */
} MEC_GSPI_STATUS_TXBF_Enum;

/* =============================================  MEC_GSPI STATUS TXBE [9..9]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_TXBE                                                     */
  MEC_GSPI_STATUS_TXBE_ON             = 1,     /*!< ON : TX FIFO is empty(RO)                                                 */
} MEC_GSPI_STATUS_TXBE_Enum;

/* ============================================  MEC_GSPI STATUS TXBS [11..11]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_STATUS_TXBS                                                     */
  MEC_GSPI_STATUS_TXBS_ON             = 1,     /*!< ON : TX FIFO went empty during on-going transfer                          */
} MEC_GSPI_STATUS_TXBS_Enum;

/* ============================================  MEC_GSPI STATUS RXBF [12..12]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_STATUS_RXBF                                                     */
  MEC_GSPI_STATUS_RXBF_ON             = 1,     /*!< ON : RX FIFO is full(RO)                                                  */
} MEC_GSPI_STATUS_RXBF_Enum;

/* ============================================  MEC_GSPI STATUS RXBE [13..13]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_STATUS_RXBE                                                     */
  MEC_GSPI_STATUS_RXBE_ON             = 1,     /*!< ON : RX FIFO is empty(RO)                                                 */
} MEC_GSPI_STATUS_RXBE_Enum;

/* ============================================  MEC_GSPI STATUS RXBS [15..15]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_STATUS_RXBS                                                     */
  MEC_GSPI_STATUS_RXBS_ON             = 1,     /*!< ON : RX FIFO became full during on-going transfer                         */
} MEC_GSPI_STATUS_RXBS_Enum;

/* =========================================  MEC_GSPI STATUS XFR_ACTIVE [16..16]  ========================================== */
typedef enum {                                  /*!< MEC_GSPI_STATUS_XFR_ACTIVE                                               */
  MEC_GSPI_STATUS_XFR_ACTIVE_ON       = 1,     /*!< ON : A transfer is active, chip select asserted(RO)                       */
} MEC_GSPI_STATUS_XFR_ACTIVE_Enum;

/* ======================================================  BUF_CNT_STS  ====================================================== */
/* ============================================  MEC_GSPI BUF_CNT_STS TX [0..3]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_BUF_CNT_STS_TX                                                  */
  MEC_GSPI_BUF_CNT_STS_TX_EMPTY       = 0,     /*!< EMPTY : TX buffer is empty                                                */
  MEC_GSPI_BUF_CNT_STS_TX_TX_MAX      = 1,     /*!< TX_MAX : 8                                                                */
} MEC_GSPI_BUF_CNT_STS_TX_Enum;

/* ===========================================  MEC_GSPI BUF_CNT_STS RX [16..19]  =========================================== */
typedef enum {                                  /*!< MEC_GSPI_BUF_CNT_STS_RX                                                  */
  MEC_GSPI_BUF_CNT_STS_RX_EMPTY       = 0,     /*!< EMPTY : RX FIFO is empty                                                  */
  MEC_GSPI_BUF_CNT_STS_RX_RX_MAX      = 8,     /*!< RX_MAX : 8                                                                */
} MEC_GSPI_BUF_CNT_STS_RX_Enum;

/* ========================================================  INTREN  ========================================================= */
/* ===========================================  MEC_GSPI INTREN XFR_DONE [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_INTREN_XFR_DONE                                                 */
  MEC_GSPI_INTREN_XFR_DONE_EN         = 1,     /*!< EN : Enable interrupt on transfer done status is active                   */
} MEC_GSPI_INTREN_XFR_DONE_Enum;

/* ===========================================  MEC_GSPI INTREN DMA_DONE [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_INTREN_DMA_DONE                                                 */
  MEC_GSPI_INTREN_DMA_DONE_EN         = 1,     /*!< EN : External DMA channel is done                                         */
} MEC_GSPI_INTREN_DMA_DONE_Enum;

/* ============================================  MEC_GSPI INTREN TXB_ERR [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_INTREN_TXB_ERR                                                  */
  MEC_GSPI_INTREN_TXB_ERR_EN          = 1,     /*!< EN : TX FIFO was written while full                                       */
} MEC_GSPI_INTREN_TXB_ERR_Enum;

/* ============================================  MEC_GSPI INTREN RXB_ERR [3..3]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_INTREN_RXB_ERR                                                  */
  MEC_GSPI_INTREN_RXB_ERR_EN          = 1,     /*!< EN : RX FIFO was read while empty                                         */
} MEC_GSPI_INTREN_RXB_ERR_Enum;

/* ===========================================  MEC_GSPI INTREN PROG_ERR [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_GSPI_INTREN_PROG_ERR                                                 */
  MEC_GSPI_INTREN_PROG_ERR_EN         = 1,     /*!< EN : Software misconfigured registers                                     */
} MEC_GSPI_INTREN_PROG_ERR_Enum;

/* =============================================  MEC_GSPI INTREN TXBF [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_INTREN_TXBF                                                     */
  MEC_GSPI_INTREN_TXBF_EN             = 1,     /*!< EN : TX FIFO is full(RO)                                                  */
} MEC_GSPI_INTREN_TXBF_Enum;

/* =============================================  MEC_GSPI INTREN TXBE [9..9]  ============================================== */
typedef enum {                                  /*!< MEC_GSPI_INTREN_TXBE                                                     */
  MEC_GSPI_INTREN_TXBE_EN             = 1,     /*!< EN : TX FIFO is empty(RO)                                                 */
} MEC_GSPI_INTREN_TXBE_Enum;

/* ============================================  MEC_GSPI INTREN TXBS [11..11]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_INTREN_TXBS                                                     */
  MEC_GSPI_INTREN_TXBS_EN             = 1,     /*!< EN : TX FIFO went empty during on-going transfer                          */
} MEC_GSPI_INTREN_TXBS_Enum;

/* ============================================  MEC_GSPI INTREN RXBF [12..12]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_INTREN_RXBF                                                     */
  MEC_GSPI_INTREN_RXBF_EN             = 1,     /*!< EN : RX FIFO is full(RO)                                                  */
} MEC_GSPI_INTREN_RXBF_Enum;

/* ============================================  MEC_GSPI INTREN RXBE [13..13]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_INTREN_RXBE                                                     */
  MEC_GSPI_INTREN_RXBE_EN             = 1,     /*!< EN : RX FIFO is empty(RO)                                                 */
} MEC_GSPI_INTREN_RXBE_Enum;

/* ============================================  MEC_GSPI INTREN RXBS [15..15]  ============================================= */
typedef enum {                                  /*!< MEC_GSPI_INTREN_RXBS                                                     */
  MEC_GSPI_INTREN_RXBS_EN             = 1,     /*!< EN : RX FIFO became full during on-going transfer                         */
} MEC_GSPI_INTREN_RXBS_Enum;

/* =========================================================  CSTM  ========================================================== */
/* ==========================================  MEC_GSPI CSTM DLY_CS_TO_CLK [0..3]  ========================================== */
typedef enum {                                  /*!< MEC_GSPI_CSTM_DLY_CS_TO_CLK                                              */
  MEC_GSPI_CSTM_DLY_CS_TO_CLK_NONE    = 0,     /*!< NONE : No delay                                                           */
  MEC_GSPI_CSTM_DLY_CS_TO_CLK_DFLT6   = 6,     /*!< DFLT6 : Six system clocks is the default delay                            */
} MEC_GSPI_CSTM_DLY_CS_TO_CLK_Enum;

/* =========================================  MEC_GSPI CSTM DLY_CLK_TO_CS [8..11]  ========================================== */
typedef enum {                                  /*!< MEC_GSPI_CSTM_DLY_CLK_TO_CS                                              */
  MEC_GSPI_CSTM_DLY_CLK_TO_CS_NONE    = 0,     /*!< NONE : No delay                                                           */
  MEC_GSPI_CSTM_DLY_CLK_TO_CS_DFLT4   = 6,     /*!< DFLT4 : Four system clocks is the default delay                           */
} MEC_GSPI_CSTM_DLY_CLK_TO_CS_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_GSPI_V2_H */
