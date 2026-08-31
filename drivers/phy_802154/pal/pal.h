/*******************************************************************************
  PAL Header

  File Name:
    pal.h

  Summary:
    This file contains Platform Abstraction Layer API function declarations

  Description:
    PAL Layer provides the interface to Timers, Interrupts and other platform 
    related resources. PHY layer is using PAL for its internal operations
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
#ifndef PAL_H
#define PAL_H

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
//#include "definitions.h"
#include <stdint.h>
#include <stdbool.h>

// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

void NVIC_INT_Enable( void );
bool NVIC_INT_Disable( void );
void NVIC_INT_Restore( bool state );

/*
 * Adds two time values
 */
#define ADD_TIME(a, b)                  ((a) + (b))

/*
 * Subtracts two time values
 */
#define SUB_TIME(a, b)                  ((a) - (b))

/* Wait for 65 ns. */
#define PAL_WAIT_65_NS()                {__NOP(); __NOP();}

/* Enables the global interrupt */
#define ENABLE_GLOBAL_IRQ()                  NVIC_INT_Enable();

/* Disables the global interrupt */
#define DISABLE_GLOBAL_IRQ()                 NVIC_INT_Disable();

/* This macro saves the global interrupt status */
#define ENTER_CRITICAL_REGION()              {bool flags = NVIC_INT_Disable();

/* This macro restores the global interrupt status */
#define LEAVE_CRITICAL_REGION()              NVIC_INT_Restore(flags); }

/* This macro defines the CPU clock frequency */
#define PAL_CPU_CLOCK_FREQUENCY               CPU_CLOCK_FREQUENCY   


// *****************************************************************************
// *****************************************************************************
// Section: Types
// *****************************************************************************
// *****************************************************************************
 /* PAL Timer Callback type
 
   Summary:
    Function Pointer holding application callback
 
   Description:
    None
	
   Remarks:
    None
 */
typedef void (*appCallback_t) (void *context);

// *****************************************************************************
 /* PAL Timer Timeout type
 
   Summary:
    Enum holding the types of timer timeout
 
   Description:
    None
	
   Remarks:
    None
 */
typedef enum timeout_type_tag {
	/** The timeout is relative to the current time. */
	TIMEOUT_RELATIVE,
	/** The timeout is an absolute value. */
	TIMEOUT_ABSOLUTE
}  TimeoutType_t;

// *****************************************************************************
 /* PAL Timer Callback type
 
   Summary:
    Enum holding the types of callback methods
 
   Description:
    Type of callbacks,
    CALLBACK_SINGLE   - Single Shot Timers - Callback called once the timer is
						expired
	CALLBACK_PERIODIC - Periodic Timer - Callback called continously on every timer expire 
						till the timer is stopped.
	
   Remarks:
    None
 */

typedef enum callback_type_tag {
	/** Single Shot timer. */
	CALLBACK_SINGLE,
	/** Periodic Timer. */
  CALLBACK_PERIODIC
}  CallbackType_t;

/*
 * PAL Timer Id type
 */
typedef uint8_t TimerId_t;

// *****************************************************************************
 /* PAL layer Return Status
 
   Summary:
    Enum holding the return status of PAL layer
 
   Description:
    
    PAL_SUCCESS       		- Success status for the request
	PAL_TMR_ALREADY_RUNNING - Received the request to start the timer, but the timer 
							is already running
	PAL_TMR_NOT_RUNNING 	- PAL Timer is not running now. It got expired
	PAL_TIMER_INVALID_ID 	- Timer ID given is not valid or out of range
	PAL_TIMER_INVALID_TIMEOUT - Timer=out given is not valid
	PAL_FAILURE 			- Failure status for the request
    PAL_PTA_DISABLED        - PAL PTA Disabled
	PAL_PTA_DEBUG_DISABLED  - PAL PTA Debug Info Disabled
	
   Remarks:
    None
 */
typedef enum pal_status_tag {
	PAL_SUCCESS                 = 0x00,
    PAL_TMR_ALREADY_RUNNING     = 0x10, /**< Timer is already running */
	PAL_TMR_NOT_RUNNING         = 0x11, /**< Timer is not running */
	PAL_TMR_INVALID_ID          = 0x12, /**< Invalid timer ID*/
	PAL_TMR_INVALID_TIMEOUT     = 0x13, /**< Requested Timeout is out of
	                                     * range or too short */
    PAL_FAILURE                 = 0x14,
    PAL_PTA_DISABLED		    = 0x15,
	PAL_PTA_DEBUG_DISABLED      = 0x16,
} PAL_Status_t;


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

