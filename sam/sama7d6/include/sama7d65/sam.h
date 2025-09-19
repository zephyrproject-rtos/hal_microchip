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

#if   defined(__SAMA7D65__) || defined(__ATSAMA7D65__)
  #include "sama7d65.h"
#elif defined(__SAMA7D65D1G__) || defined(__ATSAMA7D65D1G__)
  #include "sama7d65d1g.h"
#elif defined(__SAMA7D65D1GN2__) || defined(__ATSAMA7D65D1GN2__)
  #include "sama7d65d1gn2.h"
#elif defined(__SAMA7D65D2G__) || defined(__ATSAMA7D65D2G__)
  #include "sama7d65d2g.h"
#elif defined(__SAMA7D65D2GN8__) || defined(__ATSAMA7D65D2GN8__)
  #include "sama7d65d2gn8.h"
#elif defined(__SAMA7D65D5M__) || defined(__ATSAMA7D65D5M__)
  #include "sama7d65d5m.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

