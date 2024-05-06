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
  * @brief General Purpose SPI version 2 (GSPI0)
  */

typedef struct gspi_regs {                      /*!< (@ 0x40009400) GSPI0 Structure                                            */
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
} GSPI_Type;                                    /*!< Size = 40 (0x28)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
#define GSPI_MODE_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define GSPI_MODE_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define GSPI_MODE_SRST_Pos                (1UL)                     /*!< SRST (Bit 1)                                          */
#define GSPI_MODE_SRST_Msk                (0x2UL)                   /*!< SRST (Bitfield-Mask: 0x01)                            */
#define GSPI_MODE_CPOL_Pos                (8UL)                     /*!< CPOL (Bit 8)                                          */
#define GSPI_MODE_CPOL_Msk                (0x100UL)                 /*!< CPOL (Bitfield-Mask: 0x01)                            */
#define GSPI_MODE_CPHA_MOSI_Pos           (9UL)                     /*!< CPHA_MOSI (Bit 9)                                     */
#define GSPI_MODE_CPHA_MOSI_Msk           (0x200UL)                 /*!< CPHA_MOSI (Bitfield-Mask: 0x01)                       */
#define GSPI_MODE_CPHA_MISO_Pos           (10UL)                    /*!< CPHA_MISO (Bit 10)                                    */
#define GSPI_MODE_CPHA_MISO_Msk           (0x400UL)                 /*!< CPHA_MISO (Bitfield-Mask: 0x01)                       */
#define GSPI_MODE_CLK_DIV_Pos             (16UL)                    /*!< CLK_DIV (Bit 16)                                      */
#define GSPI_MODE_CLK_DIV_Msk             (0xff0000UL)              /*!< CLK_DIV (Bitfield-Mask: 0xff)                         */
/* =========================================================  CTRL  ========================================================== */
#define GSPI_CTRL_IFM_Pos                 (0UL)                     /*!< IFM (Bit 0)                                           */
#define GSPI_CTRL_IFM_Msk                 (0x1UL)                   /*!< IFM (Bitfield-Mask: 0x01)                             */
#define GSPI_CTRL_TX_XFR_Pos              (2UL)                     /*!< TX_XFR (Bit 2)                                        */
#define GSPI_CTRL_TX_XFR_Msk              (0xcUL)                   /*!< TX_XFR (Bitfield-Mask: 0x03)                          */
#define GSPI_CTRL_TX_DMA_Pos              (4UL)                     /*!< TX_DMA (Bit 4)                                        */
#define GSPI_CTRL_TX_DMA_Msk              (0x30UL)                  /*!< TX_DMA (Bitfield-Mask: 0x03)                          */
#define GSPI_CTRL_RX_XFR_Pos              (6UL)                     /*!< RX_XFR (Bit 6)                                        */
#define GSPI_CTRL_RX_XFR_Msk              (0x40UL)                  /*!< RX_XFR (Bitfield-Mask: 0x01)                          */
#define GSPI_CTRL_RX_DMA_Pos              (7UL)                     /*!< RX_DMA (Bit 7)                                        */
#define GSPI_CTRL_RX_DMA_Msk              (0x180UL)                 /*!< RX_DMA (Bitfield-Mask: 0x03)                          */
#define GSPI_CTRL_XFR_CLOSE_Pos           (9UL)                     /*!< XFR_CLOSE (Bit 9)                                     */
#define GSPI_CTRL_XFR_CLOSE_Msk           (0x200UL)                 /*!< XFR_CLOSE (Bitfield-Mask: 0x01)                       */
#define GSPI_CTRL_XFR_LEN_UNITS_Pos       (10UL)                    /*!< XFR_LEN_UNITS (Bit 10)                                */
#define GSPI_CTRL_XFR_LEN_UNITS_Msk       (0x400UL)                 /*!< XFR_LEN_UNITS (Bitfield-Mask: 0x01)                   */
#define GSPI_CTRL_XFR_LEN_Pos             (17UL)                    /*!< XFR_LEN (Bit 17)                                      */
#define GSPI_CTRL_XFR_LEN_Msk             (0xfffe0000UL)            /*!< XFR_LEN (Bitfield-Mask: 0x7fff)                       */
/* ==========================================================  EXE  ========================================================== */
#define GSPI_EXE_START_Pos                (0UL)                     /*!< START (Bit 0)                                         */
#define GSPI_EXE_START_Msk                (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define GSPI_EXE_STOP_Pos                 (1UL)                     /*!< STOP (Bit 1)                                          */
#define GSPI_EXE_STOP_Msk                 (0x2UL)                   /*!< STOP (Bitfield-Mask: 0x01)                            */
#define GSPI_EXE_CLR_FIFOS_Pos            (2UL)                     /*!< CLR_FIFOS (Bit 2)                                     */
#define GSPI_EXE_CLR_FIFOS_Msk            (0x4UL)                   /*!< CLR_FIFOS (Bitfield-Mask: 0x01)                       */
/* ========================================================  STATUS  ========================================================= */
#define GSPI_STATUS_XFR_DONE_Pos          (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define GSPI_STATUS_XFR_DONE_Msk          (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define GSPI_STATUS_DMA_DONE_Pos          (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define GSPI_STATUS_DMA_DONE_Msk          (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define GSPI_STATUS_TXB_ERR_Pos           (2UL)                     /*!< TXB_ERR (Bit 2)                                       */
#define GSPI_STATUS_TXB_ERR_Msk           (0x4UL)                   /*!< TXB_ERR (Bitfield-Mask: 0x01)                         */
#define GSPI_STATUS_RXB_ERR_Pos           (3UL)                     /*!< RXB_ERR (Bit 3)                                       */
#define GSPI_STATUS_RXB_ERR_Msk           (0x8UL)                   /*!< RXB_ERR (Bitfield-Mask: 0x01)                         */
#define GSPI_STATUS_PROG_ERR_Pos          (4UL)                     /*!< PROG_ERR (Bit 4)                                      */
#define GSPI_STATUS_PROG_ERR_Msk          (0x10UL)                  /*!< PROG_ERR (Bitfield-Mask: 0x01)                        */
#define GSPI_STATUS_TXBF_Pos              (8UL)                     /*!< TXBF (Bit 8)                                          */
#define GSPI_STATUS_TXBF_Msk              (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_TXBE_Pos              (9UL)                     /*!< TXBE (Bit 9)                                          */
#define GSPI_STATUS_TXBE_Msk              (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_TXBS_Pos              (11UL)                    /*!< TXBS (Bit 11)                                         */
#define GSPI_STATUS_TXBS_Msk              (0x800UL)                 /*!< TXBS (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_RXBF_Pos              (12UL)                    /*!< RXBF (Bit 12)                                         */
#define GSPI_STATUS_RXBF_Msk              (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_RXBE_Pos              (13UL)                    /*!< RXBE (Bit 13)                                         */
#define GSPI_STATUS_RXBE_Msk              (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_RXBS_Pos              (15UL)                    /*!< RXBS (Bit 15)                                         */
#define GSPI_STATUS_RXBS_Msk              (0x8000UL)                /*!< RXBS (Bitfield-Mask: 0x01)                            */
#define GSPI_STATUS_XFR_ACTIVE_Pos        (16UL)                    /*!< XFR_ACTIVE (Bit 16)                                   */
#define GSPI_STATUS_XFR_ACTIVE_Msk        (0x10000UL)               /*!< XFR_ACTIVE (Bitfield-Mask: 0x01)                      */
/* ======================================================  BUF_CNT_STS  ====================================================== */
#define GSPI_BUF_CNT_STS_TX_Pos           (0UL)                     /*!< TX (Bit 0)                                            */
#define GSPI_BUF_CNT_STS_TX_Msk           (0xfUL)                   /*!< TX (Bitfield-Mask: 0x0f)                              */
#define GSPI_BUF_CNT_STS_RX_Pos           (16UL)                    /*!< RX (Bit 16)                                           */
#define GSPI_BUF_CNT_STS_RX_Msk           (0xf0000UL)               /*!< RX (Bitfield-Mask: 0x0f)                              */
/* ========================================================  INTREN  ========================================================= */
#define GSPI_INTREN_XFR_DONE_Pos          (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define GSPI_INTREN_XFR_DONE_Msk          (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define GSPI_INTREN_DMA_DONE_Pos          (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define GSPI_INTREN_DMA_DONE_Msk          (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define GSPI_INTREN_TXB_ERR_Pos           (2UL)                     /*!< TXB_ERR (Bit 2)                                       */
#define GSPI_INTREN_TXB_ERR_Msk           (0x4UL)                   /*!< TXB_ERR (Bitfield-Mask: 0x01)                         */
#define GSPI_INTREN_RXB_ERR_Pos           (3UL)                     /*!< RXB_ERR (Bit 3)                                       */
#define GSPI_INTREN_RXB_ERR_Msk           (0x8UL)                   /*!< RXB_ERR (Bitfield-Mask: 0x01)                         */
#define GSPI_INTREN_PROG_ERR_Pos          (4UL)                     /*!< PROG_ERR (Bit 4)                                      */
#define GSPI_INTREN_PROG_ERR_Msk          (0x10UL)                  /*!< PROG_ERR (Bitfield-Mask: 0x01)                        */
#define GSPI_INTREN_TXBF_Pos              (8UL)                     /*!< TXBF (Bit 8)                                          */
#define GSPI_INTREN_TXBF_Msk              (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define GSPI_INTREN_TXBE_Pos              (9UL)                     /*!< TXBE (Bit 9)                                          */
#define GSPI_INTREN_TXBE_Msk              (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define GSPI_INTREN_TXBS_Pos              (11UL)                    /*!< TXBS (Bit 11)                                         */
#define GSPI_INTREN_TXBS_Msk              (0x800UL)                 /*!< TXBS (Bitfield-Mask: 0x01)                            */
#define GSPI_INTREN_RXBF_Pos              (12UL)                    /*!< RXBF (Bit 12)                                         */
#define GSPI_INTREN_RXBF_Msk              (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define GSPI_INTREN_RXBE_Pos              (13UL)                    /*!< RXBE (Bit 13)                                         */
#define GSPI_INTREN_RXBE_Msk              (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define GSPI_INTREN_RXBS_Pos              (15UL)                    /*!< RXBS (Bit 15)                                         */
#define GSPI_INTREN_RXBS_Msk              (0x8000UL)                /*!< RXBS (Bitfield-Mask: 0x01)                            */
/* =========================================================  CSTM  ========================================================== */
#define GSPI_CSTM_DLY_CS_TO_CLK_Pos       (0UL)                     /*!< DLY_CS_TO_CLK (Bit 0)                                 */
#define GSPI_CSTM_DLY_CS_TO_CLK_Msk       (0xfUL)                   /*!< DLY_CS_TO_CLK (Bitfield-Mask: 0x0f)                   */
#define GSPI_CSTM_DLY_CLK_TO_CS_Pos       (8UL)                     /*!< DLY_CLK_TO_CS (Bit 8)                                 */
#define GSPI_CSTM_DLY_CLK_TO_CS_Msk       (0xf00UL)                 /*!< DLY_CLK_TO_CS (Bitfield-Mask: 0x0f)                   */
/* ========================================================  TX_FIFO  ======================================================== */
/* ========================================================  RX_FIFO  ======================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
/* ===============================================  GSPI MODE ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< GSPI_MODE_ENABLE                                                         */
  GSPI_MODE_ENABLE_ON                 = 1,     /*!< ON : Enable                                                               */
} GSPI_MODE_ENABLE_Enum;