#ifdef __cplusplus
extern "C" {
#endif

// *****************************************************************************
/*
  Function:
    PAL_Status_t PAL_Init(void)

  Summary:
    Initialization of PAL

  Description:
    This function initializes the timers array and initializes the PAL layer 
	variables

  Precondition:
    SYS_TIME_Initialize() should have been called before calling this function. 

  Parameters:
    None.

  Returns:
    PAL_SUCCESS - if PAL initialization is successful
    PAL_FAILURE - otherwise

  Example:
    <code>
    PAL_Status_t retVal = PAL_FAILURE;
 
    retVal = PAL_Init();
    if (PAL_SUCCESS =! retVal)
    {
        while(1);
    }
    </code>

  Remarks:
    This routine is called by the PHY layer during initialization. So, user can directly uses
	PAL APIs.
*/

PAL_Status_t PAL_Init(void);

// *****************************************************************************
/*
  Function:
	PAL_Status_t PAL_TimerGetId(TimerId_t *timer_id)

  Summary:
    Gets the Timer Id

  Description:
    Returns a timer id to be used before starting a timer

  Precondition:
   PAL_Init() should have been called before calling this function. 

  Parameters:
   timer_id - Value of the id returned by the function

  Returns:
    PAL_Status_t - PAL_SUCCESS - If timer Id is allocated successfully 
				   PAL_FAILURE - If there are no timer unused 

  Example:
    <code>
    TimerId_t appTimer;
	
	PAL_TimerGetId(&appTimer);
    </code>

  Remarks:
	None
*/

PAL_Status_t PAL_TimerGetId(TimerId_t *timerId);

// *****************************************************************************
/*
  Function:
    PAL_Status_t PAL_TimerStart(TimerId_t timerId,
		uint32_t timerCount,
		TimeoutType_t timeoutType,
		void * timerCb,
		void *paramCb, 
        CallbackType_t callbackType)

  Summary:
    Start regular timer

  Description:
    This function starts a regular timer and installs the corresponding
    callback function handle the timeout event

  Precondition:
    PAL_Init() should have been called before calling this function. 
	PAL_TimerGetId() routine should be called to get the timer Id before starting it

  Parameters:
    timerId 	- Timer identifier
    timerCount  - Timeout in microseconds
    timeoutType - TIMEOUT_RELATIVE or @ref TIMEOUT_ABSOLUTE
    timerCb 	- Callback handler invoked upon timer expiry
    paramCb     - Argument for the callback handler
    callbackType- CALLBACK_SINGLE or @ref CALLBACK_PERIODIC.

  Returns:
    PAL_TMR_INVALID_ID - if the timer identifier is undefined
    PAL_INVALID_PARAMETER - if the callback function for this timer
                         is NULL,
	PAL_TMR_ALREADY_RUNNING - if the timer is already running
	PAL_SUCCESS - if timer is started or
	PAL_TMR_INVALID_TIMEOUT -  if timeout is not within timeout

  Example:
    <code>
    PAL_Status_t retVal = PAL_FAILURE;
	TimerId_t appTimer;
	
	static void AppTimerCallback(void *paramCb)
	{
		
	}
	
	PAL_TimerGetId(&appTimer);
	
	if (PAL_SUCCESS == PAL_TimerStart(appTimer,
				5000,
				TIMEOUT_RELATIVE,
				(void *)AppTimerCallback,
				NULL, CALLBACK_SINGLE))
	{
		printf("Timer Started");
	}
		
    </code>

  Remarks:
	Starting PAL_Timer before getting the Id of timer will lead to unpredicted behaviour
*/

PAL_Status_t PAL_TimerStart(TimerId_t timerId,
		uint32_t timerCount,
		TimeoutType_t timeoutType,
		appCallback_t timerCb,
		void *paramCb, 
        CallbackType_t callbackType);

// *****************************************************************************
/*
  Function:
	PAL_Status_t PAL_TimerStop(TimerId_t timerId)

  Summary:
    Stops a running timer

  Description:
    This function stops a running timer with specified timer_id

  Precondition:
    Timer should have been started before using this function

  Parameters:
    timerId 	- Timer identifier

  Returns:
    PAL_TMR_INVALID_ID - if the timer identifier is undefined    
	PAL_SUCCESS - if timer is stopped successfully 

  Example:
    <code>
    PAL_Status_t retVal = PAL_FAILURE;
	TimerId_t appTimer;
	
	static void AppTimerCallback(void *paramCb)
	{
        LED_Off();
	}
	
	PAL_TimerGetId(&appTimer);
	
	if (PAL_SUCCESS == PAL_TimerStart(appTimer,
				5000,
				TIMEOUT_RELATIVE,
				(void *)AppTimerCallback,
				NULL, CALLBACK_SINGLE))
	{
		printf("Timer Started");
        LED_On();
	}
	
	if (PAL_SUCCESS == PAL_TimerStop(appTimer))
	{
		printf("Timer Stopped");
		LED_Toggle();
	}

    </code>

  Remarks:
	Timer should be started before stopping it
*/

PAL_Status_t PAL_TimerStop(TimerId_t timerId);

// *****************************************************************************
/*
  Function:
	uint32_t PAL_GetCurrentTime(void)

  Summary:
    Gets current time

  Description:
    This function returns the current time.

  Precondition:
    None

  Parameters:
    None

  Returns:
    None 

  Example:
    <code>
    uint32_t  currTime ;
	currTime = PAL_GetCurrentTimer();
    return currTime;
    </code>

  Remarks:
	None
*/

uint32_t PAL_GetCurrentTime(void);


// *****************************************************************************
/*
  Function:
	bool PAL_TimerIsRunning(TimerId_t timer_id)

  Summary:
    Gets the status of running timer

  Description:
    Checks if the timer of requested timer identifier is running

  Precondition:
    Timer should have been started before using this function

  Parameters:
   timer_id  - Timer identifier

  Returns:
    bool - true - If timer with requested timer id is running,
         - false otherwise.

  Example:
    <code>
     PAL_Status_t retVal = PAL_FAILURE;
	TimerId_t appTimer;
	bool IsTimerRunning = false;
	
	static void AppTimerCallback(void *paramCb)
	{
		LED_Toggle();
	}
	
	PAL_TimerGetId(&appTimer);
	
	if (PAL_SUCCESS == PAL_TimerStart(appTimer,
				5000,
				TIMEOUT_RELATIVE,
				(void *)AppTimerCallback,
				NULL, CALLBACK_SINGLE))
	{
		printf("Timer Started");
		LED_Toggle();
	}
	
	IsTimerRunning = PAL_TimerIsRunning(appTimer);
	
	if(IsTimerRunning)
	{
		printf("Timer is Running");
	}
	
    </code>

  Remarks:
	None
*/

bool PAL_TimerIsRunning(TimerId_t timerId);

// *****************************************************************************
/*
  Function:
	void PAL_TimerDelay(uint32_t delay)

  Summary:
    Routine to introduce blocking delay

  Description:
    This function is used to create the blocking delay in us

  Precondition:
    None

  Parameters:
   delay  - Blocking delay value in microseconds

  Returns:
    None
  Example:
    <code>  
	uint32_t delayUs = 5000;
	
	RGB_GREEN_LED_ON();
	PAL_TimerDelay(delayUs);
	RGB_GREEN_LED_OFF();	
    </code>

  Remarks:
	None
*/

void PAL_TimerDelay(uint32_t delay);

// *****************************************************************************
/*
  Function:
	static inline uint32_t pal_add_time_us(uint32_t a, uint32_t b)

  Summary:
    Routine to add two time values

  Description:
    Helper function to add two time values

  Precondition:
    None

  Parameters:
   a - Time 1 value
   b - Time 2 value

  Returns:
    return - Addition of a and b
	
  Example:
	None

  Remarks:
	None
*/

static inline uint32_t pal_add_time_us(uint32_t a, uint32_t b)
{
	return (ADD_TIME(a, b));
}

// *****************************************************************************
/*
  Function:
	static inline uint32_t pal_sub_time_us(uint32_t a, uint32_t b)

  Summary:
    Routine to substract two time values

  Description:
    Helper function to substract two time values

  Precondition:
    None

  Parameters:
   a - Time 1 value
   b - Time 2 value

  Returns:
    return - Difference between a and b
	
  Example:
	None

  Remarks:
	None
*/
static inline uint32_t pal_sub_time_us(uint32_t a, uint32_t b)
{
	return (SUB_TIME(a, b));
}

// *****************************************************************************
/*
 * \brief Enables the transceiver main interrupt
 *
 * This macro is only available for non-single chip transceivers, since
 * in single chip transceivers there is no separation between enabling
 * transceiver interrupts at the transceiver, and setting the IRQ mask
 * at the MCU. Therefore the transceiver interrupts in single chips are
 * enabled by setting the MCU IRQ mask.
 *
 */
#define pal_trx_irq_en()                NVIC_DisableIRQ((IRQn_Type)ZB_INT0_IRQn);\
                                        NVIC_SetPriority((IRQn_Type) ZB_INT0_IRQn, 1);\
                                        NVIC_ClearPendingIRQ((IRQn_Type) ZB_INT0_IRQn);\
                                        NVIC_EnableIRQ((IRQn_Type) ZB_INT0_IRQn);

// *****************************************************************************
/*
 * \brief Disables the transceiver main interrupt
 *
 * This macro is only available for non-single chip transceivers, since
 * in single chip transceivers there is no separation between disabling
 * transceiver interrupts at the transceiver, and clearing the IRQ mask
 * at the MCU. Therefore the transceiver interrupts in single chips are
 * disabled by clearing the MCU IRQ mask.
 *
 */
#define pal_trx_irq_dis()               NVIC_DisableIRQ((IRQn_Type) ZB_INT0_IRQn);

// *****************************************************************************

/*
  Function:
    PAL_Status_t PAL_GetRandomNumber(uint8_t *rnOutput, uint16_t rnLength)

  Summary:
    Random number generation

  Description:
    This function is used to generate random number

  Precondition:
    None

  Parameters:
    rnOutput - random number
    rnLength - size of random number

  Returns:
    None
  Example:
    <code>  
    uint64_t randomNumber;    
    if (PAL_SUCCESS != PAL_GetRandomNumber((uint8_t*)&randomNumber, sizeof(randomNumber))) {
        return PAL_FAILURE;
    }    
    PHY_PibSet(macIeeeAddress,(PibValue_t *) &randomNumber);
    </code>

  Remarks:
    None
*/

PAL_Status_t PAL_GetRandomNumber(uint8_t *rnOutput, uint16_t rnLength);

// *****************************************************************************

/*
  Function:
    PAL_Status_t PAL_GetTrxAntennaGain(int8_t *antGain)

  Summary:
    Gets the Antenna gain from the information block of device support library

  Description:
    This function is used to get the antenna gain either from the information 
    block of device support library or the user specified custom antenna gain 
  
  Precondition:
    None

  Parameters:
    antGain - Pointer holding the module's antenna gain value

  Returns:
    None
 
  Example:
    <code>  
    int8_t antGain = INT8_MAX;
    
    PAL_GetTrxAntennaGain(&antGain);
    printf ("Antenna Gain of the module - %i", antGain);
    </code>

  Remarks:
    If customer provides the antenna gain of the module, this function returns CUSTOM_ANT_GAIN value
    or it will read from the information block of device support library if valid. 
    Otherwise, DEFAULT_ANT_GAIN value is returned.
*/
PAL_Status_t PAL_GetTrxAntennaGain(int8_t *antGain);

/*
  Function:
    int8_t PAL_GetTrxTransmitPowerMax(void)

  Summary:
    Gets the transceiver's maximum transmit power in dBm

  Description:
    This function returns the maximum transmit power that can be set in the Transceiver
    as per Regulatory region selected in Device support 
    library. User cannot set the Tx power beyond this value. 
  
  Precondition:
    None

  Parameters:
    Output - Integer value holding the maximum transmit power of the transceiver 
    that can be set by higher layer.

  Returns:
    None
 
  Example:
    <code>  
    int8_t txpwrMax = INT8_MAX;
    
    txpwrMax = PAL_GetTrxTransmitPowerMax();
    printf ("Maximum Tx Pwr Value - %i", txpwrMax);
    </code>

  Remarks:
    Transmit Power Max value as per Regulatory region
*/
int8_t PAL_GetTrxTransmitPowerMax(void);

/*
  Function:
    bool PAL_GetDeviceType(void)

  Summary:
    Gets device type

  Description:
    This function gets device type
  
  Precondition:
    None

  Parameters:
    None

  Returns:
    None
 
  Example:
    <code>  
    bool isHpaEnabled = false;
    isHpaEnabled = PAL_GetDeviceType();
    return isHpaEnabled;
    </code>

  Remarks:
    None
*/

bool PAL_GetDeviceType(void);

/*
  Function:
    void PAL_HpaSetCps(bool bypass)

  Summary:
    Sets CPS pin bit for WBZ451 HPA device

  Description:
    This function sets CPS bit as per WBZ451 HPA device tx power table
  
  Precondition:
    None

  Parameters:
    bypass - Boolean value if true - set CPS bit, false- clear CPS bit.

  Returns:
    None
 
  Example:
    <code>  
    bool isHpaEnabled = false;
    isHpaEnabled = PAL_GetDeviceType();
    int8_t txPowerDbm = -5;
    if(isHpaEnabled){
        if(txPowerDbm < -3)
        {
          PAL_HpaSetCps(true);
        }
        else
        {
          PAL_HpaSetCps(false);
        }
    }
    else{
      PAL_HpaSetCps(false);
    } 
    </code>
  Remarks:
    None
*/

void PAL_HpaSetCps(bool bypass);


bool PAL_GetWLANActivePinState(void);

/* ! @} */
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  /* PAL_H */
/* EOF */
