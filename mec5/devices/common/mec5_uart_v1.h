/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_UART_V1_H
#define _MEC5_UART_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief UART 16550 compatible (MEC_UART)
  */

typedef struct mec_uart_regs {                  /*!< (@ 0x400F2400) MEC_UART Structure                                        */
  
  union {
    __IM  uint8_t RXB;                          /*!< (@ 0x00000000) UART RX buffer or BAUD clock LSB when LSR.DLAB=1           */
    __OM  uint8_t TXB;                          /*!< (@ 0x00000000) UART TX buffer or BAUD clock LSB when LSR.DLAB=1           */
  };
  __IOM uint8_t   IER;                          /*!< (@ 0x00000001) UART interrupt enable register or BAUD clock
                                                                    MSB when LSR.DLAB=1                                        */
  
  union {
    __IM  uint8_t IIR;                          /*!< (@ 0x00000002) UART Interrupt Identification Register (RO)                */
    __OM  uint8_t FCR;                          /*!< (@ 0x00000002) UART FIFO control register(WO)                             */
  };
  __IOM uint8_t   LCR;                          /*!< (@ 0x00000003) UART Line control register                                 */
  __IOM uint8_t   MCR;                          /*!< (@ 0x00000004) UART Modem control register                                */
  __IOM uint8_t   LSR;                          /*!< (@ 0x00000005) UART Line status register                                  */
  __IOM uint8_t   MSR;                          /*!< (@ 0x00000006) UART Modem status register                                 */
  __IOM uint8_t   SCR;                          /*!< (@ 0x00000007) UART scratch pad register                                  */
  __IM  uint8_t   RESERVED[808];
  __IOM uint8_t   ACTV;                         /*!< (@ 0x00000330) UART Activate register                                     */
  __IM  uint8_t   RESERVED1[191];
  __IOM uint8_t   CFGS;                         /*!< (@ 0x000003F0) UART Configuration select register                         */
} MEC_UART_Type;                                /*!< Size = 1009 (0x3f1)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ==========================================================  IER  ========================================================== */
#define MEC_UART_IER_ERDAI_Pos            (0UL)                     /*!< ERDAI (Bit 0)                                         */
#define MEC_UART_IER_ERDAI_Msk            (0x1UL)                   /*!< ERDAI (Bitfield-Mask: 0x01)                           */
#define MEC_UART_IER_ETHREI_Pos           (1UL)                     /*!< ETHREI (Bit 1)                                        */
#define MEC_UART_IER_ETHREI_Msk           (0x2UL)                   /*!< ETHREI (Bitfield-Mask: 0x01)                          */
#define MEC_UART_IER_ELSI_Pos             (2UL)                     /*!< ELSI (Bit 2)                                          */
#define MEC_UART_IER_ELSI_Msk             (0x4UL)                   /*!< ELSI (Bitfield-Mask: 0x01)                            */
#define MEC_UART_IER_EMSI_Pos             (3UL)                     /*!< EMSI (Bit 3)                                          */
#define MEC_UART_IER_EMSI_Msk             (0x8UL)                   /*!< EMSI (Bitfield-Mask: 0x01)                            */
#define MEC_UART_IER_BAUD_CLK_SEL_Pos     (7UL)                     /*!< BAUD_CLK_SEL (Bit 7)                                  */
#define MEC_UART_IER_BAUD_CLK_SEL_Msk     (0x80UL)                  /*!< BAUD_CLK_SEL (Bitfield-Mask: 0x01)                    */
/* ==========================================================  IIR  ========================================================== */
#define MEC_UART_IIR_NIPEND_Pos           (0UL)                     /*!< NIPEND (Bit 0)                                        */
#define MEC_UART_IIR_NIPEND_Msk           (0x1UL)                   /*!< NIPEND (Bitfield-Mask: 0x01)                          */
#define MEC_UART_IIR_INTID_Pos            (1UL)                     /*!< INTID (Bit 1)                                         */
#define MEC_UART_IIR_INTID_Msk            (0xeUL)                   /*!< INTID (Bitfield-Mask: 0x07)                           */
#define MEC_UART_IIR_FIFO_STATE_Pos       (6UL)                     /*!< FIFO_STATE (Bit 6)                                    */
#define MEC_UART_IIR_FIFO_STATE_Msk       (0xc0UL)                  /*!< FIFO_STATE (Bitfield-Mask: 0x03)                      */
/* ==========================================================  FCR  ========================================================== */
#define MEC_UART_FCR_EXRF_Pos             (0UL)                     /*!< EXRF (Bit 0)                                          */
#define MEC_UART_FCR_EXRF_Msk             (0x1UL)                   /*!< EXRF (Bitfield-Mask: 0x01)                            */
#define MEC_UART_FCR_CLR_RX_FIFO_Pos      (1UL)                     /*!< CLR_RX_FIFO (Bit 1)                                   */
#define MEC_UART_FCR_CLR_RX_FIFO_Msk      (0x2UL)                   /*!< CLR_RX_FIFO (Bitfield-Mask: 0x01)                     */
#define MEC_UART_FCR_CLR_TX_FIFO_Pos      (2UL)                     /*!< CLR_TX_FIFO (Bit 2)                                   */
#define MEC_UART_FCR_CLR_TX_FIFO_Msk      (0x4UL)                   /*!< CLR_TX_FIFO (Bitfield-Mask: 0x01)                     */
#define MEC_UART_FCR_RXF_TLVL_Pos         (6UL)                     /*!< RXF_TLVL (Bit 6)                                      */
#define MEC_UART_FCR_RXF_TLVL_Msk         (0xc0UL)                  /*!< RXF_TLVL (Bitfield-Mask: 0x03)                        */
/* ==========================================================  LCR  ========================================================== */
#define MEC_UART_LCR_WORD_LEN_Pos         (0UL)                     /*!< WORD_LEN (Bit 0)                                      */
#define MEC_UART_LCR_WORD_LEN_Msk         (0x3UL)                   /*!< WORD_LEN (Bitfield-Mask: 0x03)                        */
#define MEC_UART_LCR_STOP_BITS_Pos        (2UL)                     /*!< STOP_BITS (Bit 2)                                     */
#define MEC_UART_LCR_STOP_BITS_Msk        (0x4UL)                   /*!< STOP_BITS (Bitfield-Mask: 0x01)                       */
#define MEC_UART_LCR_PARITY_Pos           (3UL)                     /*!< PARITY (Bit 3)                                        */
#define MEC_UART_LCR_PARITY_Msk           (0x8UL)                   /*!< PARITY (Bitfield-Mask: 0x01)                          */
#define MEC_UART_LCR_PARITY_SEL_Pos       (4UL)                     /*!< PARITY_SEL (Bit 4)                                    */
#define MEC_UART_LCR_PARITY_SEL_Msk       (0x30UL)                  /*!< PARITY_SEL (Bitfield-Mask: 0x03)                      */
#define MEC_UART_LCR_TX_BRK_Pos           (6UL)                     /*!< TX_BRK (Bit 6)                                        */
#define MEC_UART_LCR_TX_BRK_Msk           (0x40UL)                  /*!< TX_BRK (Bitfield-Mask: 0x01)                          */
#define MEC_UART_LCR_DLAB_Pos             (7UL)                     /*!< DLAB (Bit 7)                                          */
#define MEC_UART_LCR_DLAB_Msk             (0x80UL)                  /*!< DLAB (Bitfield-Mask: 0x01)                            */
/* ==========================================================  MCR  ========================================================== */
#define MEC_UART_MCR_DTR_Pos              (0UL)                     /*!< DTR (Bit 0)                                           */
#define MEC_UART_MCR_DTR_Msk              (0x1UL)                   /*!< DTR (Bitfield-Mask: 0x01)                             */
#define MEC_UART_MCR_RTS_Pos              (1UL)                     /*!< RTS (Bit 1)                                           */
#define MEC_UART_MCR_RTS_Msk              (0x2UL)                   /*!< RTS (Bitfield-Mask: 0x01)                             */
#define MEC_UART_MCR_OUT1_Pos             (2UL)                     /*!< OUT1 (Bit 2)                                          */
#define MEC_UART_MCR_OUT1_Msk             (0x4UL)                   /*!< OUT1 (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MCR_OUT2_Pos             (3UL)                     /*!< OUT2 (Bit 3)                                          */
#define MEC_UART_MCR_OUT2_Msk             (0x8UL)                   /*!< OUT2 (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MCR_LOOPBACK_Pos         (4UL)                     /*!< LOOPBACK (Bit 4)                                      */
#define MEC_UART_MCR_LOOPBACK_Msk         (0x10UL)                  /*!< LOOPBACK (Bitfield-Mask: 0x01)                        */
/* ==========================================================  LSR  ========================================================== */
#define MEC_UART_LSR_DRDY_Pos             (0UL)                     /*!< DRDY (Bit 0)                                          */
#define MEC_UART_LSR_DRDY_Msk             (0x1UL)                   /*!< DRDY (Bitfield-Mask: 0x01)                            */
#define MEC_UART_LSR_OVR_ERR_Pos          (1UL)                     /*!< OVR_ERR (Bit 1)                                       */
#define MEC_UART_LSR_OVR_ERR_Msk          (0x2UL)                   /*!< OVR_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_UART_LSR_PAR_ERR_Pos          (2UL)                     /*!< PAR_ERR (Bit 2)                                       */
#define MEC_UART_LSR_PAR_ERR_Msk          (0x4UL)                   /*!< PAR_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_UART_LSR_FR_ERR_Pos           (3UL)                     /*!< FR_ERR (Bit 3)                                        */
#define MEC_UART_LSR_FR_ERR_Msk           (0x8UL)                   /*!< FR_ERR (Bitfield-Mask: 0x01)                          */
#define MEC_UART_LSR_BREAK_Pos            (4UL)                     /*!< BREAK (Bit 4)                                         */
#define MEC_UART_LSR_BREAK_Msk            (0x10UL)                  /*!< BREAK (Bitfield-Mask: 0x01)                           */
#define MEC_UART_LSR_THRE_Pos             (5UL)                     /*!< THRE (Bit 5)                                          */
#define MEC_UART_LSR_THRE_Msk             (0x20UL)                  /*!< THRE (Bitfield-Mask: 0x01)                            */
#define MEC_UART_LSR_THSE_Pos             (6UL)                     /*!< THSE (Bit 6)                                          */
#define MEC_UART_LSR_THSE_Msk             (0x40UL)                  /*!< THSE (Bitfield-Mask: 0x01)                            */
#define MEC_UART_LSR_FIFO_ERR_Pos         (7UL)                     /*!< FIFO_ERR (Bit 7)                                      */
#define MEC_UART_LSR_FIFO_ERR_Msk         (0x80UL)                  /*!< FIFO_ERR (Bitfield-Mask: 0x01)                        */
/* ==========================================================  MSR  ========================================================== */
#define MEC_UART_MSR_DCTS_Pos             (0UL)                     /*!< DCTS (Bit 0)                                          */
#define MEC_UART_MSR_DCTS_Msk             (0x1UL)                   /*!< DCTS (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MSR_DDSR_Pos             (1UL)                     /*!< DDSR (Bit 1)                                          */
#define MEC_UART_MSR_DDSR_Msk             (0x2UL)                   /*!< DDSR (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MSR_TERI_Pos             (2UL)                     /*!< TERI (Bit 2)                                          */
#define MEC_UART_MSR_TERI_Msk             (0x4UL)                   /*!< TERI (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MSR_DDCD_Pos             (3UL)                     /*!< DDCD (Bit 3)                                          */
#define MEC_UART_MSR_DDCD_Msk             (0x8UL)                   /*!< DDCD (Bitfield-Mask: 0x01)                            */
#define MEC_UART_MSR_CTS_Pos              (4UL)                     /*!< CTS (Bit 4)                                           */
#define MEC_UART_MSR_CTS_Msk              (0x10UL)                  /*!< CTS (Bitfield-Mask: 0x01)                             */
#define MEC_UART_MSR_DSR_Pos              (5UL)                     /*!< DSR (Bit 5)                                           */
#define MEC_UART_MSR_DSR_Msk              (0x20UL)                  /*!< DSR (Bitfield-Mask: 0x01)                             */
#define MEC_UART_MSR_RI_Pos               (6UL)                     /*!< RI (Bit 6)                                            */
#define MEC_UART_MSR_RI_Msk               (0x40UL)                  /*!< RI (Bitfield-Mask: 0x01)                              */
#define MEC_UART_MSR_DCD_Pos              (7UL)                     /*!< DCD (Bit 7)                                           */
#define MEC_UART_MSR_DCD_Msk              (0x80UL)                  /*!< DCD (Bitfield-Mask: 0x01)                             */
/* =========================================================  ACTV  ========================================================== */
#define MEC_UART_ACTV_CLKS_Pos            (0UL)                     /*!< CLKS (Bit 0)                                          */
#define MEC_UART_ACTV_CLKS_Msk            (0x1UL)                   /*!< CLKS (Bitfield-Mask: 0x01)                            */
/* =========================================================  CFGS  ========================================================== */
#define MEC_UART_CFGS_CLK_SRC_EXT_Pos     (0UL)                     /*!< CLK_SRC_EXT (Bit 0)                                   */
#define MEC_UART_CFGS_CLK_SRC_EXT_Msk     (0x1UL)                   /*!< CLK_SRC_EXT (Bitfield-Mask: 0x01)                     */
#define MEC_UART_CFGS_RESET_SRC_Pos       (1UL)                     /*!< RESET_SRC (Bit 1)                                     */
#define MEC_UART_CFGS_RESET_SRC_Msk       (0x2UL)                   /*!< RESET_SRC (Bitfield-Mask: 0x01)                       */
#define MEC_UART_CFGS_POLARITY_Pos        (2UL)                     /*!< POLARITY (Bit 2)                                      */
#define MEC_UART_CFGS_POLARITY_Msk        (0x4UL)                   /*!< POLARITY (Bitfield-Mask: 0x01)                        */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ==========================================================  IER  ========================================================== */
/* ==============================================  MEC_UART IER ERDAI [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_UART_IER_ERDAI                                                       */
  MEC_UART_IER_ERDAI_DIS              = 0,     /*!< DIS : Disable RX data availabe interrupt                                  */
  MEC_UART_IER_ERDAI_EN               = 1,     /*!< EN : Enable RX data availabe interrupt                                    */
} MEC_UART_IER_ERDAI_Enum;

