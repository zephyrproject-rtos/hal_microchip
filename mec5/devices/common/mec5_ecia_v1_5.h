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
  * @brief GIRQS [GIRQ] (ECIA GIRQ)
  */
typedef struct girqs_regs {
  __IOM uint32_t  SOURCE;                       /*!< (@ 0x00000000) Individual latched interrupt source bits(R/W1C)            */
  __IOM uint32_t  EN_SET;                       /*!< (@ 0x00000004) Individual interrupt enable set bits(R/W1S)                */
  __IM  uint32_t  RESULT;                       /*!< (@ 0x00000008) Individual interrupt result(RO) = Source AND
                                                                    EN_SET                                                     */
  __IOM uint32_t  EN_CLR;                       /*!< (@ 0x0000000C) Individual interrupt enable clear bits(R/W1C)              */
  __IM  uint32_t  RSVD;                         /*!< (@ 0x00000010) Not implemented                                            */
} GIRQS_Type;                                   /*!< Size = 20 (0x14)                                                          */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief EC Interrupt Aggregator(ECIA) (ECIA0)
  */

typedef struct ecia_regs {                      /*!< (@ 0x4000E000) ECIA Structure                                            */
  __IOM GIRQS_Type GIRQ[19];                    /*!< (@ 0x00000000) ECIA GIRQ                                                  */
  __IM  uint32_t  RESERVED[33];
  __IOM uint32_t  BLK_EN_SET;                   /*!< (@ 0x00000200) Bit map to enable aggregated GIRQ outputs                  */
  __IOM uint32_t  BLK_EN_CLR;                   /*!< (@ 0x00000204) Bit map to disable aggregated GIRQ outputs                 */
  __IM  uint32_t  BLK_ACTIVE;                   /*!< (@ 0x00000208) Read only bit map of active aggregated GIRQ outputs        */
} ECIA_Type;                                    /*!< Size = 524 (0x20c)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* =========================================================  GIRQ   ========================================================= */
typedef enum {                                  /*!< ECIA0_GIRQ                                                                */
  GIRQS_IDX_GIRQ8                      = 0,     /*!< GIRQ8 : GIRQ08 array index                                                */
  GIRQS_IDX_GIRQ9                      = 1,     /*!< GIRQ9 : GIRQ09 array index                                                */
  GIRQS_IDX_GIRQ10                     = 2,     /*!< GIRQ10 : GIRQ10 array index                                               */
  GIRQS_IDX_GIRQ11                     = 3,     /*!< GIRQ11 : GIRQ11 array index                                               */
  GIRQS_IDX_GIRQ12                     = 4,     /*!< GIRQ12 : GIRQ12 array index                                               */
  GIRQS_IDX_GIRQ13                     = 5,     /*!< GIRQ13 : GIRQ13 array index                                               */
  GIRQS_IDX_GIRQ14                     = 6,     /*!< GIRQ14 : GIRQ14 array index                                               */
  GIRQS_IDX_GIRQ15                     = 7,     /*!< GIRQ15 : GIRQ15 array index                                               */
  GIRQS_IDX_GIRQ16                     = 8,     /*!< GIRQ16 : GIRQ16 array index                                               */
  GIRQS_IDX_GIRQ17                     = 9,     /*!< GIRQ17 : GIRQ17 array index                                               */
  GIRQS_IDX_GIRQ18                     = 10,    /*!< GIRQ18 : GIRQ18 array index                                               */
  GIRQS_IDX_GIRQ19                     = 11,    /*!< GIRQ19 : GIRQ19 array index                                               */
  GIRQS_IDX_GIRQ20                     = 12,    /*!< GIRQ20 : GIRQ20 array index                                               */
  GIRQS_IDX_GIRQ21                     = 13,    /*!< GIRQ21 : GIRQ21 array index                                               */
  GIRQS_IDX_GIRQ22                     = 14,    /*!< GIRQ22 : GIRQ22 array index                                               */
  GIRQS_IDX_GIRQ23                     = 15,    /*!< GIRQ23 : GIRQ23 array index                                               */
  GIRQS_IDX_GIRQ24                     = 16,    /*!< GIRQ24 : GIRQ24 array index                                               */
  GIRQS_IDX_GIRQ25                     = 17,    /*!< GIRQ25 : GIRQ25 array index                                               */
  GIRQS_IDX_GIRQ26                     = 18,    /*!< GIRQ26 : GIRQ26 array index                                               */
} GIRQS_IDX_Enum;

/* ========================================================  SOURCE  ========================================================= */
/* ========================================================  EN_SET  ========================================================= */
/* ========================================================  RESULT  ========================================================= */
/* ========================================================  EN_CLR  ========================================================= */
/* =========================================================  RSVD  ========================================================== */
/** @} */ /* End of group EnumValue_clusters */

#endif /* _MEC5_ECIA_V1_5_H */
