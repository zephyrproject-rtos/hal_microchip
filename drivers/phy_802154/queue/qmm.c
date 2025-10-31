/*******************************************************************************
  QMM Source

  File Name:
    qmm.c

  Summary:
    This file contains the Queue Management Module implementations.

  Description:
    This file implements the  functions for initializing the queues,
 *  appending a buffer into the queue, removing a buffer from the queue and
 *  reading a buffer from the queue as per the search criteria.
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
#define LOG_MODULE_NAME qmm_bmm
#define LOG_LEVEL CONFIG_IEEE802154_DRIVER_LOG_LEVEL
 
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(LOG_MODULE_NAME);

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ieee_phy_const.h"
#include "stack_config.h"
#include "app_config.h"
#include "bmm.h"
#include "qmm.h"
#include "phy.h"
#include <zephyr/kernel.h>


#if (TOTAL_NUMBER_OF_BUFS > 0)

/* === Types =============================================================== */

/*
 * Specifies whether the buffer needs to be read from the queue or to be
 * removed from the queue.
 */
typedef enum buffer_mode_tag {
	REMOVE_MODE,
	READ_MODE
} buffer_mode_t;

/* === Macros ============================================================== */
K_FIFO_DEFINE(qmm_fifo);
extern struct k_heap phy_heap;
/* === Prototypes ========================================================== */

static buffer_t *queue_read_or_remove(queue_t *q,
		buffer_mode_t mode,
		search_t *search);

/* === Implementation ====================================================== */

/**
 * @brief Initializes the queue.
 *
 * This function initializes the queue. Note that this function
 * should be called before invoking any other functionality of QMM.
 *
 * @param q The queue which should be initialized.
 */
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
void qmm_queue_init(queue_t *q, uint8_t capacity)
#else
void qmm_queue_init(queue_t *q)
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */
{
	q->size = 0;
}

/**
 * @brief Appends a buffer into the queue.
 *
 * This function appends a buffer into the queue.
 *
 * @param q Queue into which buffer should be appended
 *
 * @param buf Pointer to the buffer that should be appended into the queue.
 * Note that this pointer should be same as the
 * pointer returned by bmm_buffer_alloc.
 */
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
qmm_status_t qmm_queue_append(queue_t *q, buffer_t *buf)
#else
void qmm_queue_append(queue_t *q, buffer_t *buf)
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */
{
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
	qmm_status_t  status;
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */

	LOG_DBG("qmm_queue_append\n");
	qmm_fifo_t *queue = NULL;
	queue = (qmm_fifo_t*)k_heap_alloc(&phy_heap,sizeof(qmm_fifo_t), K_NO_WAIT);
	if(queue != NULL)
	{
	    queue->buf = buf;
		k_fifo_put(&qmm_fifo,queue);
		LOG_DBG("Bmm_buf_add:%p %p\n",queue,queue->buf);
		q->size++;
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
		status = QMM_SUCCESS;
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */
	}
	else
	{
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
		status = QMM_QUEUE_FULL;
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */
		LOG_DBG("qmm_Buf_add_Failed\n");
	}

#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
	return (status);
#endif
} /* qmm_queue_append */

/*
 * @brief Reads or removes a buffer from queue
 *
 * This function reads or removes a buffer from a queue as per
 * the search criteria provided. If search criteria is NULL, then the first
 * buffer is returned, otherwise buffer matching the given criteria is returned
 *
 * @param q Queue from which buffer is to be read or removed.
 *
 * @param mode Mode of operations. If this parameter has value REMOVE_MODE,
 *             buffer will be removed from queue and returned. If this parameter
 * is
 *             READ_MODE, buffer pointer will be returned without
 *             removing from queue.
 *
 * @param search Search criteria structure pointer.
 *
 * @return Buffer header pointer, if the buffer is successfully
 *         removed or read, otherwise NULL is returned.
 * \ingroup group_qmm
 */
static buffer_t *queue_read_or_remove(queue_t *q,
		buffer_mode_t mode,
		search_t *search)
{
	buffer_t *buffer_current = NULL;
	qmm_fifo_t *queue = NULL;

	if(!k_fifo_is_empty(&qmm_fifo))
	{
		queue =  k_fifo_get(&qmm_fifo, K_FOREVER);
		if(queue != NULL)
		{
			buffer_current = queue->buf;
			k_heap_free(&phy_heap, queue);
			q->size--;
			LOG_DBG("bmm_buf_addr:%p %p\n",(void*)buffer_current,(void*)buffer_current->body);
		}
	}

	/* Return the buffer. note that pointer to header of buffer is returned
	**/
	return buffer_current;
} /* queue_read_or_remove */

/**
 * @brief Removes a buffer from queue.
 *
 * This function removes a buffer from queue
 *
 * @param q Queue from which buffer should be removed
 *
 * @param search Search criteria. If this parameter is NULL, first buffer in the
 * queue will be removed. Otherwise buffer matching the criteria will be
 * removed.
 *
 * @return Pointer to the buffer header, if the buffer is
 * successfully removed, NULL otherwise.
 */
buffer_t *qmm_queue_remove(queue_t *q, search_t *search)
{
	return (queue_read_or_remove(q, REMOVE_MODE, search));
}

/**
 * @brief Reads a buffer from queue.
 *
 * This function reads either the first buffer if search is NULL or buffer
 * matching the given criteria from queue.
 *
 * @param q The queue from which buffer should be read.
 *
 * @param search If this parameter is NULL first buffer in the queue will be
 * read. Otherwise buffer matching the criteria will be read
 *
 * @return Pointer to the buffer header which is to be read, NULL if the buffer
 * is not available
 */
buffer_t *qmm_queue_read(queue_t *q, search_t *search)
{
	return (queue_read_or_remove(q, READ_MODE, search));
}

/**
 * @brief Internal function for flushing a specific queue
 *
 * @param q Queue to be flushed
 */
void qmm_queue_flush(queue_t *q)
{
	buffer_t *buf_to_free;
	qmm_fifo_t *queue_to_free;

	while(k_fifo_is_empty(&qmm_fifo) == 0)
	{
		queue_to_free =  k_fifo_get(&qmm_fifo, K_FOREVER);
		if(!queue_to_free)
		{
			buf_to_free = queue_to_free->buf;
			k_heap_free(&phy_heap, buf_to_free);
			k_heap_free(&phy_heap, queue_to_free);
		}

	}
}

#endif  /* (TOTAL_NUMBER_OF_BUFS > 0) */

/* EOF */
