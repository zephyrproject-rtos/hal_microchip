/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ESPI_IO_V1_5_H
#define _MEC5_ESPI_IO_V1_5_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief eSPI IO component (MEC_ESPI_IO)
  */

typedef struct mec_espi_io_regs {               /*!< (@ 0x400F3400) MEC_ESPI_IO Structure                                      */
  __IOM uint8_t   RTIDX;                        /*!< (@ 0x00000000) eSPI IO Runtime Host Index register                        */
  __IOM uint8_t   RTDAT;                        /*!< (@ 0x00000001) eSPI IO Runtime Host Data register                         */
  __IM  uint16_t  RESERVED;
  __IM  uint32_t  RESERVED1[63];
  __IM  uint32_t  PCLC[3];                      /*!< (@ 0x00000100) eSPI IO PC Last cycle 96-bit register                      */
  __IM  uint32_t  PCERR[2];                     /*!< (@ 0x0000010C) eSPI IO PC Error address 64-bit register                   */
  __IOM uint32_t  PCSTS;                        /*!< (@ 0x00000114) eSPI IO PC Status register                                 */
  __IOM uint32_t  PCIEN;                        /*!< (@ 0x00000118) eSPI IO PC interrupt enable register                       */
  __IM  uint32_t  RESERVED2;
  __IOM uint32_t  PCBINH[2];                    /*!< (@ 0x00000120) eSPI IO PC BAR inhibit registers. Bits are organized
                                                                    by logical device number                                   */
  __IOM uint32_t  PCBINIT;                      /*!< (@ 0x00000128) eSPI IO PC BAR init register                               */
  __IOM uint32_t  PCECIRQ;                      /*!< (@ 0x0000012C) eSPI IO PC EC IRQ register                                 */
  __IOM uint32_t  PCCKNP;                       /*!< (@ 0x00000130) eSPI IO PC Clock NP register                               */
  __IM  uint32_t  EC_LDN_MSK[25];               /*!< (@ 0x00000134) I/O BAR logical device number and range mask.
                                                                    EC-only access                                             */
  __IM  uint32_t  RESERVED3[34];
  __IOM uint32_t  PCLTRSTS;                     /*!< (@ 0x00000220) eSPI IO PC LTR Status register                             */
  __IOM uint32_t  PCLTREN;                      /*!< (@ 0x00000224) eSPI IO PC LTR Enable register                             */
  __IOM uint32_t  PCLTRCTL;                     /*!< (@ 0x00000228) eSPI IO PC LTR control register                            */
  __IOM uint32_t  PCLTRM;                       /*!< (@ 0x0000022C) eSPI IO PC LTR message register. LTR message
                                                                    is 16-bits defined in b[15:0]                              */
  __IM  uint32_t  RESERVED4[4];
  __IOM uint32_t  OOBRXA;                       /*!< (@ 0x00000240) eSPI IO OOB RX EC SRAM buffer address register:
                                                                    bits[1:0]=00b(read-only)                                   */
  __IM  uint32_t  RESERVED5;
  __IOM uint32_t  OOBTXA;                       /*!< (@ 0x00000248) eSPI IO OOB TX EC SRAM buffer address register:
                                                                    bits[1:0]=00b(read-only)                                   */
  __IM  uint32_t  RESERVED6;
  __IOM uint32_t  OOBRXL;                       /*!< (@ 0x00000250) eSPI IO OOB RX length register                             */
  __IOM uint32_t  OOBTXL;                       /*!< (@ 0x00000254) eSPI IO OOB TX length register                             */
  __IOM uint32_t  OOBRXC;                       /*!< (@ 0x00000258) eSPI IO OOB RX Control register                            */
  __IOM uint32_t  OOBRXIEN;                     /*!< (@ 0x0000025C) eSPI IO OOB RX IEN register                                */
  __IOM uint32_t  OOBRXSTS;                     /*!< (@ 0x00000260) eSPI IO OOB RX Status register                             */
  __IOM uint32_t  OOBTXC;                       /*!< (@ 0x00000264) eSPI IO OOB TX Control register                            */
  __IOM uint32_t  OOBTXIEN;                     /*!< (@ 0x00000268) eSPI IO OOB TX IEN register                                */
  __IOM uint32_t  OOBTXSTS;                     /*!< (@ 0x0000026C) eSPI IO OOB TX Status register                             */
  __IM  uint32_t  RESERVED7[4];
  __IOM uint32_t  FCFA;                         /*!< (@ 0x00000280) eSPI IO FC flash address register                          */
  __IM  uint32_t  RESERVED8;
  __IOM uint32_t  FCBA;                         /*!< (@ 0x00000288) eSPI IO FC EC SRAM memory buffer address register          */
  __IM  uint32_t  RESERVED9;
  __IOM uint32_t  FCLEN;                        /*!< (@ 0x00000290) eSPI IO FC transfer length register                        */
  __IOM uint32_t  FCCTL;                        /*!< (@ 0x00000294) eSPI IO FC control register                                */
  __IOM uint32_t  FCIEN;                        /*!< (@ 0x00000298) eSPI IO FC interrupt enable register                       */
  __IOM uint32_t  FCCFG;                        /*!< (@ 0x0000029C) eSPI IO FC configuration register                          */
  __IOM uint32_t  FCSTS;                        /*!< (@ 0x000002A0) eSPI IO FC status register                                 */
  __IM  uint32_t  RESERVED10[3];
  __IM  uint32_t  VWSTS;                        /*!< (@ 0x000002B0) eSPI IO VWire status register                              */
  __IM  uint32_t  RESERVED11[11];
  __IOM uint8_t   CAPID;                        /*!< (@ 0x000002E0) eSPI IO Capability ID register                             */
  __IOM uint8_t   CAP0;                         /*!< (@ 0x000002E1) eSPI IO Capability 0 register                              */
  __IOM uint8_t   CAP1;                         /*!< (@ 0x000002E2) eSPI IO capabilities 1 register                            */
  __IOM uint8_t   CAPPC;                        /*!< (@ 0x000002E3) eSPI IO PC Capability register                             */
  __IOM uint8_t   CAPVW;                        /*!< (@ 0x000002E4) eSPI IO VW Capability register                             */
  __IOM uint8_t   CAPOOB;                       /*!< (@ 0x000002E5) eSPI IO OOB Capability register                            */
  __IOM uint8_t   CAPFC;                        /*!< (@ 0x000002E6) eSPI IO FC Capability register                             */
  __IOM uint8_t   PCRDY;                        /*!< (@ 0x000002E7) eSPI IO PC Ready register                                  */
  __IOM uint8_t   OOBRDY;                       /*!< (@ 0x000002E8) eSPI IO OOB Ready register                                 */
  __IOM uint8_t   FCRDY;                        /*!< (@ 0x000002E9) eSPI IO OOB Ready register                                 */
  __IOM uint8_t   ERIS;                         /*!< (@ 0x000002EA) eSPI IO ESPI_RESET interrupt status register               */
  __IOM uint8_t   ERIE;                         /*!< (@ 0x000002EB) eSPI IO ESPI_RESET interrupt enable register               */
  __IOM uint8_t   PLTRST_SRC;                   /*!< (@ 0x000002EC) eSPI IO Platform Reset source register                     */
  __IOM uint8_t   VWRDY;                        /*!< (@ 0x000002ED) eSPI IO VWire Ready register                               */
  __IOM uint8_t   TAFEBS;                       /*!< (@ 0x000002EE) eSPI IO TAF Erase Block size configuration                 */
  __IM  uint8_t   RESERVED12;
  __IM  uint32_t  RESERVED13[4];
  __IOM uint32_t  RPMC_OP1_CFG;                 /*!< (@ 0x00000300) Specify how RPMC flash devices attached to eSPI
                                                                    TAF are reported to eSPI Host                              */
  __IOM uint32_t  RPMC_OP1_NCNTRS;              /*!< (@ 0x00000304) Number of RPMC counters in each attached flash
                                                                    device                                                     */
  __IM  uint32_t  RESERVED14[10];
  __IOM uint32_t  ACTV;                         /*!< (@ 0x00000330) eSPI IO Activate register                                  */
  __IOM uint32_t  HOST_BAR[25];                 /*!< (@ 0x00000334) I/O BAR Host base I/O address and valid bit.
                                                                    Host and EC access                                         */
  __IM  uint32_t  RESERVED15[5];
  __IOM uint8_t   SERIRQ[22];                   /*!< (@ 0x000003AC) Logical device Serial IRQ slot values. Default
                                                                    value is 255(disabled)                                     */
  __IM  uint16_t  RESERVED16;
  __IM  uint32_t  RESERVED17[11];
  __IOM uint32_t  VWERR;                        /*!< (@ 0x000003F0) eSPI IO Virtual wire error register                        */
} MEC_ESPI_IO_Type;                             /*!< Size = 1012 (0x3f4)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  PCSTS  ========================================================= */
#define MEC_ESPI_IO_PCSTS_EC_BUS_ERR_Pos  (16UL)                    /*!< EC_BUS_ERR (Bit 16)                                   */
#define MEC_ESPI_IO_PCSTS_EC_BUS_ERR_Msk  (0x10000UL)               /*!< EC_BUS_ERR (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_PCSTS_PCEN_VAL_Pos    (24UL)                    /*!< PCEN_VAL (Bit 24)                                     */
#define MEC_ESPI_IO_PCSTS_PCEN_VAL_Msk    (0x1000000UL)             /*!< PCEN_VAL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_PCSTS_PCEN_CHG_Pos    (25UL)                    /*!< PCEN_CHG (Bit 25)                                     */
#define MEC_ESPI_IO_PCSTS_PCEN_CHG_Msk    (0x2000000UL)             /*!< PCEN_CHG (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_PCSTS_PCBM_VAL_Pos    (27UL)                    /*!< PCBM_VAL (Bit 27)                                     */
#define MEC_ESPI_IO_PCSTS_PCBM_VAL_Msk    (0x8000000UL)             /*!< PCBM_VAL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_PCSTS_PCBMEN_CHG_Pos  (28UL)                    /*!< PCBMEN_CHG (Bit 28)                                   */
#define MEC_ESPI_IO_PCSTS_PCBMEN_CHG_Msk  (0x10000000UL)            /*!< PCBMEN_CHG (Bitfield-Mask: 0x01)                      */
/* =========================================================  PCIEN  ========================================================= */
#define MEC_ESPI_IO_PCIEN_EC_BUS_ERR_Pos  (16UL)                    /*!< EC_BUS_ERR (Bit 16)                                   */
#define MEC_ESPI_IO_PCIEN_EC_BUS_ERR_Msk  (0x10000UL)               /*!< EC_BUS_ERR (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_PCIEN_PCEN_CHG_Pos    (25UL)                    /*!< PCEN_CHG (Bit 25)                                     */
#define MEC_ESPI_IO_PCIEN_PCEN_CHG_Msk    (0x2000000UL)             /*!< PCEN_CHG (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_PCIEN_PCBMEN_CHG_Pos  (28UL)                    /*!< PCBMEN_CHG (Bit 28)                                   */
#define MEC_ESPI_IO_PCIEN_PCBMEN_CHG_Msk  (0x10000000UL)            /*!< PCBMEN_CHG (Bitfield-Mask: 0x01)                      */
/* ========================================================  PCBINH  ========================================================= */
/* ========================================================  PCBINIT  ======================================================== */
#define MEC_ESPI_IO_PCBINIT_BAR_INIT_Pos  (0UL)                     /*!< BAR_INIT (Bit 0)                                      */
#define MEC_ESPI_IO_PCBINIT_BAR_INIT_Msk  (0xffffUL)                /*!< BAR_INIT (Bitfield-Mask: 0xffff)                      */
/* ========================================================  PCECIRQ  ======================================================== */
#define MEC_ESPI_IO_PCECIRQ_GEN_EC_IRQ_Pos (0UL)                    /*!< GEN_EC_IRQ (Bit 0)                                    */
#define MEC_ESPI_IO_PCECIRQ_GEN_EC_IRQ_Msk (0x1UL)                  /*!< GEN_EC_IRQ (Bitfield-Mask: 0x01)                      */
/* ========================================================  PCCKNP  ========================================================= */
#define MEC_ESPI_IO_PCCKNP_FORCE_CLK_ON_Pos (0UL)                   /*!< FORCE_CLK_ON (Bit 0)                                  */
#define MEC_ESPI_IO_PCCKNP_FORCE_CLK_ON_Msk (0x1UL)                 /*!< FORCE_CLK_ON (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_IO_PCCKNP_MULT_NP_Pos    (1UL)                     /*!< MULT_NP (Bit 1)                                       */
#define MEC_ESPI_IO_PCCKNP_MULT_NP_Msk    (0x2UL)                   /*!< MULT_NP (Bitfield-Mask: 0x01)                         */
/* ======================================================  EC_LDN_MSK  ======================================================= */
#define MEC_ESPI_IO_EC_LDN_MSK_MSK_Pos    (0UL)                     /*!< MSK (Bit 0)                                           */
#define MEC_ESPI_IO_EC_LDN_MSK_MSK_Msk    (0xffUL)                  /*!< MSK (Bitfield-Mask: 0xff)                             */
#define MEC_ESPI_IO_EC_LDN_MSK_LDN_Pos    (8UL)                     /*!< LDN (Bit 8)                                           */
#define MEC_ESPI_IO_EC_LDN_MSK_LDN_Msk    (0x3f00UL)                /*!< LDN (Bitfield-Mask: 0x3f)                             */
/* =======================================================  PCLTRSTS  ======================================================== */
#define MEC_ESPI_IO_PCLTRSTS_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_PCLTRSTS_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_PCLTRSTS_START_OVRUN_Pos (3UL)                  /*!< START_OVRUN (Bit 3)                                   */
#define MEC_ESPI_IO_PCLTRSTS_START_OVRUN_Msk (0x8UL)                /*!< START_OVRUN (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_IO_PCLTRSTS_DIS_HOST_Pos (4UL)                     /*!< DIS_HOST (Bit 4)                                      */
#define MEC_ESPI_IO_PCLTRSTS_DIS_HOST_Msk (0x10UL)                  /*!< DIS_HOST (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_PCLTRSTS_BUSY_Pos     (8UL)                     /*!< BUSY (Bit 8)                                          */
#define MEC_ESPI_IO_PCLTRSTS_BUSY_Msk     (0x100UL)                 /*!< BUSY (Bitfield-Mask: 0x01)                            */
/* ========================================================  PCLTREN  ======================================================== */
#define MEC_ESPI_IO_PCLTREN_DONE_Pos      (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_PCLTREN_DONE_Msk      (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
/* =======================================================  PCLTRCTL  ======================================================== */
#define MEC_ESPI_IO_PCLTRCTL_START_Pos    (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_IO_PCLTRCTL_START_Msk    (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_Pos (8UL)                   /*!< LTR_TX_TAG (Bit 8)                                    */
#define MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_Msk (0xf00UL)               /*!< LTR_TX_TAG (Bitfield-Mask: 0x0f)                      */
/* ========================================================  PCLTRM  ========================================================= */
#define MEC_ESPI_IO_PCLTRM_VALUE_Pos      (0UL)                     /*!< VALUE (Bit 0)                                         */
#define MEC_ESPI_IO_PCLTRM_VALUE_Msk      (0x3ffUL)                 /*!< VALUE (Bitfield-Mask: 0x3ff)                          */
#define MEC_ESPI_IO_PCLTRM_SCALE_Pos      (10UL)                    /*!< SCALE (Bit 10)                                        */
#define MEC_ESPI_IO_PCLTRM_SCALE_Msk      (0x1c00UL)                /*!< SCALE (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_IO_PCLTRM_TX_RSVD_BITS_Pos (13UL)                  /*!< TX_RSVD_BITS (Bit 13)                                 */
#define MEC_ESPI_IO_PCLTRM_TX_RSVD_BITS_Msk (0x6000UL)              /*!< TX_RSVD_BITS (Bitfield-Mask: 0x03)                    */
#define MEC_ESPI_IO_PCLTRM_SEL_MAX_LAT_Pos (15UL)                   /*!< SEL_MAX_LAT (Bit 15)                                  */
#define MEC_ESPI_IO_PCLTRM_SEL_MAX_LAT_Msk (0x8000UL)               /*!< SEL_MAX_LAT (Bitfield-Mask: 0x01)                     */
/* ========================================================  OOBRXA  ========================================================= */
/* ========================================================  OOBTXA  ========================================================= */
/* ========================================================  OOBRXL  ========================================================= */
#define MEC_ESPI_IO_OOBRXL_RECV_MSG_LEN_Pos (0UL)                   /*!< RECV_MSG_LEN (Bit 0)                                  */
#define MEC_ESPI_IO_OOBRXL_RECV_MSG_LEN_Msk (0x1fffUL)              /*!< RECV_MSG_LEN (Bitfield-Mask: 0x1fff)                  */
#define MEC_ESPI_IO_OOBRXL_RX_BUF_LEN_Pos (16UL)                    /*!< RX_BUF_LEN (Bit 16)                                   */
#define MEC_ESPI_IO_OOBRXL_RX_BUF_LEN_Msk (0x1fff0000UL)            /*!< RX_BUF_LEN (Bitfield-Mask: 0x1fff)                    */
/* ========================================================  OOBTXL  ========================================================= */
#define MEC_ESPI_IO_OOBTXL_TX_MSG_LEN_Pos (0UL)                     /*!< TX_MSG_LEN (Bit 0)                                    */
#define MEC_ESPI_IO_OOBTXL_TX_MSG_LEN_Msk (0x1fffUL)                /*!< TX_MSG_LEN (Bitfield-Mask: 0x1fff)                    */
/* ========================================================  OOBRXC  ========================================================= */
#define MEC_ESPI_IO_OOBRXC_RX_AVAIL_Pos   (0UL)                     /*!< RX_AVAIL (Bit 0)                                      */
#define MEC_ESPI_IO_OOBRXC_RX_AVAIL_Msk   (0x1UL)                   /*!< RX_AVAIL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_OOBRXC_CHEN_Pos       (9UL)                     /*!< CHEN (Bit 9)                                          */
#define MEC_ESPI_IO_OOBRXC_CHEN_Msk       (0x200UL)                 /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_Pos (16UL)                    /*!< MAX_PLD_SZ (Bit 16)                                   */
#define MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_Msk (0x70000UL)               /*!< MAX_PLD_SZ (Bitfield-Mask: 0x07)                      */
/* =======================================================  OOBRXIEN  ======================================================== */
#define MEC_ESPI_IO_OOBRXIEN_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_OOBRXIEN_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
/* =======================================================  OOBRXSTS  ======================================================== */
#define MEC_ESPI_IO_OOBRXSTS_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_OOBRXSTS_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_OOBRXSTS_EC_BUS_ERR_Pos (1UL)                   /*!< EC_BUS_ERR (Bit 1)                                    */
#define MEC_ESPI_IO_OOBRXSTS_EC_BUS_ERR_Msk (0x2UL)                 /*!< EC_BUS_ERR (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_OOBRXSTS_DATA_OVRUN_Pos (2UL)                   /*!< DATA_OVRUN (Bit 2)                                    */
#define MEC_ESPI_IO_OOBRXSTS_DATA_OVRUN_Msk (0x4UL)                 /*!< DATA_OVRUN (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_OOBRXSTS_RX_AVAIL_Pos (3UL)                     /*!< RX_AVAIL (Bit 3)                                      */
#define MEC_ESPI_IO_OOBRXSTS_RX_AVAIL_Msk (0x8UL)                   /*!< RX_AVAIL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_Pos (8UL)                   /*!< OOB_RX_TAG (Bit 8)                                    */
#define MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_Msk (0xf00UL)               /*!< OOB_RX_TAG (Bitfield-Mask: 0x0f)                      */
/* ========================================================  OOBTXC  ========================================================= */
#define MEC_ESPI_IO_OOBTXC_START_Pos      (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_IO_OOBTXC_START_Msk      (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Pos (8UL)                     /*!< OOB_TX_TAG (Bit 8)                                    */
#define MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Msk (0xf00UL)                 /*!< OOB_TX_TAG (Bitfield-Mask: 0x0f)                      */
/* =======================================================  OOBTXIEN  ======================================================== */
#define MEC_ESPI_IO_OOBTXIEN_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_OOBTXIEN_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_OOBTXIEN_CHEN_CHG_Pos (1UL)                     /*!< CHEN_CHG (Bit 1)                                      */
#define MEC_ESPI_IO_OOBTXIEN_CHEN_CHG_Msk (0x2UL)                   /*!< CHEN_CHG (Bitfield-Mask: 0x01)                        */
/* =======================================================  OOBTXSTS  ======================================================== */
#define MEC_ESPI_IO_OOBTXSTS_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_OOBTXSTS_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Pos (1UL)                     /*!< CHEN_CHG (Bit 1)                                      */
#define MEC_ESPI_IO_OOBTXSTS_CHEN_CHG_Msk (0x2UL)                   /*!< CHEN_CHG (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_OOBTXSTS_EC_BUS_ERR_Pos (2UL)                   /*!< EC_BUS_ERR (Bit 2)                                    */
#define MEC_ESPI_IO_OOBTXSTS_EC_BUS_ERR_Msk (0x4UL)                 /*!< EC_BUS_ERR (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_OOBTXSTS_START_OVRUN_Pos (3UL)                  /*!< START_OVRUN (Bit 3)                                   */
#define MEC_ESPI_IO_OOBTXSTS_START_OVRUN_Msk (0x8UL)                /*!< START_OVRUN (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_IO_OOBTXSTS_BAD_REQ_Pos  (5UL)                     /*!< BAD_REQ (Bit 5)                                       */
#define MEC_ESPI_IO_OOBTXSTS_BAD_REQ_Msk  (0x20UL)                  /*!< BAD_REQ (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_OOBTXSTS_BUSY_Pos     (8UL)                     /*!< BUSY (Bit 8)                                          */
#define MEC_ESPI_IO_OOBTXSTS_BUSY_Msk     (0x100UL)                 /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_OOBTXSTS_CHEN_STATE_Pos (9UL)                   /*!< CHEN_STATE (Bit 9)                                    */
#define MEC_ESPI_IO_OOBTXSTS_CHEN_STATE_Msk (0x200UL)               /*!< CHEN_STATE (Bitfield-Mask: 0x01)                      */
/* =========================================================  FCFA  ========================================================== */
/* =========================================================  FCBA  ========================================================== */
/* =========================================================  FCLEN  ========================================================= */
/* =========================================================  FCCTL  ========================================================= */
#define MEC_ESPI_IO_FCCTL_START_Pos       (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_IO_FCCTL_START_Msk       (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_IO_FCCTL_OP_Pos          (2UL)                     /*!< OP (Bit 2)                                            */
#define MEC_ESPI_IO_FCCTL_OP_Msk          (0xcUL)                   /*!< OP (Bitfield-Mask: 0x03)                              */
#define MEC_ESPI_IO_FCCTL_TAG_Pos         (4UL)                     /*!< TAG (Bit 4)                                           */
#define MEC_ESPI_IO_FCCTL_TAG_Msk         (0xf0UL)                  /*!< TAG (Bitfield-Mask: 0x0f)                             */
#define MEC_ESPI_IO_FCCTL_ABORT_Pos       (16UL)                    /*!< ABORT (Bit 16)                                        */
#define MEC_ESPI_IO_FCCTL_ABORT_Msk       (0x10000UL)               /*!< ABORT (Bitfield-Mask: 0x01)                           */
/* =========================================================  FCIEN  ========================================================= */
#define MEC_ESPI_IO_FCIEN_DONE_Pos        (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_IO_FCIEN_DONE_Msk        (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_FCIEN_CHEN_CHG_Pos    (1UL)                     /*!< CHEN_CHG (Bit 1)                                      */
#define MEC_ESPI_IO_FCIEN_CHEN_CHG_Msk    (0x2UL)                   /*!< CHEN_CHG (Bitfield-Mask: 0x01)                        */
/* =========================================================  FCCFG  ========================================================= */
#define MEC_ESPI_IO_FCCFG_BUSY_Pos        (0UL)                     /*!< BUSY (Bit 0)                                          */
#define MEC_ESPI_IO_FCCFG_BUSY_Msk        (0x1UL)                   /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_FCCFG_EBSZ_Pos        (2UL)                     /*!< EBSZ (Bit 2)                                          */
#define MEC_ESPI_IO_FCCFG_EBSZ_Msk        (0x1cUL)                  /*!< EBSZ (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_Pos  (8UL)                     /*!< MAX_PLD_SZ (Bit 8)                                    */
#define MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_Msk  (0x700UL)                 /*!< MAX_PLD_SZ (Bitfield-Mask: 0x07)                      */
#define MEC_ESPI_IO_FCCFG_TAF_MODE_Pos    (11UL)                    /*!< TAF_MODE (Bit 11)                                     */
#define MEC_ESPI_IO_FCCFG_TAF_MODE_Msk    (0x800UL)                 /*!< TAF_MODE (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_Pos (12UL)                  /*!< MAX_RD_REQ_SZ (Bit 12)                                */
#define MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_Msk (0x7000UL)              /*!< MAX_RD_REQ_SZ (Bitfield-Mask: 0x07)                   */
#define MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_Pos (28UL)                  /*!< FORCE_CAF_TAF (Bit 28)                                */
#define MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_Msk (0x30000000UL)          /*!< FORCE_CAF_TAF (Bitfield-Mask: 0x03)                   */
/* =========================================================  FCSTS  ========================================================= */
#define MEC_ESPI_IO_FCSTS_CHEN_VAL_Pos    (0UL)                     /*!< CHEN_VAL (Bit 0)                                      */
#define MEC_ESPI_IO_FCSTS_CHEN_VAL_Msk    (0x1UL)                   /*!< CHEN_VAL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_FCSTS_CHEN_CHG_Pos    (1UL)                     /*!< CHEN_CHG (Bit 1)                                      */
#define MEC_ESPI_IO_FCSTS_CHEN_CHG_Msk    (0x2UL)                   /*!< CHEN_CHG (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_FCSTS_DONE_Pos        (2UL)                     /*!< DONE (Bit 2)                                          */
#define MEC_ESPI_IO_FCSTS_DONE_Msk        (0x4UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_FCSTS_DIS_BY_HOST_Pos (3UL)                     /*!< DIS_BY_HOST (Bit 3)                                   */
#define MEC_ESPI_IO_FCSTS_DIS_BY_HOST_Msk (0x8UL)                   /*!< DIS_BY_HOST (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_IO_FCSTS_EC_BUS_ERR_Pos  (4UL)                     /*!< EC_BUS_ERR (Bit 4)                                    */
#define MEC_ESPI_IO_FCSTS_EC_BUS_ERR_Msk  (0x10UL)                  /*!< EC_BUS_ERR (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_FCSTS_ABORT_FW_Pos    (5UL)                     /*!< ABORT_FW (Bit 5)                                      */
#define MEC_ESPI_IO_FCSTS_ABORT_FW_Msk    (0x20UL)                  /*!< ABORT_FW (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_FCSTS_DATA_OVRUN_Pos  (6UL)                     /*!< DATA_OVRUN (Bit 6)                                    */
#define MEC_ESPI_IO_FCSTS_DATA_OVRUN_Msk  (0x40UL)                  /*!< DATA_OVRUN (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_IO_FCSTS_DATA_INCOMPL_Pos (7UL)                    /*!< DATA_INCOMPL (Bit 7)                                  */
#define MEC_ESPI_IO_FCSTS_DATA_INCOMPL_Msk (0x80UL)                 /*!< DATA_INCOMPL (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_IO_FCSTS_FAIL_Pos        (8UL)                     /*!< FAIL (Bit 8)                                          */
#define MEC_ESPI_IO_FCSTS_FAIL_Msk        (0x100UL)                 /*!< FAIL (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_FCSTS_START_OVRFL_Pos (9UL)                     /*!< START_OVRFL (Bit 9)                                   */
#define MEC_ESPI_IO_FCSTS_START_OVRFL_Msk (0x200UL)                 /*!< START_OVRFL (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_IO_FCSTS_BAD_REQ_Pos     (11UL)                    /*!< BAD_REQ (Bit 11)                                      */
#define MEC_ESPI_IO_FCSTS_BAD_REQ_Msk     (0x800UL)                 /*!< BAD_REQ (Bitfield-Mask: 0x01)                         */
/* =========================================================  VWSTS  ========================================================= */
#define MEC_ESPI_IO_VWSTS_CHEN_Pos        (0UL)                     /*!< CHEN (Bit 0)                                          */
#define MEC_ESPI_IO_VWSTS_CHEN_Msk        (0x1UL)                   /*!< CHEN (Bitfield-Mask: 0x01)                            */
/* =========================================================  CAPID  ========================================================= */
/* =========================================================  CAP0  ========================================================== */
#define MEC_ESPI_IO_CAP0_PC_SUPP_Pos      (0UL)                     /*!< PC_SUPP (Bit 0)                                       */
#define MEC_ESPI_IO_CAP0_PC_SUPP_Msk      (0x1UL)                   /*!< PC_SUPP (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_CAP0_VW_SUPP_Pos      (1UL)                     /*!< VW_SUPP (Bit 1)                                       */
#define MEC_ESPI_IO_CAP0_VW_SUPP_Msk      (0x2UL)                   /*!< VW_SUPP (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_CAP0_OOB_SUPP_Pos     (2UL)                     /*!< OOB_SUPP (Bit 2)                                      */
#define MEC_ESPI_IO_CAP0_OOB_SUPP_Msk     (0x4UL)                   /*!< OOB_SUPP (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_IO_CAP0_FC_SUPP_Pos      (3UL)                     /*!< FC_SUPP (Bit 3)                                       */
#define MEC_ESPI_IO_CAP0_FC_SUPP_Msk      (0x8UL)                   /*!< FC_SUPP (Bitfield-Mask: 0x01)                         */
/* =========================================================  CAP1  ========================================================== */
#define MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_Pos (0UL)                    /*!< MAX_FREQ_SUPP (Bit 0)                                 */
#define MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk (0x7UL)                  /*!< MAX_FREQ_SUPP (Bitfield-Mask: 0x07)                   */
#define MEC_ESPI_IO_CAP1_ALERT_MODE_SUPP_Pos (3UL)                  /*!< ALERT_MODE_SUPP (Bit 3)                               */
#define MEC_ESPI_IO_CAP1_ALERT_MODE_SUPP_Msk (0x8UL)                /*!< ALERT_MODE_SUPP (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_IO_CAP1_IO_MODE_SUPP_Pos (4UL)                     /*!< IO_MODE_SUPP (Bit 4)                                  */
#define MEC_ESPI_IO_CAP1_IO_MODE_SUPP_Msk (0x30UL)                  /*!< IO_MODE_SUPP (Bitfield-Mask: 0x03)                    */
#define MEC_ESPI_IO_CAP1_ALERT_OD_SUPP_Pos (6UL)                    /*!< ALERT_OD_SUPP (Bit 6)                                 */
#define MEC_ESPI_IO_CAP1_ALERT_OD_SUPP_Msk (0x40UL)                 /*!< ALERT_OD_SUPP (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_IO_CAP1_ALERT_OD_SEL_Pos (7UL)                     /*!< ALERT_OD_SEL (Bit 7)                                  */
#define MEC_ESPI_IO_CAP1_ALERT_OD_SEL_Msk (0x80UL)                  /*!< ALERT_OD_SEL (Bitfield-Mask: 0x01)                    */
/* =========================================================  CAPPC  ========================================================= */
#define MEC_ESPI_IO_CAPPC_PC_MAX_PLD_Pos  (0UL)                     /*!< PC_MAX_PLD (Bit 0)                                    */
#define MEC_ESPI_IO_CAPPC_PC_MAX_PLD_Msk  (0x7UL)                   /*!< PC_MAX_PLD (Bitfield-Mask: 0x07)                      */
/* =========================================================  CAPVW  ========================================================= */
#define MEC_ESPI_IO_CAPVW_MAX_VW_CNT_Pos  (0UL)                     /*!< MAX_VW_CNT (Bit 0)                                    */
#define MEC_ESPI_IO_CAPVW_MAX_VW_CNT_Msk  (0x3fUL)                  /*!< MAX_VW_CNT (Bitfield-Mask: 0x3f)                      */
/* ========================================================  CAPOOB  ========================================================= */
#define MEC_ESPI_IO_CAPOOB_MAX_PLD_SIZE_Pos (0UL)                   /*!< MAX_PLD_SIZE (Bit 0)                                  */
#define MEC_ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk (0x7UL)                 /*!< MAX_PLD_SIZE (Bitfield-Mask: 0x07)                    */
/* =========================================================  CAPFC  ========================================================= */
#define MEC_ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos (0UL)                    /*!< MAX_PLD_SIZE (Bit 0)                                  */
#define MEC_ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk (0x7UL)                  /*!< MAX_PLD_SIZE (Bitfield-Mask: 0x07)                    */
#define MEC_ESPI_IO_CAPFC_SHARING_SUPP_Pos (3UL)                    /*!< SHARING_SUPP (Bit 3)                                  */
#define MEC_ESPI_IO_CAPFC_SHARING_SUPP_Msk (0x18UL)                 /*!< SHARING_SUPP (Bitfield-Mask: 0x03)                    */
#define MEC_ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Pos (5UL)               /*!< TAF_MAX_READ_SIZE (Bit 5)                             */
#define MEC_ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Msk (0xe0UL)            /*!< TAF_MAX_READ_SIZE (Bitfield-Mask: 0x07)               */
/* =========================================================  PCRDY  ========================================================= */
#define MEC_ESPI_IO_PCRDY_PC_READY_Pos    (0UL)                     /*!< PC_READY (Bit 0)                                      */
#define MEC_ESPI_IO_PCRDY_PC_READY_Msk    (0x1UL)                   /*!< PC_READY (Bitfield-Mask: 0x01)                        */
/* ========================================================  OOBRDY  ========================================================= */
#define MEC_ESPI_IO_OOBRDY_OOB_READY_Pos  (0UL)                     /*!< OOB_READY (Bit 0)                                     */
#define MEC_ESPI_IO_OOBRDY_OOB_READY_Msk  (0x1UL)                   /*!< OOB_READY (Bitfield-Mask: 0x01)                       */
/* =========================================================  FCRDY  ========================================================= */
#define MEC_ESPI_IO_FCRDY_FC_READY_Pos    (0UL)                     /*!< FC_READY (Bit 0)                                      */
#define MEC_ESPI_IO_FCRDY_FC_READY_Msk    (0x1UL)                   /*!< FC_READY (Bitfield-Mask: 0x01)                        */
/* =========================================================  ERIS  ========================================================== */
#define MEC_ESPI_IO_ERIS_CHG_Pos          (0UL)                     /*!< CHG (Bit 0)                                           */
#define MEC_ESPI_IO_ERIS_CHG_Msk          (0x1UL)                   /*!< CHG (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_IO_ERIS_STATE_Pos        (1UL)                     /*!< STATE (Bit 1)                                         */
#define MEC_ESPI_IO_ERIS_STATE_Msk        (0x2UL)                   /*!< STATE (Bitfield-Mask: 0x01)                           */
/* =========================================================  ERIE  ========================================================== */
#define MEC_ESPI_IO_ERIE_CHG_INTR_Pos     (0UL)                     /*!< CHG_INTR (Bit 0)                                      */
#define MEC_ESPI_IO_ERIE_CHG_INTR_Msk     (0x1UL)                   /*!< CHG_INTR (Bitfield-Mask: 0x01)                        */
/* ======================================================  PLTRST_SRC  ======================================================= */
#define MEC_ESPI_IO_PLTRST_SRC_SEL_Pos    (0UL)                     /*!< SEL (Bit 0)                                           */
#define MEC_ESPI_IO_PLTRST_SRC_SEL_Msk    (0x1UL)                   /*!< SEL (Bitfield-Mask: 0x01)                             */
/* =========================================================  VWRDY  ========================================================= */
#define MEC_ESPI_IO_VWRDY_VW_READY_Pos    (0UL)                     /*!< VW_READY (Bit 0)                                      */
#define MEC_ESPI_IO_VWRDY_VW_READY_Msk    (0x1UL)                   /*!< VW_READY (Bitfield-Mask: 0x01)                        */
/* ========================================================  TAFEBS  ========================================================= */
#define MEC_ESPI_IO_TAFEBS_1KB_Pos        (0UL)                     /*!< 1KB (Bit 0)                                           */
#define MEC_ESPI_IO_TAFEBS_1KB_Msk        (0x1UL)                   /*!< 1KB (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_IO_TAFEBS_2KB_Pos        (1UL)                     /*!< 2KB (Bit 1)                                           */
#define MEC_ESPI_IO_TAFEBS_2KB_Msk        (0x2UL)                   /*!< 2KB (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_IO_TAFEBS_4KB_Pos        (2UL)                     /*!< 4KB (Bit 2)                                           */
#define MEC_ESPI_IO_TAFEBS_4KB_Msk        (0x4UL)                   /*!< 4KB (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_IO_TAFEBS_8KB_Pos        (3UL)                     /*!< 8KB (Bit 3)                                           */
#define MEC_ESPI_IO_TAFEBS_8KB_Msk        (0x8UL)                   /*!< 8KB (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_IO_TAFEBS_16KB_Pos       (4UL)                     /*!< 16KB (Bit 4)                                          */
#define MEC_ESPI_IO_TAFEBS_16KB_Msk       (0x10UL)                  /*!< 16KB (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_TAFEBS_32KB_Pos       (5UL)                     /*!< 32KB (Bit 5)                                          */
#define MEC_ESPI_IO_TAFEBS_32KB_Msk       (0x20UL)                  /*!< 32KB (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_TAFEBS_64KB_Pos       (6UL)                     /*!< 64KB (Bit 6)                                          */
#define MEC_ESPI_IO_TAFEBS_64KB_Msk       (0x40UL)                  /*!< 64KB (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_IO_TAFEBS_128KB_Pos      (7UL)                     /*!< 128KB (Bit 7)                                         */
#define MEC_ESPI_IO_TAFEBS_128KB_Msk      (0x80UL)                  /*!< 128KB (Bitfield-Mask: 0x01)                           */
/* =====================================================  RPMC_OP1_CFG  ====================================================== */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_040_Pos (0UL)                  /*!< CS0_040 (Bit 0)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_040_Msk (0x1UL)                /*!< CS0_040 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_848_Pos (1UL)                  /*!< CS0_848 (Bit 1)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_848_Msk (0x2UL)                /*!< CS0_848 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_048_Pos (2UL)                  /*!< CS1_040 (Bit 2)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_048_Msk (0x4UL)                /*!< CS1_040 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_848_Pos (3UL)                  /*!< CS1_848 (Bit 3)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_848_Msk (0x8UL)                /*!< CS1_848 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_PNP_Pos (4UL)                  /*!< CS0_PNP (Bit 4)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS0_PNP_Msk (0x10UL)               /*!< CS0_PNP (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_PNP_Pos (5UL)                  /*!< CS1_PNP (Bit 5)                                       */
#define MEC_ESPI_IO_RPMC_OP1_CFG_CS1_PNP_Msk (0x20UL)               /*!< CS1_PNP (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_Pos (6UL)             /*!< NUM_RPMC_DEV (Bit 6)                                  */
#define MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_Msk (0xc0UL)          /*!< NUM_RPMC_DEV (Bitfield-Mask: 0x03)                    */
#define MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_Pos (8UL)              /*!< TOTAL_NCNTR (Bit 8)                                   */
#define MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_Msk (0x3f00UL)         /*!< TOTAL_NCNTR (Bitfield-Mask: 0x3f)                     */
#define MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_Pos (31UL)              /*!< STRICT_RCT (Bit 31)                                   */
#define MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_Msk (0x80000000UL)      /*!< STRICT_RCT (Bitfield-Mask: 0x01)                      */
/* ====================================================  RPMC_OP1_NCNTRS  ==================================================== */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_OP1_Pos (0UL)               /*!< CS0_OP1 (Bit 0)                                       */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_OP1_Msk (0xffUL)            /*!< CS0_OP1 (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_COUNT_Pos (8UL)             /*!< CS0_COUNT (Bit 8)                                     */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_COUNT_Msk (0x1f00UL)        /*!< CS0_COUNT (Bitfield-Mask: 0x1f)                       */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_OP1_Pos (16UL)              /*!< CS1_OP1 (Bit 16)                                      */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_OP1_Msk (0xff0000UL)        /*!< CS1_OP1 (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_COUNT_Pos (24UL)            /*!< CS1_COUNT (Bit 24)                                    */
#define MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_COUNT_Msk (0x1f000000UL)    /*!< CS1_COUNT (Bitfield-Mask: 0x1f)                       */
/* =========================================================  ACTV  ========================================================== */
#define MEC_ESPI_IO_ACTV_EN_Pos           (0UL)                     /*!< EN (Bit 0)                                            */
#define MEC_ESPI_IO_ACTV_EN_Msk           (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* =======================================================  HOST_BAR  ======================================================== */
#define MEC_ESPI_IO_HOST_BAR_VALID_Pos    (0UL)                     /*!< VALID (Bit 0)                                         */
#define MEC_ESPI_IO_HOST_BAR_VALID_Msk    (0x1UL)                   /*!< VALID (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_IO_HOST_BAR_HOST_IO_ADDR_B15_0_Pos (16UL)          /*!< HOST_IO_ADDR_B15_0 (Bit 16)                           */
#define MEC_ESPI_IO_HOST_BAR_HOST_IO_ADDR_B15_0_Msk (0xffff0000UL)  /*!< HOST_IO_ADDR_B15_0 (Bitfield-Mask: 0xffff)            */
/* ========================================================  SERIRQ  ========================================================= */
/* =========================================================  VWERR  ========================================================= */
#define MEC_ESPI_IO_VWERR_FATAL_ERR_Pos   (0UL)                     /*!< FATAL_ERR (Bit 0)                                     */
#define MEC_ESPI_IO_VWERR_FATAL_ERR_Msk   (0x1UL)                   /*!< FATAL_ERR (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_IO_VWERR_FATAL_ERR_CLR_Pos (1UL)                   /*!< FATAL_ERR_CLR (Bit 1)                                 */
#define MEC_ESPI_IO_VWERR_FATAL_ERR_CLR_Msk (0x2UL)                 /*!< FATAL_ERR_CLR (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_IO_VWERR_NON_FATAL_ERR_Pos (4UL)                   /*!< NON_FATAL_ERR (Bit 4)                                 */
#define MEC_ESPI_IO_VWERR_NON_FATAL_ERR_Msk (0x10UL)                /*!< NON_FATAL_ERR (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_IO_VWERR_NON_FATAL_ERR_CLR_Pos (5UL)               /*!< NON_FATAL_ERR_CLR (Bit 5)                             */
#define MEC_ESPI_IO_VWERR_NON_FATAL_ERR_CLR_Msk (0x20UL)            /*!< NON_FATAL_ERR_CLR (Bitfield-Mask: 0x01)               */

