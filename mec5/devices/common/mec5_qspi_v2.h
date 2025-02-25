/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_QSPI_V2_H
#define _MEC5_QSPI_V2_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */

/**
  * @brief MEC_QSPI_LDMA_CHAN [RX_LDMA_CHAN] (RX Local DMA channels)
  */
typedef struct mec_qspi_ldma_chan_regs {
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) Local DMA Control                                          */
  __IOM uint32_t  MEM_ADDR;                     /*!< (@ 0x00000004) Memory start address                                       */
  __IOM uint32_t  LEN;                          /*!< (@ 0x00000008) Maximum number of bytes to be transferred                  */
  __IM  uint32_t  RESERVED;
} MEC_QSPI_LDMA_CHAN_Type;                      /*!< Size = 16 (0x10)                                                          */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */
/**
  * @brief Quad SPI Controller with local DMA (MEC_QSPI)
  */

typedef struct mec_qspi_regs {                  /*!< (@ 0x40070000) MEC_QSPI Structure                                        */
  __IOM uint32_t  MODE;                         /*!< (@ 0x00000000) QSPI mode, chip select, clock divider                      */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000004) QSPI control                                               */
  __IOM uint32_t  EXE;                          /*!< (@ 0x00000008) QSPI execute                                               */
  __IOM uint32_t  IFCTRL;                       /*!< (@ 0x0000000C) QSPI interface control                                     */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000010) QSPI status                                                */
  __IM  uint32_t  BCNT_STS;                     /*!< (@ 0x00000014) QSPI buffer count status                                   */
  __IOM uint32_t  INTR_CTRL;                    /*!< (@ 0x00000018) QSPI interrupt enable                                      */
  __IOM uint32_t  BCNT_TRIG;                    /*!< (@ 0x0000001C) QSPI buffer count trigger                                  */
  __OM  uint32_t  TX_FIFO;                      /*!< (@ 0x00000020) QSPI transmit FIFO                                         */
  __IM  uint32_t  RX_FIFO;                      /*!< (@ 0x00000024) QSPI receive FIFO 32-bit access                            */
  __IOM uint32_t  CSTM;                         /*!< (@ 0x00000028) QSPI chip select timing                                    */
  __IM  uint32_t  RESERVED;
  __IOM uint32_t  DESCRS[16];                   /*!< (@ 0x00000030) QSPI descriptor n                                          */
  __IM  uint32_t  RESERVED1[16];
  __IOM uint32_t  ALIAS_CTRL;                   /*!< (@ 0x000000B0) QSPI alias control                                         */
  __IM  uint32_t  RESERVED2[3];
  __IOM uint32_t  ALT1_MODE;                    /*!< (@ 0x000000C0) QSPI alternate mode 1                                      */
  __IM  uint32_t  RESERVED3[3];
  __IOM uint32_t  TAPSS;                        /*!< (@ 0x000000D0) QSPI taps selection                                        */
  __IOM uint32_t  TAPSA;                        /*!< (@ 0x000000D4) QSPI taps adjustment                                       */
  __IOM uint32_t  TAPSC;                        /*!< (@ 0x000000D8) QSPI taps control                                          */
  __IM  uint32_t  RESERVED4[9];
  __IOM uint32_t  LDMA_RXEN;                    /*!< (@ 0x00000100) QSPI Local DMA RX descriptor enable bit map                */
  __IOM uint32_t  LDMA_TXEN;                    /*!< (@ 0x00000104) QSPI Local DMA TX descriptor enable bit map                */
  __IM  uint32_t  RESERVED5[2];
  __IOM MEC_QSPI_LDMA_CHAN_Type RX_LDMA_CHAN[3];/*!< (@ 0x00000110) RX Local DMA channels                                      */
  __IOM MEC_QSPI_LDMA_CHAN_Type TX_LDMA_CHAN[3];/*!< (@ 0x00000140) TX Local DMA channels                                      */
} MEC_QSPI_Type;                                /*!< Size = 368 (0x170)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_clusters
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos (0UL)               /*!< EN (Bit 0)                                            */
#define MEC_QSPI_LDMA_CHAN_CTRL_EN_Msk (0x1UL)             /*!< EN (Bitfield-Mask: 0x01)                              */
#define MEC_QSPI_LDMA_CHAN_CTRL_RESTART_Pos (1UL)          /*!< RESTART (Bit 1)                                       */
#define MEC_QSPI_LDMA_CHAN_CTRL_RESTART_Msk (0x2UL)        /*!< RESTART (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_LDMA_CHAN_CTRL_RSTA_Pos (2UL)             /*!< RSTA (Bit 2)                                          */
#define MEC_QSPI_LDMA_CHAN_CTRL_RSTA_Msk (0x4UL)           /*!< RSTA (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_LDMA_CHAN_CTRL_OVRL_Pos (3UL)             /*!< OVRL (Bit 3)                                          */
#define MEC_QSPI_LDMA_CHAN_CTRL_OVRL_Msk (0x8UL)           /*!< OVRL (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos (4UL)            /*!< ACCSZ (Bit 4)                                         */
#define MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Msk (0x30UL)         /*!< ACCSZ (Bitfield-Mask: 0x03)                           */
#define MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Pos (6UL)            /*!< INCRA (Bit 6)                                         */
#define MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Msk (0x40UL)         /*!< INCRA (Bitfield-Mask: 0x01)                           */

