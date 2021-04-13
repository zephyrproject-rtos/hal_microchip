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

/** @file port92.h
 * MEC172x Fast Port92h Registers
 */
/** @defgroup MEC172x Peripherals Fast Port92
 */

#ifndef _COMPONENT_PORT92_H
#define _COMPONENT_PORT92_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_PORT92_BASE_ADDR	0x400F2000ul

/* HOST_P92 */
#define MCHP_PORT92_HOST_MASK			0x03ul
#define MCHP_PORT92_HOST_ALT_CPU_RST_POS	0u
#define MCHP_PORT92_HOST_ALT_CPU_RST		BIT(0)
#define MCHP_PORT92_HOST_ALT_GA20_POS		1u
#define MCHP_PORT92_HOST_ALT_GA20		BIT(1)

/* GATEA20_CTRL */
#define MCHP_PORT92_GA20_CTRL_MASK	0x01ul
#define MCHP_PORT92_GA20_CTRL_VAL_POS	0u
#define MCHP_PORT92_GA20_CTRL_VAL_MASK	BIT(0)
#define MCHP_PORT92_GA20_CTRL_VAL_HI	BIT(0)
#define MCHP_PORT92_GA20_CTRL_VAL_LO	0ul

/*
 * SETGA20L - writes of any data to this register causes
 * GATEA20 latch to be set.
 */
#define MCHP_PORT92_SETGA20L_MASK	0x01ul
#define MCHP_PORT92_SETGA20L_SET_POS	0u
#define MCHP_PORT92_SETGA20L_SET	BIT(0)

/*
 * RSTGA20L - writes of any data to this register causes
 * the GATEA20 latch to be reset
 */
#define MCHP_PORT92_RSTGA20L_MASK	0x01ul
#define MCHP_PORT92_RSTGA20L_SET_POS	0u
#define MCHP_PORT92_RSTGA20L_RST	BIT(0)

/* ACTV */
#define MCHP_PORT92_ACTV_MASK		0x01ul
#define MCHP_PORT92_ACTV_ENABLE		0x01ul

#endif /* #ifndef _COMPONENT_PORT92_H */
/* end port92.h */
/**   @}
 */