/* ==============================================  MEC_UART IER ETHREI [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_UART_IER_ETHREI                                                      */
  MEC_UART_IER_ETHREI_DIS             = 0,     /*!< DIS : Disable TX empty interrupt                                          */
  MEC_UART_IER_ETHREI_EN              = 1,     /*!< EN : Enable TX empty interrupt                                            */
} MEC_UART_IER_ETHREI_Enum;

/* ===============================================  MEC_UART IER ELSI [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_UART_IER_ELSI                                                        */
  MEC_UART_IER_ELSI_DIS               = 0,     /*!< DIS : Disable LS interrupts                                               */
  MEC_UART_IER_ELSI_EN                = 1,     /*!< EN : Enable LS interrupts                                                 */
} MEC_UART_IER_ELSI_Enum;

/* ===============================================  MEC_UART IER EMSI [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_UART_IER_EMSI                                                        */
  MEC_UART_IER_EMSI_DIS               = 0,     /*!< DIS : Disable Modem status interrupts                                     */
  MEC_UART_IER_EMSI_EN                = 1,     /*!< EN : Enable Modem status interrupts                                       */
} MEC_UART_IER_EMSI_Enum;

/* ===========================================  MEC_UART IER BAUD_CLK_SEL [7..7]  =========================================== */
typedef enum {                                  /*!< MEC_UART_IER_BAUD_CLK_SEL                                                */
  MEC_UART_IER_BAUD_CLK_SEL_M1P8      = 0,     /*!< M1P8 : Internal 1.8 MHz clock is BAUD clock source                        */
  MEC_UART_IER_BAUD_CLK_SEL_M48       = 1,     /*!< M48 : Internal 48MHz AHB is BAUD clock source                             */
} MEC_UART_IER_BAUD_CLK_SEL_Enum;

