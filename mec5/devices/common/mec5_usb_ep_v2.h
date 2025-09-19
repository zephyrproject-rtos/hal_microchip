/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_USB_EP_V2_H
#define _MEC5_USB_EP_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief USB end point (MEC_USB_EP0)
  */

typedef struct mec_usb_ep_regs {                /*!< (@ 0x40007800) MEC_USB_EP0 Structure                                      */
  __IM  uint32_t  PERIPH_ID;                    /*!< (@ 0x00000000) Peripheral ID read-only register                           */
  __IM  uint32_t  PERIPH_ID_COMPL;              /*!< (@ 0x00000004) Peripheral ID complement read-only register                */
  __IOM uint32_t  REVISION;                     /*!< (@ 0x00000008) USB revision register                                      */
  __IM  uint32_t  ADDL_INFO;                    /*!< (@ 0x0000000C) USB additional information register                        */
  __IOM uint32_t  OTG_INTR_STS;                 /*!< (@ 0x00000010) OTG interrupt status register                              */
  __IOM uint32_t  OTG_INTR_CTRL;                /*!< (@ 0x00000014) OTG interrupt control register                             */
  __IOM uint32_t  OTG_STS;                      /*!< (@ 0x00000018) OTG status register                                        */
  __IOM uint32_t  OTG_CTRL;                     /*!< (@ 0x0000001C) OTG control register                                       */
  __IM  uint32_t  RESERVED[24];
  __IOM uint32_t  CTRL_INTR_STS;                /*!< (@ 0x00000080) Controller interrupt status register                       */
  __IOM uint32_t  CTRL_INTR_EN;                 /*!< (@ 0x00000084) Controller interrupt enable register                       */
  __IOM uint32_t  ERR_STAT;                     /*!< (@ 0x00000088) Controller interrupt error status register                 */
  __IOM uint32_t  ERR_STAT_EN;                  /*!< (@ 0x0000008C) Controller interrupt error enable register                 */
  __IOM uint32_t  USB_STS;                      /*!< (@ 0x00000090) USB transaction status register                            */
  __IOM uint32_t  USB_CTRL;                     /*!< (@ 0x00000094) USB control register                                       */
  __IOM uint32_t  DEV_MODE_ADDR;                /*!< (@ 0x00000098) Device mode USB address this block will decode             */
  __IOM uint32_t  BDT_P1;                       /*!< (@ 0x0000009C) BDT Page 1 register                                        */
  __IOM uint32_t  FNLO;                         /*!< (@ 0x000000A0) Frame number low register                                  */
  __IOM uint32_t  FNHI;                         /*!< (@ 0x000000A4) Frame number hi register                                   */
  __IOM uint32_t  TOKEN;                        /*!< (@ 0x000000A8) Token register                                             */
  __IOM uint32_t  SOF_THRL;                     /*!< (@ 0x000000AC) SOF threshold                                              */
  __IOM uint32_t  BDT_P2;                       /*!< (@ 0x000000B0) BDT Page 2 register                                        */
  __IOM uint32_t  BDT_P3;                       /*!< (@ 0x000000B4) BDT Page 3 register                                        */
  __IM  uint32_t  RESERVED1[2];
  __IOM uint32_t  EPC0;                         /*!< (@ 0x000000C0) End point control 0 register                               */
  __IOM uint32_t  EPC1;                         /*!< (@ 0x000000C4) End point control 1 register                               */
  __IOM uint32_t  EPC2;                         /*!< (@ 0x000000C8) Endpoint control 2 register                                */
  __IOM uint32_t  EPC3;                         /*!< (@ 0x000000CC) Endpoint control 3 register                                */
  __IM  uint32_t  RESERVED2[76];
  __IOM uint32_t  CMN_CTRL;                     /*!< (@ 0x00000200) USB common control register                                */
  __IOM uint32_t  WRP_INTR_EN;                  /*!< (@ 0x00000204) Wrapper interrupt enabler register                         */
  __IOM uint32_t  WRP_INTR_STS;                 /*!< (@ 0x00000208) Wrapper interrupt status register                          */
  __IOM uint32_t  AHB_ERR_ADDR;                 /*!< (@ 0x0000020C) AHB error address register                                 */
} MEC_USB_EP_Type;                              /*!< Size = 528 (0x210)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  ADDL_INFO  ======================================================= */
#define MEC_USB_EP_ADDL_INFO_HOST_MODE_EN_Pos (0UL)                 /*!< HOST_MODE_EN (Bit 0)                                  */
#define MEC_USB_EP_ADDL_INFO_HOST_MODE_EN_Msk (0x1UL)               /*!< HOST_MODE_EN (Bitfield-Mask: 0x01)                    */
#define MEC_USB_EP_ADDL_INFO_IRQ_NUM_Pos  (3UL)                     /*!< IRQ_NUM (Bit 3)                                       */
#define MEC_USB_EP_ADDL_INFO_IRQ_NUM_Msk  (0xf8UL)                  /*!< IRQ_NUM (Bitfield-Mask: 0x1f)                         */
/* =====================================================  OTG_INTR_STS  ====================================================== */
#define MEC_USB_EP_OTG_INTR_STS_LSCH_Pos  (5UL)                     /*!< LSCH (Bit 5)                                          */
#define MEC_USB_EP_OTG_INTR_STS_LSCH_Msk  (0x20UL)                  /*!< LSCH (Bitfield-Mask: 0x01)                            */
#define MEC_USB_EP_OTG_INTR_STS_MSEC_EXP_Pos (6UL)                  /*!< MSEC_EXP (Bit 6)                                      */
#define MEC_USB_EP_OTG_INTR_STS_MSEC_EXP_Msk (0x40UL)               /*!< MSEC_EXP (Bitfield-Mask: 0x01)                        */
/* =====================================================  OTG_INTR_CTRL  ===================================================== */
#define MEC_USB_EP_OTG_INTR_CTRL_LSCH_EN_Pos (5UL)                  /*!< LSCH_EN (Bit 5)                                       */
#define MEC_USB_EP_OTG_INTR_CTRL_LSCH_EN_Msk (0x20UL)               /*!< LSCH_EN (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_OTG_INTR_CTRL_MSEC_EXP_EN_Pos (6UL)              /*!< MSEC_EXP_EN (Bit 6)                                   */
#define MEC_USB_EP_OTG_INTR_CTRL_MSEC_EXP_EN_Msk (0x40UL)           /*!< MSEC_EXP_EN (Bitfield-Mask: 0x01)                     */
/* ========================================================  OTG_STS  ======================================================== */
#define MEC_USB_EP_OTG_STS_LS_STABLE_Pos  (5UL)                     /*!< LS_STABLE (Bit 5)                                     */
#define MEC_USB_EP_OTG_STS_LS_STABLE_Msk  (0x20UL)                  /*!< LS_STABLE (Bitfield-Mask: 0x01)                       */
#define MEC_USB_EP_OTG_STS_MSEC_EXP_Pos   (6UL)                     /*!< MSEC_EXP (Bit 6)                                      */
#define MEC_USB_EP_OTG_STS_MSEC_EXP_Msk   (0x40UL)                  /*!< MSEC_EXP (Bitfield-Mask: 0x01)                        */
/* =======================================================  OTG_CTRL  ======================================================== */
#define MEC_USB_EP_OTG_CTRL_VBUS_ON_Pos   (3UL)                     /*!< VBUS_ON (Bit 3)                                       */
#define MEC_USB_EP_OTG_CTRL_VBUS_ON_Msk   (0x8UL)                   /*!< VBUS_ON (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_OTG_CTRL_DM_LOW_Pos    (4UL)                     /*!< DM_LOW (Bit 4)                                        */
#define MEC_USB_EP_OTG_CTRL_DM_LOW_Msk    (0x10UL)                  /*!< DM_LOW (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_OTG_CTRL_DP_LOW_Pos    (5UL)                     /*!< DP_LOW (Bit 5)                                        */
#define MEC_USB_EP_OTG_CTRL_DP_LOW_Msk    (0x20UL)                  /*!< DP_LOW (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_OTG_CTRL_DM_HIGH_Pos   (6UL)                     /*!< DM_HIGH (Bit 6)                                       */
#define MEC_USB_EP_OTG_CTRL_DM_HIGH_Msk   (0x40UL)                  /*!< DM_HIGH (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_OTG_CTRL_DP_HIGH_Pos   (7UL)                     /*!< DP_HIGH (Bit 7)                                       */
#define MEC_USB_EP_OTG_CTRL_DP_HIGH_Msk   (0x80UL)                  /*!< DP_HIGH (Bitfield-Mask: 0x01)                         */
/* =====================================================  CTRL_INTR_STS  ===================================================== */
#define MEC_USB_EP_CTRL_INTR_STS_USB_RST_Pos (0UL)                  /*!< USB_RST (Bit 0)                                       */
#define MEC_USB_EP_CTRL_INTR_STS_USB_RST_Msk (0x1UL)                /*!< USB_RST (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_STS_ERROR_Pos (1UL)                    /*!< ERROR (Bit 1)                                         */
#define MEC_USB_EP_CTRL_INTR_STS_ERROR_Msk (0x2UL)                  /*!< ERROR (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_CTRL_INTR_STS_SOF_TOK_Pos (2UL)                  /*!< SOF_TOK (Bit 2)                                       */
#define MEC_USB_EP_CTRL_INTR_STS_SOF_TOK_Msk (0x4UL)                /*!< SOF_TOK (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_STS_TOK_DNE_Pos (3UL)                  /*!< TOK_DNE (Bit 3)                                       */
#define MEC_USB_EP_CTRL_INTR_STS_TOK_DNE_Msk (0x8UL)                /*!< TOK_DNE (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_STS_SLEEP_Pos (4UL)                    /*!< SLEEP (Bit 4)                                         */
#define MEC_USB_EP_CTRL_INTR_STS_SLEEP_Msk (0x10UL)                 /*!< SLEEP (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_CTRL_INTR_STS_RESUME_Pos (5UL)                   /*!< RESUME (Bit 5)                                        */
#define MEC_USB_EP_CTRL_INTR_STS_RESUME_Msk (0x20UL)                /*!< RESUME (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_CTRL_INTR_STS_ATTACH_Pos (6UL)                   /*!< ATTACH (Bit 6)                                        */
#define MEC_USB_EP_CTRL_INTR_STS_ATTACH_Msk (0x40UL)                /*!< ATTACH (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_CTRL_INTR_STS_STALL_Pos (7UL)                    /*!< STALL (Bit 7)                                         */
#define MEC_USB_EP_CTRL_INTR_STS_STALL_Msk (0x80UL)                 /*!< STALL (Bitfield-Mask: 0x01)                           */
/* =====================================================  CTRL_INTR_EN  ====================================================== */
#define MEC_USB_EP_CTRL_INTR_EN_USB_RST_Pos (0UL)                   /*!< USB_RST (Bit 0)                                       */
#define MEC_USB_EP_CTRL_INTR_EN_USB_RST_Msk (0x1UL)                 /*!< USB_RST (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_EN_ERROR_Pos (1UL)                     /*!< ERROR (Bit 1)                                         */
#define MEC_USB_EP_CTRL_INTR_EN_ERROR_Msk (0x2UL)                   /*!< ERROR (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_CTRL_INTR_EN_SOF_TOK_Pos (2UL)                   /*!< SOF_TOK (Bit 2)                                       */
#define MEC_USB_EP_CTRL_INTR_EN_SOF_TOK_Msk (0x4UL)                 /*!< SOF_TOK (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_EN_TOK_DNE_Pos (3UL)                   /*!< TOK_DNE (Bit 3)                                       */
#define MEC_USB_EP_CTRL_INTR_EN_TOK_DNE_Msk (0x8UL)                 /*!< TOK_DNE (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_CTRL_INTR_EN_SLEEP_Pos (4UL)                     /*!< SLEEP (Bit 4)                                         */
#define MEC_USB_EP_CTRL_INTR_EN_SLEEP_Msk (0x10UL)                  /*!< SLEEP (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_CTRL_INTR_EN_RESUME_Pos (5UL)                    /*!< RESUME (Bit 5)                                        */
#define MEC_USB_EP_CTRL_INTR_EN_RESUME_Msk (0x20UL)                 /*!< RESUME (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_CTRL_INTR_EN_ATTACH_Pos (6UL)                    /*!< ATTACH (Bit 6)                                        */
#define MEC_USB_EP_CTRL_INTR_EN_ATTACH_Msk (0x40UL)                 /*!< ATTACH (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_CTRL_INTR_EN_STALL_Pos (7UL)                     /*!< STALL (Bit 7)                                         */
#define MEC_USB_EP_CTRL_INTR_EN_STALL_Msk (0x80UL)                  /*!< STALL (Bitfield-Mask: 0x01)                           */
/* =======================================================  ERR_STAT  ======================================================== */
#define MEC_USB_EP_ERR_STAT_PID_ERR_Pos   (0UL)                     /*!< PID_ERR (Bit 0)                                       */
#define MEC_USB_EP_ERR_STAT_PID_ERR_Msk   (0x1UL)                   /*!< PID_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_CRC5_EOF_Pos  (1UL)                     /*!< CRC5_EOF (Bit 1)                                      */
#define MEC_USB_EP_ERR_STAT_CRC5_EOF_Msk  (0x2UL)                   /*!< CRC5_EOF (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_ERR_STAT_CRC16_Pos     (2UL)                     /*!< CRC16 (Bit 2)                                         */
#define MEC_USB_EP_ERR_STAT_CRC16_Msk     (0x4UL)                   /*!< CRC16 (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_ERR_STAT_DFN8_Pos      (3UL)                     /*!< DFN8 (Bit 3)                                          */
#define MEC_USB_EP_ERR_STAT_DFN8_Msk      (0x8UL)                   /*!< DFN8 (Bitfield-Mask: 0x01)                            */
#define MEC_USB_EP_ERR_STAT_BTO_ERR_Pos   (4UL)                     /*!< BTO_ERR (Bit 4)                                       */
#define MEC_USB_EP_ERR_STAT_BTO_ERR_Msk   (0x10UL)                  /*!< BTO_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_DMA_ERR_Pos   (5UL)                     /*!< DMA_ERR (Bit 5)                                       */
#define MEC_USB_EP_ERR_STAT_DMA_ERR_Msk   (0x20UL)                  /*!< DMA_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_BTS_ERR_Pos   (7UL)                     /*!< BTS_ERR (Bit 7)                                       */
#define MEC_USB_EP_ERR_STAT_BTS_ERR_Msk   (0x80UL)                  /*!< BTS_ERR (Bitfield-Mask: 0x01)                         */
/* ======================================================  ERR_STAT_EN  ====================================================== */
#define MEC_USB_EP_ERR_STAT_EN_PID_ERR_Pos (0UL)                    /*!< PID_ERR (Bit 0)                                       */
#define MEC_USB_EP_ERR_STAT_EN_PID_ERR_Msk (0x1UL)                  /*!< PID_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_EN_CRC5_EOF_Pos (1UL)                   /*!< CRC5_EOF (Bit 1)                                      */
#define MEC_USB_EP_ERR_STAT_EN_CRC5_EOF_Msk (0x2UL)                 /*!< CRC5_EOF (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_ERR_STAT_EN_CRC16_Pos  (2UL)                     /*!< CRC16 (Bit 2)                                         */
#define MEC_USB_EP_ERR_STAT_EN_CRC16_Msk  (0x4UL)                   /*!< CRC16 (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_ERR_STAT_EN_DFN8_Pos   (3UL)                     /*!< DFN8 (Bit 3)                                          */
#define MEC_USB_EP_ERR_STAT_EN_DFN8_Msk   (0x8UL)                   /*!< DFN8 (Bitfield-Mask: 0x01)                            */
#define MEC_USB_EP_ERR_STAT_EN_BTO_ERR_Pos (4UL)                    /*!< BTO_ERR (Bit 4)                                       */
#define MEC_USB_EP_ERR_STAT_EN_BTO_ERR_Msk (0x10UL)                 /*!< BTO_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_EN_DMA_ERR_Pos (5UL)                    /*!< DMA_ERR (Bit 5)                                       */
#define MEC_USB_EP_ERR_STAT_EN_DMA_ERR_Msk (0x20UL)                 /*!< DMA_ERR (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_ERR_STAT_EN_BTS_ERR_Pos (7UL)                    /*!< BTS_ERR (Bit 7)                                       */
#define MEC_USB_EP_ERR_STAT_EN_BTS_ERR_Msk (0x80UL)                 /*!< BTS_ERR (Bitfield-Mask: 0x01)                         */
/* ========================================================  USB_STS  ======================================================== */
#define MEC_USB_EP_USB_STS_ODD_Pos        (2UL)                     /*!< ODD (Bit 2)                                           */
#define MEC_USB_EP_USB_STS_ODD_Msk        (0x4UL)                   /*!< ODD (Bitfield-Mask: 0x01)                             */
#define MEC_USB_EP_USB_STS_TX_Pos         (3UL)                     /*!< TX (Bit 3)                                            */
#define MEC_USB_EP_USB_STS_TX_Msk         (0x8UL)                   /*!< TX (Bitfield-Mask: 0x01)                              */
#define MEC_USB_EP_USB_STS_ENDP_Pos       (4UL)                     /*!< ENDP (Bit 4)                                          */
#define MEC_USB_EP_USB_STS_ENDP_Msk       (0xf0UL)                  /*!< ENDP (Bitfield-Mask: 0x0f)                            */
/* =======================================================  USB_CTRL  ======================================================== */
#define MEC_USB_EP_USB_CTRL_USB_SOF_EN_Pos (0UL)                    /*!< USB_SOF_EN (Bit 0)                                    */
#define MEC_USB_EP_USB_CTRL_USB_SOF_EN_Msk (0x1UL)                  /*!< USB_SOF_EN (Bitfield-Mask: 0x01)                      */
#define MEC_USB_EP_USB_CTRL_ODD_RST_Pos   (1UL)                     /*!< ODD_RST (Bit 1)                                       */
#define MEC_USB_EP_USB_CTRL_ODD_RST_Msk   (0x2UL)                   /*!< ODD_RST (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_USB_CTRL_RESUME_Pos    (2UL)                     /*!< RESUME (Bit 2)                                        */
#define MEC_USB_EP_USB_CTRL_RESUME_Msk    (0x4UL)                   /*!< RESUME (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_USB_CTRL_HOST_MODE_EN_Pos (3UL)                  /*!< HOST_MODE_EN (Bit 3)                                  */
#define MEC_USB_EP_USB_CTRL_HOST_MODE_EN_Msk (0x8UL)                /*!< HOST_MODE_EN (Bitfield-Mask: 0x01)                    */
#define MEC_USB_EP_USB_CTRL_RESET_Pos     (4UL)                     /*!< RESET (Bit 4)                                         */
#define MEC_USB_EP_USB_CTRL_RESET_Msk     (0x10UL)                  /*!< RESET (Bitfield-Mask: 0x01)                           */
#define MEC_USB_EP_USB_CTRL_TXDS_TOKBSY_Pos (5UL)                   /*!< TXDS_TOKBSY (Bit 5)                                   */
#define MEC_USB_EP_USB_CTRL_TXDS_TOKBSY_Msk (0x20UL)                /*!< TXDS_TOKBSY (Bitfield-Mask: 0x01)                     */
#define MEC_USB_EP_USB_CTRL_SE0_Pos       (6UL)                     /*!< SE0 (Bit 6)                                           */
#define MEC_USB_EP_USB_CTRL_SE0_Msk       (0x40UL)                  /*!< SE0 (Bitfield-Mask: 0x01)                             */
#define MEC_USB_EP_USB_CTRL_JSTATE_Pos    (7UL)                     /*!< JSTATE (Bit 7)                                        */
#define MEC_USB_EP_USB_CTRL_JSTATE_Msk    (0x80UL)                  /*!< JSTATE (Bitfield-Mask: 0x01)                          */
/* =====================================================  DEV_MODE_ADDR  ===================================================== */
#define MEC_USB_EP_DEV_MODE_ADDR_ADDR_Pos (0UL)                     /*!< ADDR (Bit 0)                                          */
#define MEC_USB_EP_DEV_MODE_ADDR_ADDR_Msk (0x7fUL)                  /*!< ADDR (Bitfield-Mask: 0x7f)                            */
#define MEC_USB_EP_DEV_MODE_ADDR_LS_EN_Pos (7UL)                    /*!< LS_EN (Bit 7)                                         */
#define MEC_USB_EP_DEV_MODE_ADDR_LS_EN_Msk (0x80UL)                 /*!< LS_EN (Bitfield-Mask: 0x01)                           */
/* ========================================================  BDT_P1  ========================================================= */
#define MEC_USB_EP_BDT_P1_BDT_BA_Pos      (0UL)                     /*!< BDT_BA (Bit 0)                                        */
#define MEC_USB_EP_BDT_P1_BDT_BA_Msk      (0xffUL)                  /*!< BDT_BA (Bitfield-Mask: 0xff)                          */
/* =========================================================  FNLO  ========================================================== */
#define MEC_USB_EP_FNLO_FNL_Pos           (0UL)                     /*!< FNL (Bit 0)                                           */
#define MEC_USB_EP_FNLO_FNL_Msk           (0xffUL)                  /*!< FNL (Bitfield-Mask: 0xff)                             */
/* =========================================================  FNHI  ========================================================== */
#define MEC_USB_EP_FNHI_FNH_Pos           (0UL)                     /*!< FNH (Bit 0)                                           */
#define MEC_USB_EP_FNHI_FNH_Msk           (0xffUL)                  /*!< FNH (Bitfield-Mask: 0xff)                             */
/* =========================================================  TOKEN  ========================================================= */
#define MEC_USB_EP_TOKEN_ENDPT_Pos        (0UL)                     /*!< ENDPT (Bit 0)                                         */
#define MEC_USB_EP_TOKEN_ENDPT_Msk        (0xfUL)                   /*!< ENDPT (Bitfield-Mask: 0x0f)                           */
#define MEC_USB_EP_TOKEN_PID_Pos          (4UL)                     /*!< PID (Bit 4)                                           */
#define MEC_USB_EP_TOKEN_PID_Msk          (0xf0UL)                  /*!< PID (Bitfield-Mask: 0x0f)                             */
/* =======================================================  SOF_THRL  ======================================================== */
#define MEC_USB_EP_SOF_THRL_CNT_Pos       (0UL)                     /*!< CNT (Bit 0)                                           */
#define MEC_USB_EP_SOF_THRL_CNT_Msk       (0xffUL)                  /*!< CNT (Bitfield-Mask: 0xff)                             */
/* ========================================================  BDT_P2  ========================================================= */
#define MEC_USB_EP_BDT_P2_BDT_BA_Pos      (0UL)                     /*!< BDT_BA (Bit 0)                                        */
#define MEC_USB_EP_BDT_P2_BDT_BA_Msk      (0xffUL)                  /*!< BDT_BA (Bitfield-Mask: 0xff)                          */
/* ========================================================  BDT_P3  ========================================================= */
#define MEC_USB_EP_BDT_P3_BDT_BA_Pos      (0UL)                     /*!< BDT_BA (Bit 0)                                        */
#define MEC_USB_EP_BDT_P3_BDT_BA_Msk      (0xffUL)                  /*!< BDT_BA (Bitfield-Mask: 0xff)                          */
/* =========================================================  EPC0  ========================================================== */
#define MEC_USB_EP_EPC0_EP0_HSHK_Pos      (0UL)                     /*!< EP0_HSHK (Bit 0)                                      */
#define MEC_USB_EP_EPC0_EP0_HSHK_Msk      (0x1UL)                   /*!< EP0_HSHK (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_EPC0_EP0_STALL_Pos     (1UL)                     /*!< EP0_STALL (Bit 1)                                     */
#define MEC_USB_EP_EPC0_EP0_STALL_Msk     (0x2UL)                   /*!< EP0_STALL (Bitfield-Mask: 0x01)                       */
#define MEC_USB_EP_EPC0_EN_DIR_Pos        (2UL)                     /*!< EN_DIR (Bit 2)                                        */
#define MEC_USB_EP_EPC0_EN_DIR_Msk        (0x1cUL)                  /*!< EN_DIR (Bitfield-Mask: 0x07)                          */
#define MEC_USB_EP_EPC0_RETRY_DIS_Pos     (6UL)                     /*!< RETRY_DIS (Bit 6)                                     */
#define MEC_USB_EP_EPC0_RETRY_DIS_Msk     (0x40UL)                  /*!< RETRY_DIS (Bitfield-Mask: 0x01)                       */
#define MEC_USB_EP_EPC0_HWO_HUB_Pos       (7UL)                     /*!< HWO_HUB (Bit 7)                                       */
#define MEC_USB_EP_EPC0_HWO_HUB_Msk       (0x80UL)                  /*!< HWO_HUB (Bitfield-Mask: 0x01)                         */
/* =========================================================  EPC1  ========================================================== */
#define MEC_USB_EP_EPC1_EP_HSHK_Pos       (0UL)                     /*!< EP_HSHK (Bit 0)                                       */
#define MEC_USB_EP_EPC1_EP_HSHK_Msk       (0x1UL)                   /*!< EP_HSHK (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_EPC1_EP_STALL_Pos      (1UL)                     /*!< EP_STALL (Bit 1)                                      */
#define MEC_USB_EP_EPC1_EP_STALL_Msk      (0x2UL)                   /*!< EP_STALL (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_EPC1_EN_DIR_Pos        (2UL)                     /*!< EN_DIR (Bit 2)                                        */
#define MEC_USB_EP_EPC1_EN_DIR_Msk        (0x1cUL)                  /*!< EN_DIR (Bitfield-Mask: 0x07)                          */
/* =========================================================  EPC2  ========================================================== */
#define MEC_USB_EP_EPC2_EP_HSHK_Pos       (0UL)                     /*!< EP_HSHK (Bit 0)                                       */
#define MEC_USB_EP_EPC2_EP_HSHK_Msk       (0x1UL)                   /*!< EP_HSHK (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_EPC2_EP_STALL_Pos      (1UL)                     /*!< EP_STALL (Bit 1)                                      */
#define MEC_USB_EP_EPC2_EP_STALL_Msk      (0x2UL)                   /*!< EP_STALL (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_EPC2_EN_DIR_Pos        (2UL)                     /*!< EN_DIR (Bit 2)                                        */
#define MEC_USB_EP_EPC2_EN_DIR_Msk        (0x1cUL)                  /*!< EN_DIR (Bitfield-Mask: 0x07)                          */
/* =========================================================  EPC3  ========================================================== */
#define MEC_USB_EP_EPC3_EP_HSHK_Pos       (0UL)                     /*!< EP_HSHK (Bit 0)                                       */
#define MEC_USB_EP_EPC3_EP_HSHK_Msk       (0x1UL)                   /*!< EP_HSHK (Bitfield-Mask: 0x01)                         */
#define MEC_USB_EP_EPC3_EP_STALL_Pos      (1UL)                     /*!< EP_STALL (Bit 1)                                      */
#define MEC_USB_EP_EPC3_EP_STALL_Msk      (0x2UL)                   /*!< EP_STALL (Bitfield-Mask: 0x01)                        */
#define MEC_USB_EP_EPC3_EN_DIR_Pos        (2UL)                     /*!< EN_DIR (Bit 2)                                        */
#define MEC_USB_EP_EPC3_EN_DIR_Msk        (0x1cUL)                  /*!< EN_DIR (Bitfield-Mask: 0x07)                          */
/* =======================================================  CMN_CTRL  ======================================================== */
#define MEC_USB_EP_CMN_CTRL_ACTV_Pos      (0UL)                     /*!< ACTV (Bit 0)                                          */
#define MEC_USB_EP_CMN_CTRL_ACTV_Msk      (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
#define MEC_USB_EP_CMN_CTRL_SRST_Pos      (1UL)                     /*!< SRST (Bit 1)                                          */
#define MEC_USB_EP_CMN_CTRL_SRST_Msk      (0x2UL)                   /*!< SRST (Bitfield-Mask: 0x01)                            */
#define MEC_USB_EP_CMN_CTRL_PU_PAD_EN_Pos (2UL)                     /*!< PU_PAD_EN (Bit 2)                                     */
#define MEC_USB_EP_CMN_CTRL_PU_PAD_EN_Msk (0x4UL)                   /*!< PU_PAD_EN (Bitfield-Mask: 0x01)                       */
#define MEC_USB_EP_CMN_CTRL_PU_PAD_IDLE_EN_Pos (3UL)                /*!< PU_PAD_IDLE_EN (Bit 3)                                */
#define MEC_USB_EP_CMN_CTRL_PU_PAD_IDLE_EN_Msk (0x8UL)              /*!< PU_PAD_IDLE_EN (Bitfield-Mask: 0x01)                  */
#define MEC_USB_EP_CMN_CTRL_PAD_EN_Pos    (4UL)                     /*!< PAD_EN (Bit 4)                                        */
#define MEC_USB_EP_CMN_CTRL_PAD_EN_Msk    (0x10UL)                  /*!< PAD_EN (Bitfield-Mask: 0x01)                          */
#define MEC_USB_EP_CMN_CTRL_PAD_POR_MV_Pos (6UL)                    /*!< PAD_POR_MV (Bit 6)                                    */
#define MEC_USB_EP_CMN_CTRL_PAD_POR_MV_Msk (0x40UL)                 /*!< PAD_POR_MV (Bitfield-Mask: 0x01)                      */
/* ======================================================  WRP_INTR_EN  ====================================================== */
#define MEC_USB_EP_WRP_INTR_EN_AHB_ERR_Pos (0UL)                    /*!< AHB_ERR (Bit 0)                                       */
#define MEC_USB_EP_WRP_INTR_EN_AHB_ERR_Msk (0x1UL)                  /*!< AHB_ERR (Bitfield-Mask: 0x01)                         */
/* =====================================================  WRP_INTR_STS  ====================================================== */
#define MEC_USB_EP_WRP_INTR_STS_AHB_ERR_Pos (0UL)                   /*!< AHB_ERR (Bit 0)                                       */
#define MEC_USB_EP_WRP_INTR_STS_AHB_ERR_Msk (0x1UL)                 /*!< AHB_ERR (Bitfield-Mask: 0x01)                         */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  EPC0  ========================================================== */
/* ============================================  MEC_USB_EP0 EPC0 EN_DIR [2..4]  ============================================= */
typedef enum {                                  /*!< MEC_USB_EP0_EPC0_EN_DIR                                                   */
  MEC_USB_EP0_EPC0_EN_DIR_DIS          = 0,     /*!< DIS : Disable endpoint                                                    */
  MEC_USB_EP0_EPC0_EN_DIR_EN_TX        = 1,     /*!< EN_TX : Enable endpoint TX only                                           */
  MEC_USB_EP0_EPC0_EN_DIR_EN_RX        = 2,     /*!< EN_RX : Enable endpoint RX only                                           */
  MEC_USB_EP0_EPC0_EN_DIR_EN_RX_TX_C   = 3,     /*!< EN_RX_TX_C : Enable endpoint for RX, TX, and Control                      */
  MEC_USB_EP0_EPC0_EN_DIR_EN_RX_TX     = 7,     /*!< EN_RX_TX : Enable endpoint for RX and TX                                  */
} MEC_USB_EP0_EPC0_EN_DIR_Enum;

