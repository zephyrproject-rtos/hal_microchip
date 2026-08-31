/*******************************************************************************
  PAL Source

  File Name:
    pal.c

  Summary:
    Performs interface functionalities between the PHY layer and Harmony
    drivers

  Description:
 *  None
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

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "pal.h"
#include "bmm.h"
#include "phy.h"

#include "info_block.h"

#include <zephyr/kernel.h>
#include <zephyr/random/random.h>
#include <zephyr/logging/log.h>
#include <zephyr/sys/time_units.h>

LOG_MODULE_REGISTER(mchp_154_phy_pal, LOG_LEVEL_DBG);

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Types                                                   */
/* ************************************************************************** */
/* ************************************************************************** */



/* Structure holding the PAL Timer details*/
typedef struct pal_timers_tag
{
    /* Timer Handle*/
    struct k_timer timer;
    /* Timer ID */
    TimerId_t timerId;
    /* Callback handler invoked upon timer expiry*/
    appCallback_t appCallback;
    /* Argument for the callback handler*/
    void *param_cb;
    /* Status of timer start*/
    bool isTimerStarted;
}PAL_Timers_t;

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Macros                                                  */
/* ************************************************************************** */
/* ************************************************************************** */
#define CONFIG_PHY_TX_PWR_MAX                       11
/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Prototypes                                                   */
/* ************************************************************************** */
/* ************************************************************************** */
/* Helper function to find the timer is started or not*/
//static bool palTimerIsStarted(TimerId_t timerId);

#define MAX_TMRS                10

/* Variable holding number of PAL Timers*/
static uint8_t numOfTimers = 0;

/* PAL Timer Callback Handler through which app/stack timer 
 * callbacks will be called*/
static void palTimerCallback(struct k_timer *timerId);

/* Max number of software timers*/
static uint8_t numMaxTimers = (uint8_t)MAX_TMRS;

/* PAL timer array holding timer details*/
static PAL_Timers_t palTimers[MAX_TMRS];

/* 
 * Function to initialize the PAL Timer array
 */
static PAL_Status_t PAL_TimerInit(void);

static unsigned int key;

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Function Implementation                                                   */
/* ************************************************************************** */
/* ************************************************************************** */
/**
 * @brief Initialization of PAL
 *
 * This function initializes the PAL. .
 *
 * @return PAL_SUCCESS  if PAL initialization is successful, PAL_FAILURE otherwise
 */
PAL_Status_t PAL_Init(void)
{
    PAL_Status_t status = PAL_SUCCESS;   
    status = PAL_TimerInit();  
   
    return status;
}

/**
 * @brief Initialization of PAL Timer array
 *
 * This function initializes the PAL Timer array. .
 *
 * @return PAL_SUCCESS  if PAL initialization is successful, PAL_FAILURE otherwise
 */
static PAL_Status_t PAL_TimerInit(void)
{
    PAL_Status_t status = PAL_SUCCESS;
    numOfTimers = 0;
	/* Variable holding the status of Timer initialization*/
	static bool palTimerInitialized = false;
    
    for (uint8_t i = 0; i < numMaxTimers; i++)
    {
        palTimers[i].isTimerStarted = false;
        palTimers[i].timerId = i;
        
        if(!palTimerInitialized)
        {
            k_timer_init(&(palTimers[i].timer), palTimerCallback, NULL);
        }
        palTimers[i].timer.user_data = &(palTimers[i].timerId);
    }
    
    palTimerInitialized = true;
    return status;
}

/**
 * @brief Start regular timer
 *
 * This function starts a regular timer and installs the corresponding
 * callback function handle the timeout event.
 *
 * @param timer_id Timer identifier
 * @param timer_count Timeout in microseconds
 * @param timeout_type @ref TIMEOUT_RELATIVE or @ref TIMEOUT_ABSOLUTE
 * @param timer_cb Callback handler invoked upon timer expiry
 * @param param_cb Argument for the callback handler
 * @param callback_type @ref CALLBACK_SINGLE or @ref CALLBACK_PERIODIC
 *
 * @return
 *          - @ref PAL_TMR_INVALID_ID  if the timer identifier is undefined,
 *          - @ref PAL_INVALID_PARAMETER if the callback function for this timer
 *                 is NULL,
 *          - @ref PAL_TMR_ALREADY_RUNNING if the timer is already running.
 *          - @ref PAL_SUCCESS if timer is started or
 *          - @ref PAL_TMR_INVALID_TIMEOUT if timeout is not within timeout
 * range.
 */
