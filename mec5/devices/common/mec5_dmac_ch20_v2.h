/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_DMAC_V2_CH20_H
#define _MEC5_DMAC_V2_CH20_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */

/**
  * @brief MEC_DMA_CHAN [CHAN] (DMA Channel)
  */
typedef struct mec_dma_chan_regs {
  __IOM uint32_t  ACTV;                         /*!< (@ 0x00000000) Channel n Activate                                         */
  __IOM uint32_t  MADDR;                        /*!< (@ 0x00000004) Channel n Memory start address                             */
  __IOM uint32_t  MADDR_END;                    /*!< (@ 0x00000008) Channel n Memory end address                               */
  __IOM uint32_t  DADDR;                        /*!< (@ 0x0000000C) Channel n Device start address                             */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000010) Channel n Control                                          */
  __IOM uint32_t  ISTATUS;                      /*!< (@ 0x00000014) Channel n Interrupt status                                 */
  __IOM uint32_t  IEN;                          /*!< (@ 0x00000018) Channel n Interrupt enable                                 */
  __IM  uint32_t  FSM;                          /*!< (@ 0x0000001C) Channel n FSM(RO)                                          */
  __IOM uint32_t  ALU_EN;                       /*!< (@ 0x00000020) Channel 0-1 only, ALU Enable                               */
  __IOM uint32_t  ALU_DATA;                     /*!< (@ 0x00000024) Channel 0-1 only, ALU Data                                 */
  __IOM uint32_t  ALU_PSTS;                     /*!< (@ 0x00000028) Channel 0-1 only, ALU Post status                          */
  __IOM uint32_t  ALU_FSM;                      /*!< (@ 0x0000002C) Channel 0-1 only, ALU FSM(RO)                              */
  __IM  uint32_t  RESERVED[4];
} MEC_DMA_CHAN_Type;                            /*!< Size = 64 (0x40)                                                          */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Internal DMA (MEC_DMAC)
  */

typedef struct mec_dmac_regs {                  /*!< (@ 0x40002400) MEC_DMAC Structure                                         */
  __IOM uint32_t  MCTRL;                        /*!< (@ 0x00000000) DMA Main Control                                           */
  __IM  uint32_t  DM_DPKT;                      /*!< (@ 0x00000004) DMA Main Data Packet(RO)                                   */
  __IM  uint32_t  DM_FSM;                       /*!< (@ 0x00000008) DMA Main FSM(RO)                                           */
  __IM  uint32_t  RESERVED[13];
  MEC_DMA_CHAN_Type CHAN[20];                   /*!< (@ 0x00000040) DMA Channel                                                */
} MEC_DMAC_Type;                                /*!< Size = 1344 (0x540)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_clusters
  * @{
  */
