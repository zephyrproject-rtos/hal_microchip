/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ESPI_TAF_V1_5_H
#define _MEC5_ESPI_TAF_V1_5_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */

/**
  * @brief MEC_ESPI_TAF_PR [PR] (TAF 17 Flash Protection Regions)
  */
typedef struct mec_espi_taf_pr_regs {
  __IOM uint32_t  START;                        /*!< (@ 0x00000000) TAF Flash Protection Region n start flash address          */
  __IOM uint32_t  LIMIT;                        /*!< (@ 0x00000004) TAF Flash Protection Region n limit address                */
  __IOM uint32_t  WRBM;                         /*!< (@ 0x00000008) TAF Flash Protection Region write protect Host
                                                                    ID bitmap                                                  */
  __IOM uint32_t  RDBM;                         /*!< (@ 0x0000000C) TAF Flash Protection Region read protect Host
                                                                    ID bitmap                                                  */
} MEC_ESPI_TAF_PR_Type;                         /*!< Size = 16 (0x10)                                                          */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */
/**
  * @brief eSPI TAF Communication Logic (MEC_ESPI_TAF_COMM)
  */

typedef struct mec_espi_taf_comm_regs {         /*!< (@ 0x40071000) MEC_ESPI_TAF_COMM Structure                                */
  __IM  uint32_t  RESERVED[174];
  __IOM uint32_t  COMM_MODE;                    /*!< (@ 0x000002B8) eSPI TAF Communication Mode register                       */
} MEC_ESPI_TAF_COMM_Type;                       /*!< Size = 700 (0x2bc)                                                        */

/**
  * @brief eSPI TAF (MEC_ESPI_TAF)
  */

typedef struct mec_espi_taf_regs {              /*!< (@ 0x40008000) MEC_ESPI_TAF Structure                                     */
  __IM  uint32_t  RESERVED[6];
  __IOM uint32_t  ECP_CMD;                      /*!< (@ 0x00000018) eSPI TAF EC Portal Command register                        */
  __IOM uint32_t  ECP_FADDR;                    /*!< (@ 0x0000001C) eSPI TAF EC Portal Flash Address register                  */
  __IOM uint32_t  ECP_START;                    /*!< (@ 0x00000020) eSPI TAF EC Portal Start register                          */
  __IOM uint32_t  ECP_BADDR;                    /*!< (@ 0x00000024) eSPI TAF EC Portal Buffer Address. Must be 32-bit
                                                                    aligned                                                    */
  __IOM uint32_t  ECP_STS;                      /*!< (@ 0x00000028) eSPI TAF EC Portal Status register                         */
  __IOM uint32_t  ECP_IEN;                      /*!< (@ 0x0000002C) eSPI TAF EC Portal Interrupt Enable register               */
  __IOM uint32_t  FC_SZ_LIM;                    /*!< (@ 0x00000030) eSPI TAF Flash Configuration Size Limit register           */
  __IOM uint32_t  FC_THR;                       /*!< (@ 0x00000034) eSPI TAF Flash Configuration Threshold register            */
  __IOM uint32_t  FC_MISC;                      /*!< (@ 0x00000038) eSPI TAF Flash Configuration Miscellaneous register        */
  __IOM uint32_t  MON_STS;                      /*!< (@ 0x0000003C) eSPI TAF Monitor Status register                           */
  __IOM uint32_t  MON_IEN;                      /*!< (@ 0x00000040) eSPI TAF Monitor Interrupt Enable register                 */
  __IM  uint32_t  ECP_BUSY_STS;                 /*!< (@ 0x00000044) eSPI TAF EC Busy register                                  */
  __IM  uint32_t  RESERVED1;
  __IOM uint32_t  CS0_OPA;                      /*!< (@ 0x0000004C) Chip select 0 Opcode A flash commands register             */
  __IOM uint32_t  CS0_OPB;                      /*!< (@ 0x00000050) Chip select 0 Opcode B flash commands register             */
  __IOM uint32_t  CS0_OPC;                      /*!< (@ 0x00000054) Chip select 0 Opcode C flash commands register             */
  __IOM uint32_t  CS0_OP_DESCR;                 /*!< (@ 0x00000058) TAF chip select 0 opcode start descriptor indices          */
  __IOM uint32_t  CS1_OPA;                      /*!< (@ 0x0000005C) Chip select 1 Opcode A flash commands register             */
  __IOM uint32_t  CS1_OPB;                      /*!< (@ 0x00000060) Chip select 1 Opcode B flash commands register             */
  __IOM uint32_t  CS1_OPC;                      /*!< (@ 0x00000064) Chip select 1 Opcode C flash commands register             */
  __IOM uint32_t  CS1_OP_DESCR;                 /*!< (@ 0x00000068) TAF chip select 1 opcode start descriptor indices          */
  __IOM uint32_t  GEN_DESCR;                    /*!< (@ 0x0000006C) TAF Flash Configuration Generate descriptor indices
                                                                    register                                                   */
  __IOM uint32_t  PR_LOCK;                      /*!< (@ 0x00000070) TAF Protection Region Lock Flash register                  */
  __IOM uint32_t  PR_DIRTY;                     /*!< (@ 0x00000074) TAF Protection Region Dirty Status                         */
  __IOM uint32_t  TAG_MAP0;                     /*!< (@ 0x00000078) TAF Tag Map 0 register                                     */
  __IOM uint32_t  TAG_MAP1;                     /*!< (@ 0x0000007C) TAF Tag Map 1 register                                     */
  __IOM uint32_t  TAG_MAP2;                     /*!< (@ 0x00000080) TAF Tag Map 2 register                                     */
  __IOM MEC_ESPI_TAF_PR_Type PR[17];            /*!< (@ 0x00000084) TAF 17 Flash Protection Regions                            */
  __IOM uint32_t  POLL_TIMEOUT;                 /*!< (@ 0x00000194) TAF flash poll timeout in units of 32KHz clock
                                                                    periods                                                    */
  __IOM uint32_t  POLL_INTERVAL;                /*!< (@ 0x00000198) TAF flash poll interval in units of 48MHz clock
                                                                    periods                                                    */
  __IOM uint32_t  SR_INTERVAL;                  /*!< (@ 0x0000019C) TAF flash suspend/resume interval in units of
                                                                    32KHz clock periods                                        */
  __IOM uint32_t  CRD_TIMEOUT;                  /*!< (@ 0x000001A0) TAF flash consecutive read timeout in units of
                                                                    48MHz clock periods                                        */
  __IOM uint32_t  POLL2_MSKS;                   /*!< (@ 0x000001A4) TAF enging flash configuration poll2 mask register         */
  __IOM uint32_t  FC_SMODE;                     /*!< (@ 0x000001A8) TAF enging flash configuration special mode register       */
  __IOM uint32_t  SUS_CHK_DLY;                  /*!< (@ 0x000001AC) TAF suspend check delay in units of 48MHz clock
                                                                    periods                                                    */
  __IOM uint32_t  FC_CM_PREFIX;                 /*!< (@ 0x000001B0) Flash Configuration continuous mode prefix                 */
  __IOM uint32_t  DNX_PR_BYP;                   /*!< (@ 0x000001B4) TAF DNF Protection Bypass                                  */
  __IOM uint32_t  ACT_CNT_RLOAD;                /*!< (@ 0x000001B8) TAF Activity Count Reload register                         */
  __IOM uint32_t  PD_CTRL;                      /*!< (@ 0x000001BC) TAF Power Down Control register                            */
  __IOM uint32_t  PD_STS;                       /*!< (@ 0x000001C0) TAF Flash Power Down Status register                       */
  __IOM uint32_t  CS0_OPD;                      /*!< (@ 0x000001C4) TAF Config CS0 opcode D register                           */
  __IOM uint32_t  CS1_OPD;                      /*!< (@ 0x000001C8) TAF Config CS1 opcode D register                           */
  __IOM uint32_t  PUD_TIMEOUT;                  /*!< (@ 0x000001CC) TAF Flash power up/down timeout register in units
                                                                    of 48MHz clock periods                                     */
  __IM  uint32_t  RESERVED2[12];
  __IOM uint32_t  CLKDIV_CS0;                   /*!< (@ 0x00000200) TAF chip select 0 clock divider register                   */
  __IOM uint32_t  CLKDIV_CS1;                   /*!< (@ 0x00000204) TAF chip select 1 clock divider register                   */
  __IOM uint32_t  RPMC_OP2_HOST_RESULT;         /*!< (@ 0x00000208) TAF RPMC OP2 eSPI Host result register                     */
  __IOM uint32_t  RPMC_OP2_EC0_RESULT;          /*!< (@ 0x0000020C) TAF RPMC OP2 EC0 result register                           */
  __IOM uint32_t  RPMC_OP2_EC1_RESULT;          /*!< (@ 0x00000210) TAF RPMC OP2 EC1 result register                           */
} MEC_ESPI_TAF_Type;                            /*!< Size = 532 (0x214)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_clusters
  * @{
  */
