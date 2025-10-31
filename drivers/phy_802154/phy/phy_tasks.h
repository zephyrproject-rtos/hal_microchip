/*******************************************************************************
  PHY Task Header

  File Name:
    phy_tasks.h

  Summary:
    This file contains PHY-RTOS task related functions

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
#ifndef PHY_TASKS_H
#define PHY_TASKS_H


// *****************************************************************************
// *****************************************************************************
// Section: Prototypes
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    void PHY_Tasks(void)

  Summary:
    RTOS task for the PHY Layer

  Description:
    This function inturn calls the PHY layer task handler upon reception of 
	Semaphore signal
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    None

  Returns:
    None

  Example:
    <code>
	xTaskCreate((TaskFunction_t) _PHY_Tasks,
                "PHY_Tasks",
                1024,
                NULL,
                1,
                &xPHY_Tasks);
				
	TaskHandle_t xPHY_Tasks;

	void _PHY_Tasks(  void *pvParameters  )
	{     
		while(1)
		{
			PHY_Tasks();
		}
	}
    
    </code>

  Remarks:
    None 
*/

void PHY_Tasks(void);

// *****************************************************************************
/*
  Function:
    void PHY_PostTask(bool isISRContext)

  Summary:
    This function is used to invoke the PHY RTOS task

  Description:
    This function is used to invoke the PHY RTOS task. This will be used 
	by the PHY layer for signaling the task done status
 
  Precondition:
    This function gets called from the PHY Library.

  Parameters:
    isISRContext true - Task is called from the ISR context false - otherwise

  Returns:
    None

  Example:
	None

  Remarks:
    None 
*/

void PHY_PostTask(bool isISRContext);


#endif /* PHY_TASKS_H */

/* EOF */