/* ================================================  GSPI MODE SRST [1..1]  ================================================= */
typedef enum {                                  /*!< GSPI_MODE_SRST                                                           */
  GSPI_MODE_SRST_EN                   = 1,     /*!< EN : Enable                                                               */
} GSPI_MODE_SRST_Enum;

/* ================================================  GSPI MODE CPOL [8..8]  ================================================= */
typedef enum {                                  /*!< GSPI_MODE_CPOL                                                           */
  GSPI_MODE_CPOL_LO                   = 0,     /*!< LO : clock idle state is low                                              */
  GSPI_MODE_CPOL_HI                   = 1,     /*!< HI : clock idle state is high                                             */
} GSPI_MODE_CPOL_Enum;

/* ==============================================  GSPI MODE CPHA_MOSI [9..9]  ============================================== */
typedef enum {                                  /*!< GSPI_MODE_CPHA_MOSI                                                      */
  GSPI_MODE_CPHA_MOSI_FIRST           = 0,     /*!< FIRST : Transmitted data changes on first clock edge                      */
  GSPI_MODE_CPHA_MOSI_SECOND          = 1,     /*!< SECOND : Transmitted data changes on second clock edge                    */
} GSPI_MODE_CPHA_MOSI_Enum;

/* =============================================  GSPI MODE CPHA_MISO [10..10]  ============================================= */
typedef enum {                                  /*!< GSPI_MODE_CPHA_MISO                                                      */
  GSPI_MODE_CPHA_MISO_FIRST           = 0,     /*!< FIRST : Received data captured on second clock edge                       */
  GSPI_MODE_CPHA_MISO_SECOND          = 1,     /*!< SECOND : Received data captured on first clock edge                       */
} GSPI_MODE_CPHA_MISO_Enum;