/* ==========================================================  IIR  ========================================================== */
/* ==============================================  MEC_UART IIR NIPEND [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_UART_IIR_NIPEND                                                      */
  MEC_UART_IIR_NIPEND_IP              = 0,     /*!< IP : Interrupt(s) are pending                                             */
  MEC_UART_IIR_NIPEND_NONE            = 1,     /*!< NONE : Interrupt(s) are not pending                                       */
} MEC_UART_IIR_NIPEND_Enum;

/* ==============================================  MEC_UART IIR INTID [1..3]  =============================================== */
typedef enum {                                  /*!< MEC_UART_IIR_INTID                                                       */
  MEC_UART_IIR_INTID_MSR              = 0,     /*!< MSR : Modem status change                                                 */
  MEC_UART_IIR_INTID_THRE             = 1,     /*!< THRE : TX holding or FIFO empty                                           */
  MEC_UART_IIR_INTID_RXD              = 2,     /*!< RXD : RX data available                                                   */
  MEC_UART_IIR_INTID_LSR              = 3,     /*!< LSR : Line status change                                                  */
  MEC_UART_IIR_INTID_RXTMOUT          = 6,     /*!< RXTMOUT : RX character timeout                                            */
} MEC_UART_IIR_INTID_Enum;

/* ============================================  MEC_UART IIR FIFO_STATE [6..7]  ============================================ */
typedef enum {                                  /*!< MEC_UART_IIR_FIFO_STATE                                                  */
  MEC_UART_IIR_FIFO_STATE_DISABLED    = 0,     /*!< DISABLED : FIFO state is disabled                                         */
  MEC_UART_IIR_FIFO_STATE_ENABLED     = 3,     /*!< ENABLED : FIFO state is enabled                                           */
} MEC_UART_IIR_FIFO_STATE_Enum;

