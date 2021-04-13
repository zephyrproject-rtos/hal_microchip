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

/** @file rcid.h
 * MEC172x RC ID controller registers
 */
/** @defgroup MEC172x Peripherals RCID
 */

#ifndef _COMPONENT_RCID_H
#define _COMPONENT_RCID_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_RCID_0_BASE_ADDR	0x40001400ul
#define MCHP_RCID_INST_SPACING	0x80ul

#define MCHP_RCID_ADDR(n)	(MCHP_RCID_0_BASE_ADDR + \
				 ((uint32_t)(n) * MCHP_RCID_INST_SPACING))

#define MCHP_RCID_GIRQ(n)	17u
#define MCHP_RCID_NVIC_GIRQ(n)	9u
#define MCHP_RCID_POS(n)	(10u + (uint32_t)(n))
#define MCHP_RCID_NVIC(n)	(80u + (uint32_t)(n))
#define MCHP_RCID_GIRQ_VAL(n)	BIT(n)

/* RCID Control register at 0x00 */
#define MCHP_RCID_CTRL_OFS	0x00u
#define MCHP_RCID_CTRL_MASK	0x03C7u
#define MCHP_RCID_CTRL_RO_MASK	0x0007u
#define MCHP_RCID_CTRL_RW_MASK	0x03C0u
#define MCHP_RCID_CTRL_DONE_RO	BIT(0)
#define MCHP_RCID_CTRL_TC_RO	BIT(1)
#define MCHP_RCID_CTRL_CY_ER_RO BIT(2)
#define MCHP_RCID_CTRL_START	BIT(6)
#define MCHP_RCID_CTRL_EN	BIT(7)
#define MCHP_RCID_CTRL_CKS_MSK	0x300u
#define MCHP_RCID_CTRL_CK_48M	0x000u
#define MCHP_RCID_CTRL_CK_24M	0x100u
#define MCHP_RCID_CTRL_CK_12M	0x200u
#define MCHP_RCID_CTRL_CK_6M	0x300u

/* RCID Data register at 0x04 */
#define MCHP_RCID_DATA_OFS	0x04u
#define MCHP_RCID_DATA_MASK	0xFFFFu

#endif	/* #ifndef _COMPONENT_RCID_H */
/* end rcid.h */
/**   @}
 */