/* ==============================================  GSPI MODE CLK_DIV [16..23]  ============================================== */
typedef enum {                                  /*!< GSPI_MODE_CLK_DIV                                                        */
  GSPI_MODE_CLK_DIV_256               = 0,     /*!< 256 : Clock divider is 256 for 187500 Hz                                  */
  GSPI_MODE_CLK_DIV_48M               = 1,     /*!< 48M : Clock divider is 1 for 48MHz                                        */
  GSPI_MODE_CLK_DIV_24M               = 2,     /*!< 24M : Clock divider is 2 for 24MHz                                        */
  GSPI_MODE_CLK_DIV_16M               = 3,     /*!< 16M : Clock divider is 3 for 16MHz                                        */
  GSPI_MODE_CLK_DIV_12M               = 4,     /*!< 12M : Clock divider is 4 for 16MHz                                        */
  GSPI_MODE_CLK_DIV_8M                = 6,     /*!< 8M : Clock divider is 6 for 8MHz                                          */
  GSPI_MODE_CLK_DIV_6M                = 8,     /*!< 6M : Clock divider is 8 for 6MHz                                          */
  GSPI_MODE_CLK_DIV_4M                = 12,    /*!< 4M : Clock divider is 12 for 4MHz                                         */
  GSPI_MODE_CLK_DIV_2M                = 24,    /*!< 2M : Clock divider is 24 for 2MHz                                         */
  GSPI_MODE_CLK_DIV_1M                = 48,    /*!< 1M : Clock divider is 48 for 1MHz                                         */
} GSPI_MODE_CLK_DIV_Enum;