/* ==========================================================  FCR  ========================================================== */
/* ===============================================  MEC_UART FCR EXRF [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_UART_FCR_EXRF                                                        */
  MEC_UART_FCR_EXRF_DISABLE           = 0,     /*!< DISABLE : Disable TX and RX FIFOs                                         */
  MEC_UART_FCR_EXRF_ENABLE            = 1,     /*!< ENABLE : Enable TX and RX FIFOs                                           */
} MEC_UART_FCR_EXRF_Enum;

/* ===========================================  MEC_UART FCR CLR_RX_FIFO [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_UART_FCR_CLR_RX_FIFO                                                 */
  MEC_UART_FCR_CLR_RX_FIFO_EN         = 1,     /*!< EN : Enable RX FIFO clear                                                 */
} MEC_UART_FCR_CLR_RX_FIFO_Enum;

/* ===========================================  MEC_UART FCR CLR_TX_FIFO [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_UART_FCR_CLR_TX_FIFO                                                 */
  MEC_UART_FCR_CLR_TX_FIFO_EN         = 1,     /*!< EN : Enable TX FIFO clear                                                 */
} MEC_UART_FCR_CLR_TX_FIFO_Enum;

/* =============================================  MEC_UART FCR RXF_TLVL [6..7]  ============================================= */
typedef enum {                                  /*!< MEC_UART_FCR_RXF_TLVL                                                    */
  MEC_UART_FCR_RXF_TLVL_1BYTE         = 0,     /*!< 1BYTE : Trigger level is 1 byte                                           */
  MEC_UART_FCR_RXF_TLVL_4BYTES        = 1,     /*!< 4BYTES : Trigger level is 4 bytes                                         */
  MEC_UART_FCR_RXF_TLVL_8BYTES        = 2,     /*!< 8BYTES : Trigger level is 8 bytes                                         */
  MEC_UART_FCR_RXF_TLVL_14BYTES       = 3,     /*!< 14BYTES : Trigger level is 14 bytes                                       */
} MEC_UART_FCR_RXF_TLVL_Enum;