/* ================                                            PR                                             ================ */
/* =========================================================  START  ========================================================= */
/* =========================================================  LIMIT  ========================================================= */
/* =========================================================  WRBM  ========================================================== */
#define MEC_ESPI_TAF_PR_WRBM_CTL0_Pos     (0UL)                     /*!< CTL0 (Bit 0)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL0_Msk     (0x1UL)                   /*!< CTL0 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL1_Pos     (1UL)                     /*!< CTL1 (Bit 1)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL1_Msk     (0x2UL)                   /*!< CTL1 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL2_Pos     (2UL)                     /*!< CTL2 (Bit 2)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL2_Msk     (0x4UL)                   /*!< CTL2 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL3_Pos     (3UL)                     /*!< CTL3 (Bit 3)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL3_Msk     (0x8UL)                   /*!< CTL3 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL4_Pos     (4UL)                     /*!< CTL4 (Bit 4)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL4_Msk     (0x10UL)                  /*!< CTL4 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL5_Pos     (5UL)                     /*!< CTL5 (Bit 5)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL5_Msk     (0x20UL)                  /*!< CTL5 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL6_Pos     (6UL)                     /*!< CTL6 (Bit 6)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL6_Msk     (0x40UL)                  /*!< CTL6 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_WRBM_CTL7_Pos     (7UL)                     /*!< CTL7 (Bit 7)                                          */
#define MEC_ESPI_TAF_PR_WRBM_CTL7_Msk     (0x80UL)                  /*!< CTL7 (Bitfield-Mask: 0x01)                            */
/* =========================================================  RDBM  ========================================================== */
#define MEC_ESPI_TAF_PR_RDBM_CTL0_Pos     (0UL)                     /*!< CTL0 (Bit 0)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL0_Msk     (0x1UL)                   /*!< CTL0 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL1_Pos     (1UL)                     /*!< CTL1 (Bit 1)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL1_Msk     (0x2UL)                   /*!< CTL1 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL2_Pos     (2UL)                     /*!< CTL2 (Bit 2)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL2_Msk     (0x4UL)                   /*!< CTL2 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL3_Pos     (3UL)                     /*!< CTL3 (Bit 3)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL3_Msk     (0x8UL)                   /*!< CTL3 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL4_Pos     (4UL)                     /*!< CTL4 (Bit 4)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL4_Msk     (0x10UL)                  /*!< CTL4 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL5_Pos     (5UL)                     /*!< CTL5 (Bit 5)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL5_Msk     (0x20UL)                  /*!< CTL5 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL6_Pos     (6UL)                     /*!< CTL6 (Bit 6)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL6_Msk     (0x40UL)                  /*!< CTL6 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_RDBM_CTL7_Pos     (7UL)                     /*!< CTL7 (Bit 7)                                          */
#define MEC_ESPI_TAF_PR_RDBM_CTL7_Msk     (0x80UL)                  /*!< CTL7 (Bitfield-Mask: 0x01)                            */
/** @} */ /* End of group PosMask_clusters */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ================                                     MEC_ESPI_TAF_COMM                                     ================ */
/* =======================================================  COMM_MODE  ======================================================= */
#define MEC_ESPI_TAF_COMM_COMM_MODE_PREFETCH_EN_Pos (0UL)           /*!< PREFETCH_EN (Bit 0)                                   */
#define MEC_ESPI_TAF_COMM_COMM_MODE_PREFETCH_EN_Msk (0x1UL)         /*!< PREFETCH_EN (Bitfield-Mask: 0x01)                     */