/* =========================================================  CTRL  ========================================================== */
/* =================================================  GSPI CTRL IFM [0..0]  ================================================= */
typedef enum {                                  /*!< GSPI_CTRL_IFM                                                            */
  GSPI_CTRL_IFM_FULL_DUPLEX           = 0,     /*!< FULL_DUPLEX : Full duplex I/O                                             */
  GSPI_CTRL_IFM_DUAL                  = 1,     /*!< DUAL : Dual I/O                                                           */
} GSPI_CTRL_IFM_Enum;

/* ===============================================  GSPI CTRL TX_XFR [2..3]  ================================================ */
typedef enum {                                  /*!< GSPI_CTRL_TX_XFR                                                         */
  GSPI_CTRL_TX_XFR_DIS                = 0,     /*!< DIS : Transmit is disabled, clocks only                                   */
  GSPI_CTRL_TX_XFR_EN_DATA            = 1,     /*!< EN_DATA : Transmit data from TX FIFO                                      */
  GSPI_CTRL_TX_XFR_EN_ZEROS           = 2,     /*!< EN_ZEROS : Transmit zeros as data                                         */
  GSPI_CTRL_TX_XFR_EN_ONES            = 3,     /*!< EN_ONES : Transmit ones as data                                           */
} GSPI_CTRL_TX_XFR_Enum;