/** @} */ /* End of group PosMask_clusters */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
#define MEC_QSPI_MODE_ACTV_Pos            (0UL)                     /*!< ACTV (Bit 0)                                          */
#define MEC_QSPI_MODE_ACTV_Msk            (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_MODE_SRST_Pos            (1UL)                     /*!< SRST (Bit 1)                                          */
#define MEC_QSPI_MODE_SRST_Msk            (0x2UL)                   /*!< SRST (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_MODE_TAFDMA_Pos          (2UL)                     /*!< TAFDMA (Bit 2)                                        */
#define MEC_QSPI_MODE_TAFDMA_Msk          (0x4UL)                   /*!< TAFDMA (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_MODE_RX_LDMA_Pos         (3UL)                     /*!< RX_LDMA (Bit 3)                                       */
#define MEC_QSPI_MODE_RX_LDMA_Msk         (0x8UL)                   /*!< RX_LDMA (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_MODE_TX_LDMA_Pos         (4UL)                     /*!< TX_LDMA (Bit 4)                                       */
#define MEC_QSPI_MODE_TX_LDMA_Msk         (0x10UL)                  /*!< TX_LDMA (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_MODE_CPOL_Pos            (8UL)                     /*!< CPOL (Bit 8)                                          */
#define MEC_QSPI_MODE_CPOL_Msk            (0x100UL)                 /*!< CPOL (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_MODE_CPHA_MOSI_Pos       (9UL)                     /*!< CPHA_MOSI (Bit 9)                                     */
#define MEC_QSPI_MODE_CPHA_MOSI_Msk       (0x200UL)                 /*!< CPHA_MOSI (Bitfield-Mask: 0x01)                       */
#define MEC_QSPI_MODE_CPHA_MISO_Pos       (10UL)                    /*!< CPHA_MISO (Bit 10)                                    */
#define MEC_QSPI_MODE_CPHA_MISO_Msk       (0x400UL)                 /*!< CPHA_MISO (Bitfield-Mask: 0x01)                       */
#define MEC_QSPI_MODE_CS_Pos              (12UL)                    /*!< CS (Bit 12)                                           */
#define MEC_QSPI_MODE_CS_Msk              (0x3000UL)                /*!< CS (Bitfield-Mask: 0x03)                              */
#define MEC_QSPI_MODE_CLKDIV_Pos          (16UL)                    /*!< CLKDIV (Bit 16)                                       */
#define MEC_QSPI_MODE_CLKDIV_Msk          (0xffff0000UL)            /*!< CLKDIV (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CTRL  ========================================================== */
#define MEC_QSPI_CTRL_IFM_Pos             (0UL)                     /*!< IFM (Bit 0)                                           */
#define MEC_QSPI_CTRL_IFM_Msk             (0x3UL)                   /*!< IFM (Bitfield-Mask: 0x03)                             */
#define MEC_QSPI_CTRL_TXM_Pos             (2UL)                     /*!< TXM (Bit 2)                                           */
#define MEC_QSPI_CTRL_TXM_Msk             (0xcUL)                   /*!< TXM (Bitfield-Mask: 0x03)                             */
#define MEC_QSPI_CTRL_TXDMA_Pos           (4UL)                     /*!< TXDMA (Bit 4)                                         */
#define MEC_QSPI_CTRL_TXDMA_Msk           (0x30UL)                  /*!< TXDMA (Bitfield-Mask: 0x03)                           */
#define MEC_QSPI_CTRL_RXEN_Pos            (6UL)                     /*!< RXEN (Bit 6)                                          */
#define MEC_QSPI_CTRL_RXEN_Msk            (0x40UL)                  /*!< RXEN (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_CTRL_RXDMA_Pos           (7UL)                     /*!< RXDMA (Bit 7)                                         */
#define MEC_QSPI_CTRL_RXDMA_Msk           (0x180UL)                 /*!< RXDMA (Bitfield-Mask: 0x03)                           */
#define MEC_QSPI_CTRL_CLOSE_Pos           (9UL)                     /*!< CLOSE (Bit 9)                                         */
#define MEC_QSPI_CTRL_CLOSE_Msk           (0x200UL)                 /*!< CLOSE (Bitfield-Mask: 0x01)                           */
#define MEC_QSPI_CTRL_QUNITS_Pos          (10UL)                    /*!< QUNITS (Bit 10)                                       */
#define MEC_QSPI_CTRL_QUNITS_Msk          (0xc00UL)                 /*!< QUNITS (Bitfield-Mask: 0x03)                          */
#define MEC_QSPI_CTRL_DPTR_Pos            (12UL)                    /*!< DPTR (Bit 12)                                         */
#define MEC_QSPI_CTRL_DPTR_Msk            (0xf000UL)                /*!< DPTR (Bitfield-Mask: 0x0f)                            */
#define MEC_QSPI_CTRL_DESCR_MODE_Pos      (16UL)                    /*!< DESCR_MODE (Bit 16)                                   */
#define MEC_QSPI_CTRL_DESCR_MODE_Msk      (0x10000UL)               /*!< DESCR_MODE (Bitfield-Mask: 0x01)                      */
#define MEC_QSPI_CTRL_QNUNITS_Pos         (17UL)                    /*!< QNUNITS (Bit 17)                                      */
#define MEC_QSPI_CTRL_QNUNITS_Msk         (0xfffe0000UL)            /*!< QNUNITS (Bitfield-Mask: 0x7fff)                       */
/* ==========================================================  EXE  ========================================================== */
#define MEC_QSPI_EXE_START_Pos            (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_QSPI_EXE_START_Msk            (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_QSPI_EXE_STOP_Pos             (1UL)                     /*!< STOP (Bit 1)                                          */
#define MEC_QSPI_EXE_STOP_Msk             (0x2UL)                   /*!< STOP (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_EXE_CLRF_Pos             (2UL)                     /*!< CLRF (Bit 2)                                          */
#define MEC_QSPI_EXE_CLRF_Msk             (0x4UL)                   /*!< CLRF (Bitfield-Mask: 0x01)                            */
/* ========================================================  IFCTRL  ========================================================= */
#define MEC_QSPI_IFCTRL_WRPV_Pos          (0UL)                     /*!< WRPV (Bit 0)                                          */
#define MEC_QSPI_IFCTRL_WRPV_Msk          (0x1UL)                   /*!< WRPV (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_IFCTRL_WRPC_Pos          (1UL)                     /*!< WRPC (Bit 1)                                          */
#define MEC_QSPI_IFCTRL_WRPC_Msk          (0x2UL)                   /*!< WRPC (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_IFCTRL_HLDV_Pos          (2UL)                     /*!< HLDV (Bit 2)                                          */
#define MEC_QSPI_IFCTRL_HLDV_Msk          (0x4UL)                   /*!< HLDV (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_IFCTRL_HLDEN_Pos         (3UL)                     /*!< HLDEN (Bit 3)                                         */
#define MEC_QSPI_IFCTRL_HLDEN_Msk         (0x8UL)                   /*!< HLDEN (Bitfield-Mask: 0x01)                           */
/* ========================================================  STATUS  ========================================================= */
#define MEC_QSPI_STATUS_DONE_Pos          (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_QSPI_STATUS_DONE_Msk          (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_STATUS_DMA_DONE_Pos      (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define MEC_QSPI_STATUS_DMA_DONE_Msk      (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_QSPI_STATUS_TXBERR_Pos        (2UL)                     /*!< TXBERR (Bit 2)                                        */
#define MEC_QSPI_STATUS_TXBERR_Msk        (0x4UL)                   /*!< TXBERR (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_STATUS_RXBERR_Pos        (3UL)                     /*!< RXBERR (Bit 3)                                        */
#define MEC_QSPI_STATUS_RXBERR_Msk        (0x8UL)                   /*!< RXBERR (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_STATUS_PROGERR_Pos       (4UL)                     /*!< PROGERR (Bit 4)                                       */
#define MEC_QSPI_STATUS_PROGERR_Msk       (0x10UL)                  /*!< PROGERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_STATUS_LDRXERR_Pos       (5UL)                     /*!< LDRXERR (Bit 5)                                       */
#define MEC_QSPI_STATUS_LDRXERR_Msk       (0x20UL)                  /*!< LDRXERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_STATUS_LDTXERR_Pos       (6UL)                     /*!< LDTXERR (Bit 6)                                       */
#define MEC_QSPI_STATUS_LDTXERR_Msk       (0x40UL)                  /*!< LDTXERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_STATUS_TXBF_Pos          (8UL)                     /*!< TXBF (Bit 8)                                          */
#define MEC_QSPI_STATUS_TXBF_Msk          (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_STATUS_TXBE_Pos          (9UL)                     /*!< TXBE (Bit 9)                                          */
#define MEC_QSPI_STATUS_TXBE_Msk          (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_STATUS_TXBREQ_Pos        (10UL)                    /*!< TXBREQ (Bit 10)                                       */
#define MEC_QSPI_STATUS_TXBREQ_Msk        (0x400UL)                 /*!< TXBREQ (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_STATUS_TXBSTALL_Pos      (11UL)                    /*!< TXBSTALL (Bit 11)                                     */
#define MEC_QSPI_STATUS_TXBSTALL_Msk      (0x800UL)                 /*!< TXBSTALL (Bitfield-Mask: 0x01)                        */
#define MEC_QSPI_STATUS_RXBF_Pos          (12UL)                    /*!< RXBF (Bit 12)                                         */
#define MEC_QSPI_STATUS_RXBF_Msk          (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_STATUS_RXBE_Pos          (13UL)                    /*!< RXBE (Bit 13)                                         */
#define MEC_QSPI_STATUS_RXBE_Msk          (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_STATUS_RXBREQ_Pos        (14UL)                    /*!< RXBREQ (Bit 14)                                       */
#define MEC_QSPI_STATUS_RXBREQ_Msk        (0x4000UL)                /*!< RXBREQ (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_STATUS_RXBSTALL_Pos      (15UL)                    /*!< RXBSTALL (Bit 15)                                     */
#define MEC_QSPI_STATUS_RXBSTALL_Msk      (0x8000UL)                /*!< RXBSTALL (Bitfield-Mask: 0x01)                        */
#define MEC_QSPI_STATUS_ACTIVE_Pos        (16UL)                    /*!< ACTIVE (Bit 16)                                       */
#define MEC_QSPI_STATUS_ACTIVE_Msk        (0x10000UL)               /*!< ACTIVE (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_STATUS_CDBI_Pos          (24UL)                    /*!< CDBI (Bit 24)                                         */
#define MEC_QSPI_STATUS_CDBI_Msk          (0xf000000UL)             /*!< CDBI (Bitfield-Mask: 0x0f)                            */
/* =======================================================  BCNT_STS  ======================================================== */
#define MEC_QSPI_BCNT_STS_TXCNT_Pos       (0UL)                     /*!< TXCNT (Bit 0)                                         */
#define MEC_QSPI_BCNT_STS_TXCNT_Msk       (0xffffUL)                /*!< TXCNT (Bitfield-Mask: 0xffff)                         */
#define MEC_QSPI_BCNT_STS_RXCNT_Pos       (16UL)                    /*!< RXCNT (Bit 16)                                        */
#define MEC_QSPI_BCNT_STS_RXCNT_Msk       (0xffff0000UL)            /*!< RXCNT (Bitfield-Mask: 0xffff)                         */
/* =======================================================  INTR_CTRL  ======================================================= */
#define MEC_QSPI_INTR_CTRL_DONE_Pos       (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_QSPI_INTR_CTRL_DONE_Msk       (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_INTR_CTRL_DMA_DONE_Pos   (1UL)                     /*!< DMA_DONE (Bit 1)                                      */
#define MEC_QSPI_INTR_CTRL_DMA_DONE_Msk   (0x2UL)                   /*!< DMA_DONE (Bitfield-Mask: 0x01)                        */
#define MEC_QSPI_INTR_CTRL_TXBERR_Pos     (2UL)                     /*!< TXBERR (Bit 2)                                        */
#define MEC_QSPI_INTR_CTRL_TXBERR_Msk     (0x4UL)                   /*!< TXBERR (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_INTR_CTRL_RXBERR_Pos     (3UL)                     /*!< RXBERR (Bit 3)                                        */
#define MEC_QSPI_INTR_CTRL_RXBERR_Msk     (0x8UL)                   /*!< RXBERR (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_INTR_CTRL_PROGERR_Pos    (4UL)                     /*!< PROGERR (Bit 4)                                       */
#define MEC_QSPI_INTR_CTRL_PROGERR_Msk    (0x10UL)                  /*!< PROGERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_INTR_CTRL_LDRXERR_Pos    (5UL)                     /*!< LDRXERR (Bit 5)                                       */
#define MEC_QSPI_INTR_CTRL_LDRXERR_Msk    (0x20UL)                  /*!< LDRXERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_INTR_CTRL_LDTXERR_Pos    (6UL)                     /*!< LDTXERR (Bit 6)                                       */
#define MEC_QSPI_INTR_CTRL_LDTXERR_Msk    (0x40UL)                  /*!< LDTXERR (Bitfield-Mask: 0x01)                         */
#define MEC_QSPI_INTR_CTRL_TXBF_Pos       (8UL)                     /*!< TXBF (Bit 8)                                          */
#define MEC_QSPI_INTR_CTRL_TXBF_Msk       (0x100UL)                 /*!< TXBF (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_INTR_CTRL_TXBE_Pos       (9UL)                     /*!< TXBE (Bit 9)                                          */
#define MEC_QSPI_INTR_CTRL_TXBE_Msk       (0x200UL)                 /*!< TXBE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_INTR_CTRL_TXBREQ_Pos     (10UL)                    /*!< TXBREQ (Bit 10)                                       */
#define MEC_QSPI_INTR_CTRL_TXBREQ_Msk     (0x400UL)                 /*!< TXBREQ (Bitfield-Mask: 0x01)                          */
#define MEC_QSPI_INTR_CTRL_TXBSTALL_Pos   (11UL)                    /*!< TXBSTALL (Bit 11)                                     */
#define MEC_QSPI_INTR_CTRL_TXBSTALL_Msk   (0x800UL)                 /*!< TXBSTALL (Bitfield-Mask: 0x01)                        */
#define MEC_QSPI_INTR_CTRL_RXBF_Pos       (12UL)                    /*!< RXBF (Bit 12)                                         */
#define MEC_QSPI_INTR_CTRL_RXBF_Msk       (0x1000UL)                /*!< RXBF (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_INTR_CTRL_RXBE_Pos       (13UL)                    /*!< RXBE (Bit 13)                                         */
#define MEC_QSPI_INTR_CTRL_RXBE_Msk       (0x2000UL)                /*!< RXBE (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_INTR_CTRL_RXBREQ_Pos     (14UL)                    /*!< RXBREQ (Bit 14)                                       */
#define MEC_QSPI_INTR_CTRL_RXBREQ_Msk     (0x4000UL)                /*!< RXBREQ (Bitfield-Mask: 0x01)                          */
/* =======================================================  BCNT_TRIG  ======================================================= */
#define MEC_QSPI_BCNT_TRIG_TXBCNT_Pos     (0UL)                     /*!< TXBCNT (Bit 0)                                        */
#define MEC_QSPI_BCNT_TRIG_TXBCNT_Msk     (0xffffUL)                /*!< TXBCNT (Bitfield-Mask: 0xffff)                        */
#define MEC_QSPI_BCNT_TRIG_RXBCNT_Pos     (16UL)                    /*!< RXBCNT (Bit 16)                                       */
#define MEC_QSPI_BCNT_TRIG_RXBCNT_Msk     (0xffff0000UL)            /*!< RXBCNT (Bitfield-Mask: 0xffff)                        */
/* ========================================================  TX_FIFO  ======================================================== */
/* ========================================================  RX_FIFO  ======================================================== */
/* =========================================================  CSTM  ========================================================== */
#define MEC_QSPI_CSTM_CSA_CLKSTA_Pos      (0UL)                     /*!< CSA_CLKSTA (Bit 0)                                    */
#define MEC_QSPI_CSTM_CSA_CLKSTA_Msk      (0xfUL)                   /*!< CSA_CLKSTA (Bitfield-Mask: 0x0f)                      */
#define MEC_QSPI_CSTM_CLKSTO_CSD_Pos      (8UL)                     /*!< CLKSTO_CSD (Bit 8)                                    */
#define MEC_QSPI_CSTM_CLKSTO_CSD_Msk      (0xf00UL)                 /*!< CLKSTO_CSD (Bitfield-Mask: 0x0f)                      */
#define MEC_QSPI_CSTM_DLDH_Pos            (16UL)                    /*!< DLDH (Bit 16)                                         */
#define MEC_QSPI_CSTM_DLDH_Msk            (0xf0000UL)               /*!< DLDH (Bitfield-Mask: 0x0f)                            */
#define MEC_QSPI_CSTM_CSD_CSA_Pos         (24UL)                    /*!< CSD_CSA (Bit 24)                                      */
#define MEC_QSPI_CSTM_CSD_CSA_Msk         (0xff000000UL)            /*!< CSD_CSA (Bitfield-Mask: 0xff)                         */
/* =========================================================  DESCR  ========================================================= */
#define MEC_QSPI_DESCR_IFM_Pos            (0UL)                     /*!< IFM (Bit 0)                                           */
#define MEC_QSPI_DESCR_IFM_Msk            (0x3UL)                   /*!< IFM (Bitfield-Mask: 0x03)                             */
#define MEC_QSPI_DESCR_TXEN_Pos           (2UL)                     /*!< TXEN (Bit 2)                                          */
#define MEC_QSPI_DESCR_TXEN_Msk           (0xcUL)                   /*!< TXEN (Bitfield-Mask: 0x03)                            */
#define MEC_QSPI_DESCR_TXDMA_Pos          (4UL)                     /*!< TXDMA (Bit 4)                                         */
#define MEC_QSPI_DESCR_TXDMA_Msk          (0x30UL)                  /*!< TXDMA (Bitfield-Mask: 0x03)                           */
#define MEC_QSPI_DESCR_RXEN_Pos           (6UL)                     /*!< RXEN (Bit 6)                                          */
#define MEC_QSPI_DESCR_RXEN_Msk           (0x40UL)                  /*!< RXEN (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_DESCR_RXDMA_Pos          (7UL)                     /*!< RXDMA (Bit 7)                                         */
#define MEC_QSPI_DESCR_RXDMA_Msk          (0x180UL)                 /*!< RXDMA (Bitfield-Mask: 0x03)                           */
#define MEC_QSPI_DESCR_CLOSE_Pos          (9UL)                     /*!< CLOSE (Bit 9)                                         */
#define MEC_QSPI_DESCR_CLOSE_Msk          (0x200UL)                 /*!< CLOSE (Bitfield-Mask: 0x01)                           */
#define MEC_QSPI_DESCR_QUNITS_Pos         (10UL)                    /*!< QUNITS (Bit 10)                                       */
#define MEC_QSPI_DESCR_QUNITS_Msk         (0xc00UL)                 /*!< QUNITS (Bitfield-Mask: 0x03)                          */
#define MEC_QSPI_DESCR_NEXT_Pos           (12UL)                    /*!< NEXT (Bit 12)                                         */
#define MEC_QSPI_DESCR_NEXT_Msk           (0xf000UL)                /*!< NEXT (Bitfield-Mask: 0x0f)                            */
#define MEC_QSPI_DESCR_LAST_Pos           (16UL)                    /*!< LAST (Bit 16)                                         */
#define MEC_QSPI_DESCR_LAST_Msk           (0x10000UL)               /*!< LAST (Bitfield-Mask: 0x01)                            */
#define MEC_QSPI_DESCR_QNUNITS_Pos        (17UL)                    /*!< QNUNITS (Bit 17)                                      */
#define MEC_QSPI_DESCR_QNUNITS_Msk        (0xfffe0000UL)            /*!< QNUNITS (Bitfield-Mask: 0x7fff)                       */
/* ======================================================  ALIAS_CTRL  ======================================================= */
/* =======================================================  ALT1_MODE  ======================================================= */
#define MEC_QSPI_ALT1_MODE_CS1_ALTEN_Pos  (0UL)                     /*!< CS1_ALTEN (Bit 0)                                     */
#define MEC_QSPI_ALT1_MODE_CS1_ALTEN_Msk  (0x1UL)                   /*!< CS1_ALTEN (Bitfield-Mask: 0x01)                       */
#define MEC_QSPI_ALT1_MODE_CS1_ALT_CLKDIV_Pos (16UL)                /*!< CS1_ALT_CLKDIV (Bit 16)                               */
#define MEC_QSPI_ALT1_MODE_CS1_ALT_CLKDIV_Msk (0xff0000UL)          /*!< CS1_ALT_CLKDIV (Bitfield-Mask: 0xff)                  */
/* =========================================================  TAPSS  ========================================================= */
#define MEC_QSPI_TAPSS_TSCK_Pos           (0UL)                     /*!< TSCK (Bit 0)                                          */
#define MEC_QSPI_TAPSS_TSCK_Msk           (0xffUL)                  /*!< TSCK (Bitfield-Mask: 0xff)                            */
#define MEC_QSPI_TAPSS_TCTRL_Pos          (8UL)                     /*!< TCTRL (Bit 8)                                         */
#define MEC_QSPI_TAPSS_TCTRL_Msk          (0xff00UL)                /*!< TCTRL (Bitfield-Mask: 0xff)                           */
/* =========================================================  TAPSA  ========================================================= */
#define MEC_QSPI_TAPSA_TSCKADJ_Pos        (0UL)                     /*!< TSCKADJ (Bit 0)                                       */
#define MEC_QSPI_TAPSA_TSCKADJ_Msk        (0xffUL)                  /*!< TSCKADJ (Bitfield-Mask: 0xff)                         */
#define MEC_QSPI_TAPSA_TCTRLADJ_Pos       (8UL)                     /*!< TCTRLADJ (Bit 8)                                      */
#define MEC_QSPI_TAPSA_TCTRLADJ_Msk       (0xff00UL)                /*!< TCTRLADJ (Bitfield-Mask: 0xff)                        */
/* =========================================================  TAPSC  ========================================================= */
#define MEC_QSPI_TAPSC_AUTO_Pos           (0UL)                     /*!< AUTO (Bit 0)                                          */
#define MEC_QSPI_TAPSC_AUTO_Msk           (0x3UL)                   /*!< AUTO (Bitfield-Mask: 0x03)                            */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ==============================================  LDMA_CHAN CTRL EN [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_EN                                            */
  MEC_QSPI_LDMA_CHAN_CTRL_EN_EN    = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_EN_Enum;

