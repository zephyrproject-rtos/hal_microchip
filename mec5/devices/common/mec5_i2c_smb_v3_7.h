/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_I2C_SMB_V3_7_H
#define _MEC5_I2C_SMB_V3_7_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief I2C Controller with SMBus network layer (I2C_SMB0)
  */

typedef struct i2c_smb_regs {                   /*!< (@ 0x40004000) I2C_SMB0 Structure                                         */

  union {
    __OM  uint8_t CTRL;                         /*!< (@ 0x00000000) I2C mode Control(WO)                                       */
    __IM  uint8_t STATUS;                       /*!< (@ 0x00000000) I2C mode Status(RO)                                        */
  };
  __IM  uint8_t   RESERVED;
  __IM  uint16_t  RESERVED1;
  __IOM uint32_t  OWN_ADDR;                     /*!< (@ 0x00000004) I2C own addresses                                          */
  __IOM uint8_t   DATA;                         /*!< (@ 0x00000008) I2C mode data                                              */
  __IM  uint8_t   RESERVED2;
  __IM  uint16_t  RESERVED3;
  __IOM uint32_t  MCMD;                         /*!< (@ 0x0000000C) I2C-SMB Network layer mode initiator command               */
  __IOM uint32_t  SCMD;                         /*!< (@ 0x00000010) I2C-SMB Network layer acceptor command                     */
  __IOM uint8_t   PEC;                          /*!< (@ 0x00000014) I2C-SMB PEC                                                */
  __IM  uint8_t   RESERVED4;
  __IM  uint16_t  RESERVED5;
  __IOM uint32_t  RSHT;                         /*!< (@ 0x00000018) I2C-SMB Repeat Start Hold time                             */
  __IOM uint32_t  EXTLEN;                       /*!< (@ 0x0000001C) I2C-SMB Network layer extended lengths                     */
  __IOM uint32_t  COMPL;                        /*!< (@ 0x00000020) I2C-SMB Completion                                         */
  __IOM uint32_t  IDLESC;                       /*!< (@ 0x00000024) I2C-SMB Idle scaling                                       */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000028) I2C-SMB Configuration                                      */
  __IOM uint32_t  BUSCLK;                       /*!< (@ 0x0000002C) I2C-SMB Bus Clock                                          */
  __IOM uint32_t  BLKID;                        /*!< (@ 0x00000030) I2C-SMB Block ID(RO)                                       */
  __IOM uint32_t  BLKREV;                       /*!< (@ 0x00000034) I2C-SMB Block Revision(RO)                                 */
  __IOM uint8_t   BBCTRL;                       /*!< (@ 0x00000038) I2C-SMB Bit-Bang Control                                   */
  __IM  uint8_t   RESERVED6;
  __IM  uint16_t  RESERVED7;
  __IOM uint32_t  MCHPR3C;                      /*!< (@ 0x0000003C) I2C-SMB MCHP Reserved at offset 0x3c                       */
  __IOM uint32_t  DATATM;                       /*!< (@ 0x00000040) I2C-SMB Data timing                                        */
  __IOM uint32_t  TMOUTSC;                      /*!< (@ 0x00000044) I2C-SMB Data Timeout scaling                               */
  __IOM uint8_t   DTXB;                         /*!< (@ 0x00000048) Device mode TX buffer                                      */
  __IM  uint8_t   RESERVED8;
  __IM  uint16_t  RESERVED9;
  __IOM uint8_t   DRXB;                         /*!< (@ 0x0000004C) Device mode RX buffer                                      */
  __IM  uint8_t   RESERVED10;
  __IM  uint16_t  RESERVED11;
  __IOM uint8_t   CTXB;                         /*!< (@ 0x00000050) Controller mode TX buffer                                  */
  __IM  uint8_t   RESERVED12;
  __IM  uint16_t  RESERVED13;
  __IOM uint8_t   CRXB;                         /*!< (@ 0x00000054) Controller mode RX buffer                                  */
  __IM  uint8_t   RESERVED14;
  __IM  uint16_t  RESERVED15;
  __IM  uint32_t  FSM_I2C;                      /*!< (@ 0x00000058) I2C FSM(RO)                                                */
  __IM  uint32_t  FSM_SNL;                      /*!< (@ 0x0000005C) I2C SMB Network Layer FSM(RO)                              */
  __IOM uint32_t  WAKE_STS;                     /*!< (@ 0x00000060) I2C Wake Status                                            */
  __IOM uint32_t  WAKE_EN;                      /*!< (@ 0x00000064) I2C Wake Enable                                            */
  __IOM uint32_t  FAST_RSYNC;                   /*!< (@ 0x00000068) I2C Fast re-sync                                           */
  __IOM uint32_t  SHAD_ADDR;                    /*!< (@ 0x0000006C) Capture of I2C address received from external
                                                                    controller                                                 */
  __IOM uint32_t  PROM_ARS;                     /*!< (@ 0x00000070) Promiscuous mode address captured status                   */
  __IOM uint32_t  PROM_IEN;                     /*!< (@ 0x00000074) Promiscuous mode interrupt enable                          */
  __IOM uint32_t  PROM_CTRL;                    /*!< (@ 0x00000078) Promiscuous mode control register                          */
  __IOM uint32_t  SHAD_DATA;                    /*!< (@ 0x0000007C) Capture of current I2C data tranmitted or received         */
} I2C_SMB_Type;                                 /*!< Size = 128 (0x80)                                                         */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define I2C_SMB_CTRL_ACK_Pos              (0UL)                     /*!< ACK (Bit 0)                                           */
#define I2C_SMB_CTRL_ACK_Msk              (0x1UL)                   /*!< ACK (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CTRL_STO_Pos              (1UL)                     /*!< STO (Bit 1)                                           */
#define I2C_SMB_CTRL_STO_Msk              (0x2UL)                   /*!< STO (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CTRL_STA_Pos              (2UL)                     /*!< STA (Bit 2)                                           */
#define I2C_SMB_CTRL_STA_Msk              (0x4UL)                   /*!< STA (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CTRL_ENI_Pos              (3UL)                     /*!< ENI (Bit 3)                                           */
#define I2C_SMB_CTRL_ENI_Msk              (0x8UL)                   /*!< ENI (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CTRL_ESO_Pos              (6UL)                     /*!< ESO (Bit 6)                                           */
#define I2C_SMB_CTRL_ESO_Msk              (0x40UL)                  /*!< ESO (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CTRL_PIN_Pos              (7UL)                     /*!< PIN (Bit 7)                                           */
#define I2C_SMB_CTRL_PIN_Msk              (0x80UL)                  /*!< PIN (Bitfield-Mask: 0x01)                             */
/* ========================================================  STATUS  ========================================================= */
#define I2C_SMB_STATUS_NBB_Pos            (0UL)                     /*!< NBB (Bit 0)                                           */
#define I2C_SMB_STATUS_NBB_Msk            (0x1UL)                   /*!< NBB (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_LAB_Pos            (1UL)                     /*!< LAB (Bit 1)                                           */
#define I2C_SMB_STATUS_LAB_Msk            (0x2UL)                   /*!< LAB (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_AAS_Pos            (2UL)                     /*!< AAS (Bit 2)                                           */
#define I2C_SMB_STATUS_AAS_Msk            (0x4UL)                   /*!< AAS (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_LRB_Pos            (3UL)                     /*!< LRB (Bit 3)                                           */
#define I2C_SMB_STATUS_LRB_Msk            (0x8UL)                   /*!< LRB (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_BER_Pos            (4UL)                     /*!< BER (Bit 4)                                           */
#define I2C_SMB_STATUS_BER_Msk            (0x10UL)                  /*!< BER (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_STS_Pos            (5UL)                     /*!< STS (Bit 5)                                           */
#define I2C_SMB_STATUS_STS_Msk            (0x20UL)                  /*!< STS (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_SAD_Pos            (6UL)                     /*!< SAD (Bit 6)                                           */
#define I2C_SMB_STATUS_SAD_Msk            (0x40UL)                  /*!< SAD (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_STATUS_PIN_Pos            (7UL)                     /*!< PIN (Bit 7)                                           */
#define I2C_SMB_STATUS_PIN_Msk            (0x80UL)                  /*!< PIN (Bitfield-Mask: 0x01)                             */
/* =======================================================  OWN_ADDR  ======================================================== */
#define I2C_SMB_OWN_ADDR_OAD0_Pos         (0UL)                     /*!< OAD0 (Bit 0)                                          */
#define I2C_SMB_OWN_ADDR_OAD0_Msk         (0x7fUL)                  /*!< OAD0 (Bitfield-Mask: 0x7f)                            */
#define I2C_SMB_OWN_ADDR_OAD1_Pos         (8UL)                     /*!< OAD1 (Bit 8)                                          */
#define I2C_SMB_OWN_ADDR_OAD1_Msk         (0x7f00UL)                /*!< OAD1 (Bitfield-Mask: 0x7f)                            */
/* =========================================================  DATA  ========================================================== */
/* =========================================================  MCMD  ========================================================== */
#define I2C_SMB_MCMD_MRUN_Pos             (0UL)                     /*!< MRUN (Bit 0)                                          */
#define I2C_SMB_MCMD_MRUN_Msk             (0x1UL)                   /*!< MRUN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_MCMD_MPROCEED_Pos         (1UL)                     /*!< MPROCEED (Bit 1)                                      */
#define I2C_SMB_MCMD_MPROCEED_Msk         (0x2UL)                   /*!< MPROCEED (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_MCMD_START0_Pos           (8UL)                     /*!< START0 (Bit 8)                                        */
#define I2C_SMB_MCMD_START0_Msk           (0x100UL)                 /*!< START0 (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_MCMD_STARTN_Pos           (9UL)                     /*!< STARTN (Bit 9)                                        */
#define I2C_SMB_MCMD_STARTN_Msk           (0x200UL)                 /*!< STARTN (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_MCMD_STOP_Pos             (10UL)                    /*!< STOP (Bit 10)                                         */
#define I2C_SMB_MCMD_STOP_Msk             (0x400UL)                 /*!< STOP (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_MCMD_PEC_TERM_Pos         (11UL)                    /*!< PEC_TERM (Bit 11)                                     */
#define I2C_SMB_MCMD_PEC_TERM_Msk         (0x800UL)                 /*!< PEC_TERM (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_MCMD_READM_Pos            (12UL)                    /*!< READM (Bit 12)                                        */
#define I2C_SMB_MCMD_READM_Msk            (0x1000UL)                /*!< READM (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_MCMD_READ_PEC_Pos         (13UL)                    /*!< READ_PEC (Bit 13)                                     */
#define I2C_SMB_MCMD_READ_PEC_Msk         (0x2000UL)                /*!< READ_PEC (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_MCMD_WRCNT_LSB_Pos        (16UL)                    /*!< WRCNT_LSB (Bit 16)                                    */
#define I2C_SMB_MCMD_WRCNT_LSB_Msk        (0xff0000UL)              /*!< WRCNT_LSB (Bitfield-Mask: 0xff)                       */
#define I2C_SMB_MCMD_RDCNT_LSB_Pos        (24UL)                    /*!< RDCNT_LSB (Bit 24)                                    */
#define I2C_SMB_MCMD_RDCNT_LSB_Msk        (0xff000000UL)            /*!< RDCNT_LSB (Bitfield-Mask: 0xff)                       */
/* =========================================================  SCMD  ========================================================== */
#define I2C_SMB_SCMD_SRUN_Pos             (0UL)                     /*!< SRUN (Bit 0)                                          */
#define I2C_SMB_SCMD_SRUN_Msk             (0x1UL)                   /*!< SRUN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_SCMD_SPROCEED_Pos         (1UL)                     /*!< SPROCEED (Bit 1)                                      */
#define I2C_SMB_SCMD_SPROCEED_Msk         (0x2UL)                   /*!< SPROCEED (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_SCMD_TX_PEC_Pos           (2UL)                     /*!< TX_PEC (Bit 2)                                        */
#define I2C_SMB_SCMD_TX_PEC_Msk           (0x4UL)                   /*!< TX_PEC (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_SCMD_WRCNT_LSB_Pos        (16UL)                    /*!< WRCNT_LSB (Bit 16)                                    */
#define I2C_SMB_SCMD_WRCNT_LSB_Msk        (0xff0000UL)              /*!< WRCNT_LSB (Bitfield-Mask: 0xff)                       */
#define I2C_SMB_SCMD_RDCNT_LSB_Pos        (24UL)                    /*!< RDCNT_LSB (Bit 24)                                    */
#define I2C_SMB_SCMD_RDCNT_LSB_Msk        (0xff000000UL)            /*!< RDCNT_LSB (Bitfield-Mask: 0xff)                       */
/* ==========================================================  PEC  ========================================================== */
/* =========================================================  RSHT  ========================================================== */
/* ========================================================  EXTLEN  ========================================================= */
#define I2C_SMB_EXTLEN_WRCNT_MSB_Pos      (0UL)                     /*!< WRCNT_MSB (Bit 0)                                     */
#define I2C_SMB_EXTLEN_WRCNT_MSB_Msk      (0xffUL)                  /*!< WRCNT_MSB (Bitfield-Mask: 0xff)                       */
#define I2C_SMB_EXTLEN_RDCNT_MSB_Pos      (8UL)                     /*!< RDCNT_MSB (Bit 8)                                     */
#define I2C_SMB_EXTLEN_RDCNT_MSB_Msk      (0xff00UL)                /*!< RDCNT_MSB (Bitfield-Mask: 0xff)                       */
/* =========================================================  COMPL  ========================================================= */
#define I2C_SMB_COMPL_DTEN_Pos            (2UL)                     /*!< DTEN (Bit 2)                                          */
#define I2C_SMB_COMPL_DTEN_Msk            (0x4UL)                   /*!< DTEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_MCEN_Pos            (3UL)                     /*!< MCEN (Bit 3)                                          */
#define I2C_SMB_COMPL_MCEN_Msk            (0x8UL)                   /*!< MCEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_SCEN_Pos            (4UL)                     /*!< SCEN (Bit 4)                                          */
#define I2C_SMB_COMPL_SCEN_Msk            (0x10UL)                  /*!< SCEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_BIDEN_Pos           (5UL)                     /*!< BIDEN (Bit 5)                                         */
#define I2C_SMB_COMPL_BIDEN_Msk           (0x20UL)                  /*!< BIDEN (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_TIMERR_Pos          (6UL)                     /*!< TIMERR (Bit 6)                                        */
#define I2C_SMB_COMPL_TIMERR_Msk          (0x40UL)                  /*!< TIMERR (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_COMPL_DTO_Pos             (8UL)                     /*!< DTO (Bit 8)                                           */
#define I2C_SMB_COMPL_DTO_Msk             (0x100UL)                 /*!< DTO (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_COMPL_MCTO_Pos            (9UL)                     /*!< MCTO (Bit 9)                                          */
#define I2C_SMB_COMPL_MCTO_Msk            (0x200UL)                 /*!< MCTO (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_SCTO_Pos            (10UL)                    /*!< SCTO (Bit 10)                                         */
#define I2C_SMB_COMPL_SCTO_Msk            (0x400UL)                 /*!< SCTO (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_CHDL_Pos            (11UL)                    /*!< CHDL (Bit 11)                                         */
#define I2C_SMB_COMPL_CHDL_Msk            (0x800UL)                 /*!< CHDL (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_CHDH_Pos            (12UL)                    /*!< CHDH (Bit 12)                                         */
#define I2C_SMB_COMPL_CHDH_Msk            (0x1000UL)                /*!< CHDH (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_BUSERR_Pos          (13UL)                    /*!< BUSERR (Bit 13)                                       */
#define I2C_SMB_COMPL_BUSERR_Msk          (0x2000UL)                /*!< BUSERR (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_COMPL_LABSTS_Pos          (14UL)                    /*!< LABSTS (Bit 14)                                       */
#define I2C_SMB_COMPL_LABSTS_Msk          (0x4000UL)                /*!< LABSTS (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_COMPL_SNAKR_Pos           (16UL)                    /*!< SNAKR (Bit 16)                                        */
#define I2C_SMB_COMPL_SNAKR_Msk           (0x10000UL)               /*!< SNAKR (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_STR_Pos             (17UL)                    /*!< STR (Bit 17)                                          */
#define I2C_SMB_COMPL_STR_Msk             (0x20000UL)               /*!< STR (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_COMPL_SPROT_Pos           (19UL)                    /*!< SPROT (Bit 19)                                        */
#define I2C_SMB_COMPL_SPROT_Msk           (0x80000UL)               /*!< SPROT (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_RPTRD_Pos           (20UL)                    /*!< RPTRD (Bit 20)                                        */
#define I2C_SMB_COMPL_RPTRD_Msk           (0x100000UL)              /*!< RPTRD (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_RPTWR_Pos           (21UL)                    /*!< RPTWR (Bit 21)                                        */
#define I2C_SMB_COMPL_RPTWR_Msk           (0x200000UL)              /*!< RPTWR (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_MNAKX_Pos           (24UL)                    /*!< MNAKX (Bit 24)                                        */
#define I2C_SMB_COMPL_MNAKX_Msk           (0x1000000UL)             /*!< MNAKX (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_MTR_Pos             (25UL)                    /*!< MTR (Bit 25)                                          */
#define I2C_SMB_COMPL_MTR_Msk             (0x2000000UL)             /*!< MTR (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_COMPL_IDLE_Pos            (29UL)                    /*!< IDLE (Bit 29)                                         */
#define I2C_SMB_COMPL_IDLE_Msk            (0x20000000UL)            /*!< IDLE (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_COMPL_MDONE_Pos           (30UL)                    /*!< MDONE (Bit 30)                                        */
#define I2C_SMB_COMPL_MDONE_Msk           (0x40000000UL)            /*!< MDONE (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_COMPL_SDONE_Pos           (31UL)                    /*!< SDONE (Bit 31)                                        */
#define I2C_SMB_COMPL_SDONE_Msk           (0x80000000UL)            /*!< SDONE (Bitfield-Mask: 0x01)                           */
/* ========================================================  IDLESC  ========================================================= */
#define I2C_SMB_IDLESC_FBIM_Pos           (0UL)                     /*!< FBIM (Bit 0)                                          */
#define I2C_SMB_IDLESC_FBIM_Msk           (0xfffUL)                 /*!< FBIM (Bitfield-Mask: 0xfff)                           */
#define I2C_SMB_IDLESC_FIDLY_Pos          (16UL)                    /*!< FIDLY (Bit 16)                                        */
#define I2C_SMB_IDLESC_FIDLY_Msk          (0xfff0000UL)             /*!< FIDLY (Bitfield-Mask: 0xfff)                          */
/* ========================================================  CONFIG  ========================================================= */
#define I2C_SMB_CONFIG_PORT_SEL_Pos       (0UL)                     /*!< PORT_SEL (Bit 0)                                      */
#define I2C_SMB_CONFIG_PORT_SEL_Msk       (0xfUL)                   /*!< PORT_SEL (Bitfield-Mask: 0x0f)                        */
#define I2C_SMB_CONFIG_TCEN_Pos           (4UL)                     /*!< TCEN (Bit 4)                                          */
#define I2C_SMB_CONFIG_TCEN_Msk           (0x10UL)                  /*!< TCEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_CONFIG_SLOW_CLK_Pos       (5UL)                     /*!< SLOW_CLK (Bit 5)                                      */
#define I2C_SMB_CONFIG_SLOW_CLK_Msk       (0x20UL)                  /*!< SLOW_CLK (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_CONFIG_PCEN_Pos           (7UL)                     /*!< PCEN (Bit 7)                                          */
#define I2C_SMB_CONFIG_PCEN_Msk           (0x80UL)                  /*!< PCEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_CONFIG_FEN_Pos            (8UL)                     /*!< FEN (Bit 8)                                           */
#define I2C_SMB_CONFIG_FEN_Msk            (0x100UL)                 /*!< FEN (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CONFIG_RESET_Pos          (9UL)                     /*!< RESET (Bit 9)                                         */
#define I2C_SMB_CONFIG_RESET_Msk          (0x200UL)                 /*!< RESET (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_CONFIG_ENAB_Pos           (10UL)                    /*!< ENAB (Bit 10)                                         */
#define I2C_SMB_CONFIG_ENAB_Msk           (0x400UL)                 /*!< ENAB (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_CONFIG_DSA_Pos            (11UL)                    /*!< DSA (Bit 11)                                          */
#define I2C_SMB_CONFIG_DSA_Msk            (0x800UL)                 /*!< DSA (Bitfield-Mask: 0x01)                             */
#define I2C_SMB_CONFIG_MCTP_FEN_Pos       (12UL)                    /*!< MCTP_FEN (Bit 12)                                     */
#define I2C_SMB_CONFIG_MCTP_FEN_Msk       (0x1000UL)                /*!< MCTP_FEN (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_CONFIG_GC_DIS_Pos         (14UL)                    /*!< GC_DIS (Bit 14)                                       */
#define I2C_SMB_CONFIG_GC_DIS_Msk         (0x4000UL)                /*!< GC_DIS (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_CONFIG_PROMEN_Pos         (15UL)                    /*!< PROMEN (Bit 15)                                       */
#define I2C_SMB_CONFIG_PROMEN_Msk         (0x8000UL)                /*!< PROMEN (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_CONFIG_FLUSH_DTXB_Pos     (16UL)                    /*!< FLUSH_DTXB (Bit 16)                                   */
#define I2C_SMB_CONFIG_FLUSH_DTXB_Msk     (0x10000UL)               /*!< FLUSH_DTXB (Bitfield-Mask: 0x01)                      */
#define I2C_SMB_CONFIG_FLUSH_DRXB_Pos     (17UL)                    /*!< FLUSH_DRXB (Bit 17)                                   */
#define I2C_SMB_CONFIG_FLUSH_DRXB_Msk     (0x20000UL)               /*!< FLUSH_DRXB (Bitfield-Mask: 0x01)                      */
#define I2C_SMB_CONFIG_FLUSH_CTXB_Pos     (18UL)                    /*!< FLUSH_CTXB (Bit 18)                                   */
#define I2C_SMB_CONFIG_FLUSH_CTXB_Msk     (0x40000UL)               /*!< FLUSH_CTXB (Bitfield-Mask: 0x01)                      */
#define I2C_SMB_CONFIG_FLUSH_CRXB_Pos     (19UL)                    /*!< FLUSH_CRXB (Bit 19)                                   */
#define I2C_SMB_CONFIG_FLUSH_CRXB_Msk     (0x80000UL)               /*!< FLUSH_CRXB (Bitfield-Mask: 0x01)                      */
#define I2C_SMB_CONFIG_ENI_AAS_Pos        (28UL)                    /*!< ENI_AAS (Bit 28)                                      */
#define I2C_SMB_CONFIG_ENI_AAS_Msk        (0x10000000UL)            /*!< ENI_AAS (Bitfield-Mask: 0x01)                         */
#define I2C_SMB_CONFIG_ENI_IDLE_Pos       (29UL)                    /*!< ENI_IDLE (Bit 29)                                     */
#define I2C_SMB_CONFIG_ENI_IDLE_Msk       (0x20000000UL)            /*!< ENI_IDLE (Bitfield-Mask: 0x01)                        */
#define I2C_SMB_CONFIG_ENMI_Pos           (30UL)                    /*!< ENMI (Bit 30)                                         */
#define I2C_SMB_CONFIG_ENMI_Msk           (0x40000000UL)            /*!< ENMI (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_CONFIG_ENSI_Pos           (31UL)                    /*!< ENSI (Bit 31)                                         */
#define I2C_SMB_CONFIG_ENSI_Msk           (0x80000000UL)            /*!< ENSI (Bitfield-Mask: 0x01)                            */
/* ========================================================  BUSCLK  ========================================================= */
#define I2C_SMB_BUSCLK_LOPER_Pos          (0UL)                     /*!< LOPER (Bit 0)                                         */
#define I2C_SMB_BUSCLK_LOPER_Msk          (0xffUL)                  /*!< LOPER (Bitfield-Mask: 0xff)                           */
#define I2C_SMB_BUSCLK_HIPER_Pos          (8UL)                     /*!< HIPER (Bit 8)                                         */
#define I2C_SMB_BUSCLK_HIPER_Msk          (0xff00UL)                /*!< HIPER (Bitfield-Mask: 0xff)                           */
/* =========================================================  BLKID  ========================================================= */
/* ========================================================  BLKREV  ========================================================= */
/* ========================================================  BBCTRL  ========================================================= */
#define I2C_SMB_BBCTRL_BBEN_Pos           (0UL)                     /*!< BBEN (Bit 0)                                          */
#define I2C_SMB_BBCTRL_BBEN_Msk           (0x1UL)                   /*!< BBEN (Bitfield-Mask: 0x01)                            */
#define I2C_SMB_BBCTRL_CLDIR_Pos          (1UL)                     /*!< CLDIR (Bit 1)                                         */
#define I2C_SMB_BBCTRL_CLDIR_Msk          (0x2UL)                   /*!< CLDIR (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_BBCTRL_DADIR_Pos          (2UL)                     /*!< DADIR (Bit 2)                                         */
#define I2C_SMB_BBCTRL_DADIR_Msk          (0x4UL)                   /*!< DADIR (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_BBCTRL_BBCLK_Pos          (3UL)                     /*!< BBCLK (Bit 3)                                         */
#define I2C_SMB_BBCTRL_BBCLK_Msk          (0x8UL)                   /*!< BBCLK (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_BBCTRL_BBDAT_Pos          (4UL)                     /*!< BBDAT (Bit 4)                                         */
#define I2C_SMB_BBCTRL_BBDAT_Msk          (0x10UL)                  /*!< BBDAT (Bitfield-Mask: 0x01)                           */
#define I2C_SMB_BBCTRL_BBCLKI_Pos         (5UL)                     /*!< BBCLKI (Bit 5)                                        */
#define I2C_SMB_BBCTRL_BBCLKI_Msk         (0x20UL)                  /*!< BBCLKI (Bitfield-Mask: 0x01)                          */
#define I2C_SMB_BBCTRL_BBDATI_Pos         (6UL)                     /*!< BBDATI (Bit 6)                                        */
#define I2C_SMB_BBCTRL_BBDATI_Msk         (0x40UL)                  /*!< BBDATI (Bitfield-Mask: 0x01)                          */
/* ========================================================  MCHPR3C  ======================================================== */
/* ========================================================  DATATM  ========================================================= */
#define I2C_SMB_DATATM_DHOLD_Pos          (0UL)                     /*!< DHOLD (Bit 0)                                         */
#define I2C_SMB_DATATM_DHOLD_Msk          (0xffUL)                  /*!< DHOLD (Bitfield-Mask: 0xff)                           */
#define I2C_SMB_DATATM_RSS_Pos            (8UL)                     /*!< RSS (Bit 8)                                           */
#define I2C_SMB_DATATM_RSS_Msk            (0xff00UL)                /*!< RSS (Bitfield-Mask: 0xff)                             */
#define I2C_SMB_DATATM_STPS_Pos           (16UL)                    /*!< STPS (Bit 16)                                         */
#define I2C_SMB_DATATM_STPS_Msk           (0xff0000UL)              /*!< STPS (Bitfield-Mask: 0xff)                            */
#define I2C_SMB_DATATM_FSHLD_Pos          (24UL)                    /*!< FSHLD (Bit 24)                                        */
#define I2C_SMB_DATATM_FSHLD_Msk          (0xff000000UL)            /*!< FSHLD (Bitfield-Mask: 0xff)                           */
/* ========================================================  TMOUTSC  ======================================================== */
#define I2C_SMB_TMOUTSC_CHTO_Pos          (0UL)                     /*!< CHTO (Bit 0)                                          */
#define I2C_SMB_TMOUTSC_CHTO_Msk          (0xffUL)                  /*!< CHTO (Bitfield-Mask: 0xff)                            */
#define I2C_SMB_TMOUTSC_DCTO_Pos          (8UL)                     /*!< DCTO (Bit 8)                                          */
#define I2C_SMB_TMOUTSC_DCTO_Msk          (0xff00UL)                /*!< DCTO (Bitfield-Mask: 0xff)                            */
#define I2C_SMB_TMOUTSC_CCTO_Pos          (16UL)                    /*!< CCTO (Bit 16)                                         */
#define I2C_SMB_TMOUTSC_CCTO_Msk          (0xff0000UL)              /*!< CCTO (Bitfield-Mask: 0xff)                            */
#define I2C_SMB_TMOUTSC_BIMIN_Pos         (24UL)                    /*!< BIMIN (Bit 24)                                        */
#define I2C_SMB_TMOUTSC_BIMIN_Msk         (0xff000000UL)            /*!< BIMIN (Bitfield-Mask: 0xff)                           */
/* =========================================================  DTXB  ========================================================== */
/* =========================================================  DRXB  ========================================================== */
/* =========================================================  CTXB  ========================================================== */
/* =========================================================  CRXB  ========================================================== */
/* ========================================================  FSM_I2C  ======================================================== */
#define I2C_SMB_FSM_I2C_CM_STATE_Pos      (0UL)                     /*!< CM_STATE (Bit 0)                                      */
#define I2C_SMB_FSM_I2C_CM_STATE_Msk      (0xffUL)                  /*!< CM_STATE (Bitfield-Mask: 0xff)                        */
#define I2C_SMB_FSM_I2C_TM_STATE_Pos      (8UL)                     /*!< TM_STATE (Bit 8)                                      */
#define I2C_SMB_FSM_I2C_TM_STATE_Msk      (0xff00UL)                /*!< TM_STATE (Bitfield-Mask: 0xff)                        */
#define I2C_SMB_FSM_I2C_PHY_STATE_Pos     (16UL)                    /*!< PHY_STATE (Bit 16)                                    */
#define I2C_SMB_FSM_I2C_PHY_STATE_Msk     (0xf0000UL)               /*!< PHY_STATE (Bitfield-Mask: 0x0f)                       */
#define I2C_SMB_FSM_I2C_CM_CTO_Pos        (20UL)                    /*!< CM_CTO (Bit 20)                                       */
#define I2C_SMB_FSM_I2C_CM_CTO_Msk        (0xf00000UL)              /*!< CM_CTO (Bitfield-Mask: 0x0f)                          */
#define I2C_SMB_FSM_I2C_TM_CTO_Pos        (24UL)                    /*!< TM_CTO (Bit 24)                                       */
#define I2C_SMB_FSM_I2C_TM_CTO_Msk        (0x1f000000UL)            /*!< TM_CTO (Bitfield-Mask: 0x1f)                          */
#define I2C_SMB_FSM_I2C_CM_BI_Pos         (29UL)                    /*!< CM_BI (Bit 29)                                        */
#define I2C_SMB_FSM_I2C_CM_BI_Msk         (0xe0000000UL)            /*!< CM_BI (Bitfield-Mask: 0x07)                           */
/* ========================================================  FSM_SNL  ======================================================== */
#define I2C_SMB_FSM_SNL_CM_STATE_Pos      (0UL)                     /*!< CM_STATE (Bit 0)                                      */
#define I2C_SMB_FSM_SNL_CM_STATE_Msk      (0xffUL)                  /*!< CM_STATE (Bitfield-Mask: 0xff)                        */
#define I2C_SMB_FSM_SNL_TM_STATE_Pos      (8UL)                     /*!< TM_STATE (Bit 8)                                      */
#define I2C_SMB_FSM_SNL_TM_STATE_Msk      (0xff00UL)                /*!< TM_STATE (Bitfield-Mask: 0xff)                        */
#define I2C_SMB_FSM_SNL_MCTP_FAIR_Pos     (16UL)                    /*!< MCTP_FAIR (Bit 16)                                    */
#define I2C_SMB_FSM_SNL_MCTP_FAIR_Msk     (0xff0000UL)              /*!< MCTP_FAIR (Bitfield-Mask: 0xff)                       */
/* =======================================================  WAKE_STS  ======================================================== */
#define I2C_SMB_WAKE_STS_START_DET_Pos    (0UL)                     /*!< START_DET (Bit 0)                                     */
#define I2C_SMB_WAKE_STS_START_DET_Msk    (0x1UL)                   /*!< START_DET (Bitfield-Mask: 0x01)                       */
/* ========================================================  WAKE_EN  ======================================================== */
#define I2C_SMB_WAKE_EN_START_DET_Pos     (0UL)                     /*!< START_DET (Bit 0)                                     */
#define I2C_SMB_WAKE_EN_START_DET_Msk     (0x1UL)                   /*!< START_DET (Bitfield-Mask: 0x01)                       */
/* ======================================================  FAST_RSYNC  ======================================================= */
/* =======================================================  SHAD_ADDR  ======================================================= */
/* =======================================================  PROM_ARS  ======================================================== */
#define I2C_SMB_PROM_ARS_ARSTS_Pos        (0UL)                     /*!< ARSTS (Bit 0)                                         */
#define I2C_SMB_PROM_ARS_ARSTS_Msk        (0x1UL)                   /*!< ARSTS (Bitfield-Mask: 0x01)                           */
/* =======================================================  PROM_IEN  ======================================================== */
#define I2C_SMB_PROM_IEN_ARI_Pos          (0UL)                     /*!< ARI (Bit 0)                                           */
#define I2C_SMB_PROM_IEN_ARI_Msk          (0x1UL)                   /*!< ARI (Bitfield-Mask: 0x01)                             */
/* =======================================================  PROM_CTRL  ======================================================= */
#define I2C_SMB_PROM_CTRL_ARACK_Pos       (0UL)                     /*!< ARACK (Bit 0)                                         */
#define I2C_SMB_PROM_CTRL_ARACK_Msk       (0x1UL)                   /*!< ARACK (Bitfield-Mask: 0x01)                           */
/* =======================================================  SHAD_DATA  ======================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  I2C_SMB0 CTRL ACK [0..0]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_ACK                                                         */
  I2C_SMB0_CTRL_ACK_EN                 = 1,     /*!< EN : Generate ACK for addresses matching OWN addresses                    */
} I2C_SMB0_CTRL_ACK_Enum;