/** @} */ /* End of group PosMask_peripherals */


/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ================================================  MEC_ESPI_IO EC_LDN_MSK  ================================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_EC_LDN_MSK                                                    */
  MEC_ESPI_IO_EC_LDN_MSK_IOC           = 0,     /*!< IOC : eSPI I/O component configuration LDN and I/O mask                   */
  MEC_ESPI_IO_EC_LDN_MSK_IOM           = 1,     /*!< IOM : eSPI memory component configuration LDN and I/O mask                */
  MEC_ESPI_IO_EC_LDN_MSK_MBOX          = 2,     /*!< MBOX : eSPI Mailbox LDN and I/O mask                                      */
  MEC_ESPI_IO_EC_LDN_MSK_KBC           = 3,     /*!< KBC : eSPI Keyboard controller LDN and I/O mask                           */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_EC0      = 4,     /*!< ACPI_EC0 : eSPI ACPI EC0 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_EC1      = 5,     /*!< ACPI_EC1 : eSPI ACPI EC1 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_EC2      = 6,     /*!< ACPI_EC2 : eSPI ACPI EC2 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_EC3      = 7,     /*!< ACPI_EC3 : eSPI ACPI EC3 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_EC4      = 8,     /*!< ACPI_EC4 : eSPI ACPI EC4 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_ACPI_PM1      = 9,     /*!< ACPI_PM1 : eSPI ACPI PM1 LDN and I/O mask                                 */
  MEC_ESPI_IO_EC_LDN_MSK_KB_PORT92     = 10,    /*!< KB_PORT92 : eSPI Keyboard Port 92h LDN and I/O mask                       */
  MEC_ESPI_IO_EC_LDN_MSK_UART0         = 11,    /*!< UART0 : eSPI UART0 LDN and I/O mask                                       */
  MEC_ESPI_IO_EC_LDN_MSK_UART1         = 12,    /*!< UART1 : eSPI UART1 LDN and I/O mask                                       */
  MEC_ESPI_IO_EC_LDN_MSK_EMI0          = 13,    /*!< EMI0 : eSPI EMI0 LDN and I/O mask                                         */
  MEC_ESPI_IO_EC_LDN_MSK_EMI1          = 14,    /*!< EMI1 : eSPI EMI1 LDN and I/O mask                                         */
  MEC_ESPI_IO_EC_LDN_MSK_EMI2          = 15,    /*!< EMI2 : eSPI EMI2 LDN and I/O mask                                         */
  MEC_ESPI_IO_EC_LDN_MSK_BDBG0         = 16,    /*!< BDBG0 : eSPI BIOS Debug (port 80h capture) LDN and I/O mask               */
  MEC_ESPI_IO_EC_LDN_MSK_BDBG0_ALIAS   = 17,    /*!< BDBG0_ALIAS : eSPI BIOS Debug (port 80h alias address capture)
                                                     LDN and I/O mask                                                          */
  MEC_ESPI_IO_EC_LDN_MSK_RTC0          = 18,    /*!< RTC0 : eSPI RTC0 LDN and I/O mask                                         */
  MEC_ESPI_IO_EC_LDN_MSK_RSVD19        = 19,    /*!< RSVD19 : eSPI Reserved LDN and I/O mask                                   */
  MEC_ESPI_IO_EC_LDN_MSK_RSVD20        = 20,    /*!< RSVD20 : eSPI Reserved LDN and I/O mask                                   */
  MEC_ESPI_IO_EC_LDN_MSK_UART2         = 21,    /*!< UART2 : UART2 LDN and I/O mask                                            */
  MEC_ESPI_IO_EC_LDN_MSK_GLUE          = 22,    /*!< GLUE : eSPI Glue Logic LDN and I/O mask                                   */
  MEC_ESPI_IO_EC_LDN_MSK_UART3         = 23,    /*!< UART3 : UART3 LDN and I/O mask                                            */
  MEC_ESPI_IO_EC_LDN_MSK_RSVD24        = 24,    /*!< RSVD24 : eSPI Reserved LDN and I/O mask                                   */
} MEC_ESPI_IO_EC_LDN_MSK_Enum;