/* ===========================================  LDMA_CHAN CTRL RESTART [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_RESTART                                       */
  MEC_QSPI_LDMA_CHAN_CTRL_RESTART_EN = 1,   /*!< EN : Enable                                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_RESTART_Enum;

/* =============================================  LDMA_CHAN CTRL RSTA [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_RSTA                                          */
  MEC_QSPI_LDMA_CHAN_CTRL_RSTA_EN  = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_RSTA_Enum;

/* =============================================  LDMA_CHAN CTRL OVRL [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_OVRL                                          */
  MEC_QSPI_LDMA_CHAN_CTRL_OVRL_EN  = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_OVRL_Enum;

/* ============================================  LDMA_CHAN CTRL ACCSZ [4..5]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ                                         */
  MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_1B = 0,     /*!< 1B : Access size is 1 byte                                                */
  MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_2B = 1,     /*!< 2B : Access size is 2 bytes                                               */
  MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B = 2,     /*!< 4B : Access size is 4 bytes                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Enum;

/* ============================================  LDMA_CHAN CTRL INCRA [6..6]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_LDMA_CHAN_CTRL_INCRA                                         */
  MEC_QSPI_LDMA_CHAN_CTRL_INCRA_EN = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_LDMA_CHAN_CTRL_INCRA_Enum;

