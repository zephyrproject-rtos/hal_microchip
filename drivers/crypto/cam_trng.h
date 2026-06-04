/**************************************************************************
  Crypto Framework Library Source

  Company:
    Microchip Technology Inc.

  File Name:
    cam_trng.h

  Summary:
    Crypto Framework Library interface file for CAM TRNG.

  Description:
    This header file contains the interface that make up the CAM True Random Number Generation (TRNG) hardware 
    driver for the Microchip microcontrollers equipped with a Crypto Accelerator Module.
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
 * @file cam_trng.h
 * @defgroup  trng TRNG
 * 
 * @brief This header file contains the interface that make up the CAM True Random Number Generation (TRNG) hardware 
 *  driver for the Microchip microcontrollers equipped with a Crypto Accelerator Module.
 *
 */
#ifndef CAM_TRNG_H
#define	CAM_TRNG_H

#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "cam_version.h"
#include "cam_device.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

/**
 * @ingroup trng
 * @enum TRNG_ERROR
 * @brief This enumeration represents the possible error codes for the TRNG operations.
 * 
 */
typedef enum TRNG_ERROR
{
    TRNG_NO_ERROR = 0,               /**< No error occurred  */
    TRNG_FAILED_TO_GENERATE = 1,     /**< Failed to generate random numbers  */
    TRNG_INVALID_OPERATION = 3,       /**< Invalid operation attempted  */
    TRNG_KEY_SETUP = 4,               /**< Error during key setup  */
    TRNG_EXEC_FIFO = 5,               /**< FIFO execution error  */
    TRNG_EXEC_STARTUP = 6,            /**< Start-up execution error  */
    TRNG_EXEC_PROP = 7,               /**< Property execution error  */
    TRNG_EXEC_REP = 8,                /**< Repetition execution error  */
    TRNG_EXEC_FAIL                     /**< General execution failure  */
} TRNG_ERROR;

// *****************************************************************************
// *****************************************************************************
// Section: CAM TRNG Function Definitions 
// *****************************************************************************
// *****************************************************************************

/**
 * @ingroup trng
 * 
 * This function is called when one of the TRNG error bits is set. It resets
 * the built-in error bits to allow for the detection of future errors.
 * 
 * @return None.
 */
void DRV_CRYPTO_TRNG_IsrHelper(void);

/**
 * @ingroup trng
 * 
 * This function performs a read of the FIFO to obtain the key and stores it
 * for use in generating TRNG values.
 * 
 * @retval TRNG_NO_ERROR           Successful completion.
 * @retval TRNG_KEY_SETUP          Error during key setup.
 */
TRNG_ERROR DRV_CRYPTO_TRNG_Setup(void);

/**
 * @ingroup trng
 * 
 * This function reads the specified number of 4-bit words from the TRNG and
 * stores them in the provided buffer. It enables the random number generation
 * and waits for the FIFO to fill with the data. If the FIFO is full, it reads the
 * data and splits it into 8-bit values to store in the output buffer.
 * 
 * @param data Buffer to store the TRNG data. The buffer size should be at least
 *             size * 4 bits to accommodate the generated random numbers.
 * @param size Number of 4-bit words to read and store.
 * 
 * @retval TRNG_NO_ERROR           Success.
 * @retval TRNG_FAILED_TO_GENERATE Failed to generate random data.
 * @retval TRNG_EXEC_FIFO          FIFO execution error.
 * @retval TRNG_EXEC_STARTUP       Start-up execution error.
 * @retval TRNG_EXEC_PROP          Propagation test error.
 * @retval TRNG_EXEC_REP           Repetition test error.
 * 
 * @note The function will time-out if the requested random numbers
 *       cannot be generated within the specified time-out period. If the time-out
 *       occurs, the function will return an error indicating that the generation
 *       failed. After reading, the TRNG module is reset to ensure that it is ready
 *       for the next operation.
 */


TRNG_ERROR DRV_CRYPTO_TRNG_ReadData(uint8_t* data, uint32_t size) ;

// *****************************************************************************
// *****************************************************************************
// Section: TRNG CAM Device Support
// *****************************************************************************
// *****************************************************************************

/** @cond INTERNAL */
/**
 * @ingroup trng
 * @brief Function prototype for the TRNG ISR helper.
 *
 * This function is specific to the currently defined hardware version for handling
 * TRNG interrupt states.
 */
void MPROTO(DRV_CRYPTO_TRNG_IsrHelper)(void);

/**
 * @ingroup trng
 * @def DRV_CRYPTO_TRNG_IsrHelper
 * @brief Macro alias for the device-specific TRNG ISR helper.
 *
 * This macro generates a function prototype specific to the currently defined
 * hardware version for the TRNG interrupt service routine.
 */
#define DRV_CRYPTO_TRNG_IsrHelper MPROTO(DRV_CRYPTO_TRNG_IsrHelper)

/**
 * @ingroup trng
 * @brief Function prototype for TRNG initialization.
 *
 * This function is specific to the currently defined hardware version for setting
 * up the TRNG.
 */
TRNG_ERROR MPROTO(DRV_CRYPTO_TRNG_Setup)(void);

/**
 * @ingroup trng
 * @def DRV_CRYPTO_TRNG_Setup
 * @brief Macro alias for the device-specific TRNG setup function.
 *
 * This macro generates a function prototype specific to the currently defined
 * hardware version for initializing the TRNG hardware.
 */
#define DRV_CRYPTO_TRNG_Setup MPROTO(DRV_CRYPTO_TRNG_Setup)

/**
 * @ingroup trng
 * @brief Function prototype for reading random data from the TRNG.
 *
 * This function is specific to the currently defined hardware version for retrieving
 * random data from the TRNG hardware.
 */
TRNG_ERROR MPROTO(DRV_CRYPTO_TRNG_ReadData)(uint8_t* data, uint32_t size);

/**
 * @ingroup trng
 * @def DRV_CRYPTO_TRNG_ReadData
 * @brief Macro alias for the device-specific TRNG read function.
 *
 * This macro generates a function prototype specific to the currently defined
 * hardware version for reading random data from the TRNG.
 */
#define DRV_CRYPTO_TRNG_ReadData MPROTO(DRV_CRYPTO_TRNG_ReadData)
/** @endcond */

#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif

#endif	/* CAM_TRNG_H */