/* ===============================================  GSPI CTRL TX_DMA [4..5]  ================================================ */
typedef enum {                                  /*!< GSPI_CTRL_TX_DMA                                                         */
  GSPI_CTRL_TX_DMA_DIS                = 0,     /*!< DIS : TX DMA is disabled                                                  */
  GSPI_CTRL_TX_DMA_EN_1BYTE           = 1,     /*!< EN_1BYTE : TX DMA enabled for units of 1 bytes                            */
  GSPI_CTRL_TX_DMA_EN_2BYTE           = 2,     /*!< EN_2BYTE : TX DMA enabled for units of 2 bytes                            */
  GSPI_CTRL_TX_DMA_EN_4BYTE           = 3,     /*!< EN_4BYTE : TX DMA enabled for units of 4 bytes                            */
} GSPI_CTRL_TX_DMA_Enum;

/* ===============================================  GSPI CTRL RX_XFR [6..6]  ================================================ */
typedef enum {                                  /*!< GSPI_CTRL_RX_XFR                                                         */
  GSPI_CTRL_RX_XFR_EN                 = 1,     /*!< EN : Enable receive                                                       */
} GSPI_CTRL_RX_XFR_Enum;

/* ===============================================  GSPI CTRL RX_DMA [7..8]  ================================================ */
typedef enum {                                  /*!< GSPI_CTRL_RX_DMA                                                         */
  GSPI_CTRL_RX_DMA_DIS                = 0,     /*!< DIS : Disable RX DMA                                                      */
  GSPI_CTRL_RX_DMA_EN_1BYTE           = 1,     /*!< EN_1BYTE : RX DMA enable for units of 1 byte                              */
  GSPI_CTRL_RX_DMA_EN_2BYTE           = 2,     /*!< EN_2BYTE : RX DMA enable for units of 2 bytes                             */
  GSPI_CTRL_RX_DMA_EN_4BYTE           = 3,     /*!< EN_4BYTE : RX DMA enable for units of 4 bytes                             */
} GSPI_CTRL_RX_DMA_Enum;

/* ==============================================  GSPI CTRL XFR_CLOSE [9..9]  ============================================== */
typedef enum {                                  /*!< GSPI_CTRL_XFR_CLOSE                                                      */
  GSPI_CTRL_XFR_CLOSE_EN              = 1,     /*!< EN : Enable close of transfer                                             */
} GSPI_CTRL_XFR_CLOSE_Enum;

/* ===========================================  GSPI CTRL XFR_LEN_UNITS [10..10]  =========================================== */
typedef enum {                                  /*!< GSPI_CTRL_XFR_LEN_UNITS                                                  */
  GSPI_CTRL_XFR_LEN_UNITS_BITS        = 0,     /*!< BITS : Transfer length is in bit units                                    */
  GSPI_CTRL_XFR_LEN_UNITS_BYTES       = 1,     /*!< BYTES : Transfer length is in byte units                                  */
} GSPI_CTRL_XFR_LEN_UNITS_Enum;

/* ==============================================  GSPI CTRL XFR_LEN [17..31]  ============================================== */
typedef enum {                                  /*!< GSPI_CTRL_XFR_LEN                                                        */
  GSPI_CTRL_XFR_LEN_UNLIMITED         = 0,     /*!< UNLIMITED : Zero transfer units is unlimited. Controller will
                                                     continuously generated clocks only throttled by TX FIFO
                                                     empty or RX FIFO full                                                     */
  GSPI_CTRL_XFR_LEN_MAX               = 32767, /*!< MAX : Maximum number of units to transfer                                 */
} GSPI_CTRL_XFR_LEN_Enum;