/** @} */ /* End of group EnumValue_clusters */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
/* ==============================================  MEC_QSPI MODE ACTV [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_ACTV                                                       */
  MEC_QSPI_MODE_ACTV_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_MODE_ACTV_Enum;

/* ==============================================  MEC_QSPI MODE SRST [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_SRST                                                       */
  MEC_QSPI_MODE_SRST_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_MODE_SRST_Enum;

/* =============================================  MEC_QSPI MODE TAFDMA [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_TAFDMA                                                     */
  MEC_QSPI_MODE_TAFDMA_EN             = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_MODE_TAFDMA_Enum;

/* =============================================  MEC_QSPI MODE RX_LDMA [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_MODE_RX_LDMA                                                    */
  MEC_QSPI_MODE_RX_LDMA_EN            = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_MODE_RX_LDMA_Enum;

/* =============================================  MEC_QSPI MODE TX_LDMA [4..4]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_MODE_TX_LDMA                                                    */
  MEC_QSPI_MODE_TX_LDMA_EN            = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_MODE_TX_LDMA_Enum;

/* ==============================================  MEC_QSPI MODE CPOL [8..8]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_CPOL                                                       */
  MEC_QSPI_MODE_CPOL_LO               = 0,     /*!< LO : Clock idle lo                                                        */
  MEC_QSPI_MODE_CPOL_HI               = 1,     /*!< HI : Clock idle high                                                      */
} MEC_QSPI_MODE_CPOL_Enum;

/* ============================================  MEC_QSPI MODE CPHA_MOSI [9..9]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_MODE_CPHA_MOSI                                                  */
  MEC_QSPI_MODE_CPHA_MOSI_FODD        = 1,     /*!< FODD : Enable                                                             */
} MEC_QSPI_MODE_CPHA_MOSI_Enum;

/* ===========================================  MEC_QSPI MODE CPHA_MISO [10..10]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_CPHA_MISO                                                  */
  MEC_QSPI_MODE_CPHA_MISO_SEVEN       = 1,     /*!< SEVEN : Enable                                                            */
} MEC_QSPI_MODE_CPHA_MISO_Enum;

/* ==============================================  MEC_QSPI MODE CS [12..13]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_MODE_CS                                                         */
  MEC_QSPI_MODE_CS_PIN0               = 0,     /*!< PIN0 : Use chip select 0 pin                                              */
  MEC_QSPI_MODE_CS_PIN1               = 1,     /*!< PIN1 : Use chip select 1 pin                                              */
} MEC_QSPI_MODE_CS_Enum;

/* =========================================================  CTRL  ========================================================== */
/* ===============================================  MEC_QSPI CTRL IFM [0..1]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_IFM                                                        */
  MEC_QSPI_CTRL_IFM_FD                = 0,     /*!< FD : Full duplex: transmit on IO0, received on IO1                        */
  MEC_QSPI_CTRL_IFM_DUAL              = 1,     /*!< DUAL : Dual: transmit and receive on IO[0:1]                              */
  MEC_QSPI_CTRL_IFM_QUAD              = 2,     /*!< QUAD : Quad: transmit and receive on IO[0:3]                              */
} MEC_QSPI_CTRL_IFM_Enum;

