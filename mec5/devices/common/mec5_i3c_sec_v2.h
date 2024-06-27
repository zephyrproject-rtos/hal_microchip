/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_I3C_SEC_V2_H
#define _MEC5_I3C_SEC_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */
/**
  * @brief I3C Secondary Controller 0 (MEC_I3C_SEC0)
  */

typedef struct mec_i3c_sec_regs {               /*!< (@ 0x40010000) MEC_I3C_SEC0 Structure                                     */
  __IOM uint32_t  DEV_CTRL;                     /*!< (@ 0x00000000) Target device control register                             */
  __IOM uint32_t  DEV_ADDR;                     /*!< (@ 0x00000004) Target device address register                             */
  __IM  uint32_t  HW_CAP;                       /*!< (@ 0x00000008) I3C Host controller hardware capabilities                  */
  __IOM uint32_t  CMD;                          /*!< (@ 0x0000000C) Command register                                           */
  __IOM uint32_t  RESP;                         /*!< (@ 0x00000010) Response register                                          */
  
  union {
    __OM  uint32_t TX_DATA;                     /*!< (@ 0x00000014) Transmit data register                                     */
    __IM  uint32_t RX_DATA;                     /*!< (@ 0x00000014) Receive data register                                      */
  };
  __IOM uint32_t  IBI_QUE_STS;                  /*!< (@ 0x00000018) IBI Queue status register                                  */
  __IOM uint32_t  QUE_THLD_CTRL;                /*!< (@ 0x0000001C) Queue threshold control register                           */
  __IOM uint32_t  DB_THLD_CTRL;                 /*!< (@ 0x00000020) Data buffer threshold control register                     */
  __IOM uint32_t  IBI_QUE_CTRL;                 /*!< (@ 0x00000024) IBI Queue control register                                 */
  __IM  uint32_t  RESERVED[3];
  __IOM uint32_t  RST_CTRL;                     /*!< (@ 0x00000034) Reset control register                                     */
  __IOM uint32_t  TGT_EVT_STS;                  /*!< (@ 0x00000038) Target event status register                               */
  __IOM uint32_t  INTR_STS;                     /*!< (@ 0x0000003C) Interrupt status register                                  */
  __IOM uint32_t  INTR_EN;                      /*!< (@ 0x00000040) Interrupt enable register                                  */
  __IOM uint32_t  INTR_SIG_EN;                  /*!< (@ 0x00000044) Interrupt signal enable register                           */
  __IOM uint32_t  INTR_FORCE_EN;                /*!< (@ 0x00000048) Interrupt force enable register                            */
  __IOM uint32_t  QUE_STS_LVL;                  /*!< (@ 0x0000004C) Queue status level register                                */
  __IOM uint32_t  DB_STS_LVL;                   /*!< (@ 0x00000050) Data buffer status level register                          */
  __IOM uint32_t  PRES_STATE;                   /*!< (@ 0x00000054) Present state register                                     */
  __IM  uint32_t  RESERVED1;
  __IOM uint32_t  DAT_PTR;                      /*!< (@ 0x0000005C) Device address table(DAT) pointer register                 */
  __IOM uint32_t  DCT_PTR;                      /*!< (@ 0x00000060) Device characteristic table(DCT) pointer register          */
  __IM  uint32_t  RESERVED2[2];
  __IOM uint32_t  VENR_PTR;                     /*!< (@ 0x0000006C) Vendor specific registers pointer                          */
  __IOM uint32_t  MIPI_MAN_ID;                  /*!< (@ 0x00000070) MIPI manufacturing ID register                             */
  __IOM uint32_t  NORM_PROV_ID;                 /*!< (@ 0x00000074) Normal provisional ID register                             */
  __IOM uint32_t  TARG_CHAR;                    /*!< (@ 0x00000078) Target characteristic register                             */
  __IOM uint32_t  MAX_RW_LEN;                   /*!< (@ 0x0000007C) Maximum read-write length register                         */
  __IOM uint32_t  MAX_RD_TAR;                   /*!< (@ 0x00000080) Maximum read turn around time register                     */
  __IOM uint32_t  MAX_DS;                       /*!< (@ 0x00000084) Maximum data speed register                                */
  __IM  uint32_t  RESERVED3;
  __IOM uint32_t  TARG_IREQ;                    /*!< (@ 0x0000008C) Target interrupt request register                          */
  __IM  uint32_t  RESERVED4;
  __IOM uint32_t  TARG_IREQ_DATA;               /*!< (@ 0x00000094) Target interrupt request data register                     */
  __IOM uint32_t  TARG_IBI_RESP;                /*!< (@ 0x00000098) Target IBI response register                               */
  __IM  uint32_t  RESERVED5[5];
  __IOM uint32_t  DEV_EXT_CTRL;                 /*!< (@ 0x000000B0) Device extended control register                           */
  __IOM uint32_t  SCL_OD_TM;                    /*!< (@ 0x000000B4) Open drain timing register                                 */
  __IOM uint32_t  SCL_PP_TM;                    /*!< (@ 0x000000B8) Push-pull timing register                                  */
  __IOM uint32_t  SCL_I2C_FM_TM;                /*!< (@ 0x000000BC) Fast mode timing register                                  */
  __IOM uint32_t  SCL_I2C_FMP_TM;               /*!< (@ 0x000000C0) Fast mode plus timing register                             */
  __IM  uint32_t  RESERVED6;
  __IOM uint32_t  SCL_ELC_TM;                   /*!< (@ 0x000000C8) SCL Extended low count timing register                     */
  __IOM uint32_t  SCL_TBLC_TM;                  /*!< (@ 0x000000CC) SCL termination bit low count timing register              */
  __IOM uint32_t  SDA_HMSD_TM;                  /*!< (@ 0x000000D0) SDA hold mode switch delay timing register                 */
  __IOM uint32_t  BUS_FREE_TM;                  /*!< (@ 0x000000D4) Bus free timing register                                   */
  __IOM uint32_t  BUS_IDLE_TM;                  /*!< (@ 0x000000D8) Bus idle timing register                                   */
  __IOM uint32_t  SCL_LMST_TM;                  /*!< (@ 0x000000DC) SCL low MST timeout register                               */
  __IM  uint32_t  VER_ID;                       /*!< (@ 0x000000E0) I3C version ID register                                    */
  __IM  uint32_t  VER_TYPE;                     /*!< (@ 0x000000E4) I3C version type register                                  */
  __IM  uint32_t  QUE_SIZE_CAP;                 /*!< (@ 0x000000E8) I3C Queue size capability register                         */
  __IM  uint32_t  RESERVED7[69];
  __IOM uint32_t  DCT_LOC[72];                  /*!< (@ 0x00000200) I3C Device characteristic table location register          */
  __IM  uint32_t  RESERVED8[16];
  __IOM uint32_t  DAT_LOC[16];                  /*!< (@ 0x00000360) I3C Device address table location registers                */
  __IM  uint32_t  RESERVED9[24];
  __IOM uint32_t  SEC_CFG;                      /*!< (@ 0x00000400) I3C Secondary config register                              */
  __IOM uint32_t  HOST_RST_CTRL;                /*!< (@ 0x00000404) I3C Host reset control register                            */
  __IOM uint32_t  HOST_DMA_TX_TMOUT;            /*!< (@ 0x00000408) I3C Host TX DMA timerout register                          */
  __IOM uint32_t  HOST_DMA_RX_TMOUT;            /*!< (@ 0x0000040C) I3C Host RX DMA timerout register                          */
  __IOM uint32_t  STK_SDA_TMOUT;                /*!< (@ 0x00000410) I3C stuck SDA timeout register                             */
  __IOM uint32_t  HWRAP_STS;                    /*!< (@ 0x00000414) I3C Host wrapper status register                           */
  __IOM uint32_t  HWRP_INTR_EN;                 /*!< (@ 0x00000418) I3C Host wrapper interrupt enable register                 */
  __IM  uint32_t  RESERVED10;
  __IOM uint32_t  WRP_TARG_CFG0;                /*!< (@ 0x00000420) I3C target wrapper configuration 0 register                */
  __IOM uint32_t  WRP_CFG1;                     /*!< (@ 0x00000424) I3C wrapper configuration 1 register                       */
  __IOM uint32_t  WRP_CFG2;                     /*!< (@ 0x00000428) I3C wrapper configuration 2 register                       */
  __IOM uint32_t  WRP_CFG3;                     /*!< (@ 0x0000042C) I3C wrapper configuration 3 register                       */
  __IM  uint32_t  RESERVED11[40];
  __IOM uint32_t  PAD_TST;                      /*!< (@ 0x000004D0) I3C pad test register                                      */
  __IOM uint32_t  I3C_DBG0;                     /*!< (@ 0x000004D4) I3C debug 0 register                                       */
  __IOM uint32_t  I3C_DBG1;                     /*!< (@ 0x000004D8) I3C debug 1 register                                       */
  __IOM uint32_t  I3C_CFG_DMA_DBG;              /*!< (@ 0x000004DC) I3C configuration and DMA interface debug register         */
} MEC_I3C_SEC_Type;                             /*!< Size = 1248 (0x4e0)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =================================================  MEC_I3C_SEC DCT_LOC  ================================================== */
typedef enum {                                  /*!< MEC_I3C_SEC_DCT_LOC                                                      */
  MEC_I3C_SDCT_DEV1_T1_L1              = 0,     /*!< T1_L1 : Device 1: Table 1 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T1_L2              = 1,     /*!< T1_L2 : Device 1: Table 1 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T1_L3              = 2,     /*!< T1_L3 : Device 1: Table 1 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T1_L4              = 3,     /*!< T1_L4 : Device 1: Table 1 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T2_L1              = 4,     /*!< T2_L1 : Device 1: Table 2 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T2_L2              = 5,     /*!< T2_L2 : Device 1: Table 2 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T2_L3              = 6,     /*!< T2_L3 : Device 1: Table 2 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T2_L4              = 7,     /*!< T2_L4 : Device 1: Table 2 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T3_L1              = 8,     /*!< T3_L1 : Device 1: Table 3 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T3_L2              = 8,     /*!< T3_L2 : Device 1: Table 3 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T3_L3              = 10,    /*!< T3_L3 : Device 1: Table 3 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T3_L4              = 11,    /*!< T3_L4 : Device 1: Table 3 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T4_L1              = 12,    /*!< T4_L1 : Device 1: Table 4 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T4_L2              = 13,    /*!< T4_L2 : Device 1: Table 4 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T4_L3              = 14,    /*!< T4_L3 : Device 1: Table 4 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T4_L4              = 15,    /*!< T4_L4 : Device 1: Table 4 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T5_L1              = 16,    /*!< T5_L1 : Device 1: Table 5 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T5_L2              = 17,    /*!< T5_L2 : Device 1: Table 5 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T5_L3              = 18,    /*!< T5_L3 : Device 1: Table 5 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T5_L4              = 19,    /*!< T5_L4 : Device 1: Table 5 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T6_L1              = 20,    /*!< T6_L1 : Device 1: Table 6 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T6_L2              = 21,    /*!< T6_L2 : Device 1: Table 6 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T6_L3              = 22,    /*!< T6_L3 : Device 1: Table 6 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T6_L4              = 23,    /*!< T6_L4 : Device 1: Table 6 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T7_L1              = 24,    /*!< T7_L1 : Device 1: Table 7 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T7_L2              = 25,    /*!< T7_L2 : Device 1: Table 7 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T7_L3              = 26,    /*!< T7_L3 : Device 1: Table 7 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T7_L4              = 27,    /*!< T7_L4 : Device 1: Table 7 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T8_L1              = 28,    /*!< T8_L1 : Device 1: Table 8 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T8_L2              = 29,    /*!< T8_L2 : Device 1: Table 8 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T8_L3              = 30,    /*!< T8_L3 : Device 1: Table 8 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T8_L4              = 31,    /*!< T8_L4 : Device 1: Table 8 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T9_L1              = 32,    /*!< T9_L1 : Device 1: Table 9 Location 1                                      */
  MEC_I3C_SDCT_DEV1_T9_L2              = 33,    /*!< T9_L2 : Device 1: Table 9 Location 2                                      */
  MEC_I3C_SDCT_DEV1_T9_L3              = 34,    /*!< T9_L3 : Device 1: Table 9 Location 3                                      */
  MEC_I3C_SDCT_DEV1_T9_L4              = 35,    /*!< T9_L4 : Device 1: Table 9 Location 4                                      */
  MEC_I3C_SDCT_DEV1_T10_L1             = 36,    /*!< T10_L1 : Device 1: Table 10 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T10_L2             = 37,    /*!< T10_L2 : Device 1: Table 10 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T10_L3             = 38,    /*!< T10_L3 : Device 1: Table 10 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T10_L4             = 39,    /*!< T10_L4 : Device 1: Table 10 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T11_L1             = 40,    /*!< T11_L1 : Device 1: Table 11 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T11_L2             = 41,    /*!< T11_L2 : Device 1: Table 11 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T11_L3             = 42,    /*!< T11_L3 : Device 1: Table 11 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T11_L4             = 43,    /*!< T11_L4 : Device 1: Table 11 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T12_L1             = 44,    /*!< T12_L1 : Device 1: Table 12 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T12_L2             = 45,    /*!< T12_L2 : Device 1: Table 12 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T12_L3             = 46,    /*!< T12_L3 : Device 1: Table 12 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T12_L4             = 47,    /*!< T12_L4 : Device 1: Table 12 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T13_L1             = 48,    /*!< T13_L1 : Device 1: Table 13 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T13_L2             = 49,    /*!< T13_L2 : Device 1: Table 13 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T13_L3             = 50,    /*!< T13_L3 : Device 1: Table 13 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T13_L4             = 51,    /*!< T13_L4 : Device 1: Table 13 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T14_L1             = 52,    /*!< T14_L1 : Device 1: Table 14 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T14_L2             = 53,    /*!< T14_L2 : Device 1: Table 14 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T14_L3             = 54,    /*!< T14_L3 : Device 1: Table 14 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T14_L4             = 55,    /*!< T14_L4 : Device 1: Table 14 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T15_L1             = 56,    /*!< T15_L1 : Device 1: Table 15 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T15_L2             = 57,    /*!< T15_L2 : Device 1: Table 15 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T15_L3             = 58,    /*!< T15_L3 : Device 1: Table 15 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T15_L4             = 59,    /*!< T15_L4 : Device 1: Table 15 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T16_L1             = 60,    /*!< T16_L1 : Device 1: Table 16 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T16_L2             = 61,    /*!< T16_L2 : Device 1: Table 16 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T16_L3             = 62,    /*!< T16_L3 : Device 1: Table 16 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T16_L4             = 63,    /*!< T16_L4 : Device 1: Table 16 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T17_L1             = 64,    /*!< T17_L1 : Device 1: Table 17 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T17_L2             = 65,    /*!< T17_L2 : Device 1: Table 17 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T17_L3             = 66,    /*!< T17_L3 : Device 1: Table 17 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T17_L4             = 67,    /*!< T17_L4 : Device 1: Table 17 Location 4                                    */
  MEC_I3C_SDCT_DEV1_T18_L1             = 68,    /*!< T18_L1 : Device 1: Table 18 Location 1                                    */
  MEC_I3C_SDCT_DEV1_T18_L2             = 69,    /*!< T18_L2 : Device 1: Table 18 Location 2                                    */
  MEC_I3C_SDCT_DEV1_T18_L3             = 70,    /*!< T18_L3 : Device 1: Table 18 Location 3                                    */
  MEC_I3C_SDCT_DEV1_T18_L4             = 71,    /*!< T18_L4 : Device 1: Table 18 Location 4                                    */
} MEC_I3C_SDCT_DEV1_Enum;

