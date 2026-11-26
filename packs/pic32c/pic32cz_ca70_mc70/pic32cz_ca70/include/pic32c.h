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

#if   defined(__PIC32CZ1038CA70064__) || defined(__PIC32CZ1038CA70064__)
  #include "pic32cz1038ca70064.h"
#elif defined(__PIC32CZ1038CA70100__) || defined(__PIC32CZ1038CA70100__)
  #include "pic32cz1038ca70100.h"
#elif defined(__PIC32CZ1038CA70144__) || defined(__PIC32CZ1038CA70144__)
  #include "pic32cz1038ca70144.h"
#elif defined(__PIC32CZ2051CA70064__) || defined(__PIC32CZ2051CA70064__)
  #include "pic32cz2051ca70064.h"
#elif defined(__PIC32CZ2051CA70100__) || defined(__PIC32CZ2051CA70100__)
  #include "pic32cz2051ca70100.h"
#elif defined(__PIC32CZ2051CA70144__) || defined(__PIC32CZ2051CA70144__)
  #include "pic32cz2051ca70144.h"
#elif defined(__PIC32CZ5125CA70064__) || defined(__PIC32CZ5125CA70064__)
  #include "pic32cz5125ca70064.h"
#elif defined(__PIC32CZ5125CA70100__) || defined(__PIC32CZ5125CA70100__)
  #include "pic32cz5125ca70100.h"
#elif defined(__PIC32CZ5125CA70144__) || defined(__PIC32CZ5125CA70144__)
  #include "pic32cz5125ca70144.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