/* =======================================================  PCLTRSTS  ======================================================== */
/* ========================================================  PCLTREN  ======================================================== */
/* =======================================================  PCLTRCTL  ======================================================== */
/* ========================================  MEC_ESPI_IO PCLTRCTL LTR_TX_TAG [8..11]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG                                           */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG0 = 0, /*!< LTR_TAG0 : TAG 0 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG1 = 1, /*!< LTR_TAG1 : TAG 1 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG2 = 2, /*!< LTR_TAG2 : TAG 2 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG3 = 3, /*!< LTR_TAG3 : TAG 3 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG4 = 4, /*!< LTR_TAG4 : TAG 4 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG5 = 5, /*!< LTR_TAG5 : TAG 5 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG6 = 6, /*!< LTR_TAG6 : TAG 6 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG7 = 7, /*!< LTR_TAG7 : TAG 7 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG8 = 8, /*!< LTR_TAG8 : TAG 8 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG9 = 9, /*!< LTR_TAG9 : TAG 9 value                                                    */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG10 = 10,/*!< LTR_TAG10 : TAG 10 value                                                 */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG11 = 11,/*!< LTR_TAG11 : TAG 11 value                                                 */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG12 = 12,/*!< LTR_TAG12 : TAG 12 value                                                 */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG13 = 13,/*!< LTR_TAG13 : TAG 13 value                                                 */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG14 = 14,/*!< LTR_TAG14 : TAG 14 value                                                 */
  MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_LTR_TAG15 = 15,/*!< LTR_TAG15 : TAG 15 value                                                 */
} MEC_ESPI_IO_PCLTRCTL_LTR_TX_TAG_Enum;

