/**************************************************************************
  Crypto Framework Library Source

  Company:
    Microchip Technology Inc.

  File Name:
    cam_version.h

  Summary:
    CAM Hardware Driver Version.

  Description:
    This header file contains version information on the CAM Hardware Driver.
**************************************************************************/
/*
Copyright (C) 2026, Microchip Technology Inc., and its subsidiaries. All rights reserved.

The software and documentation is provided by microchip and its contributors
"as is" and any express, implied or statutory warranties, including, but not
limited to, the implied warranties of merchantability, fitness for a particular
purpose and non-infringement of third party intellectual property rights are
disclaimed to the fullest extent permitted by law. In no event shall microchip
or its contributors be liable for any direct, indirect, incidental, special,
exemplary, or consequential damages (including, but not limited to, procurement
of substitute goods or services; loss of use, data, or profits; or business
interruption) however caused and on any theory of liability, whether in contract,
strict liability, or tort (including negligence or otherwise) arising in any way
out of the use of the software and documentation, even if advised of the
possibility of such damage.

Except as expressly permitted hereunder and subject to the applicable license terms
for any third-party software incorporated in the software and any applicable open
source software license terms, no license or other rights, whether express or
implied, are granted under any patent or other intellectual property rights of
Microchip or any third party.
*/

/**
 * Crypto Framework Library Source
 *
 * @file cam_version.h
 * @ingroup CAM_HSM_LITE
 * @defgroup  version VERSION
 * @ingroup CAM_HSM_LITE
 *
 * @brief This header file contains version information of the CAM Hardware driver.
 *
 */

#ifndef CAM_VERSION_H
#define CAM_VERSION_H

#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif

/**
 * @ingroup version
 * @def CAM_LIBRARY_VERSION_DATE
 * @brief This is the date the library was built on.
 */
#define CAM_LIBRARY_DATE "20251219"

/**
 * @ingroup version
 * @def CAM_LIBRARY_VERSION_MAJOR
 * @brief This number represents the major version in SemVer format.
 */
#define CAM_LIBRARY_VERSION_MAJOR  1

/**
 * @ingroup version
 * @def CAM_LIBRARY_VERSION_MINOR
 * @brief This number represents the minor version in SemVer format.
 */
#define CAM_LIBRARY_VERSION_MINOR  3

/**
 * @ingroup version
 * @def CAM_LIBRARY_VERSION_PATCH
 * @brief This number represents the patch version in SemVer format.
 */
#define CAM_LIBRARY_VERSION_PATCH  0

#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif

#endif /* CAM_VERSION_H */
