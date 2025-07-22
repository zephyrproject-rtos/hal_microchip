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

#if   defined(__SAME53J18A__) || defined(__ATSAME53J18A__)
  #include "same53j18a.h"
#elif defined(__SAME53J19A__) || defined(__ATSAME53J19A__)
  #include "same53j19a.h"
#elif defined(__SAME53J20A__) || defined(__ATSAME53J20A__)
  #include "same53j20a.h"
#elif defined(__SAME53N19A__) || defined(__ATSAME53N19A__)
  #include "same53n19a.h"
#elif defined(__SAME53N20A__) || defined(__ATSAME53N20A__)
  #include "same53n20a.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