/* ===============================================  MEC_QSPI CTRL TXM [2..3]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_TXM                                                        */
  MEC_QSPI_CTRL_TXM_DIS               = 0,     /*!< DIS : Transmit disabled                                                   */
  MEC_QSPI_CTRL_TXM_EN                = 1,     /*!< EN : Transmit data enabled                                                */
  MEC_QSPI_CTRL_TXM_ENZ               = 2,     /*!< ENZ : Transmit zeros                                                      */
  MEC_QSPI_CTRL_TXM_EN1               = 3,     /*!< EN1 : Transmit ones                                                       */
} MEC_QSPI_CTRL_TXM_Enum;

/* ==============================================  MEC_QSPI CTRL TXDMA [4..5]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_TXDMA                                                      */
  MEC_QSPI_CTRL_TXDMA_DIS             = 0,     /*!< DIS : Transmit disabled                                                   */
  MEC_QSPI_CTRL_TXDMA_1B_LDMA_CH0     = 1,     /*!< 1B_LDMA_CH0 : Legacy DMA 1 byte units/Local DMA Chan 0                    */
  MEC_QSPI_CTRL_TXDMA_2B_LDMA_CH1     = 2,     /*!< 2B_LDMA_CH1 : Legacy DMA 2 byte units/Local DMA Chan 1                    */
  MEC_QSPI_CTRL_TXDMA_4B_LDMA_CH2     = 3,     /*!< 4B_LDMA_CH2 : Legacy DMA in 4 byte units/Local DMA Chan 2                 */
} MEC_QSPI_CTRL_TXDMA_Enum;

/* ==============================================  MEC_QSPI CTRL RXEN [6..6]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_RXEN                                                       */
  MEC_QSPI_CTRL_RXEN_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_CTRL_RXEN_Enum;

/* ==============================================  MEC_QSPI CTRL RXDMA [7..8]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_RXDMA                                                      */
  MEC_QSPI_CTRL_RXDMA_DIS             = 0,     /*!< DIS : Receive DMA disabled                                                */
  MEC_QSPI_CTRL_RXDMA_1B_LDMA_CH0     = 1,     /*!< 1B_LDMA_CH0 : Legacy DMA 1 byte units/Local DMA Chan 0                    */
  MEC_QSPI_CTRL_RXDMA_2B_LDMA_CH1     = 2,     /*!< 2B_LDMA_CH1 : Legacy DMA 2 byte units/Local DMA Chan 1                    */
  MEC_QSPI_CTRL_RXDMA_4B_LDMA_CH2     = 3,     /*!< 4B_LDMA_CH2 : Legacy DMA 4 byte units/Local DMA Chan 2                    */
} MEC_QSPI_CTRL_RXDMA_Enum;

/* ==============================================  MEC_QSPI CTRL CLOSE [9..9]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_CLOSE                                                      */
  MEC_QSPI_CTRL_CLOSE_EN              = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_CTRL_CLOSE_Enum;

/* ============================================  MEC_QSPI CTRL QUNITS [10..11]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_CTRL_QUNITS                                                     */
  MEC_QSPI_CTRL_QUNITS_BITS           = 0,     /*!< BITS : QSPI transfer counts in bit units                                  */
  MEC_QSPI_CTRL_QUNITS_1B             = 1,     /*!< 1B : QSPI transfer counts in byte units                                   */
  MEC_QSPI_CTRL_QUNITS_4B             = 2,     /*!< 4B : QSPI transfer counts in 4-byte units                                 */
  MEC_QSPI_CTRL_QUNITS_16B            = 3,     /*!< 16B : QSPI transfer counts in 16-byte units                               */
} MEC_QSPI_CTRL_QUNITS_Enum;

/* =============================================  MEC_QSPI CTRL DPTR [12..15]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_DPTR                                                       */
  MEC_QSPI_CTRL_DPTR_DESCR0           = 0,     /*!< DESCR0 : Start with DESCR0                                                */
  MEC_QSPI_CTRL_DPTR_DESCR1           = 1,     /*!< DESCR1 : Start with DESCR1                                                */
  MEC_QSPI_CTRL_DPTR_DESCR2           = 2,     /*!< DESCR2 : Start with DESCR2                                                */
  MEC_QSPI_CTRL_DPTR_DESCR3           = 3,     /*!< DESCR3 : Start with DESCR3                                                */
  MEC_QSPI_CTRL_DPTR_DESCR4           = 4,     /*!< DESCR4 : Start with DESCR4                                                */
  MEC_QSPI_CTRL_DPTR_DESCR5           = 5,     /*!< DESCR5 : Start with DESCR5                                                */
  MEC_QSPI_CTRL_DPTR_DESCR6           = 6,     /*!< DESCR6 : Start with DESCR6                                                */
  MEC_QSPI_CTRL_DPTR_DESCR7           = 7,     /*!< DESCR7 : Start with DESCR7                                                */
  MEC_QSPI_CTRL_DPTR_DESCR8           = 8,     /*!< DESCR8 : Start with DESCR8                                                */
  MEC_QSPI_CTRL_DPTR_DESCR9           = 9,     /*!< DESCR9 : Start with DESCR9                                                */
  MEC_QSPI_CTRL_DPTR_DESCR10          = 10,    /*!< DESCR10 : Start with DESCR10                                              */
  MEC_QSPI_CTRL_DPTR_DESCR11          = 11,    /*!< DESCR11 : Start with DESCR11                                              */
  MEC_QSPI_CTRL_DPTR_DESCR12          = 12,    /*!< DESCR12 : Start with DESCR12                                              */
  MEC_QSPI_CTRL_DPTR_DESCR13          = 13,    /*!< DESCR13 : Start with DESCR13                                              */
  MEC_QSPI_CTRL_DPTR_DESCR14          = 14,    /*!< DESCR14 : Start with DESCR14                                              */
  MEC_QSPI_CTRL_DPTR_DESCR15          = 15,    /*!< DESCR15 : Start with DESCR15                                              */
} MEC_QSPI_CTRL_DPTR_Enum;

/* ==========================================  MEC_QSPI CTRL DESCR_MODE [16..16]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_CTRL_DESCR_MODE                                                 */
  MEC_QSPI_CTRL_DESCR_MODE_EN         = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_CTRL_DESCR_MODE_Enum;

/* ==========================================================  EXE  ========================================================== */
/* ==============================================  MEC_QSPI EXE START [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_EXE_START                                                       */
  MEC_QSPI_EXE_START_EN               = 1,     /*!< EN : Write 1 to start QSPI                                                */
} MEC_QSPI_EXE_START_Enum;

/* ===============================================  MEC_QSPI EXE STOP [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_EXE_STOP                                                        */
  MEC_QSPI_EXE_STOP_EN                = 1,     /*!< EN : Write 1 to stop QSPI on next unit boundary                           */
} MEC_QSPI_EXE_STOP_Enum;

/* ===============================================  MEC_QSPI EXE CLRF [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_EXE_CLRF                                                        */
  MEC_QSPI_EXE_CLRF_EN                = 1,     /*!< EN : Write 1 to clear TX and RX FIFOs                                     */
} MEC_QSPI_EXE_CLRF_Enum;

/* ========================================================  IFCTRL  ========================================================= */
/* =============================================  MEC_QSPI IFCTRL WRPV [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_IFCTRL_WRPV                                                     */
  MEC_QSPI_IFCTRL_WRPV_LO             = 0,     /*!< LO : Low                                                                  */
  MEC_QSPI_IFCTRL_WRPV_HI             = 1,     /*!< HI : High                                                                 */
} MEC_QSPI_IFCTRL_WRPV_Enum;

/* =============================================  MEC_QSPI IFCTRL WRPC [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_IFCTRL_WRPC                                                     */
  MEC_QSPI_IFCTRL_WRPC_EN             = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_IFCTRL_WRPC_Enum;

/* =============================================  MEC_QSPI IFCTRL HLDV [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_IFCTRL_HLDV                                                     */
  MEC_QSPI_IFCTRL_HLDV_LO             = 0,     /*!< LO : Low                                                                  */
  MEC_QSPI_IFCTRL_HLDV_HI             = 1,     /*!< HI : High                                                                 */
} MEC_QSPI_IFCTRL_HLDV_Enum;