/* ===============================================  I2C_SMB0 CTRL STO [1..1]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_STO                                                         */
  I2C_SMB0_CTRL_STO_EN                 = 1,     /*!< EN : Generate I2C STOP                                                    */
} I2C_SMB0_CTRL_STO_Enum;

/* ===============================================  I2C_SMB0 CTRL STA [2..2]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_STA                                                         */
  I2C_SMB0_CTRL_STA_EN                 = 1,     /*!< EN : Generate I2C START                                                   */
} I2C_SMB0_CTRL_STA_Enum;

/* ===============================================  I2C_SMB0 CTRL ENI [3..3]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_ENI                                                         */
  I2C_SMB0_CTRL_ENI_EN                 = 1,     /*!< EN : Enable interrupt when PIN bit asserts(active low)                    */
} I2C_SMB0_CTRL_ENI_Enum;

/* ===============================================  I2C_SMB0 CTRL ESO [6..6]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_ESO                                                         */
  I2C_SMB0_CTRL_ESO_EN                 = 1,     /*!< EN : Enable SDA pin output                                                */
} I2C_SMB0_CTRL_ESO_Enum;

/* ===============================================  I2C_SMB0 CTRL PIN [7..7]  ================================================ */
typedef enum {                                  /*!< I2C_SMB0_CTRL_PIN                                                         */
  I2C_SMB0_CTRL_PIN_EN                 = 1,     /*!< EN : Clear I2C status except NBB                                          */
} I2C_SMB0_CTRL_PIN_Enum;

