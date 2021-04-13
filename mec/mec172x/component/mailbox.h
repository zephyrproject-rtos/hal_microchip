/**
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

/** @file mailbox.h
 * MEC172x Mailbox Registers
 */
/** @defgroup MEC172x Peripherals MBOX
 */

#ifndef _COMPONENT_MAILBOX_H
#define _COMPONENT_MAILBOX_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_MBOX_BASE_ADDR	0x400F0000ul

/* Mailbox interrupts */
#define MCHP_MBOX_GIRQ		15u
#define MCHP_MBOX_GIRQ_NVIC	7u
#define MCHP_MBOX_NVIC		60u

#define MCHP_KBC_MBOX_GIRQ_POS	20u
#define MCHP_KBC_MBOX_GIRQ	BIT(MCHP_KBC_MBOX_GIRQ_POS)

/* SMI Source register */
#define MCHP_MBOX_SMI_SRC_EC_WR_POS	0u
#define MCHP_MBOX_SMI_SRC_EC_WR		BIT(MCHP_MBOX_SMI_SRC_WR_POS)
#define MCHP_MBOX_SMI_SRC_SWI_POS	1u
#define MCHP_MBOX_SMI_SRC_SWI_MASK0	0x7Ful
#define MCHP_MBOX_SMI_SRC_SWI_MASK	0xFEul
#define MCHP_MBOX_SMI_SRC_SWI0		BIT(1)
#define MCHP_MBOX_SMI_SRC_SWI1		BIT(2)
#define MCHP_MBOX_SMI_SRC_SWI2		BIT(3)
#define MCHP_MBOX_SMI_SRC_SWI3		BIT(4)
#define MCHP_MBOX_SMI_SRC_SWI4		BIT(5)
#define MCHP_MBOX_SMI_SRC_SWI5		BIT(6)
#define MCHP_MBOX_SMI_SRC_SWI6		BIT(7)

/* SMI Mask register */
#define MCHP_MBOX_SMI_MASK_WR_EN_POS	0u
#define MCHP_MBOX_SMI_MASK_WR_EN	BIT(MCHP_MBOX_SMI_MASK_WR_EN_POS)
#define MCHP_MBOX_SMI_SWI_EN_POS	1u
#define MCHP_MBOX_SMI_SWI_EN_MASK0	0x7Ful
#define MCHP_MBOX_SMI_SWI_EN_MASK	0xFEul
#define MCHP_MBOX_SMI_SRC_EN_SWI0	BIT(1)
#define MCHP_MBOX_SMI_SRC_EN_SWI1	BIT(2)
#define MCHP_MBOX_SMI_SRC_EN_SWI2	BIT(3)
#define MCHP_MBOX_SMI_SRC_EN_SWI3	BIT(4)
#define MCHP_MBOX_SMI_SRC_EN_SWI4	BIT(5)
#define MCHP_MBOX_SMI_SRC_EN_SWI5	BIT(6)
#define MCHP_MBOX_SMI_SRC_EN_SWI6	BIT(7)

#endif /* #ifndef _COMPONENT_MAILBOX_H */
/* end mailbox.h */
/**   @}
 */