/* =============================================  MEC_QSPI IFCTRL HLDEN [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_IFCTRL_HLDEN                                                    */
  MEC_QSPI_IFCTRL_HLDEN_EN            = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_IFCTRL_HLDEN_Enum;

/* ========================================================  STATUS  ========================================================= */
/* =============================================  MEC_QSPI STATUS DONE [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_STATUS_DONE                                                     */
  MEC_QSPI_STATUS_DONE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_DONE_Enum;

/* ===========================================  MEC_QSPI STATUS DMA_DONE [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_DMA_DONE                                                 */
  MEC_QSPI_STATUS_DMA_DONE_ACTIVE     = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_DMA_DONE_Enum;

/* ============================================  MEC_QSPI STATUS TXBERR [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_STATUS_TXBERR                                                   */
  MEC_QSPI_STATUS_TXBERR_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_TXBERR_Enum;

/* ============================================  MEC_QSPI STATUS RXBERR [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_STATUS_RXBERR                                                   */
  MEC_QSPI_STATUS_RXBERR_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_RXBERR_Enum;

/* ============================================  MEC_QSPI STATUS PROGERR [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_PROGERR                                                  */
  MEC_QSPI_STATUS_PROGERR_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_PROGERR_Enum;

/* ============================================  MEC_QSPI STATUS LDRXERR [5..5]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_LDRXERR                                                  */
  MEC_QSPI_STATUS_LDRXERR_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_LDRXERR_Enum;

/* ============================================  MEC_QSPI STATUS LDTXERR [6..6]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_LDTXERR                                                  */
  MEC_QSPI_STATUS_LDTXERR_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_LDTXERR_Enum;

/* =============================================  MEC_QSPI STATUS TXBF [8..8]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_STATUS_TXBF                                                     */
  MEC_QSPI_STATUS_TXBF_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_TXBF_Enum;

/* =============================================  MEC_QSPI STATUS TXBE [9..9]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_STATUS_TXBE                                                     */
  MEC_QSPI_STATUS_TXBE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_TXBE_Enum;

/* ===========================================  MEC_QSPI STATUS TXBREQ [10..10]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_TXBREQ                                                   */
  MEC_QSPI_STATUS_TXBREQ_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_TXBREQ_Enum;

/* ==========================================  MEC_QSPI STATUS TXBSTALL [11..11]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_STATUS_TXBSTALL                                                 */
  MEC_QSPI_STATUS_TXBSTALL_ACTIVE     = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_TXBSTALL_Enum;

/* ============================================  MEC_QSPI STATUS RXBF [12..12]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_STATUS_RXBF                                                     */
  MEC_QSPI_STATUS_RXBF_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_RXBF_Enum;

/* ============================================  MEC_QSPI STATUS RXBE [13..13]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_STATUS_RXBE                                                     */
  MEC_QSPI_STATUS_RXBE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_RXBE_Enum;

/* ===========================================  MEC_QSPI STATUS RXBREQ [14..14]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_RXBREQ                                                   */
  MEC_QSPI_STATUS_RXBREQ_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_RXBREQ_Enum;

/* ==========================================  MEC_QSPI STATUS RXBSTALL [15..15]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_STATUS_RXBSTALL                                                 */
  MEC_QSPI_STATUS_RXBSTALL_ACTIVE     = 1,     /*!< ACTIVE : Active                                                           */
} MEC_QSPI_STATUS_RXBSTALL_Enum;

/* ===========================================  MEC_QSPI STATUS ACTIVE [16..16]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_STATUS_ACTIVE                                                   */
  MEC_QSPI_STATUS_ACTIVE_ON           = 1,     /*!< ON : Active                                                               */
} MEC_QSPI_STATUS_ACTIVE_Enum;

/* ============================================  MEC_QSPI STATUS CDBI [24..27]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_STATUS_CDBI                                                     */
  MEC_QSPI_STATUS_CDBI_DESCR0         = 0,     /*!< DESCR0 : Start with DESCR0                                                */
  MEC_QSPI_STATUS_CDBI_DESCR1         = 1,     /*!< DESCR1 : Start with DESCR1                                                */
  MEC_QSPI_STATUS_CDBI_DESCR2         = 2,     /*!< DESCR2 : Start with DESCR2                                                */
  MEC_QSPI_STATUS_CDBI_DESCR3         = 3,     /*!< DESCR3 : Start with DESCR3                                                */
  MEC_QSPI_STATUS_CDBI_DESCR4         = 4,     /*!< DESCR4 : Start with DESCR4                                                */
  MEC_QSPI_STATUS_CDBI_DESCR5         = 5,     /*!< DESCR5 : Start with DESCR5                                                */
  MEC_QSPI_STATUS_CDBI_DESCR6         = 6,     /*!< DESCR6 : Start with DESCR6                                                */
  MEC_QSPI_STATUS_CDBI_DESCR7         = 7,     /*!< DESCR7 : Start with DESCR7                                                */
  MEC_QSPI_STATUS_CDBI_DESCR8         = 8,     /*!< DESCR8 : Start with DESCR8                                                */
  MEC_QSPI_STATUS_CDBI_DESCR9         = 9,     /*!< DESCR9 : Start with DESCR9                                                */
  MEC_QSPI_STATUS_CDBI_DESCR10        = 10,    /*!< DESCR10 : Start with DESCR10                                              */
  MEC_QSPI_STATUS_CDBI_DESCR11        = 11,    /*!< DESCR11 : Start with DESCR11                                              */
  MEC_QSPI_STATUS_CDBI_DESCR12        = 12,    /*!< DESCR12 : Start with DESCR12                                              */
  MEC_QSPI_STATUS_CDBI_DESCR13        = 13,    /*!< DESCR13 : Start with DESCR13                                              */
  MEC_QSPI_STATUS_CDBI_DESCR14        = 14,    /*!< DESCR14 : Start with DESCR14                                              */
  MEC_QSPI_STATUS_CDBI_DESCR15        = 15,    /*!< DESCR15 : Start with DESCR15                                              */
} MEC_QSPI_STATUS_CDBI_Enum;

/* =======================================================  BCNT_STS  ======================================================== */
/* =======================================================  INTR_CTRL  ======================================================= */
/* ============================================  MEC_QSPI INTR_CTRL DONE [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_DONE                                                  */
  MEC_QSPI_INTR_CTRL_DONE_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_DONE_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL DMA_DONE [1..1]  ========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_DMA_DONE                                              */
  MEC_QSPI_INTR_CTRL_DMA_DONE_EN      = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_DMA_DONE_Enum;

/* ===========================================  MEC_QSPI INTR_CTRL TXBERR [2..2]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_TXBERR                                                */
  MEC_QSPI_INTR_CTRL_TXBERR_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_TXBERR_Enum;

/* ===========================================  MEC_QSPI INTR_CTRL RXBERR [3..3]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_RXBERR                                                */
  MEC_QSPI_INTR_CTRL_RXBERR_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_RXBERR_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL PROGERR [4..4]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_PROGERR                                               */
  MEC_QSPI_INTR_CTRL_PROGERR_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_PROGERR_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL LDRXERR [5..5]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_LDRXERR                                               */
  MEC_QSPI_INTR_CTRL_LDRXERR_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_LDRXERR_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL LDTXERR [6..6]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_LDTXERR                                               */
  MEC_QSPI_INTR_CTRL_LDTXERR_EN       = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_LDTXERR_Enum;

/* ============================================  MEC_QSPI INTR_CTRL TXBF [8..8]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_TXBF                                                  */
  MEC_QSPI_INTR_CTRL_TXBF_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_TXBF_Enum;

/* ============================================  MEC_QSPI INTR_CTRL TXBE [9..9]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_TXBE                                                  */
  MEC_QSPI_INTR_CTRL_TXBE_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_TXBE_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL TXBREQ [10..10]  ========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_TXBREQ                                                */
  MEC_QSPI_INTR_CTRL_TXBREQ_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_TXBREQ_Enum;

