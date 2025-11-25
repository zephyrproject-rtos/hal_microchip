/*
 * Top level header file
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
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

#ifndef _SAM_H_
#define _SAM_H_

#if   defined(__SAMA5D27SOM1__) || defined(__ATSAMA5D27SOM1__)
  #include "sama5d27som1.h"
#elif defined(__SAMA5D27WLSOM1__) || defined(__ATSAMA5D27WLSOM1__)
  #include "sama5d27wlsom1.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