/* ========================================================  STATUS  ========================================================= */
/* ==============================================  I2C_SMB0 STATUS NBB [0..0]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_NBB                                                       */
  I2C_SMB0_STATUS_NBB_ACTIVE           = 1,     /*!< ACTIVE : Not Bus Busy is active                                           */
} I2C_SMB0_STATUS_NBB_Enum;

/* ==============================================  I2C_SMB0 STATUS LAB [1..1]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_LAB                                                       */
  I2C_SMB0_STATUS_LAB_ACTIVE           = 1,     /*!< ACTIVE : Lost bus arbitration status is active                            */
} I2C_SMB0_STATUS_LAB_Enum;

/* ==============================================  I2C_SMB0 STATUS AAS [2..2]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_AAS                                                       */
  I2C_SMB0_STATUS_AAS_ACTIVE           = 1,     /*!< ACTIVE : Addresses as device status is active                             */
} I2C_SMB0_STATUS_AAS_Enum;

/* ==============================================  I2C_SMB0 STATUS LRB [3..3]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_LRB                                                       */
  I2C_SMB0_STATUS_LRB_HI               = 1,     /*!< HI : Last receive state is High                                           */
} I2C_SMB0_STATUS_LRB_Enum;

/* ==============================================  I2C_SMB0 STATUS BER [4..4]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_BER                                                       */
  I2C_SMB0_STATUS_BER_ACTIVE           = 1,     /*!< ACTIVE : Bus Error status is active                                       */
} I2C_SMB0_STATUS_BER_Enum;