/* ==========================================================  LCR  ========================================================== */
/* =============================================  MEC_UART LCR WORD_LEN [0..1]  ============================================= */
typedef enum {                                  /*!< MEC_UART_LCR_WORD_LEN                                                    */
  MEC_UART_LCR_WORD_LEN_5BITS         = 0,     /*!< 5BITS : Word length is 5 bits                                             */
  MEC_UART_LCR_WORD_LEN_6BITS         = 1,     /*!< 6BITS : Word length is 6 bits                                             */
  MEC_UART_LCR_WORD_LEN_7BITS         = 2,     /*!< 7BITS : Word length is 7 bits                                             */
  MEC_UART_LCR_WORD_LEN_8BITS         = 3,     /*!< 8BITS : Word length is 8 bits                                             */
} MEC_UART_LCR_WORD_LEN_Enum;

/* ============================================  MEC_UART LCR STOP_BITS [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_UART_LCR_STOP_BITS                                                   */
  MEC_UART_LCR_STOP_BITS_1BIT         = 0,     /*!< 1BIT : Use one stop bit                                                   */
  MEC_UART_LCR_STOP_BITS_2BITS        = 1,     /*!< 2BITS : Use two stop bits except for 5-bit word length use 1.5
                                                     stop bits                                                                 */
} MEC_UART_LCR_STOP_BITS_Enum;

/* ==============================================  MEC_UART LCR PARITY [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_UART_LCR_PARITY                                                      */
  MEC_UART_LCR_PARITY_DISABLE         = 0,     /*!< DISABLE : Disable parity generation on TX data and checks on
                                                     RX data                                                                   */
  MEC_UART_LCR_PARITY_ENABLE          = 1,     /*!< ENABLE : Enable parity generation on TX data and check on RX
                                                     data                                                                      */
} MEC_UART_LCR_PARITY_Enum;