/* ==========================================================  EXE  ========================================================== */
/* ================================================  GSPI EXE START [0..0]  ================================================= */
typedef enum {                                  /*!< GSPI_EXE_START                                                           */
  GSPI_EXE_START_EN                   = 1,     /*!< EN : Begin configured transaction                                         */
} GSPI_EXE_START_Enum;

/* =================================================  GSPI EXE STOP [1..1]  ================================================= */
typedef enum {                                  /*!< GSPI_EXE_STOP                                                            */
  GSPI_EXE_STOP_EN                    = 1,     /*!< EN : Stop transaction                                                     */
} GSPI_EXE_STOP_Enum;

/* ==============================================  GSPI EXE CLR_FIFOS [2..2]  =============================================== */
typedef enum {                                  /*!< GSPI_EXE_CLR_FIFOS                                                       */
  GSPI_EXE_CLR_FIFOS_EN               = 1,     /*!< EN : Clear TX and RX FIFOs                                                */
} GSPI_EXE_CLR_FIFOS_Enum;

/* ========================================================  STATUS  ========================================================= */
/* =============================================  GSPI STATUS XFR_DONE [0..0]  ============================================== */
typedef enum {                                  /*!< GSPI_STATUS_XFR_DONE                                                     */
  GSPI_STATUS_XFR_DONE_ON             = 1,     /*!< ON : Transfer done status is active                                       */
} GSPI_STATUS_XFR_DONE_Enum;

/* =============================================  GSPI STATUS DMA_DONE [1..1]  ============================================== */
typedef enum {                                  /*!< GSPI_STATUS_DMA_DONE                                                     */
  GSPI_STATUS_DMA_DONE_ON             = 1,     /*!< ON : External DMA channel is done                                         */
} GSPI_STATUS_DMA_DONE_Enum;

/* ==============================================  GSPI STATUS TXB_ERR [2..2]  ============================================== */
typedef enum {                                  /*!< GSPI_STATUS_TXB_ERR                                                      */
  GSPI_STATUS_TXB_ERR_ON              = 1,     /*!< ON : TX FIFO was written while full                                       */
} GSPI_STATUS_TXB_ERR_Enum;

/* ==============================================  GSPI STATUS RXB_ERR [3..3]  ============================================== */
typedef enum {                                  /*!< GSPI_STATUS_RXB_ERR                                                      */
  GSPI_STATUS_RXB_ERR_ON              = 1,     /*!< ON : RX FIFO was read while empty                                         */
} GSPI_STATUS_RXB_ERR_Enum;

/* =============================================  GSPI STATUS PROG_ERR [4..4]  ============================================== */
typedef enum {                                  /*!< GSPI_STATUS_PROG_ERR                                                     */
  GSPI_STATUS_PROG_ERR_ON             = 1,     /*!< ON : Software misconfigured registers                                     */
} GSPI_STATUS_PROG_ERR_Enum;

/* ===============================================  GSPI STATUS TXBF [8..8]  ================================================ */
typedef enum {                                  /*!< GSPI_STATUS_TXBF                                                         */
  GSPI_STATUS_TXBF_ON                 = 1,     /*!< ON : TX FIFO is full(RO)                                                  */
} GSPI_STATUS_TXBF_Enum;

/* ===============================================  GSPI STATUS TXBE [9..9]  ================================================ */
typedef enum {                                  /*!< GSPI_STATUS_TXBE                                                         */
  GSPI_STATUS_TXBE_ON                 = 1,     /*!< ON : TX FIFO is empty(RO)                                                 */
} GSPI_STATUS_TXBE_Enum;