/* =========================================================  ACTV  ========================================================== */
#define MEC_DMA_CHAN_ACTV_EN_Pos (0UL)                     /*!< EN (Bit 0)                                            */
#define MEC_DMA_CHAN_ACTV_EN_Msk (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  MSTART  ========================================================= */
/* =========================================================  MEND  ========================================================== */
/* ========================================================  DSTART  ========================================================= */
/* =========================================================  CTRL  ========================================================== */
#define MEC_DMA_CHAN_CTRL_HFC_RUN_Pos (0UL)                /*!< HFC_RUN (Bit 0)                                       */
#define MEC_DMA_CHAN_CTRL_HFC_RUN_Msk (0x1UL)              /*!< HFC_RUN (Bitfield-Mask: 0x01)                         */
#define MEC_DMA_CHAN_CTRL_REQSTS_Pos (1UL)                 /*!< REQSTS (Bit 1)                                        */
#define MEC_DMA_CHAN_CTRL_REQSTS_Msk (0x2UL)               /*!< REQSTS (Bitfield-Mask: 0x01)                          */
#define MEC_DMA_CHAN_CTRL_DONE_Pos (2UL)                   /*!< DONE (Bit 2)                                          */
#define MEC_DMA_CHAN_CTRL_DONE_Msk (0x4UL)                 /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_CTRL_BUSY_Pos (5UL)                   /*!< BUSY (Bit 5)                                          */
#define MEC_DMA_CHAN_CTRL_BUSY_Msk (0x20UL)                /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_CTRL_MEM2DEV_Pos (8UL)                /*!< MEM2DEV (Bit 8)                                       */
#define MEC_DMA_CHAN_CTRL_MEM2DEV_Msk (0x100UL)            /*!< MEM2DEV (Bitfield-Mask: 0x01)                         */
#define MEC_DMA_CHAN_CTRL_HFC_DEV_Pos (9UL)                /*!< HFC_DEV (Bit 9)                                       */
#define MEC_DMA_CHAN_CTRL_HFC_DEV_Msk (0xfe00UL)           /*!< HFC_DEV (Bitfield-Mask: 0x7f)                         */
#define MEC_DMA_CHAN_CTRL_INCRM_Pos (16UL)                 /*!< INCRM (Bit 16)                                        */
#define MEC_DMA_CHAN_CTRL_INCRM_Msk (0x10000UL)            /*!< INCRM (Bitfield-Mask: 0x01)                           */
#define MEC_DMA_CHAN_CTRL_INCRD_Pos (17UL)                 /*!< INCRD (Bit 17)                                        */
#define MEC_DMA_CHAN_CTRL_INCRD_Msk (0x20000UL)            /*!< INCRD (Bitfield-Mask: 0x01)                           */
#define MEC_DMA_CHAN_CTRL_LOCK_ARB_Pos (18UL)              /*!< LOCK_ARB (Bit 18)                                     */
#define MEC_DMA_CHAN_CTRL_LOCK_ARB_Msk (0x40000UL)         /*!< LOCK_ARB (Bitfield-Mask: 0x01)                        */
#define MEC_DMA_CHAN_CTRL_DHFC_Pos (19UL)                  /*!< DHFC (Bit 19)                                         */
#define MEC_DMA_CHAN_CTRL_DHFC_Msk (0x80000UL)             /*!< DHFC (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_CTRL_UNITSZ_Pos (20UL)                /*!< UNITSZ (Bit 20)                                       */
#define MEC_DMA_CHAN_CTRL_UNITSZ_Msk (0x700000UL)          /*!< UNITSZ (Bitfield-Mask: 0x07)                          */
#define MEC_DMA_CHAN_CTRL_SWFC_RUN_Pos (24UL)              /*!< SWFC_RUN (Bit 24)                                     */
#define MEC_DMA_CHAN_CTRL_SWFC_RUN_Msk (0x1000000UL)       /*!< SWFC_RUN (Bitfield-Mask: 0x01)                        */
#define MEC_DMA_CHAN_CTRL_ABORT_Pos (25UL)                 /*!< ABORT (Bit 25)                                        */
#define MEC_DMA_CHAN_CTRL_ABORT_Msk (0x2000000UL)          /*!< ABORT (Bitfield-Mask: 0x01)                           */
/* ========================================================  ISTATUS  ======================================================== */
#define MEC_DMA_CHAN_ISTATUS_BERR_Pos (0UL)                /*!< BERR (Bit 0)                                          */
#define MEC_DMA_CHAN_ISTATUS_BERR_Msk (0x1UL)              /*!< BERR (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_ISTATUS_HFCREQ_Pos (1UL)              /*!< HFCREQ (Bit 1)                                        */
#define MEC_DMA_CHAN_ISTATUS_HFCREQ_Msk (0x2UL)            /*!< HFCREQ (Bitfield-Mask: 0x01)                          */
#define MEC_DMA_CHAN_ISTATUS_DONE_Pos (2UL)                /*!< DONE (Bit 2)                                          */
#define MEC_DMA_CHAN_ISTATUS_DONE_Msk (0x4UL)              /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_ISTATUS_HFCTERM_Pos (3UL)             /*!< HFCTERM (Bit 3)                                       */
#define MEC_DMA_CHAN_ISTATUS_HFCTERM_Msk (0x8UL)           /*!< HFCTERM (Bitfield-Mask: 0x01)                         */
/* ==========================================================  IEN  ========================================================== */
#define MEC_DMA_CHAN_IEN_BERR_Pos (0UL)                    /*!< BERR (Bit 0)                                          */
#define MEC_DMA_CHAN_IEN_BERR_Msk (0x1UL)                  /*!< BERR (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_IEN_HFCREQ_Pos (1UL)                  /*!< HFCREQ (Bit 1)                                        */
#define MEC_DMA_CHAN_IEN_HFCREQ_Msk (0x2UL)                /*!< HFCREQ (Bitfield-Mask: 0x01)                          */
#define MEC_DMA_CHAN_IEN_DONE_Pos (2UL)                    /*!< DONE (Bit 2)                                          */
#define MEC_DMA_CHAN_IEN_DONE_Msk (0x4UL)                  /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_IEN_HFCTERM_Pos (3UL)                 /*!< HFCTERM (Bit 3)                                       */
#define MEC_DMA_CHAN_IEN_HFCTERM_Msk (0x8UL)               /*!< HFCTERM (Bitfield-Mask: 0x01)                         */
/* ==========================================================  FSM  ========================================================== */
/* ========================================================  ALU_EN  ========================================================= */
#define MEC_DMA_CHAN_ALU_EN_ENABLE_Pos (0UL)               /*!< ENABLE (Bit 0)                                        */
#define MEC_DMA_CHAN_ALU_EN_ENABLE_Msk (0x1UL)             /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_DMA_CHAN_ALU_EN_POST_XFR_EN_Pos (1UL)          /*!< POST_XFR_EN (Bit 1)                                   */
#define MEC_DMA_CHAN_ALU_EN_POST_XFR_EN_Msk (0x2UL)        /*!< POST_XFR_EN (Bitfield-Mask: 0x01)                     */
/* =======================================================  ALU_DATA  ======================================================== */
/* =======================================================  ALU_PSTS  ======================================================== */
#define MEC_DMA_CHAN_ALU_PSTS_DONE_Pos (0UL)               /*!< DONE (Bit 0)                                          */
#define MEC_DMA_CHAN_ALU_PSTS_DONE_Msk (0x1UL)             /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_DMA_CHAN_ALU_PSTS_POST_XFR_BUSY_Pos (1UL)      /*!< POST_XFR_BUSY (Bit 1)                                 */
#define MEC_DMA_CHAN_ALU_PSTS_POST_XFR_BUSY_Msk (0x2UL)    /*!< POST_XFR_BUSY (Bitfield-Mask: 0x01)                   */
#define MEC_DMA_CHAN_ALU_PSTS_POST_XFR_DONE_Pos (2UL)      /*!< POST_XFR_DONE (Bit 2)                                 */
#define MEC_DMA_CHAN_ALU_PSTS_POST_XFR_DONE_Msk (0x4UL)    /*!< POST_XFR_DONE (Bitfield-Mask: 0x01)                   */
#define MEC_DMA_CHAN_ALU_PSTS_DRDY_Pos (3UL)               /*!< DRDY (Bit 3)                                          */
#define MEC_DMA_CHAN_ALU_PSTS_DRDY_Msk (0x8UL)             /*!< DRDY (Bitfield-Mask: 0x01)                            */
/** @} */ /* End of group PosMask_clusters */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  MCTRL  ========================================================= */
#define MEC_DMAC_MCTRL_MACTV_Pos          (0UL)                     /*!< MACTV (Bit 0)                                         */
#define MEC_DMAC_MCTRL_MACTV_Msk          (0x1UL)                   /*!< MACTV (Bitfield-Mask: 0x01)                           */
#define MEC_DMAC_MCTRL_MRST_Pos           (1UL)                     /*!< MRST (Bit 1)                                          */
#define MEC_DMAC_MCTRL_MRST_Msk           (0x2UL)                   /*!< MRST (Bitfield-Mask: 0x01)                            */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* =========================================================  ACTV  ========================================================== */
/* ==================================================  CHAN ACTV EN [0..0]  ================================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ACTV_EN                                                     */
  MEC_DMAC_CHAN_ACTV_EN_EN             = 1,     /*!< EN : Enable channel                                                       */
} MEC_DMAC_CHAN_ACTV_EN_Enum;