/* ============================================  MEC_UART LCR PARITY_SEL [4..5]  ============================================ */
typedef enum {                                  /*!< MEC_UART_LCR_PARITY_SEL                                                  */
  MEC_UART_LCR_PARITY_SEL_ODD         = 0,     /*!< ODD : Select ODD parity                                                   */
  MEC_UART_LCR_PARITY_SEL_EVEN        = 1,     /*!< EVEN : Select Even parity                                                 */
  MEC_UART_LCR_PARITY_SEL_MARK        = 2,     /*!< MARK : Select Mark parity                                                 */
  MEC_UART_LCR_PARITY_SEL_SPACE       = 3,     /*!< SPACE : Select Space parity                                               */
} MEC_UART_LCR_PARITY_SEL_Enum;

/* ==============================================  MEC_UART LCR TX_BRK [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_UART_LCR_TX_BRK                                                      */
  MEC_UART_LCR_TX_BRK_DISABLE         = 0,     /*!< DISABLE : Do not force transmit of a BREAK                                */
  MEC_UART_LCR_TX_BRK_ENABLE          = 1,     /*!< ENABLE : Force TX data to be a BREAK                                      */
} MEC_UART_LCR_TX_BRK_Enum;

/* ===============================================  MEC_UART LCR DLAB [7..7]  =============================================== */
typedef enum {                                  /*!< MEC_UART_LCR_DLAB                                                        */
  MEC_UART_LCR_DLAB_DISABLE           = 0,     /*!< DISABLE : BAUD rate divisor latch register are hidden                     */
  MEC_UART_LCR_DLAB_ENABLE            = 1,     /*!< ENABLE : Access BAUD rate divisor at registers 0 and 1                    */
} MEC_UART_LCR_DLAB_Enum;

/* ==========================================================  MCR  ========================================================== */
/* ===============================================  MEC_UART MCR DTR [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MCR_DTR                                                         */
  MEC_UART_MCR_DTR_DEASSERT           = 0,     /*!< DEASSERT : De-assert DTR# signal                                          */
  MEC_UART_MCR_DTR_ASSERT             = 1,     /*!< ASSERT : Assert DTR# signal                                               */
} MEC_UART_MCR_DTR_Enum;

/* ===============================================  MEC_UART MCR RTS [1..1]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MCR_RTS                                                         */
  MEC_UART_MCR_RTS_DEASSERT           = 0,     /*!< DEASSERT : De-assert RST# signal                                          */
  MEC_UART_MCR_RTS_ASSERT             = 1,     /*!< ASSERT : Assert RST# signal                                               */
} MEC_UART_MCR_RTS_Enum;

/* ===============================================  MEC_UART MCR OUT1 [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MCR_OUT1                                                        */
  MEC_UART_MCR_OUT1_DEASSERT          = 0,     /*!< DEASSERT : De-assert UART output 1 signal                                 */
  MEC_UART_MCR_OUT1_ASSERT            = 1,     /*!< ASSERT : Assert UART output 1 signal                                      */
} MEC_UART_MCR_OUT1_Enum;

/* ===============================================  MEC_UART MCR OUT2 [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MCR_OUT2                                                        */
  MEC_UART_MCR_OUT2_DISABLE           = 0,     /*!< DISABLE : Disable UART interrupt output signal                            */
  MEC_UART_MCR_OUT2_ENABLE            = 1,     /*!< ENABLE : Enable UART interrupt output signal                              */
} MEC_UART_MCR_OUT2_Enum;

/* =============================================  MEC_UART MCR LOOPBACK [4..4]  ============================================= */
typedef enum {                                  /*!< MEC_UART_MCR_LOOPBACK                                                    */
  MEC_UART_MCR_LOOPBACK_DISABLE       = 0,     /*!< DISABLE : Disable loopback mode                                           */
  MEC_UART_MCR_LOOPBACK_ENABLE        = 1,     /*!< ENABLE : Enable loopback mode                                             */
} MEC_UART_MCR_LOOPBACK_Enum;

