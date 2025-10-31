/*******************************************************************************
  BMM Source

  File Name:
    bmm.c

  Summary:
    This file contains the Buffer Management Module implementations.

  Description:
    Buffer Management (large and small buffers): provides services for 
    dynamically allocating and freeing memory buffers.
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

/* === Includes ============================================================ */
#define LOG_MODULE_NAME phy_bmm
#define LOG_LEVEL CONFIG_IEEE802154_DRIVER_LOG_LEVEL
 
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(LOG_MODULE_NAME);


#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ieee_phy_const.h"
#include "stack_config.h"
#include "app_config.h"
#include "bmm.h"
#include "qmm.h"
#include "phy.h"
#include <zephyr/kernel.h>


#if (TOTAL_NUMBER_OF_BUFS > 0)

/*
 * Check if the buffer configuration does not exceed the queue limits.
 * Note: The queue's size parameter is a 8bit value.
 */
#if (TOTAL_NUMBER_OF_BUFS > 255)
#error "Number of buffer exceeds its limit"
#endif

/* === Types =============================================================== */

/* === Macros ============================================================== */

#if (TOTAL_NUMBER_OF_SMALL_BUFS > 0)

/**
 * Checks whether the buffer pointer provided is of small buffer or of a large
 * buffer
 */
#define IS_SMALL_BUF(p) ((p)->body >= (buf_pool + \
	LARGE_BUFFER_SIZE * TOTAL_NUMBER_OF_LARGE_BUFS))
#endif

/* === Globals ============================================================= */


// #define TOTAL_NUMBER_OF_BUFS  (TOTAL_NUMBER_OF_LARGE_BUFS)

#define PHY_HEAP_SIZE   ((TOTAL_NUMBER_OF_LARGE_BUFS*LARGE_BUFFER_SIZE) + \
						(TOTAL_NUMBER_OF_LARGE_BUFS * sizeof(buffer_t)) + \
						(TOTAL_NUMBER_OF_LARGE_BUFS * sizeof(qmm_fifo_t)))

// K_HEAP_DEFINE(bmm_heap, TOTAL_NUMBER_OF_BUFS*LARGE_BUFFER_SIZE);
struct k_heap phy_heap;

static uint8_t phy_heap_pool[PHY_HEAP_SIZE];


/* === Prototypes ========================================================== */

/* === Implementation ====================================================== */

/**
 * @brief Initializes the buffer module.
 *
 * This function initializes the buffer module.
 * This function should be called before using any other functionality
 * of buffer module.
 */
void bmm_buffer_init(void)
{

	k_heap_init(&phy_heap, &phy_heap_pool,
		PHY_HEAP_SIZE);

}

/**
 * @brief Allocates a buffer
 *
 * This function allocates a buffer and returns a pointer to the buffer.
 * The same pointer should be used while freeing the buffer.User should
 * call BMM_BUFFER_POINTER(buf) to get the pointer to buffer user area.
 *
 * @param size size of buffer to be allocated.
 *
 * @return pointer to the buffer allocated,
 *  NULL if buffer not available.
 */
#if defined(CONFIG_ENABLE_LARGE_BUFFER)
buffer_t* bmm_buffer_alloc(uint16_t size)
#else
buffer_t* bmm_buffer_alloc(uint8_t size)
#endif
{
	buffer_t * buf = NULL;
	buf = (buffer_t*)k_heap_alloc(&phy_heap, size + sizeof(buffer_t), K_NO_WAIT);
	buf->body = (uint8_t*)(((uint8_t*)buf) + sizeof(buffer_t));
	LOG_DBG("Bmm bmm_alloc_buff:%p-%p %d %d\n",(void*)buf,(void*)buf->body,sizeof(buffer_t),size);
	LOG_DBG("Bmm_buf_body:%p\n",(void*)(((uint8_t*)buf) + sizeof(buffer_t)));
	return buf;

}

/**
 * @brief Frees up a buffer.
 *
 * This function frees up a buffer. The pointer passed to this function
 * should be the pointer returned during buffer allocation. The result
 * is
 * unpredictable if an incorrect pointer is passed.
 *
 * @param pbuffer Pointer to buffer that has to be freed.
 */
void bmm_buffer_free(buffer_t *pbuffer)
{
	if(pbuffer != NULL)  
	{ 
		k_heap_free(&phy_heap, pbuffer);
	}

}

#endif /* (TOTAL_NUMBER_OF_BUFS > 0) */
/* EOF */