/* ==============================================  GSPI STATUS TXBS [11..11]  =============================================== */
typedef enum {                                  /*!< GSPI_STATUS_TXBS                                                         */
  GSPI_STATUS_TXBS_ON                 = 1,     /*!< ON : TX FIFO went empty during on-going transfer                          */
} GSPI_STATUS_TXBS_Enum;

/* ==============================================  GSPI STATUS RXBF [12..12]  =============================================== */
typedef enum {                                  /*!< GSPI_STATUS_RXBF                                                         */
  GSPI_STATUS_RXBF_ON                 = 1,     /*!< ON : RX FIFO is full(RO)                                                  */
} GSPI_STATUS_RXBF_Enum;

/* ==============================================  GSPI STATUS RXBE [13..13]  =============================================== */
typedef enum {                                  /*!< GSPI_STATUS_RXBE                                                         */
  GSPI_STATUS_RXBE_ON                 = 1,     /*!< ON : RX FIFO is empty(RO)                                                 */
} GSPI_STATUS_RXBE_Enum;

/* ==============================================  GSPI STATUS RXBS [15..15]  =============================================== */
typedef enum {                                  /*!< GSPI_STATUS_RXBS                                                         */
  GSPI_STATUS_RXBS_ON                 = 1,     /*!< ON : RX FIFO became full during on-going transfer                         */
} GSPI_STATUS_RXBS_Enum;

/* ===========================================  GSPI STATUS XFR_ACTIVE [16..16]  ============================================ */
typedef enum {                                  /*!< GSPI_STATUS_XFR_ACTIVE                                                   */
  GSPI_STATUS_XFR_ACTIVE_ON           = 1,     /*!< ON : A transfer is active, chip select asserted(RO)                       */
} GSPI_STATUS_XFR_ACTIVE_Enum;

/* ======================================================  BUF_CNT_STS  ====================================================== */
/* ==============================================  GSPI BUF_CNT_STS TX [0..3]  ============================================== */
typedef enum {                                  /*!< GSPI_BUF_CNT_STS_TX                                                      */
  GSPI_BUF_CNT_STS_TX_EMPTY           = 0,     /*!< EMPTY : TX buffer is empty                                                */
  GSPI_BUF_CNT_STS_TX_TX_MAX          = 1,     /*!< TX_MAX : 8                                                                */
} GSPI_BUF_CNT_STS_TX_Enum;

/* =============================================  GSPI BUF_CNT_STS RX [16..19]  ============================================= */
typedef enum {                                  /*!< GSPI_BUF_CNT_STS_RX                                                      */
  GSPI_BUF_CNT_STS_RX_EMPTY           = 0,     /*!< EMPTY : RX FIFO is empty                                                  */
  GSPI_BUF_CNT_STS_RX_RX_MAX          = 8,     /*!< RX_MAX : 8                                                                */
} GSPI_BUF_CNT_STS_RX_Enum;

/* ========================================================  INTREN  ========================================================= */
/* =============================================  GSPI INTREN XFR_DONE [0..0]  ============================================== */
typedef enum {                                  /*!< GSPI_INTREN_XFR_DONE                                                     */
  GSPI_INTREN_XFR_DONE_EN             = 1,     /*!< EN : Enable interrupt on transfer done status is active                   */
} GSPI_INTREN_XFR_DONE_Enum;

/* =============================================  GSPI INTREN DMA_DONE [1..1]  ============================================== */
typedef enum {                                  /*!< GSPI_INTREN_DMA_DONE                                                     */
  GSPI_INTREN_DMA_DONE_EN             = 1,     /*!< EN : External DMA channel is done                                         */
} GSPI_INTREN_DMA_DONE_Enum;

/* ==============================================  GSPI INTREN TXB_ERR [2..2]  ============================================== */
typedef enum {                                  /*!< GSPI_INTREN_TXB_ERR                                                      */
  GSPI_INTREN_TXB_ERR_EN              = 1,     /*!< EN : TX FIFO was written while full                                       */
} GSPI_INTREN_TXB_ERR_Enum;