/* ========================================================  PCLTRM  ========================================================= */
/* ========================================================  OOBRXA  ========================================================= */
/* ========================================================  OOBTXA  ========================================================= */
/* ========================================================  OOBRXL  ========================================================= */
/* ========================================================  OOBTXL  ========================================================= */
/* ========================================================  OOBRXC  ========================================================= */
/* ========================================  MEC_ESPI_IO OOBRXC MAX_PLD_SZ [16..18]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ                                             */
  MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_73B    = 1,     /*!< 73B : OOB max. payload size is 73 = 64 + 9(MCTP wrapper) bytes            */
  MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_137B   = 2,     /*!< 137B : OOB max. payload size is 137 = 128 + 9(MCTP wrapper)
                                                     bytes                                                                     */
  MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_265B   = 3,     /*!< 265B : OOB max. payload size is 265 = 256 + 9(MCTP wrapper)
                                                     bytes                                                                     */
} MEC_ESPI_IO_OOBRXC_MAX_PLD_SZ_Enum;

/* =======================================================  OOBRXIEN  ======================================================== */
/* =======================================================  OOBRXSTS  ======================================================== */
/* ========================================  MEC_ESPI_IO OOBRXSTS OOB_RX_TAG [8..11]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG0 = 0,/*!< OOB_RX_TAG0 : TAG 0 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG1 = 1,/*!< OOB_RX_TAG1 : TAG 1 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG2 = 2,/*!< OOB_RX_TAG2 : TAG 2 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG3 = 3,/*!< OOB_RX_TAG3 : TAG 3 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG4 = 4,/*!< OOB_RX_TAG4 : TAG 4 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG5 = 5,/*!< OOB_RX_TAG5 : TAG 5 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG6 = 6,/*!< OOB_RX_TAG6 : TAG 6 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG7 = 7,/*!< OOB_RX_TAG7 : TAG 7 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG8 = 8,/*!< OOB_RX_TAG8 : TAG 8 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG9 = 9,/*!< OOB_RX_TAG9 : TAG 9 value                                               */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG10 = 10,/*!< OOB_RX_TAG10 : TAG 10 value                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG11 = 11,/*!< OOB_RX_TAG11 : TAG 11 value                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG12 = 12,/*!< OOB_RX_TAG12 : TAG 12 value                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG13 = 13,/*!< OOB_RX_TAG13 : TAG 13 value                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG14 = 14,/*!< OOB_RX_TAG14 : TAG 14 value                                           */
  MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_OOB_RX_TAG15 = 15,/*!< OOB_RX_TAG15 : TAG 15 value                                           */
} MEC_ESPI_IO_OOBRXSTS_OOB_RX_TAG_Enum;

