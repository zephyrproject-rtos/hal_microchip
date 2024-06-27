/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ECIA_V1_5_H
#define _MEC5_ECIA_V1_5_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */

/**
  * @brief MEC_GIRQS [GIRQ] (ECIA GIRQ)
  */
typedef struct mec_girqs_regs {
  __IOM uint32_t  SOURCE;                       /*!< (@ 0x00000000) Individual latched interrupt source bits(R/W1C)            */
  __IOM uint32_t  EN_SET;                       /*!< (@ 0x00000004) Individual interrupt enable set bits(R/W1S)                */
  __IM  uint32_t  RESULT;                       /*!< (@ 0x00000008) Individual interrupt result(RO) = Source AND
                                                                    EN_SET                                                     */
  __IOM uint32_t  EN_CLR;                       /*!< (@ 0x0000000C) Individual interrupt enable clear bits(R/W1C)              */
  __IM  uint32_t  RSVD;                         /*!< (@ 0x00000010) Not implemented                                            */
} MEC_GIRQS_Type;                               /*!< Size = 20 (0x14)                                                          */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief EC Interrupt Aggregator(ECIA) (MEC_ECIA0)
  */

typedef struct mec_ecia_regs {                  /*!< (@ 0x4000E000) MEC_ECIA0 Structure                                        */
  __IOM MEC_GIRQS_Type GIRQ[19];                /*!< (@ 0x00000000) ECIA GIRQ                                                  */
  __IM  uint32_t  RESERVED[33];
  __IOM uint32_t  BLK_EN_SET;                   /*!< (@ 0x00000200) Bit map to enable aggregated GIRQ outputs                  */
  __IOM uint32_t  BLK_EN_CLR;                   /*!< (@ 0x00000204) Bit map to disable aggregated GIRQ outputs                 */
  __IM  uint32_t  BLK_ACTIVE;                   /*!< (@ 0x00000208) Read only bit map of active aggregated GIRQ outputs        */
} MEC_ECIA_Type;                                /*!< Size = 524 (0x20c)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* =========================================================  GIRQ   ========================================================= */
typedef enum {                                  /*!< MEC_ECIA0_GIRQ                                                            */
  MEC_GIRQ_IDX_GIRQ8                   = 0,     /*!< GIRQ8 : GIRQ08 array index                                                */
  MEC_GIRQ_IDX_GIRQ9                   = 1,     /*!< GIRQ9 : GIRQ09 array index                                                */
  MEC_GIRQ_IDX_GIRQ10                  = 2,     /*!< GIRQ10 : GIRQ10 array index                                               */
  MEC_GIRQ_IDX_GIRQ11                  = 3,     /*!< GIRQ11 : GIRQ11 array index                                               */
  MEC_GIRQ_IDX_GIRQ12                  = 4,     /*!< GIRQ12 : GIRQ12 array index                                               */
  MEC_GIRQ_IDX_GIRQ13                  = 5,     /*!< GIRQ13 : GIRQ13 array index                                               */
  MEC_GIRQ_IDX_GIRQ14                  = 6,     /*!< GIRQ14 : GIRQ14 array index                                               */
  MEC_GIRQ_IDX_GIRQ15                  = 7,     /*!< GIRQ15 : GIRQ15 array index                                               */
  MEC_GIRQ_IDX_GIRQ16                  = 8,     /*!< GIRQ16 : GIRQ16 array index                                               */
  MEC_GIRQ_IDX_GIRQ17                  = 9,     /*!< GIRQ17 : GIRQ17 array index                                               */
  MEC_GIRQ_IDX_GIRQ18                  = 10,    /*!< GIRQ18 : GIRQ18 array index                                               */
  MEC_GIRQ_IDX_GIRQ19                  = 11,    /*!< GIRQ19 : GIRQ19 array index                                               */
  MEC_GIRQ_IDX_GIRQ20                  = 12,    /*!< GIRQ20 : GIRQ20 array index                                               */
  MEC_GIRQ_IDX_GIRQ21                  = 13,    /*!< GIRQ21 : GIRQ21 array index                                               */
  MEC_GIRQ_IDX_GIRQ22                  = 14,    /*!< GIRQ22 : GIRQ22 array index                                               */
  MEC_GIRQ_IDX_GIRQ23                  = 15,    /*!< GIRQ23 : GIRQ23 array index                                               */
  MEC_GIRQ_IDX_GIRQ24                  = 16,    /*!< GIRQ24 : GIRQ24 array index                                               */
  MEC_GIRQ_IDX_GIRQ25                  = 17,    /*!< GIRQ25 : GIRQ25 array index                                               */
  MEC_GIRQ_IDX_GIRQ26                  = 18,    /*!< GIRQ26 : GIRQ26 array index                                               */
} MEC_GIRQ_IDX_Enum;

/* GIRQ8 - GIRQ26 numerical value */
typedef enum {                            /*!< MEC_GIRQ                                              */
  MEC_GIRQ08_ID                  = 8,     /*!< GIRQ8 ID data sheet number                            */
  MEC_GIRQ09_ID                  = 9,     /*!< GIRQ9                                                 */
  MEC_GIRQ10_ID                  = 10,    /*!< GIRQ10                                                */
  MEC_GIRQ11_ID                  = 11,    /*!< GIRQ11                                                */
  MEC_GIRQ12_ID                  = 12,    /*!< GIRQ12                                                */
  MEC_GIRQ13_ID                  = 13,    /*!< GIRQ13                                                */
  MEC_GIRQ14_ID                  = 14,    /*!< GIRQ14                                                */
  MEC_GIRQ15_ID                  = 15,    /*!< GIRQ15                                                */
  MEC_GIRQ16_ID                  = 16,    /*!< GIRQ16                                                */
  MEC_GIRQ17_ID                  = 17,    /*!< GIRQ17                                                */
  MEC_GIRQ18_ID                  = 18,    /*!< GIRQ18                                                */
  MEC_GIRQ19_ID                  = 19,    /*!< GIRQ19                                                */
  MEC_GIRQ20_ID                  = 20,    /*!< GIRQ20                                                */
  MEC_GIRQ21_ID                  = 21,    /*!< GIRQ21                                                */
  MEC_GIRQ22_ID                  = 22,    /*!< GIRQ22                                                */
  MEC_GIRQ23_ID                  = 23,    /*!< GIRQ23                                                */
  MEC_GIRQ24_ID                  = 24,    /*!< GIRQ24                                                */
  MEC_GIRQ25_ID                  = 25,    /*!< GIRQ25                                                */
  MEC_GIRQ26_ID                  = 26,    /*!< GIRQ26                                                */
} MEC_GIRQ_Enum;

/** @} */ /* End of group EnumValue_clusters */

#endif /* _MEC5_ECIA_V1_5_H */