/* =========================================  MEC_QSPI INTR_CTRL TXBSTALL [11..11]  ========================================= */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_TXBSTALL                                              */
  MEC_QSPI_INTR_CTRL_TXBSTALL_EN      = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_TXBSTALL_Enum;

/* ===========================================  MEC_QSPI INTR_CTRL RXBF [12..12]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_RXBF                                                  */
  MEC_QSPI_INTR_CTRL_RXBF_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_RXBF_Enum;

/* ===========================================  MEC_QSPI INTR_CTRL RXBE [13..13]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_RXBE                                                  */
  MEC_QSPI_INTR_CTRL_RXBE_EN          = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_RXBE_Enum;

/* ==========================================  MEC_QSPI INTR_CTRL RXBREQ [14..14]  ========================================== */
typedef enum {                                  /*!< MEC_QSPI_INTR_CTRL_RXBREQ                                                */
  MEC_QSPI_INTR_CTRL_RXBREQ_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_INTR_CTRL_RXBREQ_Enum;

/* =======================================================  BCNT_TRIG  ======================================================= */
/* ========================================================  TX_FIFO  ======================================================== */
/* ========================================================  RX_FIFO  ======================================================== */
/* =========================================================  CSTM  ========================================================== */
/* ===========================================  MEC_QSPI CSTM CSA_CLKSTA [0..3]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_CSTM_CSA_CLKSTA                                                 */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS0      = 0,     /*!< CLKS0 : 0 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS1      = 1,     /*!< CLKS1 : 1 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS2      = 2,     /*!< CLKS2 : 2 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS3      = 3,     /*!< CLKS3 : 3 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS4      = 4,     /*!< CLKS4 : 4 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS5      = 5,     /*!< CLKS5 : 5 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS6      = 6,     /*!< CLKS6 : 6 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS7      = 7,     /*!< CLKS7 : 7 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS8      = 8,     /*!< CLKS8 : 8 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS9      = 9,     /*!< CLKS9 : 9 clocks                                                          */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS10     = 10,    /*!< CLKS10 : 10 clocks                                                        */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS11     = 11,    /*!< CLKS11 : 11 clocks                                                        */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS12     = 12,    /*!< CLKS12 : 12 clocks                                                        */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS13     = 13,    /*!< CLKS13 : 13 clocks                                                        */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS14     = 14,    /*!< CLKS14 : 14 clocks                                                        */
  MEC_QSPI_CSTM_CSA_CLKSTA_CLKS15     = 15,    /*!< CLKS15 : 15 clocks                                                        */
} MEC_QSPI_CSTM_CSA_CLKSTA_Enum;

/* ===========================================  MEC_QSPI CSTM CLKSTO_CSD [8..11]  =========================================== */
typedef enum {                                  /*!< MEC_QSPI_CSTM_CLKSTO_CSD                                                 */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS0      = 0,     /*!< CLKS0 : 0 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS1      = 1,     /*!< CLKS1 : 1 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS2      = 2,     /*!< CLKS2 : 2 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS3      = 3,     /*!< CLKS3 : 3 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS4      = 4,     /*!< CLKS4 : 4 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS5      = 5,     /*!< CLKS5 : 5 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS6      = 6,     /*!< CLKS6 : 6 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS7      = 7,     /*!< CLKS7 : 7 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS8      = 8,     /*!< CLKS8 : 8 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS9      = 9,     /*!< CLKS9 : 9 clocks                                                          */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS10     = 10,    /*!< CLKS10 : 10 clocks                                                        */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS11     = 11,    /*!< CLKS11 : 11 clocks                                                        */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS12     = 12,    /*!< CLKS12 : 12 clocks                                                        */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS13     = 13,    /*!< CLKS13 : 13 clocks                                                        */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS14     = 14,    /*!< CLKS14 : 14 clocks                                                        */
  MEC_QSPI_CSTM_CLKSTO_CSD_CLKS15     = 15,    /*!< CLKS15 : 15 clocks                                                        */
} MEC_QSPI_CSTM_CLKSTO_CSD_Enum;

/* =============================================  MEC_QSPI CSTM DLDH [16..19]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_CSTM_DLDH                                                       */
  MEC_QSPI_CSTM_DLDH_CLKS0            = 0,     /*!< CLKS0 : 0 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS1            = 1,     /*!< CLKS1 : 1 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS2            = 2,     /*!< CLKS2 : 2 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS3            = 3,     /*!< CLKS3 : 3 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS4            = 4,     /*!< CLKS4 : 4 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS5            = 5,     /*!< CLKS5 : 5 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS6            = 6,     /*!< CLKS6 : 6 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS7            = 7,     /*!< CLKS7 : 7 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS8            = 8,     /*!< CLKS8 : 8 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS9            = 9,     /*!< CLKS9 : 9 clocks                                                          */
  MEC_QSPI_CSTM_DLDH_CLKS10           = 10,    /*!< CLKS10 : 10 clocks                                                        */
  MEC_QSPI_CSTM_DLDH_CLKS11           = 11,    /*!< CLKS11 : 11 clocks                                                        */
  MEC_QSPI_CSTM_DLDH_CLKS12           = 12,    /*!< CLKS12 : 12 clocks                                                        */
  MEC_QSPI_CSTM_DLDH_CLKS13           = 13,    /*!< CLKS13 : 13 clocks                                                        */
  MEC_QSPI_CSTM_DLDH_CLKS14           = 14,    /*!< CLKS14 : 14 clocks                                                        */
  MEC_QSPI_CSTM_DLDH_CLKS15           = 15,    /*!< CLKS15 : 15 clocks                                                        */
} MEC_QSPI_CSTM_DLDH_Enum;

/* ============================================  MEC_QSPI CSTM CSD_CSA [24..31]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_CSTM_CSD_CSA                                                    */
  MEC_QSPI_CSTM_CSD_CSA_CLKS0         = 0,     /*!< CLKS0 : 0 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS1         = 1,     /*!< CLKS1 : 1 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS2         = 2,     /*!< CLKS2 : 2 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS3         = 3,     /*!< CLKS3 : 3 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS4         = 4,     /*!< CLKS4 : 4 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS5         = 5,     /*!< CLKS5 : 5 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS6         = 6,     /*!< CLKS6 : 6 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS7         = 7,     /*!< CLKS7 : 7 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS8         = 8,     /*!< CLKS8 : 8 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS9         = 9,     /*!< CLKS9 : 9 clocks                                                          */
  MEC_QSPI_CSTM_CSD_CSA_CLKS10        = 10,    /*!< CLKS10 : 10 clocks                                                        */
  MEC_QSPI_CSTM_CSD_CSA_CLKS11        = 11,    /*!< CLKS11 : 11 clocks                                                        */
  MEC_QSPI_CSTM_CSD_CSA_CLKS12        = 12,    /*!< CLKS12 : 12 clocks                                                        */
  MEC_QSPI_CSTM_CSD_CSA_CLKS13        = 13,    /*!< CLKS13 : 13 clocks                                                        */
  MEC_QSPI_CSTM_CSD_CSA_CLKS14        = 14,    /*!< CLKS14 : 14 clocks                                                        */
  MEC_QSPI_CSTM_CSD_CSA_CLKS15        = 15,    /*!< CLKS15 : 15 clocks                                                        */
} MEC_QSPI_CSTM_CSD_CSA_Enum;

/* =========================================================  DESCR  ========================================================= */
/* ==============================================  MEC_QSPI DESCR IFM [0..1]  =============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_IFM                                                       */
  MEC_QSPI_DESCR_IFM_FD               = 0,     /*!< FD : Full duplex: transmit on IO0, received on IO1                        */
  MEC_QSPI_DESCR_IFM_DUAL             = 1,     /*!< DUAL : Dual: transmit and receive on IO[0:1]                              */
  MEC_QSPI_DESCR_IFM_QUAD             = 2,     /*!< QUAD : Quad: transmit and receive on IO[0:3]                              */
} MEC_QSPI_DESCR_IFM_Enum;

