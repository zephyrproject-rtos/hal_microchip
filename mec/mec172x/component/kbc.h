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

/** @file kbc.h
 * MEC172x EM8042 Keyboard Controller Registers
 */
/** @defgroup MEC172x Peripherals KBC
 */

#ifndef _COMPONENT_KBC_H
#define _COMPONENT_KBC_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/* ---- EM8042 Keyboard Controller (KBC) ---- */
#define MCHP_KBC_BASE_ADDR	0x400F0400ul

/* KBC interrupts */
#define MCHP_KBC_GIRQ		15u
#define MCHP_KBC_GIRQ_NVIC	7u
#define MCHP_KBC_OBE_NVIC	58u
#define MCHP_KBC_IBF_NVIC	59u

#define MCHP_KBC_OBE_GIRQ_POS	18u
#define MCHP_KBC_IBF_GIRQ_POS	19u

#define MCHP_KBC_OBE_GIRQ	BIT(MCHP_KBC_OBE_GIRQ_POS)
#define MCHP_KBC_IBF_GIRQ	BIT(MCHP_KBC_IBF_GIRQ_POS)

/* EC_KBC_STS and KBC_STS_RD bit definitions */
#define MCHP_KBC_STS_OBF_POS	0u
#define MCHP_KBC_STS_OBF	BIT(MCHP_KBC_STS_OBF_POS)
#define MCHP_KBC_STS_IBF_POS	1u
#define MCHP_KBC_STS_IBF	BIT(MCHP_KBC_STS_IBF_POS)
#define MCHP_KBC_STS_UD0_POS	2u
#define MCHP_KBC_STS_UD0	BIT(MCHP_KBC_STS_UD0_POS)
#define MCHP_KBC_STS_CD_POS	3u
#define MCHP_KBC_STS_CD		BIT(MCHP_KBC_STS_CD_POS)
#define MCHP_KBC_STS_UD1_POS	4u
#define MCHP_KBC_STS_UD1	BIT(MCHP_KBC_STS_UD1_POS)
#define MCHP_KBC_STS_AUXOBF_POS 5u
#define MCHP_KBC_STS_AUXOBF	BIT(MCHP_KBC_STS_AUXOBF_POS)
#define MCHP_KBC_STS_UD2_POS	6u
#define MCHP_KBC_STS_UD2_MASK0	0x03ul
#define MCHP_KBC_STS_UD2_MASK	0xC0ul
#define MCHP_KBC_STS_UD2_0_POS	6u
#define MCHP_KBC_STS_UD2_0	BIT(6)
#define MCHP_KBC_STS_UD2_1	BIT(7)

/* KBC_CTRL bit definitions */
#define MCHP_KBC_CTRL_UD3_POS		0u
#define MCHP_KBC_CTRL_UD3		BIT(MCHP_KBC_CTRL_UD3_POS)
#define MCHP_KBC_CTRL_SAEN_POS		1u
#define MCHP_KBC_CTRL_SAEN		BIT(MCHP_KBC_CTRL_SAEN_POS)
#define MCHP_KBC_CTRL_PCOBFEN_POS	2u
#define MCHP_KBC_CTRL_PCOBFEN		BIT(MCHP_KBC_CTRL_PCOBFEN_POS)
#define MCHP_KBC_CTRL_UD4_POS		3u
#define MCHP_KBC_CTRL_UD4_MASK0		0x03ul
#define MCHP_KBC_CTRL_UD4_MASK		0x18ul
#define MCHP_KBC_CTRL_OBFEN_POS		5u
#define MCHP_KBC_CTRL_OBFEN		BIT(MCHP_KBC_CTRL_OBFEN_POS)
#define MCHP_KBC_CTRL_UD5_POS		6u
#define MCHP_KBC_CTRL_UD5		BIT(MCHP_KBC_CTRL_UD5_POS)
#define MCHP_KBC_CTRL_AUXH_POS		7u
#define MCHP_KBC_CTRL_AUXH		BIT(MCHP_KBC_CTRL_AUXH_POS)

/* PCOBF register bit definitions */
#define MCHP_KBC_PCOBF_EN_POS	0u
#define MCHP_KBC_PCOBF_EN	BIT(MCHP_KBC_PCOBF_EN_POS)

/* KBC_PORT92_EN register bit definitions */
#define MCHP_KBC_PORT92_EN_POS	0u
#define MCHP_KBC_PORT92_EN	BIT(MCHP_KBC_PORT92_EN_POS)

#endif /* #ifndef _COMPONENT_KBC_H */
/* end kbc.h */
/**   @}
 */
