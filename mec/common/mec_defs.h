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

/** @file mec_defs.h
 *MEC Peripheral library return values
 */
/** @defgroup MEC type and bit defines
 */

#ifndef _MEC_DEFS_H
#define _MEC_DEFS_H

#ifndef BIT
#define BIT(n) (1ul << (n))
#endif

#ifndef SHLU32
#define SHLU32(v, n) ((unsigned long)(v) << (n))
#endif

#ifndef BIT_CLR
#define BIT_CLR(v, bpos) (v) &= ~BIT(bpos)
#endif

#endif /* #ifndef _MEC_DEFS_H */
/* end mec_defs.h */
/**   @}
 */
