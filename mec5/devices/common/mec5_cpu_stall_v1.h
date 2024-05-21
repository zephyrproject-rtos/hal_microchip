/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_CPU_STALL_V1_H
#define _MEC5_CPU_STALL_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

typedef struct mec_cpu_stall_regs {             /*!< (@ 0x08000000) MEC_CPU_STALL Structure                                    */
  __IOM uint8_t   STALL;                        /*!< (@ 0x00000000) Number of microseconds to stall the instruction
                                                                    execution                                                  */
} MEC_CPU_STALL_Type;                           /*!< Size = 1 (0x1)                                                            */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  STALL  ========================================================= */
#define MEC_CPU_STALL_STALL_US_Pos        (0UL)                     /*!< US (Bit 0)                                            */
#define MEC_CPU_STALL_STALL_US_Msk        (0x1fUL)                  /*!< US (Bitfield-Mask: 0x1f)                              */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  STALL  ========================================================= */
/* =============================================  MEC_CPU_STALL STALL US [0..4]  ============================================= */
typedef enum {                                  /*!< MEC_CPU_STALL_STALL_US                                                    */
  MEC_CPU_STALL_STALL_US_1             = 0,     /*!< 1 : Value for 1 us delay                                                  */
  MEC_CPU_STALL_STALL_US_2             = 1,     /*!< 2 : Value for 2 us delay                                                  */
  MEC_CPU_STALL_STALL_US_3             = 2,     /*!< 3 : Value for 3 us delay                                                  */
  MEC_CPU_STALL_STALL_US_4             = 3,     /*!< 4 : Value for 4 us delay                                                  */
  MEC_CPU_STALL_STALL_US_5             = 4,     /*!< 5 : Value for 5 us delay                                                  */
  MEC_CPU_STALL_STALL_US_6             = 5,     /*!< 6 : Value for 6 us delay                                                  */
  MEC_CPU_STALL_STALL_US_7             = 6,     /*!< 7 : Value for 7 us delay                                                  */
  MEC_CPU_STALL_STALL_US_8             = 7,     /*!< 8 : Value for 8 us delay                                                  */
  MEC_CPU_STALL_STALL_US_9             = 8,     /*!< 9 : Value for 9 us delay                                                  */
  MEC_CPU_STALL_STALL_US_10            = 9,     /*!< 10 : Value for 10 us delay                                                */
  MEC_CPU_STALL_STALL_US_11            = 10,    /*!< 11 : Value for 11 us delay                                                */
  MEC_CPU_STALL_STALL_US_12            = 11,    /*!< 12 : Value for 12 us delay                                                */
  MEC_CPU_STALL_STALL_US_13            = 12,    /*!< 13 : Value for 13 us delay                                                */
  MEC_CPU_STALL_STALL_US_14            = 13,    /*!< 14 : Value for 14 us delay                                                */
  MEC_CPU_STALL_STALL_US_15            = 14,    /*!< 15 : Value for 15 us delay                                                */
  MEC_CPU_STALL_STALL_US_16            = 15,    /*!< 16 : Value for 16 us delay                                                */
  MEC_CPU_STALL_STALL_US_17            = 16,    /*!< 17 : Value for 17 us delay                                                */
  MEC_CPU_STALL_STALL_US_18            = 17,    /*!< 18 : Value for 18 us delay                                                */
  MEC_CPU_STALL_STALL_US_19            = 18,    /*!< 19 : Value for 19 us delay                                                */
  MEC_CPU_STALL_STALL_US_20            = 19,    /*!< 20 : Value for 20 us delay                                                */
  MEC_CPU_STALL_STALL_US_21            = 20,    /*!< 21 : Value for 21 us delay                                                */
  MEC_CPU_STALL_STALL_US_22            = 21,    /*!< 22 : Value for 22 us delay                                                */
  MEC_CPU_STALL_STALL_US_23            = 22,    /*!< 23 : Value for 23 us delay                                                */
  MEC_CPU_STALL_STALL_US_24            = 23,    /*!< 24 : Value for 24 us delay                                                */
  MEC_CPU_STALL_STALL_US_25            = 24,    /*!< 25 : Value for 25 us delay                                                */
  MEC_CPU_STALL_STALL_US_26            = 25,    /*!< 26 : Value for 26 us delay                                                */
  MEC_CPU_STALL_STALL_US_27            = 26,    /*!< 27 : Value for 27 us delay                                                */
  MEC_CPU_STALL_STALL_US_28            = 27,    /*!< 28 : Value for 28 us delay                                                */
  MEC_CPU_STALL_STALL_US_29            = 28,    /*!< 29 : Value for 29 us delay                                                */
  MEC_CPU_STALL_STALL_US_30            = 29,    /*!< 30 : Value for 30 us delay                                                */
  MEC_CPU_STALL_STALL_US_31            = 30,    /*!< 31 : Value for 31 us delay                                                */
  MEC_CPU_STALL_STALL_US_32            = 31,    /*!< 32 : Value for 32 us delay                                                */
} MEC_CPU_STALL_STALL_US_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CPU_STALL_V1_H */