PAL_Status_t PAL_TimerStart(TimerId_t timerId,
		uint32_t timerCount,
		TimeoutType_t timeoutType,
		appCallback_t timerCb,
		void *paramCb, CallbackType_t callbackType)
{

    if(numMaxTimers < timerId)
        return PAL_FAILURE;
    
    if(CALLBACK_SINGLE == callbackType)
    {
        k_timer_start(&(palTimers[timerId].timer), K_USEC(timerCount), K_NO_WAIT);
    }
    else if(CALLBACK_PERIODIC == callbackType)
    {
        k_timer_start(&(palTimers[timerId].timer), K_USEC(timerCount), K_USEC(timerCount));
    }
    palTimers[timerId].isTimerStarted = true;
    palTimers[timerId].appCallback = timerCb;
    palTimers[timerId].param_cb = paramCb;

	return PAL_SUCCESS;
    
}

/**
 * @brief Stops a running timer
 *
 * This function stops a running timer with specified timer_id
 *
 * @param timer_id Timer identifier
 *
 * @return
 *          - @ref PAL_SUCCESS if timer stopped successfully,
 *          - @ref PAL_TMR_INVALID_ID if the specifed timer id is undefined.
 */
PAL_Status_t PAL_TimerStop(TimerId_t timerId)
{
	PAL_Status_t status = PAL_SUCCESS;
    
    if(numMaxTimers < timerId)
        status = PAL_FAILURE;
    
    k_timer_stop(&(palTimers[timerId].timer));

    palTimers[timerId].isTimerStarted = false;
    palTimers[timerId].appCallback = NULL;
    palTimers[timerId].param_cb = NULL;

	return status;
}

/**
 * @brief Returns a timer id to be used before starting a timer
 * @param timer_id Value of the id returned by the function
 */
PAL_Status_t PAL_TimerGetId(TimerId_t *timerId)
{
	PAL_Status_t status = PAL_FAILURE;

    for (uint8_t i = 0; i < numMaxTimers; i++)
    {
        if(palTimers[i].isTimerStarted == false)
        {
           *timerId = i;
           status = PAL_SUCCESS;
           break;
        }

    }
	return status;
}

/**
 * @brief Checks if the timer of requested timer identifier is running
 *
 * This function checks if the timer of requested timer identifier is running.
 *
 * @param timer_id Timer identifier
 *
 * @return
 * - true if timer with requested timer id is running,
 * - false otherwise.
 */
bool PAL_TimerIsRunning(TimerId_t timerId)
{
    bool status = false;
    /* check timer status */
    if (k_timer_status_get(&palTimers[timerId].timer) > 0) {
        status = false;
        /* timer has expired */
    } else if (k_timer_remaining_get(&palTimers[timerId].timer) == 0) {
        /* timer was stopped (by someone else) before expiring */
        status = false;
    } else {
        /* timer is still running */
        status = true;
    }        
    return status;
}

/**
 * @brief Generates blocking delay
 *
 * This functions generates a blocking delay of specified time.
 *
 * @param delay in microseconds
 */
void PAL_TimerDelay(uint32_t delay)    
{ 
    k_busy_wait(delay);
    return;                                   
}

/**
 * @brief Gets current time
 *
 * This function returns the current time.
 *
 * @param[out] current_time Returns current system time
 */
uint32_t PAL_GetCurrentTime(void)
{
    return k_ticks_to_us_floor32(k_uptime_ticks());
}

/* 
 * @brief Helper function to find the timer is started or not
 * @param timer_id Identifier of the timer which is being started/not
 */
