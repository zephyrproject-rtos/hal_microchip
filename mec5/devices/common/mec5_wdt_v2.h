/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_WDT_V2_H
#define _MEC5_WDT_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Watch Dog Timer on 32KHz clock domain (WDT0)
  */

typedef struct wdt_regs {                       /*!< (@ 0x40000400) WDT0 Structure                                             */
  __IOM uint32_t  LOAD;                         /*!< (@ 0x00000000) Value loaded into WDT counter upon start                   */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000004) WDT Control                                                */
  __OM  uint32_t  KICK;                         /*!< (@ 0x00000008) WDT write only any value to reload counter                 */
  __IM  uint32_t  COUNT;                        /*!< (@ 0x0000000C) WDT read only counter in units of 32KHz ticks              */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000010) WDT Status                                                 */
  __IOM uint32_t  IEN;                          /*!< (@ 0x00000014) WDT interrupt enable                                       */
} WDT_Type;                                     /*!< Size = 24 (0x18)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  LOAD  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
#define WDT_CTRL_ENABLE_Pos               (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define WDT_CTRL_ENABLE_Msk               (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define WDT_CTRL_STALL_HTMR_Pos           (2UL)                     /*!< STALL_HTMR (Bit 2)                                    */
#define WDT_CTRL_STALL_HTMR_Msk           (0x4UL)                   /*!< STALL_HTMR (Bitfield-Mask: 0x01)                      */
#define WDT_CTRL_STALL_WKTMR_Pos          (3UL)                     /*!< STALL_WKTMR (Bit 3)                                   */
#define WDT_CTRL_STALL_WKTMR_Msk          (0x8UL)                   /*!< STALL_WKTMR (Bitfield-Mask: 0x01)                     */
#define WDT_CTRL_STALL_JTAG_Pos           (4UL)                     /*!< STALL_JTAG (Bit 4)                                    */
#define WDT_CTRL_STALL_JTAG_Msk           (0x10UL)                  /*!< STALL_JTAG (Bitfield-Mask: 0x01)                      */
#define WDT_CTRL_RST_MODE_INTR_Pos        (9UL)                     /*!< RST_MODE_INTR (Bit 9)                                 */
#define WDT_CTRL_RST_MODE_INTR_Msk        (0x200UL)                 /*!< RST_MODE_INTR (Bitfield-Mask: 0x01)                   */
/* =========================================================  KICK  ========================================================== */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  STATUS  ========================================================= */
#define WDT_STATUS_ISTATUS_Pos            (0UL)                     /*!< ISTATUS (Bit 0)                                       */
#define WDT_STATUS_ISTATUS_Msk            (0x1UL)                   /*!< ISTATUS (Bitfield-Mask: 0x01)                         */
/* ==========================================================  IEN  ========================================================== */
#define WDT_IEN_INTREN_Pos                (0UL)                     /*!< INTREN (Bit 0)                                        */
#define WDT_IEN_INTREN_Msk                (0x1UL)                   /*!< INTREN (Bitfield-Mask: 0x01)                          */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  LOAD  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
/* ================================================  WDT0 CTRL ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< WDT0_CTRL_ENABLE                                                          */
  WDT0_CTRL_ENABLE_DIS                 = 0,     /*!< DIS : Disables WDT                                                        */
  WDT0_CTRL_ENABLE_EN                  = 1,     /*!< EN : Enables WDT                                                          */
} WDT0_CTRL_ENABLE_Enum;

/* ==============================================  WDT0 CTRL STALL_HTMR [2..2]  ============================================== */
typedef enum {                                  /*!< WDT0_CTRL_STALL_HTMR                                                      */
  WDT0_CTRL_STALL_HTMR_DIS             = 0,     /*!< DIS : Disables WDT count stall if any hibernation timer is running        */
  WDT0_CTRL_STALL_HTMR_EN              = 1,     /*!< EN : Enables WDT count stall if any hibernation timer is running          */
} WDT0_CTRL_STALL_HTMR_Enum;

/* =============================================  WDT0 CTRL STALL_WKTMR [3..3]  ============================================== */
typedef enum {                                  /*!< WDT0_CTRL_STALL_WKTMR                                                     */
  WDT0_CTRL_STALL_WKTMR_DIS            = 0,     /*!< DIS : Disables WDT count stall if the week timer is running               */
  WDT0_CTRL_STALL_WKTMR_EN             = 1,     /*!< EN : Enables WDT count stall if the week timer is running                 */
} WDT0_CTRL_STALL_WKTMR_Enum;

/* ==============================================  WDT0 CTRL STALL_JTAG [4..4]  ============================================== */
typedef enum {                                  /*!< WDT0_CTRL_STALL_JTAG                                                      */
  WDT0_CTRL_STALL_JTAG_DIS             = 0,     /*!< DIS : Disables WDT count stall if the any Core Debug halt/break
                                                     is active                                                                 */
  WDT0_CTRL_STALL_JTAG_EN              = 1,     /*!< EN : Enables WDT count stall if the any Core Debug halt/break
                                                     is active                                                                 */
} WDT0_CTRL_STALL_JTAG_Enum;

/* ============================================  WDT0 CTRL RST_MODE_INTR [9..9]  ============================================= */
typedef enum {                                  /*!< WDT0_CTRL_RST_MODE_INTR                                                   */
  WDT0_CTRL_RST_MODE_INTR_RESET        = 0,     /*!< RESET : WDT asserts reset signal when WDT count down reaches
                                                     0                                                                         */
  WDT0_CTRL_RST_MODE_INTR_RELOAD_IRQ   = 1,     /*!< RELOAD_IRQ : Enables WDT generating an EC interrupt when WDT
                                                     count down reaches 0 and reloads counter                                  */
} WDT0_CTRL_RST_MODE_INTR_Enum;

/* =========================================================  KICK  ========================================================== */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  STATUS  ========================================================= */
/* ==============================================  WDT0 STATUS ISTATUS [0..0]  =============================================== */
typedef enum {                                  /*!< WDT0_STATUS_ISTATUS                                                       */
  WDT0_STATUS_ISTATUS_nACTIVE          = 0,     /*!< nACTIVE : WDT counter expired event is not active                         */
  WDT0_STATUS_ISTATUS_ACTIVE           = 1,     /*!< ACTIVE : WDT counter expired event is active                              */
} WDT0_STATUS_ISTATUS_Enum;

/* ==========================================================  IEN  ========================================================== */
/* ================================================  WDT0 IEN INTREN [0..0]  ================================================= */
typedef enum {                                  /*!< WDT0_IEN_INTREN                                                           */
  WDT0_IEN_INTREN_DIS                  = 0,     /*!< DIS : Disable(gate off) interrupt to EC on WDT counter expired
                                                     event                                                                     */
  WDT0_IEN_INTREN_EN                   = 1,     /*!< EN : Propagate WDT counter expired event interrupt to EC                  */
} WDT0_IEN_INTREN_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_WDT_V2_H */