/* ========================================================  OOBTXC  ========================================================= */
/* =========================================  MEC_ESPI_IO OOBTXC OOB_TX_TAG [8..11]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_OOBTXC_OOB_TX_TAG                                             */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG0 = 0,/*!< OOB_TX_TAG0 : Use TAG 0 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG1 = 1,/*!< OOB_TX_TAG1 : Use TAG 1 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG2 = 2,/*!< OOB_TX_TAG2 : Use TAG 2 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG3 = 3,/*!< OOB_TX_TAG3 : Use TAG 3 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG4 = 4,/*!< OOB_TX_TAG4 : Use TAG 4 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG5 = 5,/*!< OOB_TX_TAG5 : Use TAG 5 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG6 = 6,/*!< OOB_TX_TAG6 : Use TAG 6 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG7 = 7,/*!< OOB_TX_TAG7 : Use TAG 7 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG8 = 8,/*!< OOB_TX_TAG8 : Use TAG 8 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG9 = 9,/*!< OOB_TX_TAG9 : Use TAG 9 value for OOB TX                                  */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG10 = 10,/*!< OOB_TX_TAG10 : Use TAG 10 value for OOB TX                              */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG11 = 11,/*!< OOB_TX_TAG11 : Use TAG 11 value for OOB TX                              */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG12 = 12,/*!< OOB_TX_TAG12 : Use TAG 12 value for OOB TX                              */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG13 = 13,/*!< OOB_TX_TAG13 : Use TAG 13 value for OOB TX                              */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG14 = 14,/*!< OOB_TX_TAG14 : Use TAG 14 value for OOB TX                              */
  MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_OOB_TX_TAG15 = 15,/*!< OOB_TX_TAG15 : Use TAG 15 value for OOB TX                              */
} MEC_ESPI_IO_OOBTXC_OOB_TX_TAG_Enum;

