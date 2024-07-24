/*
 * Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

#if   defined(__PIC32CX1025SG61100__) || defined(__PIC32CX1025SG61100__)
  #include "pic32cx1025sg61100.h"
#elif defined(__PIC32CX1025SG61128__) || defined(__PIC32CX1025SG61128__)
  #include "pic32cx1025sg61128.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