/* ==============================================  I2C_SMB0 STATUS STS [5..5]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_STS                                                       */
  I2C_SMB0_STATUS_STS_ACTIVE           = 1,     /*!< ACTIVE : Externally generated STOP detected status is active              */
} I2C_SMB0_STATUS_STS_Enum;

/* ==============================================  I2C_SMB0 STATUS SAD [6..6]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_SAD                                                       */
  I2C_SMB0_STATUS_SAD_ACTIVE           = 1,     /*!< ACTIVE : SMBus address detected                                           */
} I2C_SMB0_STATUS_SAD_Enum;

/* ==============================================  I2C_SMB0 STATUS PIN [7..7]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_STATUS_PIN                                                       */
  I2C_SMB0_STATUS_PIN_nACTIVE          = 1,     /*!< nACTIVE : Pending Interrupt is not active                                 */
} I2C_SMB0_STATUS_PIN_Enum;

/* =======================================================  OWN_ADDR  ======================================================== */
/* =========================================================  DATA  ========================================================== */
/* =========================================================  MCMD  ========================================================== */
/* ===============================================  I2C_SMB0 MCMD MRUN [0..0]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_MCMD_MRUN                                                        */
  I2C_SMB0_MCMD_MRUN_START             = 1,     /*!< START : Start controller mode network layer operation                     */
} I2C_SMB0_MCMD_MRUN_Enum;