/* ========================================================  MSTART  ========================================================= */
/* =========================================================  MEND  ========================================================== */
/* ========================================================  DSTART  ========================================================= */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  CHAN CTRL HFC_RUN [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_HFC_RUN                                                */
  MEC_DMAC_CHAN_CTRL_HFC_RUN_EN        = 1,     /*!< EN : Start channel in HW Flow Control mode                                */
} MEC_DMAC_CHAN_CTRL_HFC_RUN_Enum;

/* ================================================  CHAN CTRL REQSTS [1..1]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_REQSTS                                                 */
  MEC_DMAC_CHAN_CTRL_REQSTS_ACTIVE     = 1,     /*!< ACTIVE : HW Flow Control device request signal is active                  */
} MEC_DMAC_CHAN_CTRL_REQSTS_Enum;

/* =================================================  CHAN CTRL DONE [2..2]  ================================================= */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_DONE                                                   */
  MEC_DMAC_CHAN_CTRL_DONE_ACTIVE       = 1,     /*!< ACTIVE : Channel done status is active                                    */
} MEC_DMAC_CHAN_CTRL_DONE_Enum;

/* =================================================  CHAN CTRL BUSY [5..5]  ================================================= */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_BUSY                                                   */
  MEC_DMAC_CHAN_CTRL_BUSY_ACTIVE       = 1,     /*!< ACTIVE : Channel Busy status is active                                    */
} MEC_DMAC_CHAN_CTRL_BUSY_Enum;