/* ==============================================  GSPI INTREN RXB_ERR [3..3]  ============================================== */
typedef enum {                                  /*!< GSPI_INTREN_RXB_ERR                                                      */
  GSPI_INTREN_RXB_ERR_EN              = 1,     /*!< EN : RX FIFO was read while empty                                         */
} GSPI_INTREN_RXB_ERR_Enum;

/* =============================================  GSPI INTREN PROG_ERR [4..4]  ============================================== */
typedef enum {                                  /*!< GSPI_INTREN_PROG_ERR                                                     */
  GSPI_INTREN_PROG_ERR_EN             = 1,     /*!< EN : Software misconfigured registers                                     */
} GSPI_INTREN_PROG_ERR_Enum;

/* ===============================================  GSPI INTREN TXBF [8..8]  ================================================ */
typedef enum {                                  /*!< GSPI_INTREN_TXBF                                                         */
  GSPI_INTREN_TXBF_EN                 = 1,     /*!< EN : TX FIFO is full(RO)                                                  */
} GSPI_INTREN_TXBF_Enum;

/* ===============================================  GSPI INTREN TXBE [9..9]  ================================================ */
typedef enum {                                  /*!< GSPI_INTREN_TXBE                                                         */
  GSPI_INTREN_TXBE_EN                 = 1,     /*!< EN : TX FIFO is empty(RO)                                                 */
} GSPI_INTREN_TXBE_Enum;

/* ==============================================  GSPI INTREN TXBS [11..11]  =============================================== */
typedef enum {                                  /*!< GSPI_INTREN_TXBS                                                         */
  GSPI_INTREN_TXBS_EN                 = 1,     /*!< EN : TX FIFO went empty during on-going transfer                          */
} GSPI_INTREN_TXBS_Enum;

/* ==============================================  GSPI INTREN RXBF [12..12]  =============================================== */
typedef enum {                                  /*!< GSPI_INTREN_RXBF                                                         */
  GSPI_INTREN_RXBF_EN                 = 1,     /*!< EN : RX FIFO is full(RO)                                                  */
} GSPI_INTREN_RXBF_Enum;

/* ==============================================  GSPI INTREN RXBE [13..13]  =============================================== */
typedef enum {                                  /*!< GSPI_INTREN_RXBE                                                         */
  GSPI_INTREN_RXBE_EN                 = 1,     /*!< EN : RX FIFO is empty(RO)                                                 */
} GSPI_INTREN_RXBE_Enum;

/* ==============================================  GSPI INTREN RXBS [15..15]  =============================================== */
typedef enum {                                  /*!< GSPI_INTREN_RXBS                                                         */
  GSPI_INTREN_RXBS_EN                 = 1,     /*!< EN : RX FIFO became full during on-going transfer                         */
} GSPI_INTREN_RXBS_Enum;

/* =========================================================  CSTM  ========================================================== */
/* ============================================  GSPI CSTM DLY_CS_TO_CLK [0..3]  ============================================ */
typedef enum {                                  /*!< GSPI_CSTM_DLY_CS_TO_CLK                                                  */
  GSPI_CSTM_DLY_CS_TO_CLK_NONE        = 0,     /*!< NONE : No delay                                                           */
  GSPI_CSTM_DLY_CS_TO_CLK_DFLT6       = 6,     /*!< DFLT6 : Six system clocks is the default delay                            */
} GSPI_CSTM_DLY_CS_TO_CLK_Enum;

/* ===========================================  GSPI CSTM DLY_CLK_TO_CS [8..11]  ============================================ */
typedef enum {                                  /*!< GSPI_CSTM_DLY_CLK_TO_CS                                                  */
  GSPI_CSTM_DLY_CLK_TO_CS_NONE        = 0,     /*!< NONE : No delay                                                           */
  GSPI_CSTM_DLY_CLK_TO_CS_DFLT4       = 6,     /*!< DFLT4 : Four system clocks is the default delay                           */
} GSPI_CSTM_DLY_CLK_TO_CS_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_GSPI_V2_H */