/* =============================================  I2C_SMB0 MCMD MPROCEED [1..1]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_MCMD_MPROCEED                                                    */
  I2C_SMB0_MCMD_MPROCEED_ON            = 1,     /*!< ON : Inform network layer FW has finished re-configure and HW
                                                     can continue                                                              */
} I2C_SMB0_MCMD_MPROCEED_Enum;

/* ==============================================  I2C_SMB0 MCMD START0 [8..8]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_MCMD_START0                                                      */
  I2C_SMB0_MCMD_START0_EN              = 1,     /*!< EN : Generate an I2C START when operation first initiated                 */
} I2C_SMB0_MCMD_START0_Enum;

/* ==============================================  I2C_SMB0 MCMD STARTN [9..9]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_MCMD_STARTN                                                      */
  I2C_SMB0_MCMD_STARTN_EN              = 1,     /*!< EN : Generate an I2C START before last byte of write count                */
} I2C_SMB0_MCMD_STARTN_Enum;

/* ==============================================  I2C_SMB0 MCMD STOP [10..10]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_MCMD_STOP                                                        */
  I2C_SMB0_MCMD_STOP_EN                = 1,     /*!< EN : Generate an I2C STOP after write and read counts are both
                                                     0                                                                         */
} I2C_SMB0_MCMD_STOP_Enum;

/* ============================================  I2C_SMB0 MCMD PEC_TERM [11..11]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_MCMD_PEC_TERM                                                    */
  I2C_SMB0_MCMD_PEC_TERM_EN            = 1,     /*!< EN : Transmit PEC after write data is transmitted                         */
} I2C_SMB0_MCMD_PEC_TERM_Enum;

/* =============================================  I2C_SMB0 MCMD READM [12..12]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_MCMD_READM                                                       */
  I2C_SMB0_MCMD_READM_EN               = 1,     /*!< EN : Update read count with last read data value                          */
} I2C_SMB0_MCMD_READM_Enum;

/* ============================================  I2C_SMB0 MCMD READ_PEC [13..13]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_MCMD_READ_PEC                                                    */
  I2C_SMB0_MCMD_READ_PEC_EN            = 1,     /*!< EN : Read PEC byte from external device when read count reaches
                                                     0                                                                         */
} I2C_SMB0_MCMD_READ_PEC_Enum;

/* =========================================================  SCMD  ========================================================== */
/* ===============================================  I2C_SMB0 SCMD SRUN [0..0]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_SCMD_SRUN                                                        */
  I2C_SMB0_SCMD_SRUN_START             = 1,     /*!< START : Start device mode network layer operation                         */
} I2C_SMB0_SCMD_SRUN_Enum;

/* =============================================  I2C_SMB0 SCMD SPROCEED [1..1]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_SCMD_SPROCEED                                                    */
  I2C_SMB0_SCMD_SPROCEED_ON            = 1,     /*!< ON : Inform network layer FW has finished re-configure and HW
                                                     can continue                                                              */
} I2C_SMB0_SCMD_SPROCEED_Enum;

/* ==============================================  I2C_SMB0 SCMD TX_PEC [2..2]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_SCMD_TX_PEC                                                      */
  I2C_SMB0_SCMD_TX_PEC_EN              = 1,     /*!< EN : Transmit PEC after all write data is transmitted                     */
} I2C_SMB0_SCMD_TX_PEC_Enum;

/* ==========================================================  PEC  ========================================================== */
/* =========================================================  RSHT  ========================================================== */
/* ========================================================  EXTLEN  ========================================================= */
/* =========================================================  COMPL  ========================================================= */
/* ==============================================  I2C_SMB0 COMPL DTEN [2..2]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_DTEN                                                       */
  I2C_SMB0_COMPL_DTEN_ON               = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_COMPL_DTEN_Enum;

/* ==============================================  I2C_SMB0 COMPL MCEN [3..3]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_MCEN                                                       */
  I2C_SMB0_COMPL_MCEN_ON               = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_COMPL_MCEN_Enum;

/* ==============================================  I2C_SMB0 COMPL SCEN [4..4]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_SCEN                                                       */
  I2C_SMB0_COMPL_SCEN_ON               = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_COMPL_SCEN_Enum;