/* ========================================================  DAT_LOC  ======================================================== */
/* =================================================  MEC_I3C_SEC DAT_LOC  ================================================== */
typedef enum {                                  /*!< MEC_I3C_SEC_DAT_LOC                                                      */
  MEC_I3C_SDAT_DEV1_T1_L1              = 0,     /*!< T1_L1 : Device 1: Table 1 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T2_L1              = 1,     /*!< T2_L1 : Device 1: Table 2 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T3_L1              = 2,     /*!< T3_L1 : Device 1: Table 3 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T4_L1              = 3,     /*!< T4_L1 : Device 1: Table 4 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T5_L1              = 4,     /*!< T5_L1 : Device 1: Table 5 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T6_L1              = 5,     /*!< T6_L1 : Device 1: Table 6 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T7_L1              = 6,     /*!< T7_L1 : Device 1: Table 7 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T8_L1              = 7,     /*!< T8_L1 : Device 1: Table 8 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T9_L1              = 8,     /*!< T9_L1 : Device 1: Table 9 Location 1                                      */
  MEC_I3C_SDAT_DEV1_T10_L1             = 8,     /*!< T10_L1 : Device 1: Table 10 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T11_L1             = 10,    /*!< T11_L1 : Device 1: Table 11 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T12_L1             = 11,    /*!< T12_L1 : Device 1: Table 12 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T13_L1             = 12,    /*!< T13_L1 : Device 1: Table 13 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T14_L1             = 13,    /*!< T14_L1 : Device 1: Table 14 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T15_L1             = 14,    /*!< T15_L1 : Device 1: Table 15 Location 1                                    */
  MEC_I3C_SDAT_DEV1_T16_L1             = 15,    /*!< T16_L1 : Device 1: Table 16 Location 1                                    */
} MEC_I3C_SDAT_DEV1_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_I3C_SEC_V2_H */
