/*******************************************************************************
  PAL Header

  File Name:
    pal_pta_interface.h

  Summary:
    This file contains Platform Abstraction Layer API function declarations

  Description:
    PAL Layer provides the interface to Timers, Interrupts and other platform 
    related resources. PHY layer is using PAL for its internal operations
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2025 Microchip Technology Inc. and its subsidiaries.
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
#ifndef PAL_PTA_INTERFACE_H
#define PAL_PTA_INTERFACE_H

/*
 * This module acts as a wrapper layer between the Wireless stack and the Harmony
 * drivers and peripherals
 * All hardware level access to the Harmony drivers from the stack happens through
 * this module 
 */
// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************
#include "pal.h"

// *****************************************************************************
// *****************************************************************************
// Section: Types
// *****************************************************************************
// *****************************************************************************
#ifdef CONFIG_PHY_PTA_FEATURE_ENABLE
 typedef enum phy_trnsc_type
{
    TX_WO_PRIO = 0,
    TX_WI_PRIO,
    RX_WO_PRIO,
    RX_WI_PRIO,
    ED_WO_PRIO,
    ED_WI_PRIO
}PHY_TRNSC_TYPE_T;

#endif
// *****************************************************************************
// *****************************************************************************
// Section: Externals
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Function Prototypes
// *****************************************************************************
// *****************************************************************************
#ifdef CONFIG_PHY_PTA_FEATURE_ENABLE
typedef bool(*ptaIrqHandler)(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifdef CONFIG_PHY_PTA_FEATURE_ENABLE
// *****************************************************************************
    /*
  Function:
    void PAL_PTA_InitInterface(void)

  Summary:
     Initializes the PTA Interfaces 

  Description:
    This function initializes the PTA Interfaces and registers the Callback.

  Precondition:
    None

  Parameters:
   None

  Returns:
    None

  Example:
    <code>
     PAL_PTA_InitInterface();
    </code>

  Remarks:
    None
*/

void PAL_PTA_InitInterface(void);
// *****************************************************************************
/*
  Function:
    uint8_t PAL_PTA_TxReqSet(uint8_t setPrio)

  Summary:
    Asserts the PTA Request and Priority line for TX Operation  

  Description:
    This function asserts the PTA Request and Priority Signal for TX Operation. 

  Precondition:
    PAL_PTA_InitInterface() should have been called before calling this function.

  Parameters:
    uint8_t - true  - If Prioirty signal should be asserted
              false - If Prioirty signal should not be asserted

  Returns:
    uint8_t - true - if PAL initialization is successful
              false - otherwise

  Example:
    <code>
    PAL_PTA_InitInterface();
    uint8_t status;
    status = PAL_PTA_TxReqSet(true);
    if(status == true)
    {
      //required logic
    }
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support. 
*/
uint8_t PAL_PTA_TxReqSet(uint8_t setPrio);
// *****************************************************************************
/*
  Function:
    PAL_Status_t PAL_PTA_RxReqSet(uint8_t setPrio)

  Summary:
    Asserts the PTA Request and Priority line for RX Operation  

  Description:
    This function asserts the PTA Request and Priority Signal for RX Operation. 

  Precondition:
    PAL_PTA_InitInterface() should have been called before calling this function.

  Parameters:
    uint8_t - true  - If Prioirty signal should be asserted
           false - If Prioirty signal should not be asserted

  Returns:
    uint8_t - true - if PAL initialization is successful
              false - otherwise

  Example:
    <code>
    PAL_PTA_InitInterface();
    uint8_t status;
    status = PAL_PTA_RxReqSet(true);
    if(status == true)
    {
      //required logic
    }
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support. 
*/
uint8_t PAL_PTA_RxReqSet(uint8_t setPrio);
// *****************************************************************************
/*
  Function:
    uint8_t PAL_PTA_EdReqSet(uint8_t setPrio)

  Summary:
    Asserts the PTA Request and Priority line for ED Operation  

  Description:
    This function asserts the PTA Request and Priority Signal for ED Operation. 

  Precondition:
    PAL_PTA_InitInterface() should have been called before calling this function.

  Parameters:
    uint8_t - true  - If Prioirty signal should be asserted
              false - If Prioirty signal should not be asserted

  Returns:
    uint8_t - true  - if PAL initialization is successful
              false - otherwise

  Example:
    <code>
    PAL_PTA_InitInterface();
    uint8_t status;
    status = PAL_PTA_EdReqSet(true);
    if(status == true)
    {
      //required logic
    }
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support. 
*/
uint8_t PAL_PTA_EdReqSet(uint8_t setPrio);
#endif
// *****************************************************************************
/*
  Function:
    void PAL_PTA_ReqClear(void)

  Summary:
    Deasserts the PTA Req

  Description:
    This function deasserts the PTA Request and Priority Signal. 

  Precondition:
    None

  Parameters:
    None

  Returns:
    None

  Example:
    <code>
    PAL_PTA_ReqClear();
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support. 
*/

void PAL_PTA_ReqClear(void);

// *****************************************************************************
/*
  Function:
    void PAL_PTA_ClearRegisterIrq(void)

  Summary:
    De-registers the PTA Abort Irq callback

  Description:
    This function De-registers the PTA Abort Irq callback. 

  Precondition:
    None

  Parameters:
    None

  Returns:
    None

  Example:
    <code>
    PAL_PTA_ClearRegisterIrq();
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support. 
*/
void PAL_PTA_ClearRegisterIrq(void);

// *****************************************************************************
/*
  Function:
    uint8_t PAL_PTA_GetWlanStatus(void)

  Summary:
    Gets the WLAN Active Signal Status

  Description:
    This function returns the WLAN Active Signal Status.

  Precondition:
    None

  Parameters:
    None

  Returns:
    uint8_t - true  - If Signal is Active high.
            - false - If Signal is Active low.

  Example:
    <code>
    uint8_t wlanStatus;
    wlanStatus = PAL_PTA_GetWlanStatus();
    if(wlanStatus)
    {
      // Do required  
    }
    </code>

  Remarks:
    This routine will be called from the PHY Library for CoEx support.
*/

uint8_t PAL_PTA_GetWlanStatus(void);

// *****************************************************************************



/* ! @} */
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  /* PAL_H */
/* EOF */