/* ==============================================  I2C_SMB0 COMPL BIDEN [5..5]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_BIDEN                                                      */
  I2C_SMB0_COMPL_BIDEN_ON              = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_COMPL_BIDEN_Enum;

/* =============================================  I2C_SMB0 COMPL TIMERR [6..6]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_TIMERR                                                     */
  I2C_SMB0_COMPL_TIMERR_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_TIMERR_Enum;

/* ===============================================  I2C_SMB0 COMPL DTO [8..8]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_DTO                                                        */
  I2C_SMB0_COMPL_DTO_ACTIVE            = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_DTO_Enum;

/* ==============================================  I2C_SMB0 COMPL MCTO [9..9]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_MCTO                                                       */
  I2C_SMB0_COMPL_MCTO_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_MCTO_Enum;

/* =============================================  I2C_SMB0 COMPL SCTO [10..10]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_SCTO                                                       */
  I2C_SMB0_COMPL_SCTO_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_SCTO_Enum;

/* =============================================  I2C_SMB0 COMPL CHDL [11..11]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_CHDL                                                       */
  I2C_SMB0_COMPL_CHDL_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_CHDL_Enum;

/* =============================================  I2C_SMB0 COMPL CHDH [12..12]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_CHDH                                                       */
  I2C_SMB0_COMPL_CHDH_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_CHDH_Enum;

/* ============================================  I2C_SMB0 COMPL BUSERR [13..13]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_BUSERR                                                     */
  I2C_SMB0_COMPL_BUSERR_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_BUSERR_Enum;

/* ============================================  I2C_SMB0 COMPL LABSTS [14..14]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_LABSTS                                                     */
  I2C_SMB0_COMPL_LABSTS_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_LABSTS_Enum;

/* =============================================  I2C_SMB0 COMPL SNAKR [16..16]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_SNAKR                                                      */
  I2C_SMB0_COMPL_SNAKR_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_SNAKR_Enum;

/* ==============================================  I2C_SMB0 COMPL STR [17..17]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_STR                                                        */
  I2C_SMB0_COMPL_STR_ACTIVE            = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_STR_Enum;

/* =============================================  I2C_SMB0 COMPL SPROT [19..19]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_SPROT                                                      */
  I2C_SMB0_COMPL_SPROT_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_SPROT_Enum;

/* =============================================  I2C_SMB0 COMPL RPTRD [20..20]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_RPTRD                                                      */
  I2C_SMB0_COMPL_RPTRD_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_RPTRD_Enum;

/* =============================================  I2C_SMB0 COMPL RPTWR [21..21]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_RPTWR                                                      */
  I2C_SMB0_COMPL_RPTWR_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_RPTWR_Enum;

/* =============================================  I2C_SMB0 COMPL MNAKX [24..24]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_MNAKX                                                      */
  I2C_SMB0_COMPL_MNAKX_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_MNAKX_Enum;

/* ==============================================  I2C_SMB0 COMPL MTR [25..25]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_MTR                                                        */
  I2C_SMB0_COMPL_MTR_ACTIVE            = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_MTR_Enum;

/* =============================================  I2C_SMB0 COMPL IDLE [29..29]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_COMPL_IDLE                                                       */
  I2C_SMB0_COMPL_IDLE_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_IDLE_Enum;

/* =============================================  I2C_SMB0 COMPL MDONE [30..30]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_MDONE                                                      */
  I2C_SMB0_COMPL_MDONE_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_MDONE_Enum;

/* =============================================  I2C_SMB0 COMPL SDONE [31..31]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_COMPL_SDONE                                                      */
  I2C_SMB0_COMPL_SDONE_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} I2C_SMB0_COMPL_SDONE_Enum;

/* ========================================================  IDLESC  ========================================================= */
/* ========================================================  CONFIG  ========================================================= */
/* ============================================  I2C_SMB0 CONFIG PORT_SEL [0..3]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_PORT_SEL                                                  */
  I2C_SMB0_CONFIG_PORT_SEL_P0          = 0,     /*!< P0 : Port 0                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P1          = 1,     /*!< P1 : Port 1                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P2          = 2,     /*!< P2 : Port 2                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P3          = 3,     /*!< P3 : Port 3                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P4          = 4,     /*!< P4 : Port 4                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P5          = 5,     /*!< P5 : Port 5                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P6          = 6,     /*!< P6 : Port 6                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P7          = 7,     /*!< P7 : Port 7                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P8          = 8,     /*!< P8 : Port 8                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P9          = 9,     /*!< P9 : Port 9                                                               */
  I2C_SMB0_CONFIG_PORT_SEL_P10         = 10,    /*!< P10 : Port 10                                                             */
  I2C_SMB0_CONFIG_PORT_SEL_P11         = 11,    /*!< P11 : Port 11                                                             */
  I2C_SMB0_CONFIG_PORT_SEL_P12         = 12,    /*!< P12 : Port 12                                                             */
  I2C_SMB0_CONFIG_PORT_SEL_P13         = 13,    /*!< P13 : Port 13                                                             */
  I2C_SMB0_CONFIG_PORT_SEL_P14         = 14,    /*!< P14 : Port 14                                                             */
  I2C_SMB0_CONFIG_PORT_SEL_P15         = 15,    /*!< P15 : Port 15                                                             */
} I2C_SMB0_CONFIG_PORT_SEL_Enum;

/* ==============================================  I2C_SMB0 CONFIG TCEN [4..4]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_TCEN                                                      */
  I2C_SMB0_CONFIG_TCEN_ON              = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_TCEN_Enum;

/* ============================================  I2C_SMB0 CONFIG SLOW_CLK [5..5]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_SLOW_CLK                                                  */
  I2C_SMB0_CONFIG_SLOW_CLK_EN          = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_SLOW_CLK_Enum;

/* ==============================================  I2C_SMB0 CONFIG PCEN [7..7]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_PCEN                                                      */
  I2C_SMB0_CONFIG_PCEN_ON              = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_PCEN_Enum;

/* ==============================================  I2C_SMB0 CONFIG FEN [8..8]  =============================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_FEN                                                       */
  I2C_SMB0_CONFIG_FEN_ON               = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_FEN_Enum;

/* =============================================  I2C_SMB0 CONFIG RESET [9..9]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_RESET                                                     */
  I2C_SMB0_CONFIG_RESET_EN             = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_RESET_Enum;

/* =============================================  I2C_SMB0 CONFIG ENAB [10..10]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_ENAB                                                      */
  I2C_SMB0_CONFIG_ENAB_ON              = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_ENAB_Enum;

/* =============================================  I2C_SMB0 CONFIG DSA [11..11]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_DSA                                                       */
  I2C_SMB0_CONFIG_DSA_EN               = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_DSA_Enum;

/* ===========================================  I2C_SMB0 CONFIG MCTP_FEN [12..12]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_MCTP_FEN                                                  */
  I2C_SMB0_CONFIG_MCTP_FEN_ON          = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_MCTP_FEN_Enum;

/* ============================================  I2C_SMB0 CONFIG GC_DIS [14..14]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_GC_DIS                                                    */
  I2C_SMB0_CONFIG_GC_DIS_ON            = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_GC_DIS_Enum;

/* ============================================  I2C_SMB0 CONFIG PROMEN [15..15]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_PROMEN                                                    */
  I2C_SMB0_CONFIG_PROMEN_ON            = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_CONFIG_PROMEN_Enum;

/* ==========================================  I2C_SMB0 CONFIG FLUSH_DTXB [16..16]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_FLUSH_DTXB                                                */
  I2C_SMB0_CONFIG_FLUSH_DTXB_EN        = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_FLUSH_DTXB_Enum;

/* ==========================================  I2C_SMB0 CONFIG FLUSH_DRXB [17..17]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_FLUSH_DRXB                                                */
  I2C_SMB0_CONFIG_FLUSH_DRXB_EN        = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_FLUSH_DRXB_Enum;

/* ==========================================  I2C_SMB0 CONFIG FLUSH_CTXB [18..18]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_FLUSH_CTXB                                                */
  I2C_SMB0_CONFIG_FLUSH_CTXB_EN        = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_FLUSH_CTXB_Enum;

/* ==========================================  I2C_SMB0 CONFIG FLUSH_CRXB [19..19]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_FLUSH_CRXB                                                */
  I2C_SMB0_CONFIG_FLUSH_CRXB_EN        = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_FLUSH_CRXB_Enum;

/* ===========================================  I2C_SMB0 CONFIG ENI_AAS [28..28]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_ENI_AAS                                                   */
  I2C_SMB0_CONFIG_ENI_AAS_EN           = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_ENI_AAS_Enum;

/* ===========================================  I2C_SMB0 CONFIG ENI_IDLE [29..29]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_ENI_IDLE                                                  */
  I2C_SMB0_CONFIG_ENI_IDLE_EN          = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_ENI_IDLE_Enum;

