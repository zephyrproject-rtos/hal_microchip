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

/**
  * @brief CPU stall delay register (CPU_STALL)
  */

typedef struct cpu_stall_regs {                 /*!< (@ 0x08000000) cpu_delay_regs Structure                                           */
  __IOM uint32_t   STALL_US;                    /*!< (@ 0x08000000) Microsecond stall bits[4:0]                                */
  __IM  uint32_t   RESERVED[1];
} CPU_STALL_Type;                               /*!< Size = 8 (0x8)                                                            */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ======================================================  STALL_US  ========================================================= */
#define CPU_STALL_US_Pos                  (0UL)                     /*!< STALL_US (Bit 0)                                      */
#define CPU_STALL_US_Msk                  (0x1FUL)                  /*!< STALL_US (Bitfield-Mask: 0x1F)                        */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
typedef enum {                                  /*!< CPU_STALL_US                                                              */
  CPU_STALL_US_1                       = 0,     /*!< Stall/delay CPU execution by 1 microsecond                                */
  CPU_STALL_US_2                       = 1,     /*!< Stall/delay CPU execution by 2 microseconds                               */
  CPU_STALL_US_3                       = 2,     /*!< Stall/delay CPU execution by 3 microseconds                               */
  CPU_STALL_US_4                       = 3,     /*!< Stall/delay CPU execution by 4 microseconds                               */
  CPU_STALL_US_5                       = 4,     /*!< Stall/delay CPU execution by 5 microseconds                               */
  CPU_STALL_US_6                       = 5,     /*!< Stall/delay CPU execution by 6 microseconds                               */
  CPU_STALL_US_7                       = 6,     /*!< Stall/delay CPU execution by 7 microseconds                               */
  CPU_STALL_US_8                       = 7,     /*!< Stall/delay CPU execution by 8 microseconds                               */
  CPU_STALL_US_9                       = 8,     /*!< Stall/delay CPU execution by 9 microseconds                               */
  CPU_STALL_US_10                      = 9,     /*!< Stall/delay CPU execution by 10 microseconds                              */
  CPU_STALL_US_11                      = 10,    /*!< Stall/delay CPU execution by 11 microseconds                              */
  CPU_STALL_US_12                      = 11,    /*!< Stall/delay CPU execution by 12 microseconds                              */
  CPU_STALL_US_13                      = 12,    /*!< Stall/delay CPU execution by 13 microseconds                              */
  CPU_STALL_US_14                      = 13,    /*!< Stall/delay CPU execution by 14 microseconds                              */
  CPU_STALL_US_15                      = 14,    /*!< Stall/delay CPU execution by 15 microseconds                              */
  CPU_STALL_US_16                      = 15,    /*!< Stall/delay CPU execution by 16 microseconds                              */
  CPU_STALL_US_17                      = 16,    /*!< Stall/delay CPU execution by 17 microseconds                              */
  CPU_STALL_US_18                      = 17,    /*!< Stall/delay CPU execution by 18 microseconds                              */
  CPU_STALL_US_19                      = 18,    /*!< Stall/delay CPU execution by 19 microseconds                              */
  CPU_STALL_US_20                      = 19,    /*!< Stall/delay CPU execution by 20 microseconds                              */
  CPU_STALL_US_21                      = 20,    /*!< Stall/delay CPU execution by 21 microseconds                              */
  CPU_STALL_US_22                      = 21,    /*!< Stall/delay CPU execution by 22 microseconds                              */
  CPU_STALL_US_23                      = 22,    /*!< Stall/delay CPU execution by 23 microseconds                              */
  CPU_STALL_US_24                      = 23,    /*!< Stall/delay CPU execution by 24 microseconds                              */
  CPU_STALL_US_25                      = 24,    /*!< Stall/delay CPU execution by 25 microseconds                              */
  CPU_STALL_US_26                      = 25,    /*!< Stall/delay CPU execution by 26 microseconds                              */
  CPU_STALL_US_27                      = 26,    /*!< Stall/delay CPU execution by 27 microseconds                              */
  CPU_STALL_US_28                      = 27,    /*!< Stall/delay CPU execution by 28 microseconds                              */
  CPU_STALL_US_29                      = 28,    /*!< Stall/delay CPU execution by 29 microseconds                              */
  CPU_STALL_US_30                      = 29,    /*!< Stall/delay CPU execution by 30 microseconds                              */
  CPU_STALL_US_31                      = 30,    /*!< Stall/delay CPU execution by 31 microseconds                              */
  CPU_STALL_US_32                      = 31,    /*!< Stall/delay CPU execution by 32 microseconds                              */
} CPU_STALL_US_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CPU_STALL_V1_H */