/* ===============================================  CHAN CTRL HFC_DEV [9..15]  =============================================== */
typedef enum {                                  /*!< DMAC_CHAN_CTRL_HFC_DEV                                                    */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C0_EP       = 0,     /*!< I2C0_EP : I2C_SMB0 endpoint mode                                          */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C0_CTRL     = 1,     /*!< I2C0_CTRL : I2C_SMB0 controller mode                                      */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C1_EP       = 2,     /*!< I2C1_EP : I2C_SMB1 endpoint mode                                          */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C1_CTRL     = 3,     /*!< I2C1_CTRL : I2C_SMB1 controller mode                                      */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C2_EP       = 4,     /*!< I2C2_EP : I2C_SMB2 endpoint mode                                          */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C2_CTRL     = 5,     /*!< I2C2_CTRL : I2C_SMB2 controller mode                                      */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C3_EP       = 6,     /*!< I2C3_EP : I2C_SMB3 endpoint mode                                          */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C3_CTRL     = 7,     /*!< I2C3_CTRL : I2C_SMB3 controller mode                                      */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C4_EP       = 8,     /*!< I2C4_EP : I2C_SMB4 endpoint mode                                          */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I2C4_CTRL     = 9,     /*!< I2C4_CTRL : I2C_SMB4 controller mode                                      */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_QSPI0_TX      = 10,    /*!< QSPI0_TX : QSPI0 transmit mode                                            */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_QSPI0_RX      = 11,    /*!< QSPI0_RX : QSPI0 receive mode                                             */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_GSPI0_TX      = 12,    /*!< GSPI0_TX : GSPI0 transmit mode                                            */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_GSPI0_RX      = 13,    /*!< GSPI0_RX : GSPI0 receive mode                                             */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_GSPI1_TX      = 14,    /*!< GSPI1_TX : GSPI1 transmit mode                                            */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_GSPI1_RX      = 15,    /*!< GSPI1_RX : GSPI1 receive mode                                             */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I3CP0_TARGET  = 16,    /*!< I3CP0_TARGET : I3C Primary Controller 0 as target                         */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I3CP0_HOST    = 17,    /*!< I3CP0_HOST : I3C 0 Primary Controller 0 as host                           */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I3CS0_TARGET  = 18,    /*!< I3CS0_TARGET : I3C Secondary Controller 0 as target                       */
  MEC_DMAC_CHAN_CTRL_HFC_DEV_I3CS0_HOST    = 19,    /*!< I3CS0_HOST : I3C Secondary Controller 0 as host                           */
} MEC_DMAC_CHAN_CTRL_HFC_DEV_Enum;

/* ===============================================  CHAN CTRL INCRM [16..16]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_INCRM                                                  */
  MEC_DMAC_CHAN_CTRL_INCRM_EN          = 1,     /*!< EN : Enable increment of memory start address by unit size                */
} MEC_DMAC_CHAN_CTRL_INCRM_Enum;