/* =======================================================  OOBTXIEN  ======================================================== */
/* =======================================================  OOBTXSTS  ======================================================== */
/* =========================================================  FCFA  ========================================================== */
/* =========================================================  FCBA  ========================================================== */
/* =========================================================  FCLEN  ========================================================= */
/* =========================================================  FCCTL  ========================================================= */
/* ==============================================  MEC_ESPI_IO FCCTL OP [2..3]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCTL_OP                                                      */
  MEC_ESPI_IO_FCCTL_OP_READ            = 0,     /*!< READ : Perform read from eSPI host attached flash                         */
  MEC_ESPI_IO_FCCTL_OP_WRITE           = 1,     /*!< WRITE : Perform write to eSPI host attached flash                         */
  MEC_ESPI_IO_FCCTL_OP_ERASE_SMALLER   = 2,     /*!< ERASE_SMALLER : Perform erase of the smaller of two ranges if
                                                     a choice exists                                                           */
  MEC_ESPI_IO_FCCTL_OP_ERASE_LARGER    = 3,     /*!< ERASE_LARGER : Perform erase of the larger of two ranges if
                                                     a choice exists                                                           */
} MEC_ESPI_IO_FCCTL_OP_Enum;

/* =============================================  MEC_ESPI_IO FCCTL TAG [4..7]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCTL_TAG                                                     */
  MEC_ESPI_IO_FCCTL_TAG_FLASH_VAL      = 0,     /*!< FLASH_VAL : Expected TAG value for flash traffic is 0                     */
} MEC_ESPI_IO_FCCTL_TAG_Enum;

/* =========================================================  FCIEN  ========================================================= */
/* =========================================================  FCCFG  ========================================================= */
/* =============================================  MEC_ESPI_IO FCCFG EBSZ [2..4]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCFG_EBSZ                                                    */
  MEC_ESPI_IO_FCCFG_EBSZ_4KB           = 1,     /*!< 4KB : 4KB erase block size                                                */
  MEC_ESPI_IO_FCCFG_EBSZ_64KB          = 2,     /*!< 64KB : 64KB erase block size                                              */
  MEC_ESPI_IO_FCCFG_EBSZ_4KB_OR_64KB   = 3,     /*!< 4KB_OR_64KB : 4KB or 64KB erase block sizes                               */
  MEC_ESPI_IO_FCCFG_EBSZ_128KB         = 4,     /*!< 128KB : 128KB erase block size                                            */
  MEC_ESPI_IO_FCCFG_EBSZ_256KB         = 5,     /*!< 256KB : 256KB erase block size                                            */
} MEC_ESPI_IO_FCCFG_EBSZ_Enum;

/* =========================================  MEC_ESPI_IO FCCFG MAX_PLD_SZ [8..10]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCFG_MAX_PLD_SZ                                              */
  MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_64B     = 1,     /*!< 64B : 64 byte eSPI maximum payload size                                   */
  MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_128B    = 2,     /*!< 128B : 128 byte eSPI maximum payload size                                 */
  MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_256B    = 3,     /*!< 256B : 256 byte eSPI maximum payload size                                 */
} MEC_ESPI_IO_FCCFG_MAX_PLD_SZ_Enum;

/* =======================================  MEC_ESPI_IO FCCFG MAX_RD_REQ_SZ [12..14]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ                                           */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_64B  = 1,     /*!< 64B : 64 byte maximum packet size for a flash read request                */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_128B = 2,     /*!< 128B : 128 byte maximum packet size for a flash read request              */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_256B = 3,     /*!< 256B : 256 byte maximum packet size for a flash read request              */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_512B = 4,     /*!< 512B : 512 byte maximum packet size for a flash read request              */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_1KB  = 5,     /*!< 1KB : 1 KB maximum packet size for a flash read request                   */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_2KB  = 6,     /*!< 2KB : 2 KB maximum packet size for a flash read request                   */
  MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_4KB  = 7,     /*!< 4KB : 4 KB maximum packet size for a flash read request                   */
} MEC_ESPI_IO_FCCFG_MAX_RD_REQ_SZ_Enum;

/* =======================================  MEC_ESPI_IO FCCFG FORCE_CAF_TAF [28..29]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF                                           */
  MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_HOST_CTRL = 0,/*!< HOST_CTRL : Host can set CAF/TAF mode (normal operation)                  */
  MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_CAF_ONLY = 2, /*!< CAF_ONLY : Force CAF only support                                         */
  MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_TAF_ONLY = 3, /*!< TAF_ONLY : Force TAF only support, blocking flash channel operations      */
} MEC_ESPI_IO_FCCFG_FORCE_CAF_TAF_Enum;

/* =========================================================  FCSTS  ========================================================= */
/* =========================================================  VWSTS  ========================================================= */
/* =========================================================  CAPID  ========================================================= */
/* =========================================================  CAP0  ========================================================== */
/* ============================================  MEC_ESPI_IO CAP0 PC_SUPP [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP0_PC_SUPP                                                  */
  MEC_ESPI_IO_CAP0_PC_SUPP_EN          = 1,     /*!< EN : Enabled                                                              */
} MEC_ESPI_IO_CAP0_PC_SUPP_Enum;

/* ============================================  MEC_ESPI_IO CAP0 VW_SUPP [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP0_VW_SUPP                                                  */
  MEC_ESPI_IO_CAP0_VW_SUPP_EN          = 1,     /*!< EN : Enabled                                                              */
} MEC_ESPI_IO_CAP0_VW_SUPP_Enum;

/* ===========================================  MEC_ESPI_IO CAP0 OOB_SUPP [2..2]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP0_OOB_SUPP                                                 */
  MEC_ESPI_IO_CAP0_OOB_SUPP_EN         = 1,     /*!< EN : Enabled                                                              */
} MEC_ESPI_IO_CAP0_OOB_SUPP_Enum;

/* ============================================  MEC_ESPI_IO CAP0 FC_SUPP [3..3]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP0_FC_SUPP                                                  */
  MEC_ESPI_IO_CAP0_FC_SUPP_EN          = 1,     /*!< EN : Enabled                                                              */
} MEC_ESPI_IO_CAP0_FC_SUPP_Enum;

/* =========================================================  CAP1  ========================================================== */
/* =========================================  MEC_ESPI_IO CAP1 MAX_FREQ_SUPP [0..2]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP                                            */
  MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_F20M  = 0,     /*!< F20M : Support 20MHz eSPI clock                                           */
  MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_F25M  = 1,     /*!< F25M : Support 25MHz eSPI clock                                           */
  MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_F33M  = 2,     /*!< F33M : Support 33MHz eSPI clock                                           */
  MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_F50M  = 3,     /*!< F50M : Support 50MHz eSPI clock                                           */
  MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_F66M  = 4,     /*!< F66M : Support 66MHz eSPI clock                                           */
} MEC_ESPI_IO_CAP1_MAX_FREQ_SUPP_Enum;

/* ========================================  MEC_ESPI_IO CAP1 ALERT_MODE_SUPP [3..3]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP1_ALERT_MODE_SUPP                                          */
  MEC_ESPI_IO_CAP1_ALERT_MODE_SUPP_EN  = 1,     /*!< EN : Supported                                                            */
} MEC_ESPI_IO_CAP1_ALERT_MODE_SUPP_Enum;

/* =========================================  MEC_ESPI_IO CAP1 IO_MODE_SUPP [4..5]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP1_IO_MODE_SUPP                                             */
  MEC_ESPI_IO_CAP1_IO_MODE_SUPP_IO1    = 0,     /*!< IO1 : Support single IO only                                              */
  MEC_ESPI_IO_CAP1_IO_MODE_SUPP_IO12   = 1,     /*!< IO12 : Supports single and dual IO                                        */
  MEC_ESPI_IO_CAP1_IO_MODE_SUPP_IO14   = 2,     /*!< IO14 : Supports single and quad IO                                        */
  MEC_ESPI_IO_CAP1_IO_MODE_SUPP_IO124  = 3,     /*!< IO124 : Supports single, dual, and quad IO                                */
} MEC_ESPI_IO_CAP1_IO_MODE_SUPP_Enum;

/* =========================================  MEC_ESPI_IO CAP1 ALERT_OD_SUPP [6..6]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP1_ALERT_OD_SUPP                                            */
  MEC_ESPI_IO_CAP1_ALERT_OD_SUPP_EN    = 1,     /*!< EN : Supported                                                            */
} MEC_ESPI_IO_CAP1_ALERT_OD_SUPP_Enum;