/* =============================================  I2C_SMB0 CONFIG ENMI [30..30]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_ENMI                                                      */
  I2C_SMB0_CONFIG_ENMI_EN              = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_ENMI_Enum;

/* =============================================  I2C_SMB0 CONFIG ENSI [31..31]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_CONFIG_ENSI                                                      */
  I2C_SMB0_CONFIG_ENSI_EN              = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_CONFIG_ENSI_Enum;

/* ========================================================  BUSCLK  ========================================================= */
/* =========================================================  BLKID  ========================================================= */
/* ========================================================  BLKREV  ========================================================= */
/* ========================================================  BBCTRL  ========================================================= */
/* ==============================================  I2C_SMB0 BBCTRL BBEN [0..0]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_BBEN                                                      */
  I2C_SMB0_BBCTRL_BBEN_ON              = 1,     /*!< ON : Enable                                                               */
} I2C_SMB0_BBCTRL_BBEN_Enum;

/* =============================================  I2C_SMB0 BBCTRL CLDIR [1..1]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_CLDIR                                                     */
  I2C_SMB0_BBCTRL_CLDIR_OUT            = 1,     /*!< OUT : SCL pin is output(driven) otherwise tri-stated                      */
} I2C_SMB0_BBCTRL_CLDIR_Enum;

/* =============================================  I2C_SMB0 BBCTRL DADIR [2..2]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_DADIR                                                     */
  I2C_SMB0_BBCTRL_DADIR_OUT            = 1,     /*!< OUT : SDA pin is output(driven) otherwise tri-stated                      */
} I2C_SMB0_BBCTRL_DADIR_Enum;

/* =============================================  I2C_SMB0 BBCTRL BBCLK [3..3]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_BBCLK                                                     */
  I2C_SMB0_BBCTRL_BBCLK_HI             = 1,     /*!< HI : SCL pin output state is high                                         */
} I2C_SMB0_BBCTRL_BBCLK_Enum;

/* =============================================  I2C_SMB0 BBCTRL BBDAT [4..4]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_BBDAT                                                     */
  I2C_SMB0_BBCTRL_BBDAT_HI             = 1,     /*!< HI : SDA pin output state is high                                         */
} I2C_SMB0_BBCTRL_BBDAT_Enum;

/* =============================================  I2C_SMB0 BBCTRL BBCLKI [5..5]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_BBCLKI                                                    */
  I2C_SMB0_BBCTRL_BBCLKI_HI            = 1,     /*!< HI : SCL pin state read as high                                           */
} I2C_SMB0_BBCTRL_BBCLKI_Enum;

/* =============================================  I2C_SMB0 BBCTRL BBDATI [6..6]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_BBCTRL_BBDATI                                                    */
  I2C_SMB0_BBCTRL_BBDATI_HI            = 1,     /*!< HI : SDA pin state read as high                                           */
} I2C_SMB0_BBCTRL_BBDATI_Enum;

/* ========================================================  MCHPR3C  ======================================================== */
/* ========================================================  DATATM  ========================================================= */
/* ========================================================  TMOUTSC  ======================================================== */
/* =========================================================  DTXB  ========================================================== */
/* =========================================================  DRXB  ========================================================== */
/* =========================================================  CTXB  ========================================================== */
/* =========================================================  CRXB  ========================================================== */
/* ========================================================  FSM_I2C  ======================================================== */
/* ===========================================  I2C_SMB0 FSM_I2C CM_STATE [0..7]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_CM_STATE                                                 */
  I2C_SMB0_FSM_I2C_CM_STATE_IDLE       = 0,     /*!< IDLE : CM in Idle state                                                   */
  I2C_SMB0_FSM_I2C_CM_STATE_W4_START   = 1,     /*!< W4_START : CM waiting on phy to complete START on pins                    */
  I2C_SMB0_FSM_I2C_CM_STATE_ADDR       = 2,     /*!< ADDR : CM target address transmit                                         */
  I2C_SMB0_FSM_I2C_CM_STATE_CHK_ACK    = 3,     /*!< CHK_ACK : CM sample SDA on 9th clock for ACK state                        */
  I2C_SMB0_FSM_I2C_CM_STATE_RX_DATA    = 4,     /*!< RX_DATA : CM generate clocks and sample SDA for data from target          */
  I2C_SMB0_FSM_I2C_CM_STATE_RX_DATA_ACK = 5,    /*!< RX_DATA_ACK : CM generate ACK/NACK on 9th clock                           */
  I2C_SMB0_FSM_I2C_CM_STATE_TX         = 6,     /*!< TX : CM generate clocks and shift data onto SDA                           */
  I2C_SMB0_FSM_I2C_CM_STATE_TX_ACK     = 7,     /*!< TX_ACK : CM generate 9th clock and sample SDA for ACK/NACK from
                                                     target                                                                    */
  I2C_SMB0_FSM_I2C_CM_STATE_WAIT_ACK   = 8,     /*!< WAIT_ACK : CM wait for ACK if target clock stretching                     */
  I2C_SMB0_FSM_I2C_CM_STATE_W4_STOP    = 9,     /*!< W4_STOP : CM wait for phy to complete STOP signalling                     */
  I2C_SMB0_FSM_I2C_CM_STATE_LOST_ARB   = 10,    /*!< LOST_ARB : CM lost arbitration                                            */
  I2C_SMB0_FSM_I2C_CM_STATE_LOST_ARB_SR = 11,   /*!< LOST_ARB_SR : CM lost arbitration SR                                      */
  I2C_SMB0_FSM_I2C_CM_STATE_LOST_ARB_SR_D1 = 12,/*!< LOST_ARB_SR_D1 : CM lost arbitration SRD1                                 */
  I2C_SMB0_FSM_I2C_CM_STATE_LOST_ARB_SR_D2 = 13,/*!< LOST_ARB_SR_D2 : CM lost arbitration SRD2                                 */
  I2C_SMB0_FSM_I2C_CM_STATE_W4_START_HOLD = 14, /*!< W4_START_HOLD : CM enforce delay after STOP before issuing another
                                                     START                                                                     */
} I2C_SMB0_FSM_I2C_CM_STATE_Enum;

/* ===========================================  I2C_SMB0 FSM_I2C TM_STATE [8..15]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_TM_STATE                                                 */
  I2C_SMB0_FSM_I2C_TM_STATE_IDLE       = 0,     /*!< IDLE : TM FSM idle                                                        */
  I2C_SMB0_FSM_I2C_TM_STATE_HDR_ACK    = 1,     /*!< HDR_ACK : TM ACK/NACK address from external Controller                    */
  I2C_SMB0_FSM_I2C_TM_STATE_TX_DATA    = 2,     /*!< TX_DATA : TM transmit data on SDA to external controller                  */
  I2C_SMB0_FSM_I2C_TM_STATE_WAIT_ACK   = 3,     /*!< WAIT_ACK : TM wait for 9th clock ACK/NACK from external controller        */
  I2C_SMB0_FSM_I2C_TM_STATE_RX_DATA    = 4,     /*!< RX_DATA : TM samples data on SDA from external controller                 */
  I2C_SMB0_FSM_I2C_TM_STATE_ACK_DATA   = 5,     /*!< ACK_DATA : TM ACK/NACK data received from external controller             */
} I2C_SMB0_FSM_I2C_TM_STATE_Enum;

/* ==========================================  I2C_SMB0 FSM_I2C PHY_STATE [16..19]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_PHY_STATE                                                */
  I2C_SMB0_FSM_I2C_PHY_STATE_IDLE      = 0,     /*!< IDLE : Phy is idle                                                        */
  I2C_SMB0_FSM_I2C_PHY_STATE_CLKHI     = 1,     /*!< CLKHI : Phy released SCL to go high                                       */
  I2C_SMB0_FSM_I2C_PHY_STATE_SS        = 2,     /*!< SS : Phy sample state                                                     */
  I2C_SMB0_FSM_I2C_PHY_STATE_CLKLO     = 3,     /*!< CLKLO : Phy drive SCL low                                                 */
  I2C_SMB0_FSM_I2C_PHY_STATE_SDAT_CTRL = 4,     /*!< SDAT_CTRL : Phy driving/releasing SDAT                                    */
  I2C_SMB0_FSM_I2C_PHY_STATE_ARB_LOSS  = 5,     /*!< ARB_LOSS : Phy detected arbitration loss                                  */
} I2C_SMB0_FSM_I2C_PHY_STATE_Enum;