/* =========================================================  EPC1  ========================================================== */
/* ============================================  MEC_USB_EP0 EPC1 EN_DIR [2..4]  ============================================= */
typedef enum {                                  /*!< MEC_USB_EP0_EPC1_EN_DIR                                                   */
  MEC_USB_EP0_EPC1_EN_DIR_DIS          = 0,     /*!< DIS : Disable endpoint                                                    */
  MEC_USB_EP0_EPC1_EN_DIR_EN_TX        = 1,     /*!< EN_TX : Enable endpoint TX only                                           */
  MEC_USB_EP0_EPC1_EN_DIR_EN_RX        = 2,     /*!< EN_RX : Enable endpoint RX only                                           */
  MEC_USB_EP0_EPC1_EN_DIR_EN_RX_TX_C   = 3,     /*!< EN_RX_TX_C : Enable endpoint for RX, TX, and Control                      */
  MEC_USB_EP0_EPC1_EN_DIR_EN_RX_TX     = 7,     /*!< EN_RX_TX : Enable endpoint for RX and TX                                  */
} MEC_USB_EP0_EPC1_EN_DIR_Enum;

/* =========================================================  EPC2  ========================================================== */
/* ============================================  MEC_USB_EP0 EPC2 EN_DIR [2..4]  ============================================= */
typedef enum {                                  /*!< MEC_USB_EP0_EPC2_EN_DIR                                                   */
  MEC_USB_EP0_EPC2_EN_DIR_DIS          = 0,     /*!< DIS : Disable endpoint                                                    */
  MEC_USB_EP0_EPC2_EN_DIR_EN_TX        = 1,     /*!< EN_TX : Enable endpoint TX only                                           */
  MEC_USB_EP0_EPC2_EN_DIR_EN_RX        = 2,     /*!< EN_RX : Enable endpoint RX only                                           */
  MEC_USB_EP0_EPC2_EN_DIR_EN_RX_TX_C   = 3,     /*!< EN_RX_TX_C : Enable endpoint for RX, TX, and Control                      */
  MEC_USB_EP0_EPC2_EN_DIR_EN_RX_TX     = 7,     /*!< EN_RX_TX : Enable endpoint for RX and TX                                  */
} MEC_USB_EP0_EPC2_EN_DIR_Enum;

/* =========================================================  EPC3  ========================================================== */
/* ============================================  MEC_USB_EP0 EPC3 EN_DIR [2..4]  ============================================= */
typedef enum {                                  /*!< MEC_USB_EP0_EPC3_EN_DIR                                                   */
  MEC_USB_EP0_EPC3_EN_DIR_DIS          = 0,     /*!< DIS : Disable endpoint                                                    */
  MEC_USB_EP0_EPC3_EN_DIR_EN_TX        = 1,     /*!< EN_TX : Enable endpoint TX only                                           */
  MEC_USB_EP0_EPC3_EN_DIR_EN_RX        = 2,     /*!< EN_RX : Enable endpoint RX only                                           */
  MEC_USB_EP0_EPC3_EN_DIR_EN_RX_TX_C   = 3,     /*!< EN_RX_TX_C : Enable endpoint for RX, TX, and Control                      */
  MEC_USB_EP0_EPC3_EN_DIR_EN_RX_TX     = 7,     /*!< EN_RX_TX : Enable endpoint for RX and TX                                  */
} MEC_USB_EP0_EPC3_EN_DIR_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_USB_EP_V2_H */