/* ==========================================================  LSR  ========================================================== */
/* ===============================================  MEC_UART LSR DRDY [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_DRDY                                                        */
  MEC_UART_LSR_DRDY_NONE              = 0,     /*!< NONE : No data in RX buffer or FIFO                                       */
  MEC_UART_LSR_DRDY_ACTIVE            = 1,     /*!< ACTIVE : RX data present in RX buffer or FIFO                             */
} MEC_UART_LSR_DRDY_Enum;

/* =============================================  MEC_UART LSR OVR_ERR [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_OVR_ERR                                                     */
  MEC_UART_LSR_OVR_ERR_NONE           = 0,     /*!< NONE : No RX overrun error detected                                       */
  MEC_UART_LSR_OVR_ERR_ACTIVE         = 1,     /*!< ACTIVE : RX data overrun detected                                         */
} MEC_UART_LSR_OVR_ERR_Enum;

/* =============================================  MEC_UART LSR PAR_ERR [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_PAR_ERR                                                     */
  MEC_UART_LSR_PAR_ERR_NONE           = 0,     /*!< NONE : No Parity error detected                                           */
  MEC_UART_LSR_PAR_ERR_ACTIVE         = 1,     /*!< ACTIVE : RX data has parity error                                         */
} MEC_UART_LSR_PAR_ERR_Enum;

/* ==============================================  MEC_UART LSR FR_ERR [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_FR_ERR                                                      */
  MEC_UART_LSR_FR_ERR_NONE            = 0,     /*!< NONE : No RX framing error detected                                       */
  MEC_UART_LSR_FR_ERR_ACTIVE          = 1,     /*!< ACTIVE : RX data has framing error                                        */
} MEC_UART_LSR_FR_ERR_Enum;

/* ==============================================  MEC_UART LSR BREAK [4..4]  =============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_BREAK                                                       */
  MEC_UART_LSR_BREAK_NONE             = 0,     /*!< NONE : No break received                                                  */
  MEC_UART_LSR_BREAK_ACTIVE           = 1,     /*!< ACTIVE : A break was received on RX input                                 */
} MEC_UART_LSR_BREAK_Enum;

/* ===============================================  MEC_UART LSR THRE [5..5]  =============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_THRE                                                        */
  MEC_UART_LSR_THRE_NONE              = 0,     /*!< NONE : Transmit holding or TX FIFO are not empty                          */
  MEC_UART_LSR_THRE_ACTIVE            = 1,     /*!< ACTIVE : Transmit holding or TX FIFO empty                                */
} MEC_UART_LSR_THRE_Enum;

/* ===============================================  MEC_UART LSR THSE [6..6]  =============================================== */
typedef enum {                                  /*!< MEC_UART_LSR_THSE                                                        */
  MEC_UART_LSR_THSE_NONE              = 0,     /*!< NONE : Transmit holding and shift registers are not both empty            */
  MEC_UART_LSR_THSE_ACTIVE            = 1,     /*!< ACTIVE : Transmit holding and shift registers are both empty              */
} MEC_UART_LSR_THSE_Enum;

/* =============================================  MEC_UART LSR FIFO_ERR [7..7]  ============================================= */
typedef enum {                                  /*!< MEC_UART_LSR_FIFO_ERR                                                    */
  MEC_UART_LSR_FIFO_ERR_NONE          = 0,     /*!< NONE : No errors in RX FIFO data                                          */
  MEC_UART_LSR_FIFO_ERR_ACTIVE        = 1,     /*!< ACTIVE : Errors deteced in RX FIFO data                                   */
} MEC_UART_LSR_FIFO_ERR_Enum;

/* ==========================================================  MSR  ========================================================== */
/* ===============================================  MEC_UART MSR DCTS [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MSR_DCTS                                                        */
  MEC_UART_MSR_DCTS_NO_CHG            = 0,     /*!< NO_CHG : CTS# signal had not changed                                      */
  MEC_UART_MSR_DCTS_CHG               = 1,     /*!< CHG : CTS# signal changed                                                 */
} MEC_UART_MSR_DCTS_Enum;

/* ===============================================  MEC_UART MSR DDSR [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MSR_DDSR                                                        */
  MEC_UART_MSR_DDSR_NO_CHG            = 0,     /*!< NO_CHG : DSR# signal had not changed                                      */
  MEC_UART_MSR_DDSR_CHG               = 1,     /*!< CHG : DSR# signal changed                                                 */
} MEC_UART_MSR_DDSR_Enum;