/* ================                                       MEC_ESPI_TAF                                        ================ */
/* ========================================================  ECP_CMD  ======================================================== */
#define MEC_ESPI_TAF_ECP_CMD_EC_PUT_CMD_Pos (0UL)                   /*!< EC_PUT_CMD (Bit 0)                                    */
#define MEC_ESPI_TAF_ECP_CMD_EC_PUT_CMD_Msk (0xffUL)                /*!< EC_PUT_CMD (Bitfield-Mask: 0xff)                      */
#define MEC_ESPI_TAF_ECP_CMD_EC_CMD_Pos   (8UL)                     /*!< EC_CMD (Bit 8)                                        */
#define MEC_ESPI_TAF_ECP_CMD_EC_CMD_Msk   (0xff00UL)                /*!< EC_CMD (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_ECP_CMD_LEN_Pos      (24UL)                    /*!< LEN (Bit 24)                                          */
#define MEC_ESPI_TAF_ECP_CMD_LEN_Msk      (0xff000000UL)            /*!< LEN (Bitfield-Mask: 0xff)                             */
/* =======================================================  ECP_FADDR  ======================================================= */
/* =======================================================  ECP_START  ======================================================= */
#define MEC_ESPI_TAF_ECP_START_START_Pos  (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_TAF_ECP_START_START_Msk  (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
/* =======================================================  ECP_BADDR  ======================================================= */
/* ========================================================  ECP_STS  ======================================================== */
#define MEC_ESPI_TAF_ECP_STS_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_TAF_ECP_STS_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_ECP_STS_DONE_ACK_Pos (1UL)                     /*!< DONE_ACK (Bit 1)                                      */
#define MEC_ESPI_TAF_ECP_STS_DONE_ACK_Msk (0x2UL)                   /*!< DONE_ACK (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_ECP_STS_TIMEOUT_Pos  (2UL)                     /*!< TIMEOUT (Bit 2)                                       */
#define MEC_ESPI_TAF_ECP_STS_TIMEOUT_Msk  (0x4UL)                   /*!< TIMEOUT (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_ECP_STS_OOR_ERR_Pos  (3UL)                     /*!< OOR_ERR (Bit 3)                                       */
#define MEC_ESPI_TAF_ECP_STS_OOR_ERR_Msk  (0x8UL)                   /*!< OOR_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_ECP_STS_ACCV_ERR_Pos (4UL)                     /*!< ACCV_ERR (Bit 4)                                      */
#define MEC_ESPI_TAF_ECP_STS_ACCV_ERR_Msk (0x10UL)                  /*!< ACCV_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_ECP_STS_4KB_ERR_Pos  (5UL)                     /*!< 4KB_ERR (Bit 5)                                       */
#define MEC_ESPI_TAF_ECP_STS_4KB_ERR_Msk  (0x20UL)                  /*!< 4KB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_ECP_STS_ERSZ_ERR_Pos (6UL)                     /*!< ERSZ_ERR (Bit 6)                                      */
#define MEC_ESPI_TAF_ECP_STS_ERSZ_ERR_Msk (0x40UL)                  /*!< ERSZ_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_ECP_STS_START_OVFL_ERR_Pos (7UL)               /*!< START_OVFL_ERR (Bit 7)                                */
#define MEC_ESPI_TAF_ECP_STS_START_OVFL_ERR_Msk (0x80UL)            /*!< START_OVFL_ERR (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_TAF_ECP_STS_BAD_REQ_ERR_Pos (8UL)                  /*!< BAD_REQ_ERR (Bit 8)                                   */
#define MEC_ESPI_TAF_ECP_STS_BAD_REQ_ERR_Msk (0x100UL)              /*!< BAD_REQ_ERR (Bitfield-Mask: 0x01)                     */
/* ========================================================  ECP_IEN  ======================================================== */
#define MEC_ESPI_TAF_ECP_IEN_DONE_Pos     (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_ESPI_TAF_ECP_IEN_DONE_Msk     (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
/* =======================================================  FC_SZ_LIM  ======================================================= */
/* ========================================================  FC_THR  ========================================================= */
/* ========================================================  FC_MISC  ======================================================== */
#define MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_Pos (0UL)                /*!< PREFETCH_MODE (Bit 0)                                 */
#define MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_Msk (0x3UL)              /*!< PREFETCH_MODE (Bitfield-Mask: 0x03)                   */
#define MEC_ESPI_TAF_FC_MISC_CS0_PRF_CANCEL_Pos (2UL)               /*!< CS0_PRF_CANCEL (Bit 2)                                */
#define MEC_ESPI_TAF_FC_MISC_CS0_PRF_CANCEL_Msk (0x4UL)             /*!< CS0_PRF_CANCEL (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_TAF_FC_MISC_CS1_PRF_CANCEL_Pos (3UL)               /*!< CS1_PRF_CANCEL (Bit 3)                                */
#define MEC_ESPI_TAF_FC_MISC_CS1_PRF_CANCEL_Msk (0x8UL)             /*!< CS1_PRF_CANCEL (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Pos (4UL)             /*!< CS0_4B_ADDR_MODE (Bit 4)                              */
#define MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Msk (0x10UL)          /*!< CS0_4B_ADDR_MODE (Bitfield-Mask: 0x01)                */
#define MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Pos (5UL)             /*!< CS1_4B_ADDR_MODE (Bit 5)                              */
#define MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Msk (0x20UL)          /*!< CS1_4B_ADDR_MODE (Bitfield-Mask: 0x01)                */
#define MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Pos (6UL)              /*!< CS0_CONT_PREFIX (Bit 6)                               */
#define MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Msk (0x40UL)           /*!< CS0_CONT_PREFIX (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Pos (7UL)              /*!< CS1_CONT_PREFIX (Bit 7)                               */
#define MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Msk (0x80UL)           /*!< CS1_CONT_PREFIX (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_TAF_FC_MISC_TAF_EN_Pos   (12UL)                    /*!< TAF_EN (Bit 12)                                       */
#define MEC_ESPI_TAF_FC_MISC_TAF_EN_Msk   (0x1000UL)                /*!< TAF_EN (Bitfield-Mask: 0x01)                          */
#define MEC_ESPI_TAF_FC_MISC_TAF_LOCK_Pos (13UL)                    /*!< TAF_LOCK (Bit 13)                                     */
#define MEC_ESPI_TAF_FC_MISC_TAF_LOCK_Msk (0x2000UL)                /*!< TAF_LOCK (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_MISC_LPF_LSLP_Pos (16UL)                    /*!< LPF_LSLP (Bit 16)                                     */
#define MEC_ESPI_TAF_FC_MISC_LPF_LSLP_Msk (0x10000UL)               /*!< LPF_LSLP (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_MISC_LPF_HSLP_Pos (17UL)                    /*!< LPF_HSLP (Bit 17)                                     */
#define MEC_ESPI_TAF_FC_MISC_LPF_HSLP_Msk (0x20000UL)               /*!< LPF_HSLP (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_MISC_LPF_SAC_Pos  (18UL)                    /*!< LPF_SAC (Bit 18)                                      */
#define MEC_ESPI_TAF_FC_MISC_LPF_SAC_Msk  (0x40000UL)               /*!< LPF_SAC (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_ESPI_Pos (20UL)                /*!< RLD_SAC_ESPI (Bit 20)                                 */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_ESPI_Msk (0x100000UL)          /*!< RLD_SAC_ESPI (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC0_Pos (21UL)                 /*!< RLD_SAC_EC0 (Bit 21)                                  */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC0_Msk (0x200000UL)           /*!< RLD_SAC_EC0 (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC1_Pos (22UL)                 /*!< RLD_SAC_EC1 (Bit 22)                                  */
#define MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC1_Msk (0x400000UL)           /*!< RLD_SAC_EC1 (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_TAF_FC_MISC_FORCE_RPMC_SUCC_Pos (24UL)             /*!< FORCE_RPMC_SUCC (Bit 24)                              */
#define MEC_ESPI_TAF_FC_MISC_FORCE_RPMC_SUCC_Msk (0x1000000UL)      /*!< FORCE_RPMC_SUCC (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_TAF_FC_MISC_CS0_RPMC_SUSM_Pos (25U)                /*!< CS0_RPMC_SUSM (Bit 25)                                */
#define MEC_ESPI_TAF_FC_MISC_CS0_RPMC_SUSM_Msk (0x2000000UL)        /*!< CS0_RPMC_SUSM (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_TAF_FC_MISC_CS1_RPMC_SUSM_Pos (26U)                /*!< CS1_RPMC_SUSM (Bit 25)                                */
#define MEC_ESPI_TAF_FC_MISC_CS1_RPMC_SUSM_Msk (0x4000000UL)        /*!< CS1_RPMC_SUSM (Bitfield-Mask: 0x01)                   */
/* ========================================================  MON_STS  ======================================================== */
#define MEC_ESPI_TAF_MON_STS_TMOUT_ERR_Pos (0UL)                    /*!< TMOUT_ERR (Bit 0)                                     */
#define MEC_ESPI_TAF_MON_STS_TMOUT_ERR_Msk (0x1UL)                  /*!< TMOUT_ERR (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_MON_STS_OOR_ERR_Pos  (1UL)                     /*!< OOR_ERR (Bit 1)                                       */
#define MEC_ESPI_TAF_MON_STS_OOR_ERR_Msk  (0x2UL)                   /*!< OOR_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_MON_STS_ACCV_ERR_Pos (2UL)                     /*!< ACCV_ERR (Bit 2)                                      */
#define MEC_ESPI_TAF_MON_STS_ACCV_ERR_Msk (0x4UL)                   /*!< ACCV_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_MON_STS_4KB_ERR_Pos  (3UL)                     /*!< 4KB_ERR (Bit 3)                                       */
#define MEC_ESPI_TAF_MON_STS_4KB_ERR_Msk  (0x8UL)                   /*!< 4KB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_MON_STS_ERSZ_ERR_Pos (4UL)                     /*!< ERSZ_ERR (Bit 4)                                      */
#define MEC_ESPI_TAF_MON_STS_ERSZ_ERR_Msk (0x10UL)                  /*!< ERSZ_ERR (Bitfield-Mask: 0x01)                        */
/* ========================================================  MON_IEN  ======================================================== */
#define MEC_ESPI_TAF_MON_IEN_TMOUT_ERR_Pos (0UL)                    /*!< TMOUT_ERR (Bit 0)                                     */
#define MEC_ESPI_TAF_MON_IEN_TMOUT_ERR_Msk (0x1UL)                  /*!< TMOUT_ERR (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_MON_IEN_OOR_ERR_Pos  (1UL)                     /*!< OOR_ERR (Bit 1)                                       */
#define MEC_ESPI_TAF_MON_IEN_OOR_ERR_Msk  (0x2UL)                   /*!< OOR_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_MON_IEN_ACCV_ERR_Pos (2UL)                     /*!< ACCV_ERR (Bit 2)                                      */
#define MEC_ESPI_TAF_MON_IEN_ACCV_ERR_Msk (0x4UL)                   /*!< ACCV_ERR (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_MON_IEN_4KB_ERR_Pos  (3UL)                     /*!< 4KB_ERR (Bit 3)                                       */
#define MEC_ESPI_TAF_MON_IEN_4KB_ERR_Msk  (0x8UL)                   /*!< 4KB_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_TAF_MON_IEN_ERSZ_ERR_Pos (4UL)                     /*!< ERSZ_ERR (Bit 4)                                      */
#define MEC_ESPI_TAF_MON_IEN_ERSZ_ERR_Msk (0x10UL)                  /*!< ERSZ_ERR (Bitfield-Mask: 0x01)                        */
/* =====================================================  ECP_BUSY_STS  ====================================================== */
#define MEC_ESPI_TAF_ECP_BUSY_STS_EC0_Pos (0UL)                     /*!< EC0 (Bit 0)                                           */
#define MEC_ESPI_TAF_ECP_BUSY_STS_EC0_Msk (0x1UL)                   /*!< EC0 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_ECP_BUSY_STS_EC1_Pos (1UL)                     /*!< EC1 (Bit 1)                                           */
#define MEC_ESPI_TAF_ECP_BUSY_STS_EC1_Msk (0x2UL)                   /*!< EC1 (Bitfield-Mask: 0x01)                             */
/* ========================================================  CS0_OPA  ======================================================== */
#define MEC_ESPI_TAF_CS0_OPA_OP_WE_Pos    (0UL)                     /*!< OP_WE (Bit 0)                                         */
#define MEC_ESPI_TAF_CS0_OPA_OP_WE_Msk    (0xffUL)                  /*!< OP_WE (Bitfield-Mask: 0xff)                           */
#define MEC_ESPI_TAF_CS0_OPA_OP_SUS_Pos   (8UL)                     /*!< OP_SUS (Bit 8)                                        */
#define MEC_ESPI_TAF_CS0_OPA_OP_SUS_Msk   (0xff00UL)                /*!< OP_SUS (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_CS0_OPA_OP_RSM_Pos   (16UL)                    /*!< OP_RSM (Bit 16)                                       */
#define MEC_ESPI_TAF_CS0_OPA_OP_RSM_Msk   (0xff0000UL)              /*!< OP_RSM (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_CS0_OPA_OP_POLL1_Pos (24UL)                    /*!< OP_POLL1 (Bit 24)                                     */
#define MEC_ESPI_TAF_CS0_OPA_OP_POLL1_Msk (0xff000000UL)            /*!< OP_POLL1 (Bitfield-Mask: 0xff)                        */
/* ========================================================  CS0_OPB  ======================================================== */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE0_Pos (0UL)                    /*!< OP_ERASE0 (Bit 0)                                     */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE0_Msk (0xffUL)                 /*!< OP_ERASE0 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE1_Pos (8UL)                    /*!< OP_ERASE1 (Bit 8)                                     */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE1_Msk (0xff00UL)               /*!< OP_ERASE1 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE2_Pos (16UL)                   /*!< OP_ERASE2 (Bit 16)                                    */
#define MEC_ESPI_TAF_CS0_OPB_OP_ERASE2_Msk (0xff0000UL)             /*!< OP_ERASE2 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS0_OPB_OP_PROG_Pos  (24UL)                    /*!< OP_PROG (Bit 24)                                      */
#define MEC_ESPI_TAF_CS0_OPB_OP_PROG_Msk  (0xff000000UL)            /*!< OP_PROG (Bitfield-Mask: 0xff)                         */
/* ========================================================  CS0_OPC  ======================================================== */
#define MEC_ESPI_TAF_CS0_OPC_OP_READ_Pos  (0UL)                     /*!< OP_READ (Bit 0)                                       */
#define MEC_ESPI_TAF_CS0_OPC_OP_READ_Msk  (0xffUL)                  /*!< OP_READ (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_TAF_CS0_OPC_MODE_NONC_Pos (8UL)                    /*!< MODE_NONC (Bit 8)                                     */
#define MEC_ESPI_TAF_CS0_OPC_MODE_NONC_Msk (0xff00UL)               /*!< MODE_NONC (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS0_OPC_MODE_CONT_Pos (16UL)                   /*!< MODE_CONT (Bit 16)                                    */
#define MEC_ESPI_TAF_CS0_OPC_MODE_CONT_Msk (0xff0000UL)             /*!< MODE_CONT (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS0_OPC_OP_POLL2_Pos (24UL)                    /*!< OP_POLL2 (Bit 24)                                     */
#define MEC_ESPI_TAF_CS0_OPC_OP_POLL2_Msk (0xff000000UL)            /*!< OP_POLL2 (Bitfield-Mask: 0xff)                        */
/* =====================================================  CS0_OP_DESCR  ====================================================== */
#define MEC_ESPI_TAF_CS0_OP_DESCR_ENTER_CONT_Pos (0UL)              /*!< ENTER_CONT (Bit 0)                                    */
#define MEC_ESPI_TAF_CS0_OP_DESCR_ENTER_CONT_Msk (0xfUL)            /*!< ENTER_CONT (Bitfield-Mask: 0x0f)                      */
#define MEC_ESPI_TAF_CS0_OP_DESCR_READ_CONT_Pos (8UL)               /*!< READ_CONT (Bit 8)                                     */
#define MEC_ESPI_TAF_CS0_OP_DESCR_READ_CONT_Msk (0xf00UL)           /*!< READ_CONT (Bitfield-Mask: 0x0f)                       */
#define MEC_ESPI_TAF_CS0_OP_DESCR_SIZE_CONT_Pos (12UL)              /*!< SIZE_CONT (Bit 12)                                    */
#define MEC_ESPI_TAF_CS0_OP_DESCR_SIZE_CONT_Msk (0xf000UL)          /*!< SIZE_CONT (Bitfield-Mask: 0x0f)                       */
/* ========================================================  CS1_OPA  ======================================================== */
#define MEC_ESPI_TAF_CS1_OPA_OP_WE_Pos    (0UL)                     /*!< OP_WE (Bit 0)                                         */
#define MEC_ESPI_TAF_CS1_OPA_OP_WE_Msk    (0xffUL)                  /*!< OP_WE (Bitfield-Mask: 0xff)                           */
#define MEC_ESPI_TAF_CS1_OPA_OP_SUS_Pos   (8UL)                     /*!< OP_SUS (Bit 8)                                        */
#define MEC_ESPI_TAF_CS1_OPA_OP_SUS_Msk   (0xff00UL)                /*!< OP_SUS (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_CS1_OPA_OP_RSM_Pos   (16UL)                    /*!< OP_RSM (Bit 16)                                       */
#define MEC_ESPI_TAF_CS1_OPA_OP_RSM_Msk   (0xff0000UL)              /*!< OP_RSM (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_CS1_OPA_OP_POLL1_Pos (24UL)                    /*!< OP_POLL1 (Bit 24)                                     */
#define MEC_ESPI_TAF_CS1_OPA_OP_POLL1_Msk (0xff000000UL)            /*!< OP_POLL1 (Bitfield-Mask: 0xff)                        */
/* ========================================================  CS1_OPB  ======================================================== */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE0_Pos (0UL)                    /*!< OP_ERASE0 (Bit 0)                                     */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE0_Msk (0xffUL)                 /*!< OP_ERASE0 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE1_Pos (8UL)                    /*!< OP_ERASE1 (Bit 8)                                     */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE1_Msk (0xff00UL)               /*!< OP_ERASE1 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE2_Pos (16UL)                   /*!< OP_ERASE2 (Bit 16)                                    */
#define MEC_ESPI_TAF_CS1_OPB_OP_ERASE2_Msk (0xff0000UL)             /*!< OP_ERASE2 (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS1_OPB_OP_PROG_Pos  (24UL)                    /*!< OP_PROG (Bit 24)                                      */
#define MEC_ESPI_TAF_CS1_OPB_OP_PROG_Msk  (0xff000000UL)            /*!< OP_PROG (Bitfield-Mask: 0xff)                         */
/* ========================================================  CS1_OPC  ======================================================== */
#define MEC_ESPI_TAF_CS1_OPC_OP_READ_Pos  (0UL)                     /*!< OP_READ (Bit 0)                                       */
#define MEC_ESPI_TAF_CS1_OPC_OP_READ_Msk  (0xffUL)                  /*!< OP_READ (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_TAF_CS1_OPC_MODE_NONC_Pos (8UL)                    /*!< MODE_NONC (Bit 8)                                     */
#define MEC_ESPI_TAF_CS1_OPC_MODE_NONC_Msk (0xff00UL)               /*!< MODE_NONC (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS1_OPC_MODE_CONT_Pos (16UL)                   /*!< MODE_CONT (Bit 16)                                    */
#define MEC_ESPI_TAF_CS1_OPC_MODE_CONT_Msk (0xff0000UL)             /*!< MODE_CONT (Bitfield-Mask: 0xff)                       */
#define MEC_ESPI_TAF_CS1_OPC_OP_POLL2_Pos (24UL)                    /*!< OP_POLL2 (Bit 24)                                     */
#define MEC_ESPI_TAF_CS1_OPC_OP_POLL2_Msk (0xff000000UL)            /*!< OP_POLL2 (Bitfield-Mask: 0xff)                        */
/* =====================================================  CS1_OP_DESCR  ====================================================== */
#define MEC_ESPI_TAF_CS1_OP_DESCR_ENTER_CONT_Pos (0UL)              /*!< ENTER_CONT (Bit 0)                                    */
#define MEC_ESPI_TAF_CS1_OP_DESCR_ENTER_CONT_Msk (0xfUL)            /*!< ENTER_CONT (Bitfield-Mask: 0x0f)                      */
#define MEC_ESPI_TAF_CS1_OP_DESCR_READ_CONT_Pos (8UL)               /*!< READ_CONT (Bit 8)                                     */
#define MEC_ESPI_TAF_CS1_OP_DESCR_READ_CONT_Msk (0xf00UL)           /*!< READ_CONT (Bitfield-Mask: 0x0f)                       */
#define MEC_ESPI_TAF_CS1_OP_DESCR_SIZE_CONT_Pos (12UL)              /*!< SIZE_CONT (Bit 12)                                    */
#define MEC_ESPI_TAF_CS1_OP_DESCR_SIZE_CONT_Msk (0xf000UL)          /*!< SIZE_CONT (Bitfield-Mask: 0x0f)                       */
/* =======================================================  GEN_DESCR  ======================================================= */
#define MEC_ESPI_TAF_GEN_DESCR_EXIT_CONT_Pos (0UL)                  /*!< EXIT_CONT (Bit 0)                                     */
#define MEC_ESPI_TAF_GEN_DESCR_EXIT_CONT_Msk (0xfUL)                /*!< EXIT_CONT (Bitfield-Mask: 0x0f)                       */
#define MEC_ESPI_TAF_GEN_DESCR_POLL1_Pos  (8UL)                     /*!< POLL1 (Bit 8)                                         */
#define MEC_ESPI_TAF_GEN_DESCR_POLL1_Msk  (0xf00UL)                 /*!< POLL1 (Bitfield-Mask: 0x0f)                           */
#define MEC_ESPI_TAF_GEN_DESCR_POLL2_Pos  (12UL)                    /*!< POLL2 (Bit 12)                                        */
#define MEC_ESPI_TAF_GEN_DESCR_POLL2_Msk  (0xf000UL)                /*!< POLL2 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  PR_LOCK  ======================================================== */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG0_Pos (0UL)                    /*!< PROT_REG0 (Bit 0)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG0_Msk (0x1UL)                  /*!< PROT_REG0 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG1_Pos (1UL)                    /*!< PROT_REG1 (Bit 1)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG1_Msk (0x2UL)                  /*!< PROT_REG1 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG2_Pos (2UL)                    /*!< PROT_REG2 (Bit 2)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG2_Msk (0x4UL)                  /*!< PROT_REG2 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG3_Pos (3UL)                    /*!< PROT_REG3 (Bit 3)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG3_Msk (0x8UL)                  /*!< PROT_REG3 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG4_Pos (4UL)                    /*!< PROT_REG4 (Bit 4)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG4_Msk (0x10UL)                 /*!< PROT_REG4 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG5_Pos (5UL)                    /*!< PROT_REG5 (Bit 5)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG5_Msk (0x20UL)                 /*!< PROT_REG5 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG6_Pos (6UL)                    /*!< PROT_REG6 (Bit 6)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG6_Msk (0x40UL)                 /*!< PROT_REG6 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG7_Pos (7UL)                    /*!< PROT_REG7 (Bit 7)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG7_Msk (0x80UL)                 /*!< PROT_REG7 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG8_Pos (8UL)                    /*!< PROT_REG8 (Bit 8)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG8_Msk (0x100UL)                /*!< PROT_REG8 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG9_Pos (9UL)                    /*!< PROT_REG9 (Bit 9)                                     */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG9_Msk (0x200UL)                /*!< PROT_REG9 (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG10_Pos (10UL)                  /*!< PROT_REG10 (Bit 10)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG10_Msk (0x400UL)               /*!< PROT_REG10 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG11_Pos (11UL)                  /*!< PROT_REG11 (Bit 11)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG11_Msk (0x800UL)               /*!< PROT_REG11 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG12_Pos (12UL)                  /*!< PROT_REG12 (Bit 12)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG12_Msk (0x1000UL)              /*!< PROT_REG12 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG13_Pos (13UL)                  /*!< PROT_REG13 (Bit 13)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG13_Msk (0x2000UL)              /*!< PROT_REG13 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG14_Pos (14UL)                  /*!< PROT_REG14 (Bit 14)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG14_Msk (0x4000UL)              /*!< PROT_REG14 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG15_Pos (15UL)                  /*!< PROT_REG15 (Bit 15)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG15_Msk (0x8000UL)              /*!< PROT_REG15 (Bitfield-Mask: 0x01)                      */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG16_Pos (16UL)                  /*!< PROT_REG16 (Bit 16)                                   */
#define MEC_ESPI_TAF_PR_LOCK_PROT_REG16_Msk (0x10000UL)             /*!< PROT_REG16 (Bitfield-Mask: 0x01)                      */
/* =======================================================  PR_DIRTY  ======================================================== */
#define MEC_ESPI_TAF_PR_DIRTY_PR0_Pos     (0UL)                     /*!< PR0 (Bit 0)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR0_Msk     (0x1UL)                   /*!< PR0 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR1_Pos     (1UL)                     /*!< PR1 (Bit 1)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR1_Msk     (0x2UL)                   /*!< PR1 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR2_Pos     (2UL)                     /*!< PR2 (Bit 2)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR2_Msk     (0x4UL)                   /*!< PR2 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR3_Pos     (3UL)                     /*!< PR3 (Bit 3)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR3_Msk     (0x8UL)                   /*!< PR3 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR4_Pos     (4UL)                     /*!< PR4 (Bit 4)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR4_Msk     (0x10UL)                  /*!< PR4 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR5_Pos     (5UL)                     /*!< PR5 (Bit 5)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR5_Msk     (0x20UL)                  /*!< PR5 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR6_Pos     (6UL)                     /*!< PR6 (Bit 6)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR6_Msk     (0x40UL)                  /*!< PR6 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR7_Pos     (7UL)                     /*!< PR7 (Bit 7)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR7_Msk     (0x80UL)                  /*!< PR7 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR8_Pos     (8UL)                     /*!< PR8 (Bit 8)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR8_Msk     (0x100UL)                 /*!< PR8 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR9_Pos     (9UL)                     /*!< PR9 (Bit 9)                                           */
#define MEC_ESPI_TAF_PR_DIRTY_PR9_Msk     (0x200UL)                 /*!< PR9 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PR_DIRTY_PR10_Pos    (10UL)                    /*!< PR10 (Bit 10)                                         */
#define MEC_ESPI_TAF_PR_DIRTY_PR10_Msk    (0x400UL)                 /*!< PR10 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_PR_DIRTY_PR11_Pos    (11UL)                    /*!< PR11 (Bit 11)                                         */
#define MEC_ESPI_TAF_PR_DIRTY_PR11_Msk    (0x800UL)                 /*!< PR11 (Bitfield-Mask: 0x01)                            */
/* =======================================================  TAG_MAP0  ======================================================== */
#define MEC_ESPI_TAF_TAG_MAP0_STM0_Pos    (0UL)                     /*!< STM0 (Bit 0)                                          */
#define MEC_ESPI_TAF_TAG_MAP0_STM0_Msk    (0x7UL)                   /*!< STM0 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM1_Pos    (4UL)                     /*!< STM1 (Bit 4)                                          */
#define MEC_ESPI_TAF_TAG_MAP0_STM1_Msk    (0x70UL)                  /*!< STM1 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM2_Pos    (8UL)                     /*!< STM2 (Bit 8)                                          */
#define MEC_ESPI_TAF_TAG_MAP0_STM2_Msk    (0x700UL)                 /*!< STM2 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM3_Pos    (12UL)                    /*!< STM3 (Bit 12)                                         */
#define MEC_ESPI_TAF_TAG_MAP0_STM3_Msk    (0x7000UL)                /*!< STM3 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM4_Pos    (16UL)                    /*!< STM4 (Bit 16)                                         */
#define MEC_ESPI_TAF_TAG_MAP0_STM4_Msk    (0x70000UL)               /*!< STM4 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM5_Pos    (20UL)                    /*!< STM5 (Bit 20)                                         */
#define MEC_ESPI_TAF_TAG_MAP0_STM5_Msk    (0x700000UL)              /*!< STM5 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM6_Pos    (24UL)                    /*!< STM6 (Bit 24)                                         */
#define MEC_ESPI_TAF_TAG_MAP0_STM6_Msk    (0x7000000UL)             /*!< STM6 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP0_STM7_Pos    (28UL)                    /*!< STM7 (Bit 28)                                         */
#define MEC_ESPI_TAF_TAG_MAP0_STM7_Msk    (0x70000000UL)            /*!< STM7 (Bitfield-Mask: 0x07)                            */
/* =======================================================  TAG_MAP1  ======================================================== */
#define MEC_ESPI_TAF_TAG_MAP1_STM8_Pos    (0UL)                     /*!< STM8 (Bit 0)                                          */
#define MEC_ESPI_TAF_TAG_MAP1_STM8_Msk    (0x7UL)                   /*!< STM8 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP1_STM9_Pos    (4UL)                     /*!< STM9 (Bit 4)                                          */
#define MEC_ESPI_TAF_TAG_MAP1_STM9_Msk    (0x70UL)                  /*!< STM9 (Bitfield-Mask: 0x07)                            */
#define MEC_ESPI_TAF_TAG_MAP1_STM10_Pos   (8UL)                     /*!< STM10 (Bit 8)                                         */
#define MEC_ESPI_TAF_TAG_MAP1_STM10_Msk   (0x700UL)                 /*!< STM10 (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_TAF_TAG_MAP1_STM11_Pos   (12UL)                    /*!< STM11 (Bit 12)                                        */
#define MEC_ESPI_TAF_TAG_MAP1_STM11_Msk   (0x7000UL)                /*!< STM11 (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_TAF_TAG_MAP1_STM12_Pos   (16UL)                    /*!< STM12 (Bit 16)                                        */
#define MEC_ESPI_TAF_TAG_MAP1_STM12_Msk   (0x70000UL)               /*!< STM12 (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_TAF_TAG_MAP1_STM13_Pos   (20UL)                    /*!< STM13 (Bit 20)                                        */
#define MEC_ESPI_TAF_TAG_MAP1_STM13_Msk   (0x700000UL)              /*!< STM13 (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_TAF_TAG_MAP1_STM14_Pos   (24UL)                    /*!< STM14 (Bit 24)                                        */
#define MEC_ESPI_TAF_TAG_MAP1_STM14_Msk   (0x7000000UL)             /*!< STM14 (Bitfield-Mask: 0x07)                           */
#define MEC_ESPI_TAF_TAG_MAP1_STM15_Pos   (28UL)                    /*!< STM15 (Bit 28)                                        */
#define MEC_ESPI_TAF_TAG_MAP1_STM15_Msk   (0x70000000UL)            /*!< STM15 (Bitfield-Mask: 0x07)                           */
/* =======================================================  TAG_MAP2  ======================================================== */
#define MEC_ESPI_TAF_TAG_MAP2_STM_EC_Pos  (0UL)                     /*!< STM_EC (Bit 0)                                        */
#define MEC_ESPI_TAF_TAG_MAP2_STM_EC_Msk  (0x7UL)                   /*!< STM_EC (Bitfield-Mask: 0x07)                          */
#define MEC_ESPI_TAF_TAG_MAP2_LOCK_Pos    (31UL)                    /*!< LOCK (Bit 31)                                         */
#define MEC_ESPI_TAF_TAG_MAP2_LOCK_Msk    (0x80000000UL)            /*!< LOCK (Bitfield-Mask: 0x01)                            */
/* =====================================================  POLL_TIMEOUT  ====================================================== */
#define MEC_ESPI_TAF_POLL_TIMEOUT_VAL_Pos (0UL)                     /*!< VAL (Bit 0)                                           */
#define MEC_ESPI_TAF_POLL_TIMEOUT_VAL_Msk (0x3ffffUL)               /*!< VAL (Bitfield-Mask: 0x3ffff)                          */
/* =====================================================  POLL_INTERVAL  ===================================================== */
/* ======================================================  SR_INTERVAL  ====================================================== */
/* ======================================================  CRD_TIMEOUT  ====================================================== */
/* ======================================================  POLL2_MSKS  ======================================================= */
#define MEC_ESPI_TAF_POLL2_MSKS_CS0_Pos   (0UL)                     /*!< CS0 (Bit 0)                                           */
#define MEC_ESPI_TAF_POLL2_MSKS_CS0_Msk   (0xffffUL)                /*!< CS0 (Bitfield-Mask: 0xffff)                           */
#define MEC_ESPI_TAF_POLL2_MSKS_CS1_Pos   (16UL)                    /*!< CS1 (Bit 16)                                          */
#define MEC_ESPI_TAF_POLL2_MSKS_CS1_Msk   (0xffff0000UL)            /*!< CS1 (Bitfield-Mask: 0xffff)                           */
/* =======================================================  FC_SMODE  ======================================================== */
#define MEC_ESPI_TAF_FC_SMODE_CS0_DSER_Pos (0UL)                    /*!< CS0_DSER (Bit 0)                                      */
#define MEC_ESPI_TAF_FC_SMODE_CS0_DSER_Msk (0x1UL)                  /*!< CS0_DSER (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_SMODE_CS1_DSER_Pos (1UL)                    /*!< CS1_DSER (Bit 1)                                      */
#define MEC_ESPI_TAF_FC_SMODE_CS1_DSER_Msk (0x2UL)                  /*!< CS1_DSER (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_SMODE_CS0_DSWR_Pos (2UL)                    /*!< CS0_DSWR (Bit 2)                                      */
#define MEC_ESPI_TAF_FC_SMODE_CS0_DSWR_Msk (0x4UL)                  /*!< CS0_DSWR (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_TAF_FC_SMODE_CS1_DSWR_Pos (3UL)                    /*!< CS1_DSWR (Bit 3)                                      */
#define MEC_ESPI_TAF_FC_SMODE_CS1_DSWR_Msk (0x8UL)                  /*!< CS1_DSWR (Bitfield-Mask: 0x01)                        */
/* ======================================================  SUS_CHK_DLY  ====================================================== */
/* =====================================================  FC_CM_PREFIX  ====================================================== */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS0_OP_Pos (0UL)                  /*!< CS0_OP (Bit 0)                                        */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS0_OP_Msk (0xffUL)               /*!< CS0_OP (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS0_DAT_Pos (8UL)                 /*!< CS0_DAT (Bit 8)                                       */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS0_DAT_Msk (0xff00UL)            /*!< CS0_DAT (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS1_OP_Pos (16UL)                 /*!< CS1_OP (Bit 16)                                       */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS1_OP_Msk (0xff0000UL)           /*!< CS1_OP (Bitfield-Mask: 0xff)                          */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS1_DAT_Pos (24UL)                /*!< CS1_DAT (Bit 24)                                      */
#define MEC_ESPI_TAF_FC_CM_PREFIX_CS1_DAT_Msk (0xff000000UL)        /*!< CS1_DAT (Bitfield-Mask: 0xff)                         */
/* ======================================================  DNX_PR_BYP  ======================================================= */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG0_Pos  (0UL)                     /*!< TAG0 (Bit 0)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG0_Msk  (0x1UL)                   /*!< TAG0 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG1_Pos  (1UL)                     /*!< TAG1 (Bit 1)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG1_Msk  (0x2UL)                   /*!< TAG1 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG2_Pos  (2UL)                     /*!< TAG2 (Bit 2)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG2_Msk  (0x4UL)                   /*!< TAG2 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG3_Pos  (3UL)                     /*!< TAG3 (Bit 3)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG3_Msk  (0x8UL)                   /*!< TAG3 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG4_Pos  (4UL)                     /*!< TAG4 (Bit 4)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG4_Msk  (0x10UL)                  /*!< TAG4 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG5_Pos  (5UL)                     /*!< TAG5 (Bit 5)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG5_Msk  (0x20UL)                  /*!< TAG5 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG6_Pos  (6UL)                     /*!< TAG6 (Bit 6)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG6_Msk  (0x40UL)                  /*!< TAG6 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG7_Pos  (7UL)                     /*!< TAG7 (Bit 7)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG7_Msk  (0x80UL)                  /*!< TAG7 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG8_Pos  (8UL)                     /*!< TAG8 (Bit 8)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG8_Msk  (0x100UL)                 /*!< TAG8 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG9_Pos  (9UL)                     /*!< TAG9 (Bit 9)                                          */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG9_Msk  (0x200UL)                 /*!< TAG9 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG10_Pos (10UL)                    /*!< TAG10 (Bit 10)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG10_Msk (0x400UL)                 /*!< TAG10 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG11_Pos (11UL)                    /*!< TAG11 (Bit 11)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG11_Msk (0x800UL)                 /*!< TAG11 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG12_Pos (12UL)                    /*!< TAG12 (Bit 12)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG12_Msk (0x1000UL)                /*!< TAG12 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG13_Pos (13UL)                    /*!< TAG13 (Bit 13)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG13_Msk (0x2000UL)                /*!< TAG13 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG14_Pos (14UL)                    /*!< TAG14 (Bit 14)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG14_Msk (0x4000UL)                /*!< TAG14 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG15_Pos (15UL)                    /*!< TAG15 (Bit 15)                                        */
#define MEC_ESPI_TAF_DNX_PR_BYP_TAG15_Msk (0x8000UL)                /*!< TAG15 (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_DS_Pos    (20UL)                    /*!< DS (Bit 20)                                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_DS_Msk    (0x100000UL)              /*!< DS (Bitfield-Mask: 0x01)                              */
#define MEC_ESPI_TAF_DNX_PR_BYP_DM_Pos    (24UL)                    /*!< DM (Bit 24)                                           */
#define MEC_ESPI_TAF_DNX_PR_BYP_DM_Msk    (0x1000000UL)             /*!< DM (Bitfield-Mask: 0x01)                              */
#define MEC_ESPI_TAF_DNX_PR_BYP_LOCK_Pos  (28UL)                    /*!< LOCK (Bit 28)                                         */
#define MEC_ESPI_TAF_DNX_PR_BYP_LOCK_Msk  (0x10000000UL)            /*!< LOCK (Bitfield-Mask: 0x01)                            */
/* =====================================================  ACT_CNT_RLOAD  ===================================================== */
/* ========================================================  PD_CTRL  ======================================================== */
#define MEC_ESPI_TAF_PD_CTRL_CS0_PD_EN_Pos (0UL)                    /*!< CS0_PD_EN (Bit 0)                                     */
#define MEC_ESPI_TAF_PD_CTRL_CS0_PD_EN_Msk (0x1UL)                  /*!< CS0_PD_EN (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PD_CTRL_CS1_PD_EN_Pos (1UL)                    /*!< CS1_PD_EN (Bit 1)                                     */
#define MEC_ESPI_TAF_PD_CTRL_CS1_PD_EN_Msk (0x2UL)                  /*!< CS1_PD_EN (Bitfield-Mask: 0x01)                       */
#define MEC_ESPI_TAF_PD_CTRL_CS0_WAKE_EN_Pos (2UL)                  /*!< CS0_WAKE_EN (Bit 2)                                   */
#define MEC_ESPI_TAF_PD_CTRL_CS0_WAKE_EN_Msk (0x4UL)                /*!< CS0_WAKE_EN (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_TAF_PD_CTRL_CS1_WAKE_EN_Pos (3UL)                  /*!< CS1_WAKE_EN (Bit 3)                                   */
#define MEC_ESPI_TAF_PD_CTRL_CS1_WAKE_EN_Msk (0x8UL)                /*!< CS1_WAKE_EN (Bitfield-Mask: 0x01)                     */
/* ========================================================  PD_STS  ========================================================= */
#define MEC_ESPI_TAF_PD_STS_CS0_Pos       (0UL)                     /*!< CS0 (Bit 0)                                           */
#define MEC_ESPI_TAF_PD_STS_CS0_Msk       (0x1UL)                   /*!< CS0 (Bitfield-Mask: 0x01)                             */
#define MEC_ESPI_TAF_PD_STS_CS1_Pos       (1UL)                     /*!< CS1 (Bit 1)                                           */
#define MEC_ESPI_TAF_PD_STS_CS1_Msk       (0x2UL)                   /*!< CS1 (Bitfield-Mask: 0x01)                             */
/* ========================================================  CS0_OPD  ======================================================== */
#define MEC_ESPI_TAF_CS0_OPD_ENTER_PD_Pos (0UL)                     /*!< ENTER_PD (Bit 0)                                      */
#define MEC_ESPI_TAF_CS0_OPD_ENTER_PD_Msk (0xffUL)                  /*!< ENTER_PD (Bitfield-Mask: 0xff)                        */
#define MEC_ESPI_TAF_CS0_OPD_EXIT_PD_Pos  (8UL)                     /*!< EXIT_PD (Bit 8)                                       */
#define MEC_ESPI_TAF_CS0_OPD_EXIT_PD_Msk  (0xff00UL)                /*!< EXIT_PD (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_TAF_CS0_OPD_RPMC_OP2_Pos (16UL)                    /*!< RPMC_OP2 (Bit 16)                                     */
#define MEC_ESPI_TAF_CS0_OPD_RPMC_OP2_Msk (0xff0000UL)              /*!< RPMC_OP2 (Bitfield-Mask: 0xff)                        */
/* ========================================================  CS1_OPD  ======================================================== */
#define MEC_ESPI_TAF_CS1_OPD_ENTER_PD_Pos (0UL)                     /*!< ENTER_PD (Bit 0)                                      */
#define MEC_ESPI_TAF_CS1_OPD_ENTER_PD_Msk (0xffUL)                  /*!< ENTER_PD (Bitfield-Mask: 0xff)                        */
#define MEC_ESPI_TAF_CS1_OPD_EXIT_PD_Pos  (8UL)                     /*!< EXIT_PD (Bit 8)                                       */
#define MEC_ESPI_TAF_CS1_OPD_EXIT_PD_Msk  (0xff00UL)                /*!< EXIT_PD (Bitfield-Mask: 0xff)                         */
#define MEC_ESPI_TAF_CS1_OPD_RPMC_OP2_Pos (16UL)                    /*!< RPMC_OP2 (Bit 16)                                     */
#define MEC_ESPI_TAF_CS1_OPD_RPMC_OP2_Msk (0xff0000UL)              /*!< RPMC_OP2 (Bitfield-Mask: 0xff)                        */
/* ======================================================  PUD_TIMEOUT  ====================================================== */
/* ======================================================  CLKDIV_CS0  ======================================================= */
#define MEC_ESPI_TAF_CLKDIV_CS0_READ_Pos  (0UL)                     /*!< READ (Bit 0)                                          */
#define MEC_ESPI_TAF_CLKDIV_CS0_READ_Msk  (0xffffUL)                /*!< READ (Bitfield-Mask: 0xffff)                          */
#define MEC_ESPI_TAF_CLKDIV_CS0_NON_READ_Pos (16UL)                 /*!< NON_READ (Bit 16)                                     */
#define MEC_ESPI_TAF_CLKDIV_CS0_NON_READ_Msk (0xffff0000UL)         /*!< NON_READ (Bitfield-Mask: 0xffff)                      */
/* ======================================================  CLKDIV_CS1  ======================================================= */
#define MEC_ESPI_TAF_CLKDIV_CS1_READ_Pos  (0UL)                     /*!< READ (Bit 0)                                          */
#define MEC_ESPI_TAF_CLKDIV_CS1_READ_Msk  (0xffffUL)                /*!< READ (Bitfield-Mask: 0xffff)                          */
#define MEC_ESPI_TAF_CLKDIV_CS1_NON_READ_Pos (16UL)                 /*!< NON_READ (Bit 16)                                     */
#define MEC_ESPI_TAF_CLKDIV_CS1_NON_READ_Msk (0xffff0000UL)         /*!< NON_READ (Bitfield-Mask: 0xffff)                      */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ================                                       MEC_ESPI_TAF                                        ================ */
/* ========================================================  ECP_CMD  ======================================================== */
/* ==========================================  MEC_ESPI_TAF ECP_CMD EC_CMD [8..15]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_TAF_ECP_CMD_EC_CMD                                               */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_READ     = 0,     /*!< READ : Perform read of flash devices                                      */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_WRITE    = 1,     /*!< WRITE : Perform write(program) of flash devices                           */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_ERASE    = 2,     /*!< ERASE : Perform region erase of flash devices                             */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP1_CS0 = 3, /*!< RPMC_OP1_CS0 : Perform RPMC OP1 operation on flash at CS0                 */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP2_CS0 = 4, /*!< RPMC_OP2_CS0 : Perform RPMC OP2 operation on flash at CS0                 */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP1_CS1 = 35,/*!< RPMC_OP1_CS1 : Perform RPMC OP1 operation on flash at CS1                */
  MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP2_CS1 = 36,/*!< RPMC_OP2_CS1 : Perform RPMC OP2 operation on flash at CS1                */
} MEC_ESPI_TAF_ECP_CMD_EC_CMD_Enum;