/* ===============================================  CHAN CTRL INCRD [17..17]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_INCRD                                                  */
  MEC_DMAC_CHAN_CTRL_INCRD_EN          = 1,     /*!< EN : Enable increment of device start address by unit size                */
} MEC_DMAC_CHAN_CTRL_INCRD_Enum;

/* ==============================================  CHAN CTRL LOCK_ARB [18..18]  ============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_LOCK_ARB                                               */
  MEC_DMAC_CHAN_CTRL_LOCK_ARB_EN       = 1,     /*!< EN : Enable locking this channel as highest priority in the
                                                                    arbiter                                                    */
} MEC_DMAC_CHAN_CTRL_LOCK_ARB_Enum;

/* ================================================  CHAN CTRL DHFC [19..19]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_DHFC                                                   */
  MEC_DMAC_CHAN_CTRL_DHFC_ON           = 1,     /*!< ON : Disable HW flow control                                              */
} MEC_DMAC_CHAN_CTRL_DHFC_Enum;

/* ===============================================  CHAN CTRL UNITSZ [20..22]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_UNITSZ                                                 */
  MEC_DMAC_CHAN_CTRL_UNITSZ_8BIT       = 1,     /*!< 8BIT : Transfer unit size is 8-bits(1 byte)                               */
  MEC_DMAC_CHAN_CTRL_UNITSZ_16BIT      = 2,     /*!< 16BIT : Transfer unit size is 16-bits(2 bytes)                            */
  MEC_DMAC_CHAN_CTRL_UNITSZ_32BIT      = 4,     /*!< 32BIT : Transfer unit size is 32-bits(4 bytes)                            */
} MEC_DMAC_CHAN_CTRL_UNITSZ_Enum;

/* ==============================================  CHAN CTRL SWFC_RUN [24..24]  ============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_SWFC_RUN                                               */
  MEC_DMAC_CHAN_CTRL_SWFC_RUN_EN       = 1,     /*!< EN : Start channel in software flow control mode                          */
} MEC_DMAC_CHAN_CTRL_SWFC_RUN_Enum;

/* ===============================================  CHAN CTRL ABORT [25..25]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_CTRL_ABORT                                                  */
  MEC_DMAC_CHAN_CTRL_ABORT_EN          = 1,     /*!< EN : Abort current operation at next unit boundary                        */
} MEC_DMAC_CHAN_CTRL_ABORT_Enum;

/* ========================================================  ISTATUS  ======================================================== */
/* ===============================================  CHAN ISTATUS BERR [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ISTATUS_BERR                                                */
  MEC_DMAC_CHAN_ISTATUS_BERR_ACTIVE    = 1,     /*!< ACTIVE : AHB Bus Error status active                                      */
} MEC_DMAC_CHAN_ISTATUS_BERR_Enum;

/* ==============================================  CHAN ISTATUS HFCREQ [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ISTATUS_HFCREQ                                              */
  MEC_DMAC_CHAN_ISTATUS_HFCREQ_ACTIVE  = 1,     /*!< ACTIVE : HW flow control device request active after transfer
                                                     has finished                                                              */
} MEC_DMAC_CHAN_ISTATUS_HFCREQ_Enum;

/* ===============================================  CHAN ISTATUS DONE [2..2]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ISTATUS_DONE                                                */
  MEC_DMAC_CHAN_ISTATUS_DONE_ACTIVE    = 1,     /*!< ACTIVE : Transfer is done: memory start address == memory end
                                                     address                                                                   */
} MEC_DMAC_CHAN_ISTATUS_DONE_Enum;

/* ==============================================  CHAN ISTATUS HFCTERM [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ISTATUS_HFCTERM                                             */
  MEC_DMAC_CHAN_ISTATUS_HFCTERM_ACTIVE = 1,     /*!< ACTIVE : HW flow control device terminate signal active                   */
} MEC_DMAC_CHAN_ISTATUS_HFCTERM_Enum;

/* ==========================================================  IEN  ========================================================== */
/* =================================================  CHAN IEN BERR [0..0]  ================================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_IEN_BERR                                                    */
  MEC_DMAC_CHAN_IEN_BERR_EN            = 1,     /*!< EN : Enable AHB Bus Error interrupt                                       */
} MEC_DMAC_CHAN_IEN_BERR_Enum;