/* =========================================  MEC_ESPI_IO CAP1 ALERT_OD_SEL [7..7]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_CAP1_ALERT_OD_SEL                                             */
  MEC_ESPI_IO_CAP1_ALERT_OD_SEL_EN     = 1,     /*!< EN : Supported                                                            */
} MEC_ESPI_IO_CAP1_ALERT_OD_SEL_Enum;

/* =========================================================  CAPPC  ========================================================= */
/* ==========================================  MEC_ESPI_IO CAPPC PC_MAX_PLD [0..2]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPPC_PC_MAX_PLD                                              */
  MEC_ESPI_IO_CAPPC_PC_MAX_PLD_64B     = 1,     /*!< 64B : Maximum PC channel payload size is 64 bytes                         */
} MEC_ESPI_IO_CAPPC_PC_MAX_PLD_Enum;

/* =========================================================  CAPVW  ========================================================= */
/* ==========================================  MEC_ESPI_IO CAPVW MAX_VW_CNT [0..5]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPVW_MAX_VW_CNT                                              */
  MEC_ESPI_IO_CAPVW_MAX_VW_CNT_MIN_VAL = 7,     /*!< MIN_VAL : Minimum number of virtual wires by eSPI specifiction            */
} MEC_ESPI_IO_CAPVW_MAX_VW_CNT_Enum;

/* ========================================================  CAPOOB  ========================================================= */
/* ========================================  MEC_ESPI_IO CAPOOB MAX_PLD_SIZE [0..2]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPOOB_MAX_PLD_SIZE                                           */
  MEC_ESPI_IO_CAPOOB_MAX_PLD_SIZE_73B  = 1,     /*!< 73B : OOB maximum payload size is 73 bytes                                */
} MEC_ESPI_IO_CAPOOB_MAX_PLD_SIZE_Enum;

/* =========================================================  CAPFC  ========================================================= */
/* =========================================  MEC_ESPI_IO CAPFC MAX_PLD_SIZE [0..2]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPFC_MAX_PLD_SIZE                                            */
  MEC_ESPI_IO_CAPFC_MAX_PLD_SIZE_64B   = 1,     /*!< 64B : Flash channel maximum payload size of 64 bytes                      */
} MEC_ESPI_IO_CAPFC_MAX_PLD_SIZE_Enum;

/* =========================================  MEC_ESPI_IO CAPFC SHARING_SUPP [3..4]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPFC_SHARING_SUPP                                            */
  MEC_ESPI_IO_CAPFC_SHARING_SUPP_CAF   = 0,     /*!< CAF : Flash channel supports CAF only                                     */
  MEC_ESPI_IO_CAPFC_SHARING_SUPP_CAF_ONLY_ALT = 1,/*!< CAF_ONLY_ALT : Flash channel supports CAF only                          */
  MEC_ESPI_IO_CAPFC_SHARING_SUPP_TAF   = 2,     /*!< TAF : Flash channel supports TAF only                                     */
  MEC_ESPI_IO_CAPFC_SHARING_SUPP_CAF_TAF = 3,   /*!< CAF_TAF : Flash channel supports CAF and TAF                              */
} MEC_ESPI_IO_CAPFC_SHARING_SUPP_Enum;

/* ======================================  MEC_ESPI_IO CAPFC TAF_MAX_READ_SIZE [5..7]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_CAPFC_TAF_MAX_READ_SIZE                                       */
  MEC_ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_64B = 1,  /*!< 64B : TAF mode maximum requrest size is 64 bytes                          */
} MEC_ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Enum;

/* =========================================================  PCRDY  ========================================================= */
/* ===========================================  MEC_ESPI_IO PCRDY PC_READY [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_PCRDY_PC_READY                                                */
  MEC_ESPI_IO_PCRDY_PC_READY_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_ESPI_IO_PCRDY_PC_READY_Enum;

/* ========================================================  OOBRDY  ========================================================= */
/* ==========================================  MEC_ESPI_IO OOBRDY OOB_READY [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_OOBRDY_OOB_READY                                              */
  MEC_ESPI_IO_OOBRDY_OOB_READY_EN      = 1,     /*!< EN : Enable                                                               */
} MEC_ESPI_IO_OOBRDY_OOB_READY_Enum;

/* =========================================================  FCRDY  ========================================================= */
/* ===========================================  MEC_ESPI_IO FCRDY FC_READY [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_FCRDY_FC_READY                                                */
  MEC_ESPI_IO_FCRDY_FC_READY_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_ESPI_IO_FCRDY_FC_READY_Enum;

/* =========================================================  ERIS  ========================================================== */
/* ==============================================  MEC_ESPI_IO ERIS CHG [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_ERIS_CHG                                                      */
  MEC_ESPI_IO_ERIS_CHG_ACTIVE          = 1,     /*!< ACTIVE : Active                                                           */
} MEC_ESPI_IO_ERIS_CHG_Enum;

/* =============================================  MEC_ESPI_IO ERIS STATE [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_ERIS_STATE                                                    */
  MEC_ESPI_IO_ERIS_STATE_HI            = 1,     /*!< HI : High                                                                 */
} MEC_ESPI_IO_ERIS_STATE_Enum;

/* =========================================================  ERIE  ========================================================== */
/* ===========================================  MEC_ESPI_IO ERIE CHG_INTR [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_ERIE_CHG_INTR                                                 */
  MEC_ESPI_IO_ERIE_CHG_INTR_EN         = 1,     /*!< EN : Active                                                               */
} MEC_ESPI_IO_ERIE_CHG_INTR_Enum;

/* ======================================================  PLTRST_SRC  ======================================================= */
/* ===========================================  MEC_ESPI_IO PLTRST_SRC SEL [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_PLTRST_SRC_SEL                                                */
  MEC_ESPI_IO_PLTRST_SRC_SEL_VWIRE     = 0,     /*!< VWIRE : PLTRST is a virtual wire                                          */
  MEC_ESPI_IO_PLTRST_SRC_SEL_EXT       = 1,     /*!< EXT : PLTRST is an external signal                                        */
} MEC_ESPI_IO_PLTRST_SRC_SEL_Enum;

/* =========================================================  VWRDY  ========================================================= */
/* ===========================================  MEC_ESPI_IO VWRDY VW_READY [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_VWRDY_VW_READY                                                */
  MEC_ESPI_IO_VWRDY_VW_READY_EN        = 1,     /*!< EN : Enable                                                               */
} MEC_ESPI_IO_VWRDY_VW_READY_Enum;

/* ========================================================  TAFEBS  ========================================================= */
/* =============================================  MEC_ESPI_IO TAFEBS 1KB [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_1KB                                                    */
  MEC_ESPI_IO_TAFEBS_1KB_SUPP          = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_1KB_Enum;

/* =============================================  MEC_ESPI_IO TAFEBS 2KB [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_2KB                                                    */
  MEC_ESPI_IO_TAFEBS_2KB_SUPP          = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_2KB_Enum;

/* =============================================  MEC_ESPI_IO TAFEBS 4KB [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_4KB                                                    */
  MEC_ESPI_IO_TAFEBS_4KB_SUPP          = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_4KB_Enum;

/* =============================================  MEC_ESPI_IO TAFEBS 8KB [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_8KB                                                    */
  MEC_ESPI_IO_TAFEBS_8KB_SUPP          = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_8KB_Enum;

/* ============================================  MEC_ESPI_IO TAFEBS 16KB [4..4]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_16KB                                                   */
  MEC_ESPI_IO_TAFEBS_16KB_SUPP         = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_16KB_Enum;

/* ============================================  MEC_ESPI_IO TAFEBS 32KB [5..5]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_32KB                                                   */
  MEC_ESPI_IO_TAFEBS_32KB_SUPP         = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_32KB_Enum;

/* ============================================  MEC_ESPI_IO TAFEBS 64KB [6..6]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_64KB                                                   */
  MEC_ESPI_IO_TAFEBS_64KB_SUPP         = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_64KB_Enum;

/* ============================================  MEC_ESPI_IO TAFEBS 128KB [7..7]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_IO_TAFEBS_128KB                                                  */
  MEC_ESPI_IO_TAFEBS_128KB_SUPP        = 1,     /*!< SUPP : Support                                                            */
} MEC_ESPI_IO_TAFEBS_128KB_Enum;

/* =====================================================  RPMC_OP1_CFG  ====================================================== */
/* =====================================  MEC_ESPI_IO RPMC_OP1_CFG NUM_RPMC_DEV [6..7]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV                                     */
  MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_1 = 0,  /*!< 1 : One RPMC flash device attached                                        */
  MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_2 = 1,  /*!< 2 : Two RPMC flash devices attached                                       */
} MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_Enum;

/* =====================================  MEC_ESPI_IO RPMC_OP1_CFG TOTAL_NCNTR [8..13]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR                                      */
  MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_NONE = 0,/*!< NONE : Attached devices do not support RPMC or RPMC feature
                                                     not available                                                             */
  MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_ONE = 1, /*!< ONE : One RPMC flash device attached                                      */
  MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_TWO = 2, /*!< TWO : Two RPMC flash devices attached                                     */
} MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_Enum;

/* =====================================  MEC_ESPI_IO RPMC_OP1_CFG STRICT_RCT [31..31]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT                                       */
  MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_DFLT = 0, /*!< DFLT : 23h/83h and 24h/84h are valid                                      */
  MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_LIMITED = 1,/*!< LIMITED : Only 23h and 24h are valid                                    */
} MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_Enum;

/* ====================================================  RPMC_OP1_NCNTRS  ==================================================== */
/* ======================================  MEC_ESPI_IO RPMC_OP1_NCNTRS CS0_OP1 [0..7]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_OP1                                       */
  MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_OP1_RPMC_OP1_DFLT = 155,/*!< RPMC_OP1_DFLT : RPMC spec. defined RPMC OP1 value is 0x9B       */
} MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS0_OP1_Enum;

/* =====================================  MEC_ESPI_IO RPMC_OP1_NCNTRS CS1_OP1 [16..23]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_OP1                                       */
  MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_OP1_RPMC_OP1_DFLT = 155,/*!< RPMC_OP1_DFLT : RPMC spec. defined RPMC OP1 value is 0x9B       */
} MEC_ESPI_IO_RPMC_OP1_NCNTRS_CS1_OP1_Enum;

