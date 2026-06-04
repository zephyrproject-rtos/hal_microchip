/**************************************************************************
  Crypto Library Device Support Header

  Company:
    Microchip Technology Inc.

  File Name:
    cam_device.h

  Summary:
    CAM/HSM-Lite Hardware Driver Device Support.

  Description:
    This header file defines supported devices by the CAM/HSM-Lite Hardware Driver.

  File created on 2025-11-21t11:23:02
**************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

/**
 * Crypto Framework Library Source
 *
 * @file cam_device.h
 * @defgroup  device DEVICE
 *
 * @brief This header file defines supported devices by the CAM Hardware Driver.
 *
 */

#ifndef CAM_DEVICE_H
#define CAM_DEVICE_H

#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

/** @cond INTERNAL **/
#if defined(GENERIC_TARGET_CAM_05346) \
    || defined (__dsPIC33AK256MPS505__) \
    || defined (__dsPIC33AK256MPS506__) \
    || defined (__dsPIC33AK256MPS508__) \
    || defined (__dsPIC33AK256MPS510__) \
    || defined (__dsPIC33AK256MPS512__) \
    || defined (__dsPIC33AK512MPS505__) \
    || defined (__dsPIC33AK512MPS506__) \
    || defined (__dsPIC33AK512MPS508__) \
    || defined (__dsPIC33AK512MPS510__) \
    || defined (__dsPIC33AK512MPS512__) \
    || defined (__dsPIC33AK256MPS205__) \
    || defined (__dsPIC33AK256MPS206__) \
    || defined (__dsPIC33AK256MPS208__) \
    || defined (__dsPIC33AK256MPS210__) \
    || defined (__dsPIC33AK256MPS212__) \
    || defined (__dsPIC33AK512MPS205__) \
    || defined (__dsPIC33AK512MPS206__) \
    || defined (__dsPIC33AK512MPS208__) \
    || defined (__dsPIC33AK512MPS210__) \
    || defined (__dsPIC33AK512MPS212__)
         /**
         * @ingroup device
         * @def CAM_HW_VERSION
         * @brief Defines the hardware version for the CAM 05346 target.
         *
         * This macro is defined for supported CAM 05346 device families.
         */
        #define CAM_HW_VERSION CAM_05346
#elif defined(GENERIC_TARGET_HSM_LITE_04777) \
    || defined (__PIC32CM5112SG00048__) \
    || defined (__PIC32CM5112SG00064__) \
    || defined (__PIC32CM5112SG00100__)
         /**
         * @ingroup device
         * @def CAM_HW_VERSION
         * @brief Defines the hardware version for the HSM-Lite 04777 target.
         *
         * This macro is defined for supported HSM-Lite 04777 device families.
         */
        #define CAM_HW_VERSION HSM_LITE_04777
#elif defined(GENERIC_TARGET_CAM_05354) \
    || defined (CONFIG_SOC_PIC32CX2051BZ62132) \
	|| defined (CONFIG_SOC_PIC32CX2051BZ62064) \
	|| defined (CONFIG_SOC_PIC32CX2051BZ66048) 
         /**
         * @ingroup device
         * @def CAM_HW_VERSION
         * @brief Defines the hardware version for the CAM-Lite 05354 target.
         *
         * This macro is defined for supported CAM-Lite 05354 device families.
         */
        #define CAM_HW_VERSION CAM_05354
#elif defined(GENERIC_TARGET_CAM_04434) \
      || defined (CONFIG_SOC_PIC32CX5109BZ36032) \
	  || defined (CONFIG_SOC_PIC32CX5109BZ36048) \
	  || defined (CONFIG_SOC_PIC32CX5109BZ31032) \
    || defined (CONFIG_SOC_PIC32CX5109BZ31048)
         /**
         * @ingroup device
         * @def CAM_HW_VERSION
         * @brief Defines the hardware version for the CAM-Lite 05354 target.
         *
         * This macro is defined for supported CAM-Lite 05354 device families.
         */
        #define CAM_HW_VERSION CAM_04434
#elif __has_include("cam_device_ea.h")
    #include "cam_device_ea.h"
#endif

/* MISRA C:2012 Rule 20.10 deviation:
 * Justification: The ## operator is required here to concatenate tokens
 * when generating device-specific symbol names (e.g., Foo_CAM_05346).
 * This usage is controlled, limited in scope, and necessary for supporting
 * multiple device variants in a single code base.
 */
/* cppcheck-suppress misra-c2012-20.10 */
/**
 * @def JOIN2
 * @brief Macro to concatenate two tokens.
 *
 * This macro is used to concatenate two tokens together.
 */
#define JOIN2(A,B) A##B

/**
 * @def JOIN
 * @brief Macro to concatenate two tokens using JOIN2.
 *
 * This macro is a wrapper for JOIN2 to facilitate token concatenation.
 */
#define JOIN(A,B) JOIN2(A,B)

#ifdef CAM_HW_VERSION
    /**
     * @def MPROTO
     * @brief Macro to create a device-specific function prototype.
     *
     * This macro generates a function prototype that is specific to the
     * currently defined hardware version.
     */
    #define MPROTO(x) JOIN(x, JOIN(_, CAM_HW_VERSION))
#else
    /**
     * @def MPROTO
     * @brief Macro to create a placeholder for unavailable implementations.
     *
     * This macro generates a function prototype indicating that the
     * implementation is not available for the selected device.
     */
    #define MPROTO(x) JOIN(x, JOIN(_, no_implementation_available))
    #error "This CAM library version does not support the selected device. Verify that the device has a CAM peripheral and you are using the latest CAM library release."
#endif
/** @endcond **/

#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif

#endif // CAM_DEVICE_H

/**
 End of File
*/
