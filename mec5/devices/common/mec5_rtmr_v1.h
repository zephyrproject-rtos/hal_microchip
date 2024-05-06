/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_RTMR_V1_H
#define _MEC5_RTMR_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief RTOS timer (RTMR)
  */

typedef struct rtmr_regs {                      /*!< (@ 0x40007400) RTMR Structure                                            */
  __IM  uint32_t  COUNT;                        /*!< (@ 0x00000000) RTOS timer count                                          */
  __IOM uint32_t  PRELOAD;                      /*!< (@ 0x00000004) RTOS timer preload                                        */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000008) RTOS timer control                                        */
} RTMR_Type;                                    /*!< Size = 12 (0xc)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* =========================================================  CTRL  ========================================================== */
#define RTMR_CTRL_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define RTMR_CTRL_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define RTMR_CTRL_AUTO_RELOAD_Pos         (1UL)                     /*!< AUTO_RELOAD (Bit 1)                                   */
#define RTMR_CTRL_AUTO_RELOAD_Msk         (0x2UL)                   /*!< AUTO_RELOAD (Bitfield-Mask: 0x01)                     */
#define RTMR_CTRL_START_Pos               (2UL)                     /*!< START (Bit 2)                                         */
#define RTMR_CTRL_START_Msk               (0x4UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define RTMR_CTRL_EXT_HALT_Pos            (3UL)                     /*!< EXT_HALT (Bit 3)                                      */
#define RTMR_CTRL_EXT_HALT_Msk            (0x8UL)                   /*!< EXT_HALT (Bitfield-Mask: 0x01)                        */
#define RTMR_CTRL_FW_HALT_Pos             (4UL)                     /*!< FW_HALT (Bit 4)                                       */
#define RTMR_CTRL_FW_HALT_Msk             (0x10UL)                  /*!< FW_HALT (Bitfield-Mask: 0x01)                         */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  RTMR CTRL ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< RTMR_CTRL_ENABLE                                                         */
  RTMR_CTRL_ENABLE_ON                 = 1,     /*!< ON : Enable timer operation                                               */
} RTMR_CTRL_ENABLE_Enum;

/* =============================================  RTMR CTRL AUTO_RELOAD [1..1]  ============================================= */
typedef enum {                                  /*!< RTMR_CTRL_AUTO_RELOAD                                                    */
  RTMR_CTRL_AUTO_RELOAD_EN            = 1,     /*!< EN : Enable                                                               */
} RTMR_CTRL_AUTO_RELOAD_Enum;

/* ================================================  RTMR CTRL START [2..2]  ================================================ */
typedef enum {                                  /*!< RTMR_CTRL_START                                                          */
  RTMR_CTRL_START_EN                  = 1,     /*!< EN : Enable                                                               */
} RTMR_CTRL_START_Enum;

/* ==============================================  RTMR CTRL EXT_HALT [3..3]  =============================================== */
typedef enum {                                  /*!< RTMR_CTRL_EXT_HALT                                                       */
  RTMR_CTRL_EXT_HALT_EN               = 1,     /*!< EN : Enable                                                               */
} RTMR_CTRL_EXT_HALT_Enum;

/* ===============================================  RTMR CTRL FW_HALT [4..4]  =============================================== */
typedef enum {                                  /*!< RTMR_CTRL_FW_HALT                                                        */
  RTMR_CTRL_FW_HALT_EN                = 1,     /*!< EN : Enable                                                               */
} RTMR_CTRL_FW_HALT_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_RTMR_V1_H */