/* ================================================  CHAN IEN HFCREQ [1..1]  ================================================= */
typedef enum {                                  /*!< MEC_DMAC_CHAN_IEN_HFCREQ                                                  */
  MEC_DMAC_CHAN_IEN_HFCREQ_EN          = 1,     /*!< EN : Enable HW flow control error interrupt                               */
} MEC_DMAC_CHAN_IEN_HFCREQ_Enum;

/* =================================================  CHAN IEN DONE [2..2]  ================================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_IEN_DONE                                                    */
  MEC_DMAC_CHAN_IEN_DONE_EN            = 1,     /*!< EN : Enable transfer done interrupt                                       */
} MEC_DMAC_CHAN_IEN_DONE_Enum;

/* ================================================  CHAN IEN HFCTERM [3..3]  ================================================ */
typedef enum {                                  /*!< MEC_DMAC_CHAN_IEN_HFCTERM                                                 */
  MEC_DMAC_CHAN_IEN_HFCTERM_EN         = 1,     /*!< EN : Enable HW flow control terminate interrupt                           */
} MEC_DMAC_CHAN_IEN_HFCTERM_Enum;

/* ==========================================================  FSM  ========================================================== */
/* ========================================================  ALU_EN  ========================================================= */
/* ===============================================  CHAN ALU_EN ENABLE [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_EN_ENABLE                                               */
  MEC_DMAC_CHAN_ALU_EN_ENABLE_ON       = 1,     /*!< ON : Enable ALU logic                                                     */
} MEC_DMAC_CHAN_ALU_EN_ENABLE_Enum;

/* ============================================  CHAN ALU_EN POST_XFR_EN [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_EN_POST_XFR_EN                                          */
  MEC_DMAC_CHAN_ALU_EN_POST_XFR_EN_ON  = 1,     /*!< ON : Enable ALU post calculation result transfer to memory                */
} MEC_DMAC_CHAN_ALU_EN_POST_XFR_EN_Enum;

/* =======================================================  ALU_DATA  ======================================================== */
/* =======================================================  ALU_PSTS  ======================================================== */
/* ===============================================  CHAN ALU_PSTS DONE [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_PSTS_DONE                                               */
  MEC_DMAC_CHAN_ALU_PSTS_DONE_ACTIVE   = 1,     /*!< ACTIVE : ALU calculation done                                             */
} MEC_DMAC_CHAN_ALU_PSTS_DONE_Enum;

/* ==========================================  CHAN ALU_PSTS POST_XFR_BUSY [1..1]  =========================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_BUSY                                      */
  MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_BUSY_ACTIVE = 1,/*!< ACTIVE : ALU Busy status                                                */
} MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_BUSY_Enum;

/* ==========================================  CHAN ALU_PSTS POST_XFR_DONE [2..2]  =========================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_DONE                                      */
  MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_DONE_ACTIVE = 1,/*!< ACTIVE : ALU post transfer done status                                  */
} MEC_DMAC_CHAN_ALU_PSTS_POST_XFR_DONE_Enum;

/* ===============================================  CHAN ALU_PSTS DRDY [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_CHAN_ALU_PSTS_DRDY                                               */
  MEC_DMAC_CHAN_ALU_PSTS_DRDY_ACTIVE   = 1,     /*!< ACTIVE : ALU data ready status                                            */
} MEC_DMAC_CHAN_ALU_PSTS_DRDY_Enum;
/** @} */ /* End of group EnumValue_clusters */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  MCTRL  ========================================================= */
/* ==============================================  MEC_DMAC MCTRL MACTV [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_DMAC_MCTRL_MACTV                                                      */
  MEC_DMAC_MCTRL_MACTV_EN              = 1,     /*!< EN : Activate(ungate clocks) DMA controller                               */
} MEC_DMAC_MCTRL_MACTV_Enum;

/* ==============================================  MEC_DMAC MCTRL MRST [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_DMAC_MCTRL_MRST                                                       */
  MEC_DMAC_MCTRL_MRST_EN               = 1,     /*!< EN : Soft reset DMA controller(self-clearing)                             */
} MEC_DMAC_MCTRL_MRST_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_DMAC_V2_CH20_H */