/* ===========================================  MEC_ESPI_TAF ECP_CMD LEN [24..31]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_TAF_ECP_CMD_LEN                                                  */
  MEC_ESPI_TAF_ECP_CMD_LEN_ERASE_4K    = 0,     /*!< ERASE_4K : Erase 4KB sector encoding                                      */
  MEC_ESPI_TAF_ECP_CMD_LEN_ERASE_32K   = 1,     /*!< ERASE_32K : Erase 32KB sector encoding                                    */
  MEC_ESPI_TAF_ECP_CMD_LEN_ERASE_64K   = 2,     /*!< ERASE_64K : Erase 64KB sector encoding                                    */
} MEC_ESPI_TAF_ECP_CMD_LEN_Enum;

/* ========================================================  FC_MISC  ======================================================== */
/* =======================================  MEC_ESPI_TAF FC_MISC PREFETCH_MODE [0..1]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE                                        */
  MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_DEFAULT = 0,/*!< DEFAULT : Default prefetch method defined in eSPI TAF specification      */
  MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_EXPEDITED = 3,/*!< EXPEDITED : Expedited prefetch methods                                 */
} MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_Enum;

/* =====================================================  POLL_TIMEOUT  ====================================================== */
/* =========================================  MEC_ESPI_TAF POLL_TIMEOUT VAL [0..17]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_TAF_POLL_TIMEOUT_VAL                                             */
  MEC_ESPI_TAF_POLL_TIMEOUT_VAL_5SEC   = 163840,/*!< 5SEC : Recommend flash POLL1 timeout is 5 seconds                         */
} MEC_ESPI_TAF_POLL_TIMEOUT_VAL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_ESPI_TAF_V1_5_H */