/* ===========================================  I2C_SMB0 FSM_I2C CM_CTO [20..23]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_CM_CTO                                                   */
  I2C_SMB0_FSM_I2C_CM_CTO_NOT_COUNTING = 0,     /*!< NOT_COUNTING : CM CTO is not counting                                     */
  I2C_SMB0_FSM_I2C_CM_CTO_COUNTING     = 1,     /*!< COUNTING : CM CTO is counting                                             */
} I2C_SMB0_FSM_I2C_CM_CTO_Enum;

/* ===========================================  I2C_SMB0 FSM_I2C TM_CTO [24..28]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_TM_CTO                                                   */
  I2C_SMB0_FSM_I2C_TM_CTO_NOT_COUNTING = 0,     /*!< NOT_COUNTING : TM CTO is not counting                                     */
  I2C_SMB0_FSM_I2C_TM_CTO_COUNTING     = 1,     /*!< COUNTING : TM CTO is counting                                             */
} I2C_SMB0_FSM_I2C_TM_CTO_Enum;

/* ============================================  I2C_SMB0 FSM_I2C CM_BI [29..31]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_FSM_I2C_CM_BI                                                    */
  I2C_SMB0_FSM_I2C_CM_BI_NOT_COUNTING  = 0,     /*!< NOT_COUNTING : CM BI is not counting                                      */
  I2C_SMB0_FSM_I2C_CM_BI_COUNTING      = 1,     /*!< COUNTING : CM BI is counting                                              */
} I2C_SMB0_FSM_I2C_CM_BI_Enum;

/* ========================================================  FSM_SNL  ======================================================== */
/* ===========================================  I2C_SMB0 FSM_SNL CM_STATE [0..7]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_FSM_SNL_CM_STATE                                                 */
  I2C_SMB0_FSM_SNL_CM_STATE_IDLE       = 0,     /*!< IDLE : SNL CM state is idle                                               */
  I2C_SMB0_FSM_SNL_CM_STATE_SOP        = 1,     /*!< SOP : SNL CM SOP state                                                    */
  I2C_SMB0_FSM_SNL_CM_STATE_START      = 2,     /*!< START : SNL CM start state                                                */
  I2C_SMB0_FSM_SNL_CM_STATE_START_PIN  = 3,     /*!< START_PIN : SNL CM start pin state                                        */
  I2C_SMB0_FSM_SNL_CM_STATE_WDATA      = 4,     /*!< WDATA : SNL CM transmit data state                                        */
  I2C_SMB0_FSM_SNL_CM_STATE_WPEC       = 5,     /*!< WPEC : SNL CM transmit PEC byte state                                     */
  I2C_SMB0_FSM_SNL_CM_STATE_RSTART     = 6,     /*!< RSTART : SNL CM receive start state                                       */
  I2C_SMB0_FSM_SNL_CM_STATE_RSTART_PIN = 7,     /*!< RSTART_PIN : SNL CM receive start pin state                               */
  I2C_SMB0_FSM_SNL_CM_STATE_RDATA_IN   = 8,     /*!< RDATA_IN : SNL CM receive data input state                                */
  I2C_SMB0_FSM_SNL_CM_STATE_RDATA_PEC  = 9,     /*!< RDATA_PEC : SNL CM receive data pec state                                 */
  I2C_SMB0_FSM_SNL_CM_STATE_RPEC       = 10,    /*!< RPEC : SNL CM receive data check pec state                                */
  I2C_SMB0_FSM_SNL_CM_STATE_PAUSE      = 11,    /*!< PAUSE : SNL CM pause state                                                */
  I2C_SMB0_FSM_SNL_CM_STATE_STOP       = 12,    /*!< STOP : SNL CM stop state                                                  */
  I2C_SMB0_FSM_SNL_CM_STATE_EOP        = 13,    /*!< EOP : SNL CM EOP state                                                    */
} I2C_SMB0_FSM_SNL_CM_STATE_Enum;

/* ===========================================  I2C_SMB0 FSM_SNL TM_STATE [8..15]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_FSM_SNL_TM_STATE                                                 */
  I2C_SMB0_FSM_SNL_TM_STATE_IDLE       = 0,     /*!< IDLE : SNL TM idle state                                                  */
  I2C_SMB0_FSM_SNL_TM_STATE_ADDR       = 1,     /*!< ADDR : SNL TM address state                                               */
  I2C_SMB0_FSM_SNL_TM_STATE_WPIN       = 2,     /*!< WPIN : SNL TM WPIN state                                                  */
  I2C_SMB0_FSM_SNL_TM_STATE_RPIN       = 3,     /*!< RPIN : SNL TM RPIN state                                                  */
  I2C_SMB0_FSM_SNL_TM_STATE_WDATA      = 4,     /*!< WDATA : SNL TM transmit data state                                        */
  I2C_SMB0_FSM_SNL_TM_STATE_RDATA      = 5,     /*!< RDATA : SNL TM receive data state                                         */
  I2C_SMB0_FSM_SNL_TM_STATE_RBE        = 6,     /*!< RBE : SNL TM RBE state                                                    */
  I2C_SMB0_FSM_SNL_TM_STATE_TM_RPEC    = 7,     /*!< TM_RPEC : SNL TM receive PEC state                                        */
  I2C_SMB0_FSM_SNL_TM_STATE_TM_RPEC_RPT = 8,    /*!< TM_RPEC_RPT : SNL TM check receive PEC state                              */
} I2C_SMB0_FSM_SNL_TM_STATE_Enum;

/* ==========================================  I2C_SMB0 FSM_SNL MCTP_FAIR [16..23]  ========================================== */
typedef enum {                                  /*!< I2C_SMB0_FSM_SNL_MCTP_FAIR                                                */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_IDLE      = 0,     /*!< IDLE : MCTP fairness FSM is idle                                          */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_BUSY      = 1,     /*!< BUSY : MCTP fairness FSM is busy                                          */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_WINDOW    = 2,     /*!< WINDOW : MCTP fairness in window                                          */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_DELAY     = 3,     /*!< DELAY : MCTP fairness delay state                                         */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_WAIT      = 4,     /*!< WAIT : MCTP fairness wait state                                           */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_WAIT_DONE = 5,     /*!< WAIT_DONE : MCTP fairness wait done state                                 */
  I2C_SMB0_FSM_SNL_MCTP_FAIR_ACTIVE    = 6,     /*!< ACTIVE : MCTP fairness active state                                       */
} I2C_SMB0_FSM_SNL_MCTP_FAIR_Enum;

/* =======================================================  WAKE_STS  ======================================================== */
/* ==========================================  I2C_SMB0 WAKE_STS START_DET [0..0]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_WAKE_STS_START_DET                                               */
  I2C_SMB0_WAKE_STS_START_DET_ACTIVE   = 1,     /*!< ACTIVE : Active                                                           */
} I2C_SMB0_WAKE_STS_START_DET_Enum;

/* ========================================================  WAKE_EN  ======================================================== */
/* ===========================================  I2C_SMB0 WAKE_EN START_DET [0..0]  =========================================== */
typedef enum {                                  /*!< I2C_SMB0_WAKE_EN_START_DET                                                */
  I2C_SMB0_WAKE_EN_START_DET_IEN       = 1,     /*!< IEN : Enable                                                              */
} I2C_SMB0_WAKE_EN_START_DET_Enum;

/* ======================================================  FAST_RSYNC  ======================================================= */
/* =======================================================  SHAD_ADDR  ======================================================= */
/* =======================================================  PROM_ARS  ======================================================== */
/* ============================================  I2C_SMB0 PROM_ARS ARSTS [0..0]  ============================================= */
typedef enum {                                  /*!< I2C_SMB0_PROM_ARS_ARSTS                                                   */
  I2C_SMB0_PROM_ARS_ARSTS_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} I2C_SMB0_PROM_ARS_ARSTS_Enum;

/* =======================================================  PROM_IEN  ======================================================== */
/* =============================================  I2C_SMB0 PROM_IEN ARI [0..0]  ============================================== */
typedef enum {                                  /*!< I2C_SMB0_PROM_IEN_ARI                                                     */
  I2C_SMB0_PROM_IEN_ARI_EN             = 1,     /*!< EN : Enable                                                               */
} I2C_SMB0_PROM_IEN_ARI_Enum;

/* =======================================================  PROM_CTRL  ======================================================= */
/* ============================================  I2C_SMB0 PROM_CTRL ARACK [0..0]  ============================================ */
typedef enum {                                  /*!< I2C_SMB0_PROM_CTRL_ARACK                                                  */
  I2C_SMB0_PROM_CTRL_ARACK_GEN         = 1,     /*!< GEN : Generate ACK                                                        */
} I2C_SMB0_PROM_CTRL_ARACK_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_I2C_SMB_V3_7_H */