/* ===============================================  MEC_UART MSR TERI [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MSR_TERI                                                        */
  MEC_UART_MSR_TERI_NO_CHG            = 0,     /*!< NO_CHG : RI# signal had not changed                                       */
  MEC_UART_MSR_TERI_CHG               = 1,     /*!< CHG : RI# signal changed                                                  */
} MEC_UART_MSR_TERI_Enum;

/* ===============================================  MEC_UART MSR DDCD [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_UART_MSR_DDCD                                                        */
  MEC_UART_MSR_DDCD_NO_CHG            = 0,     /*!< NO_CHG : DCD# signal had not changed                                      */
  MEC_UART_MSR_DDCD_CHG               = 1,     /*!< CHG : DCD# signal changed                                                 */
} MEC_UART_MSR_DDCD_Enum;

/* ===============================================  MEC_UART MSR CTS [4..4]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MSR_CTS                                                         */
  MEC_UART_MSR_CTS_ACTIVE             = 0,     /*!< ACTIVE : CTS# signal is asserted                                          */
  MEC_UART_MSR_CTS_INACTIVE           = 1,     /*!< INACTIVE : CTS# signal is not asserted                                    */
} MEC_UART_MSR_CTS_Enum;

/* ===============================================  MEC_UART MSR DSR [5..5]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MSR_DSR                                                         */
  MEC_UART_MSR_DSR_ACTIVE             = 0,     /*!< ACTIVE : DSR# signal is asserted                                          */
  MEC_UART_MSR_DSR_INACTIVE           = 1,     /*!< INACTIVE : DSR# signal is not asserted                                    */
} MEC_UART_MSR_DSR_Enum;

/* ================================================  MEC_UART MSR RI [6..6]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MSR_RI                                                          */
  MEC_UART_MSR_RI_ACTIVE              = 0,     /*!< ACTIVE : RI# signal is asserted                                           */
  MEC_UART_MSR_RI_INACTIVE            = 1,     /*!< INACTIVE : RI# signal is not asserted                                     */
} MEC_UART_MSR_RI_Enum;

/* ===============================================  MEC_UART MSR DCD [7..7]  ================================================ */
typedef enum {                                  /*!< MEC_UART_MSR_DCD                                                         */
  MEC_UART_MSR_DCD_ACTIVE             = 0,     /*!< ACTIVE : DCD# signal is asserted                                          */
  MEC_UART_MSR_DCD_INACTIVE           = 1,     /*!< INACTIVE : DCD# signal is not asserted                                    */
} MEC_UART_MSR_DCD_Enum;

/* =========================================================  ACTV  ========================================================== */
/* ==============================================  MEC_UART ACTV CLKS [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_UART_ACTV_CLKS                                                       */
  MEC_UART_ACTV_CLKS_OFF              = 0,     /*!< OFF : Clocks gated off                                                    */
  MEC_UART_ACTV_CLKS_ON               = 1,     /*!< ON : Clocks gated on                                                      */
} MEC_UART_ACTV_CLKS_Enum;

/* =========================================================  CFGS  ========================================================== */
/* ===========================================  MEC_UART CFGS CLK_SRC_EXT [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_UART_CFGS_CLK_SRC_EXT                                                */
  MEC_UART_CFGS_CLK_SRC_EXT_DISABLED  = 0,     /*!< DISABLED : Use one of the internal clock sources                          */
  MEC_UART_CFGS_CLK_SRC_EXT_ENABLED   = 1,     /*!< ENABLED : Use external clock source on GPIO 025                           */
} MEC_UART_CFGS_CLK_SRC_EXT_Enum;

/* ============================================  MEC_UART CFGS RESET_SRC [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_UART_CFGS_RESET_SRC                                                  */
  MEC_UART_CFGS_RESET_SRC_SYS         = 0,     /*!< SYS : UART reset derived from RESET_SYS signal                            */
  MEC_UART_CFGS_RESET_SRC_HOST        = 1,     /*!< HOST : UART reset derived from RESET_HOST signal                          */
} MEC_UART_CFGS_RESET_SRC_Enum;

/* ============================================  MEC_UART CFGS POLARITY [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_UART_CFGS_POLARITY                                                   */
  MEC_UART_CFGS_POLARITY_NORMAL       = 0,     /*!< NORMAL : TX and RX pins states are not inverted                           */
  MEC_UART_CFGS_POLARITY_INVERTED     = 1,     /*!< INVERTED : TX and RX pins states are inverted                             */
} MEC_UART_CFGS_POLARITY_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_UART_V1_H */
