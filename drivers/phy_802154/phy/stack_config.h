/*******************************************************************************
  PHY Config Header

  File Name:
    stack_config.h

  Summary:
    This file contains PHY configuration definitions

  Description:
    None
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
 * Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software
 * and any derivatives exclusively with Microchip products. It is your
 * responsibility to comply with third party license terms applicable to your
 * use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
 * ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

/* Prevent double inclusion */
#ifndef STACK_CONFIG_H
#define STACK_CONFIG_H


//#include "phy.h"

// ****************************************************************************
// ****************************************************************************
// Section: Macros
// ****************************************************************************
// ****************************************************************************
// *****************************************************************************
/* LARGE_BUFFER_SIZE
 
   Summary:
    This macro hold the Large buffer size value used in PHY library
   Description:
    The following macros hold the size of a large buffer.
    Additional octets for the length of the frame, the LQI
    and the ED value are required.
    Size of PHY_FrameInfo_t + max number of payload octets +
    1 octet LQI  + 1 octet ED value + 1 octet Length field.
   Remarks:
    None 
 */

#ifndef LARGE_BUFFER_SIZE
#define LARGE_BUFFER_SIZE                   ((((sizeof(PHY_FrameInfo_t)) + \
	aMaxPHYPacketSize + \
	LENGTH_FIELD_LEN + LQI_LEN + ED_VAL_LEN) / 4U + 1U) * 4U)
#endif

// *****************************************************************************
/* SMALL_BUFFER_SIZE
 
   Summary:
    This macro hold the small buffer size value 
   Description:
    The following macros hold the size of a small buffer.
    Additional octets for the length of the frame, the LQI
    and the ED value are required.
    Size of PHY_FrameInfo_t + max number of mac management frame len +
    1 octet LQI  + 1 octet ED value + 1 octet Length field.
   Remarks:
    None 
 */

#ifndef SMALL_BUFFER_SIZE
#define SMALL_BUFFER_SIZE                   (((sizeof(PHY_FrameInfo_t) + \
	MAX_MGMT_FRAME_LENGTH +	\
	LENGTH_FIELD_LEN + LQI_LEN + ED_VAL_LEN) / 4U + 1U) * 4U) 
#endif

// ****************************************************************************
/* Number of Large Buffers Used By PHY Layer
 
   Summary:
        Number of Large buffer used by the PHY Layer 
   Description:
        PHY Layer uses the Large buffer allocated by the BMM layer. This Macro 
        defines the number of LARGE BUFEER that can be used by the PHY Layer.
   Remarks:
        None 
 */

#define NUMBER_OF_LARGE_PHY_BUFS          (3U)

// ****************************************************************************
/* Number of Small Buffers Used By PHY Layer
 
    Summary:
        Number of Small buffer used by the PHY Layer 
    Description:
        PHY Layer uses the Large buffer allocated by the BMM layer. This Macro defines
        the number of SMALL BUFEER that can be used by the PHY Layer.
    Remarks:
        None 
 */

#define NUMBER_OF_SMALL_PHY_BUFS          (0U)

#endif 