/*static bool palTimerIsStarted(TimerId_t timerId)
{
    if(numMaxTimers < timerId)
    {
        return false;
    }
	return palTimers[timerId].isTimerStarted;
}*/

/* 
 * @brief PAL Timer Callback Handler through which app/stack timer 
 *        callbacks will be called
 * @param param_cb - Callback parameter holding the timer_id of expired timer
 */
static void palTimerCallback(struct k_timer *timer)
{
    uint8_t timerId = *(uint8_t *)(timer->user_data);
    if((MAX_TMRS < timerId))
        return;
    if((NULL == palTimers[timerId].appCallback))
        return;
        
    palTimers[timerId].appCallback(palTimers[timerId].param_cb);
    return;
}

/**
 * @brief Gets Random number
 * @param[rnOutput] random number @param[rnLength] size of Random number
 */

PAL_Status_t PAL_GetRandomNumber(uint8_t *rnOutput, uint16_t rnLength)
{
	if ((rnOutput == NULL) || (rnLength == 0)) {
		return PAL_FAILURE;
	}
#if (CONFIG_TEST_RANDOM_GENERATOR == 1)
    sys_rand_get(rnOutput, rnLength);
#else
    int err;
	err = sys_csrand_get(rnOutput, rnLength);
	if (err != 0) {
		LOG_ERR("Failed to obtain entropy, err %d", err);
		return PAL_FAILURE;
	}    
#endif    

    return PAL_SUCCESS;
}

/**
 * @brief Gets the Antenna gain from the information block of device support library
 * @param[antGain] - Pointer holding the module's antenna gain value
 */
PAL_Status_t PAL_GetTrxAntennaGain(int8_t *antGain)
{
    bool valid = false;
    int8_t antennaGain = INT8_MAX;
    
#ifndef CONFIG_CUSTOM_ANT_GAIN   
    valid = IB_GetAntennaGain(&antennaGain);
   
    if(valid)
    {
        //If infoBlock having valid antennaGain value
        *antGain = antennaGain;
    }
    else
    {
        //If InfoBlock is not having valid antennaGain value, 
        //return default gain of WBZ45x
        *antGain = CONFIG_DEFAULT_ANT_GAIN;
    }
#else
    *antGain = CUSTOM_ANT_GAIN;
    
#endif
    
    return PAL_SUCCESS;    
}

/**
 * @brief Gets the Transceiver's maximum transmit power
 * @param[out] Integer value returning maximum tx power value that can be 
 *             set by higher  layer in dBm
 */
int8_t PAL_GetTrxTransmitPowerMax(void)
{
    int8_t txPwrMax = INT8_MAX;
    
    txPwrMax = CONFIG_PHY_TX_PWR_MAX;
    
    return txPwrMax;
}


void NVIC_INT_Enable( void )
{
    NVIC_INT_Restore(true);
}

bool NVIC_INT_Disable( void )
{
	if (!k_is_in_isr()) {
		key = irq_lock();
	}

    return true;
}

void NVIC_INT_Restore( bool state )
{
	/* exit critical section */
	if (!k_is_in_isr()) {
		irq_unlock(key);
	}    
    state = state;
}

/**
 * @brief Gets device type
  * @param[out] retrun boolean value for device type
 */

bool PAL_GetDeviceType(void)
{
    #ifdef CONFIG_BOARD_WBZ451HPE_CURIOSITY
    bool isHpaEnabled = true;
    #else
    bool isHpaEnabled = false;
    #endif
    return isHpaEnabled;

}

/**
 * @brief Sets CPS pin for WBZ451 HPA device
 * @param[bypass] holding CPS need to set or not
 */

void PAL_HpaSetCps(bool bypass)
{
    #ifdef CONFIG_BOARD_WBZ451HPE_CURIOSITY
    if(bypass)
    {
        GPIOB_REGS->GPIO_LATSET |= (1U<<1U);
    }
    else
    {
        GPIOB_REGS->GPIO_LATCLR |= (1U<<1U);
    }
    #else
    (void)bypass;
    #endif
}