/*
 * Top level header file
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _PIC32C_H_
#define _PIC32C_H_

#if   defined(__PIC32CM5112SG00048__) || defined(__PIC32CM5112SG00048__)
  #include "pic32cm5112sg00048.h"
#elif defined(__PIC32CM5112SG00064__) || defined(__PIC32CM5112SG00064__)
  #include "pic32cm5112sg00064.h"
#elif defined(__PIC32CM5112SG00100__) || defined(__PIC32CM5112SG00100__)
  #include "pic32cm5112sg00100.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