/* ==============================================  MEC_QSPI DESCR TXEN [2..3]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_TXEN                                                      */
  MEC_QSPI_DESCR_TXEN_DIS             = 0,     /*!< DIS : Transmit disabled                                                   */
  MEC_QSPI_DESCR_TXEN_EN              = 1,     /*!< EN : Transmit data enabled                                                */
  MEC_QSPI_DESCR_TXEN_ENZ             = 2,     /*!< ENZ : Transmit zeros                                                      */
  MEC_QSPI_DESCR_TXEN_EN1             = 3,     /*!< EN1 : Transmit ones                                                       */
} MEC_QSPI_DESCR_TXEN_Enum;

/* =============================================  MEC_QSPI DESCR TXDMA [4..5]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_TXDMA                                                     */
  MEC_QSPI_DESCR_TXDMA_DIS            = 0,     /*!< DIS : TX DMA disabled                                                     */
  MEC_QSPI_DESCR_TXDMA_1B_LDMA_CH0    = 1,     /*!< 1B_LDMA_CH0 : Legacy units=1B/Local DMA Chan 0                            */
  MEC_QSPI_DESCR_TXDMA_2B_LDMA_CH1    = 2,     /*!< 2B_LDMA_CH1 : Legacy units=2B/Local DMA Chan 1                            */
  MEC_QSPI_DESCR_TXDMA_4B_LDMA_CH2    = 3,     /*!< 4B_LDMA_CH2 : Legacy units=4B/Local DMA Chan 2                            */
} MEC_QSPI_DESCR_TXDMA_Enum;

/* ==============================================  MEC_QSPI DESCR RXEN [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_RXEN                                                      */
  MEC_QSPI_DESCR_RXEN_DIS             = 0,     /*!< DIS : RX disabled                                                         */
  MEC_QSPI_DESCR_RXEN_EN              = 1,     /*!< EN : RX enabled                                                           */
} MEC_QSPI_DESCR_RXEN_Enum;

/* =============================================  MEC_QSPI DESCR RXDMA [7..8]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_RXDMA                                                     */
  MEC_QSPI_DESCR_RXDMA_DIS            = 0,     /*!< DIS : Transmit disabled                                                   */
  MEC_QSPI_DESCR_RXDMA_1B_LDMA_CH0    = 1,     /*!< 1B_LDMA_CH0 : Legacy units=1B/Local DMA Chan 0                            */
  MEC_QSPI_DESCR_RXDMA_2B_LDMA_CH1    = 2,     /*!< 2B_LDMA_CH1 : Legacy units=2B/Local DMA Chan 1                            */
  MEC_QSPI_DESCR_RXDMA_4B_LDMA_CH2    = 3,     /*!< 4B_LDMA_CH2 : Legacy units=4B/Local DMA Chan 2                            */
} MEC_QSPI_DESCR_RXDMA_Enum;

/* =============================================  MEC_QSPI DESCR CLOSE [9..9]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_DESCR_CLOSE                                                     */
  MEC_QSPI_DESCR_CLOSE_DIS            = 0,     /*!< DIS : Do not close when this description done                             */
  MEC_QSPI_DESCR_CLOSE_EN             = 1,     /*!< EN : Close transaction when this description is done                      */
} MEC_QSPI_DESCR_CLOSE_Enum;

/* ============================================  MEC_QSPI DESCR QUNITS [10..11]  ============================================ */
typedef enum {                                  /*!< MEC_QSPI_DESCR_QUNITS                                                    */
  MEC_QSPI_DESCR_QUNITS_BITS          = 0,     /*!< BITS : QSPI transfer counts in bit units                                  */
  MEC_QSPI_DESCR_QUNITS_1B            = 1,     /*!< 1B : QSPI transfer counts in byte units                                   */
  MEC_QSPI_DESCR_QUNITS_4B            = 2,     /*!< 4B : QSPI transfer counts in 4-byte units                                 */
  MEC_QSPI_DESCR_QUNITS_16B           = 3,     /*!< 16B : QSPI transfer counts in 16-byte units                               */
} MEC_QSPI_DESCR_QUNITS_Enum;

/* =============================================  MEC_QSPI DESCR NEXT [12..15]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_DESCR_NEXT                                                      */
  MEC_QSPI_DESCR_NEXT_DESCR0          = 0,     /*!< DESCR0 : Start with DESCR0                                                */
  MEC_QSPI_DESCR_NEXT_DESCR1          = 1,     /*!< DESCR1 : Start with DESCR1                                                */
  MEC_QSPI_DESCR_NEXT_DESCR2          = 2,     /*!< DESCR2 : Start with DESCR2                                                */
  MEC_QSPI_DESCR_NEXT_DESCR3          = 3,     /*!< DESCR3 : Start with DESCR3                                                */
  MEC_QSPI_DESCR_NEXT_DESCR4          = 4,     /*!< DESCR4 : Start with DESCR4                                                */
  MEC_QSPI_DESCR_NEXT_DESCR5          = 5,     /*!< DESCR5 : Start with DESCR5                                                */
  MEC_QSPI_DESCR_NEXT_DESCR6          = 6,     /*!< DESCR6 : Start with DESCR6                                                */
  MEC_QSPI_DESCR_NEXT_DESCR7          = 7,     /*!< DESCR7 : Start with DESCR7                                                */
  MEC_QSPI_DESCR_NEXT_DESCR8          = 8,     /*!< DESCR8 : Start with DESCR8                                                */
  MEC_QSPI_DESCR_NEXT_DESCR9          = 9,     /*!< DESCR9 : Start with DESCR9                                                */
  MEC_QSPI_DESCR_NEXT_DESCR10         = 10,    /*!< DESCR10 : Start with DESCR10                                              */
  MEC_QSPI_DESCR_NEXT_DESCR11         = 11,    /*!< DESCR11 : Start with DESCR11                                              */
  MEC_QSPI_DESCR_NEXT_DESCR12         = 12,    /*!< DESCR12 : Start with DESCR12                                              */
  MEC_QSPI_DESCR_NEXT_DESCR13         = 13,    /*!< DESCR13 : Start with DESCR13                                              */
  MEC_QSPI_DESCR_NEXT_DESCR14         = 14,    /*!< DESCR14 : Start with DESCR14                                              */
  MEC_QSPI_DESCR_NEXT_DESCR15         = 15,    /*!< DESCR15 : Start with DESCR15                                              */
} MEC_QSPI_DESCR_NEXT_Enum;

/* =============================================  MEC_QSPI DESCR LAST [16..16]  ============================================= */
typedef enum {                                  /*!< MEC_QSPI_DESCR_LAST                                                      */
  MEC_QSPI_DESCR_LAST_LAST_DIS        = 0,     /*!< LAST_DIS : Descriptor N is not last descriptor                            */
  MEC_QSPI_DESCR_LAST_LAST_EN         = 1,     /*!< LAST_EN : Descriptor N is last descriptor                                 */
} MEC_QSPI_DESCR_LAST_Enum;

/* ======================================================  ALIAS_CTRL  ======================================================= */
/* =======================================================  ALT1_MODE  ======================================================= */
/* =========================================  MEC_QSPI ALT1_MODE CS1_ALTEN [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_QSPI_ALT1_MODE_CS1_ALTEN                                             */
  MEC_QSPI_ALT1_MODE_CS1_ALTEN_EN     = 1,     /*!< EN : Enable                                                               */
} MEC_QSPI_ALT1_MODE_CS1_ALTEN_Enum;

/* =========================================================  TAPSS  ========================================================= */
/* =========================================================  TAPSA  ========================================================= */
/* =========================================================  TAPSC  ========================================================= */
/* ==============================================  MEC_QSPI TAPSC AUTO [0..1]  ============================================== */
typedef enum {                                  /*!< MEC_QSPI_TAPSC_AUTO                                                      */
  MEC_QSPI_TAPSC_AUTO_OFF             = 0,     /*!< OFF : Auto taps adjustment disabled                                       */
  MEC_QSPI_TAPSC_AUTO_ON_ALWAYS       = 1,     /*!< ON_ALWAYS : Auto taps adjustment always running                           */
  MEC_QSPI_TAPSC_AUTO_ON_TRIG         = 2,     /*!< ON_TRIG : Auto taps adjustment periodically triggered                     */
} MEC_QSPI_TAPSC_AUTO_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_QSPI_V2_H */