/* =========================================================  ACTV  ========================================================== */
/* ==============================================  MEC_ESPI_IO ACTV EN [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_ACTV_EN                                                       */
  MEC_ESPI_IO_ACTV_EN_EN               = 1,     /*!< EN : Enable                                                               */
} MEC_ESPI_IO_ACTV_EN_Enum;

/* =======================================================  HOST_BAR  ======================================================== */
/* =================================================  MEC_ESPI_IO HOST_BAR  ================================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_HOST_BAR                                                      */
  MEC_ESPI_IO_HOST_BAR_IOC             = 0,     /*!< IOC : eSPI I/O component configuration Host I/O address and
                                                     valid                                                                     */
  MEC_ESPI_IO_HOST_BAR_IOM             = 1,     /*!< IOM : eSPI memory component configuration Host I/O address and
                                                     valid                                                                     */
  MEC_ESPI_IO_HOST_BAR_MBOX            = 2,     /*!< MBOX : eSPI Mailbox Host I/O address and valid                            */
  MEC_ESPI_IO_HOST_BAR_KBC             = 3,     /*!< KBC : eSPI Keyboard Host I/O address and valid                            */
  MEC_ESPI_IO_HOST_BAR_ACPI_EC0        = 4,     /*!< ACPI_EC0 : eSPI ACPI EC0 Host I/O address and valid                       */
  MEC_ESPI_IO_HOST_BAR_ACPI_EC1        = 5,     /*!< ACPI_EC1 : eSPI ACPI EC1 Host I/O address and valid                       */
  MEC_ESPI_IO_HOST_BAR_ACPI_EC2        = 6,     /*!< ACPI_EC2 : eSPI ACPI EC2 Host I/O address and valid                       */
  MEC_ESPI_IO_HOST_BAR_ACPI_EC3        = 7,     /*!< ACPI_EC3 : eSPI ACPI EC3 LDN Host I/O address and valid                   */
  MEC_ESPI_IO_HOST_BAR_ACPI_EC4        = 8,     /*!< ACPI_EC4 : eSPI ACPI EC4 Host I/O address and valid                       */
  MEC_ESPI_IO_HOST_BAR_ACPI_PM1        = 9,     /*!< ACPI_PM1 : eSPI ACPI PM1 Host I/O address and valid                       */
  MEC_ESPI_IO_HOST_BAR_KB_PORT92       = 10,    /*!< KB_PORT92 : eSPI Keyboard Port 92h Host I/O address and valid             */
  MEC_ESPI_IO_HOST_BAR_UART0           = 11,    /*!< UART0 : eSPI UART0 Host I/O address and valid                             */
  MEC_ESPI_IO_HOST_BAR_UART1           = 12,    /*!< UART1 : eSPI UART1 Host I/O address and valid                             */
  MEC_ESPI_IO_HOST_BAR_EMI0            = 13,    /*!< EMI0 : eSPI EMI0 Host I/O address and valid                               */
  MEC_ESPI_IO_HOST_BAR_EMI1            = 14,    /*!< EMI1 : eSPI EMI1 Host I/O address and valid                               */
  MEC_ESPI_IO_HOST_BAR_EMI2            = 15,    /*!< EMI2 : eSPI EMI2 Host I/O address and valid                               */
  MEC_ESPI_IO_HOST_BAR_BDBG0           = 16,    /*!< BDBG0 : eSPI BIOS Debug (port 80h capture) Host I/O address
                                                     and valid                                                                 */
  MEC_ESPI_IO_HOST_BAR_BDBG0_ALIAS     = 17,    /*!< BDBG0_ALIAS : eSPI BIOS Debug (port 80h alias address capture)
                                                     Host I/O address and valid                                                */
  MEC_ESPI_IO_HOST_BAR_RTC0            = 18,    /*!< RTC0 : eSPI RTC0 Host I/O address and valid                               */
  MEC_ESPI_IO_HOST_BAR_RSVD19          = 19,    /*!< RSVD19 : eSPI Reserved Host I/O address and valid                         */
  MEC_ESPI_IO_HOST_BAR_RSVD20          = 20,    /*!< RSVD20 : eSPI Reserved Host I/O address and valid                         */
  MEC_ESPI_IO_HOST_BAR_UART2           = 21,    /*!< UART2 : UART2 Host I/O address and valid                                  */
  MEC_ESPI_IO_HOST_BAR_GLUE            = 22,    /*!< GLUE : eSPI Glue Logic Host I/O address and valid                         */
  MEC_ESPI_IO_HOST_BAR_UART3           = 23,    /*!< UART3 : UART3 Host I/O address and valid                                  */
  MEC_ESPI_IO_HOST_BAR_RSVD24          = 24,    /*!< RSVD24 : eSPI Reserved Host I/O address and valid                         */
} MEC_ESPI_IO_HOST_BAR_Enum;

/* ========================================================  SERIRQ  ========================================================= */
/* ==================================================  MEC_ESPI_IO SERIRQ  =================================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_SERIRQ                                                        */
  MEC_ESPI_IO_SERIRQ_MBOX_SIRQ         = 0,     /*!< MBOX_SIRQ : Mailbox interrupt SERIQ index                                 */
  MEC_ESPI_IO_SERIRQ_MBOX_SMI          = 1,     /*!< MBOX_SMI : Mailbox SMI SERIRQ index                                       */
  MEC_ESPI_IO_SERIRQ_KIRQ              = 2,     /*!< KIRQ : Keyboard(8042) controller Serial IRQ index                         */
  MEC_ESPI_IO_SERIRQ_MIRQ              = 3,     /*!< MIRQ : Keyboard(8042) controller Mouse Serial IRQ index                   */
  MEC_ESPI_IO_SERIRQ_ACPI_EC0          = 4,     /*!< ACPI_EC0 : ACPI EC0 OBF Serial IRQ index                                  */
  MEC_ESPI_IO_SERIRQ_ACPI_EC1          = 5,     /*!< ACPI_EC1 : ACPI EC1 OBF Serial IRQ index                                  */
  MEC_ESPI_IO_SERIRQ_ACPI_EC2          = 6,     /*!< ACPI_EC2 : ACPI EC2 OBF Serial IRQ index                                  */
  MEC_ESPI_IO_SERIRQ_ACPI_EC3          = 7,     /*!< ACPI_EC3 : ACPI EC3 OBF Serial IRQ index                                  */
  MEC_ESPI_IO_SERIRQ_ACPI_EC4          = 8,     /*!< ACPI_EC4 : ACPI EC4 OBF Serial IRQ index                                  */
  MEC_ESPI_IO_SERIRQ_UART0             = 9,     /*!< UART0 : UART0 Serial IRQ index                                            */
  MEC_ESPI_IO_SERIRQ_UART1             = 10,    /*!< UART1 : UART1 Serial IRQ index                                            */
  MEC_ESPI_IO_SERIRQ_EMI0_HEVENT       = 11,    /*!< EMI0_HEVENT : EMI0 Host Event Serial IRQ index                            */
  MEC_ESPI_IO_SERIRQ_EMI0_E2H          = 12,    /*!< EMI0_E2H : EMI0 EC to Host Serial IRQ index                               */
  MEC_ESPI_IO_SERIRQ_EMI1_HEVENT       = 13,    /*!< EMI1_HEVENT : EMI1 Host Event Serial IRQ index                            */
  MEC_ESPI_IO_SERIRQ_EMI1_E2H          = 14,    /*!< EMI1_E2H : EMI1 EC to Host Serial IRQ index                               */
  MEC_ESPI_IO_SERIRQ_EMI2_HEVENT       = 15,    /*!< EMI2_HEVENT : EMI2 Host Event Serial IRQ index                            */
  MEC_ESPI_IO_SERIRQ_EMI2_E2H          = 16,    /*!< EMI2_E2H : EMI2 EC to Host Serial IRQ index                               */
  MEC_ESPI_IO_SERIRQ_RTC               = 17,    /*!< RTC : RTC Serial IRQ index                                                */
  MEC_ESPI_IO_SERIRQ_EC_IRQ            = 18,    /*!< EC_IRQ : EC_IRQ Serial IRQ index                                          */
  MEC_ESPI_IO_SERIRQ_UART2             = 19,    /*!< UART2 : UART2 Serial IRQ index                                            */
  MEC_ESPI_IO_SERIRQ_RSVD20            = 20,    /*!< RSVD20 : Reserved Serial IRQ index 20                                     */
  MEC_ESPI_IO_SERIRQ_UART3             = 21,    /*!< UART3 : UART3 Serial IRQ index                                            */
} MEC_ESPI_IO_SERIRQ_Enum;

/* =========================================================  VWERR  ========================================================= */
/* ==========================================  MEC_ESPI_IO VWERR FATAL_ERR [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_IO_VWERR_FATAL_ERR                                               */
  MEC_ESPI_IO_VWERR_FATAL_ERR_ACTV     = 1,     /*!< ACTV : Fatal error status active                                          */
} MEC_ESPI_IO_VWERR_FATAL_ERR_Enum;

/* ========================================  MEC_ESPI_IO VWERR FATAL_ERR_CLR [1..1]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_VWERR_FATAL_ERR_CLR                                           */
  MEC_ESPI_IO_VWERR_FATAL_ERR_CLR_VAL  = 1,     /*!< VAL : Write 1 to clear fatal error status                                 */
} MEC_ESPI_IO_VWERR_FATAL_ERR_CLR_Enum;

/* ========================================  MEC_ESPI_IO VWERR NON_FATAL_ERR [4..4]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_VWERR_NON_FATAL_ERR                                           */
  MEC_ESPI_IO_VWERR_NON_FATAL_ERR_ACTV = 1,     /*!< ACTV : Non-fatal error status active                                      */
} MEC_ESPI_IO_VWERR_NON_FATAL_ERR_Enum;

/* ======================================  MEC_ESPI_IO VWERR NON_FATAL_ERR_CLR [5..5]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_IO_VWERR_NON_FATAL_ERR_CLR                                       */
  MEC_ESPI_IO_VWERR_NON_FATAL_ERR_CLR_VAL = 1,  /*!< VAL : Write 1 to clear non-fatal error status                             */
} MEC_ESPI_IO_VWERR_NON_FATAL_ERR_CLR_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_ESPI_IO_V1_5_H */
