/*******************************************************************************
  QMM Header

  File Name:
    qmm.h

  Summary:
    This file contains the Queue Management Module definitions.

  Description:
    Queue Management: provides services for creating and maintaining the queues.
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
#ifndef QMM_INTERFACE_H
#define QMM_INTERFACE_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

/* 
 * Queue Management: provides services for creating and maintaining the queues.
 *  
 */

// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Structure used for searching

  Summary:
    Structure to search for a buffer to be removed from a queue

  Description:
    search_t is used for searching the buffer in a queue

  Remarks:
    None
*/

typedef struct search_tag
{
	/** Pointer to search criteria function */
	uint8_t (*criteria_func)(void *buf, void *handle);
	/** Handle to callbck parameter */
	void *handle;
} search_t;

// *****************************************************************************
/* Structure holding the Queue details

  Summary:
    This structure defines the queue structure

  Description:
   The application should declare the queue of type queue_t
   and call qmm_queue_init before invoking any other functionality of qmm.

  Remarks:
    None
*/

typedef struct queue_tag
{
	/** Pointer to head of queue */
	buffer_t *head;
	/** Pointer to tail of queue */
	buffer_t *tail;
#ifdef CONFIG_ENABLE_QUEUE_CAPACITY

	/**
	 * Maximum number of buffers that can be accomodated in the current
	 * queue
	 * Note: This is only required if the queue capacity shall be different
	 * from 255.
	 */
	uint8_t capacity;
#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */

	/**
	 * Number of buffers present in the current queue
	 */
	uint8_t size;
} queue_t;

typedef struct qmm_fifo_tag
{
	void *fifo_reserved;
	buffer_t *buf;
}qmm_fifo_t;


// *****************************************************************************
/* Enum holding the Queue layer status

  Summary:
    This enum hold the different status from the queue management service 

  Description:
   QMM_SUCCESS - Requst to Queue layer processed successfully
   QMM_QUEUE_FULL - The designated queue is full to add more buffers 

  Remarks:
    None
*/

typedef enum qmm_status_tag{
	/** Success Status */
    QMM_SUCCESS     = 0x00,
	/** Queue is full */
    QMM_QUEUE_FULL  = 0x01
}qmm_status_t;

// *****************************************************************************
// *****************************************************************************
// Section: Externals
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Prototypes
// *****************************************************************************
// *****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

// *****************************************************************************    
/*
  Function:
   void qmm_queue_init(queue_t *q, uint8_t capacity)

  Summary:
    Initializes the queue

  Description:
    This function initializes the queue. Note that this function
    should be called before invoking any other functionality of QMM.

  Precondition:
    None

  Parameters:
    q - The queue which should be initialized
	capacity - Queue length (Max No of buffers which can be accomodated 
							   in the queue)

  Returns:
    None.

  Example:
    <code>
	queue_t app_queue;
	uint8_t queue_size = 10;
    qmm_queue_init(&app_queue, queue_size);
    </code>

  Remarks:
    None
*/

#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
void qmm_queue_init(queue_t *q, uint8_t capacity);

#else
void qmm_queue_init(queue_t *q);

#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */

// *****************************************************************************    
/*
  Function:
   qmm_status_t qmm_queue_append(queue_t *q, buffer_t *buf)

  Summary:
    Appends a buffer into the queue

  Description:
    This function appends a buffer into the designated queue

  Precondition:
    qmm_queue_init should have called for initilazing the particular queue before 
	using it

  Parameters:
    q 	- Queue into which buffer should be appended
	buf - Pointer to the buffer that should be appended into the queue.
		  Note that this pointer should be same as the
	      pointer returned by bmm_buffer_alloc.
	
  Returns:
    qmm_status_t - Status of Queue request

  Example:
    <code>
	queue_t app_queue;
	buffer_t *app_buf;
	app_buf = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
	
	uint8_t queue_size = 10;
    qmm_queue_init(&app_queue, queue_size);
	qmm_queue_append(&app_queue, app_buf);
	
    </code>

  Remarks:
    None
*/

#ifdef CONFIG_ENABLE_QUEUE_CAPACITY
qmm_status_t qmm_queue_append(queue_t *q, buffer_t *buf);

#else
void qmm_queue_append(queue_t *q, buffer_t *buf);

#endif  /* CONFIG_ENABLE_QUEUE_CAPACITY */

// *****************************************************************************    
/*
  Function:
   buffer_t* qmm_queue_remove(queue_t *q, search_t *search)

  Summary:
    Removes a buffer from queue.

  Description:
    This function removes a buffer from queue

  Precondition:
    qmm_queue_init should have called for initilazing the particular queue before 
	using it and buffer should be appended before removing it

  Parameters:
    q 	- Queue from which buffer should be removed
	buf - Search criteria. If this parameter is NULL, first buffer in the
		  queue will be removed. Otherwise buffer matching the criteria will be
  removed
	
  Returns:
    return - Pointer to the buffer header, if the buffer is
    successfully removed, NULL otherwise.

  Example:
    <code>
	queue_t app_queue;
	buffer_t *app_buf;
	app_buf = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
	
	uint8_t queue_size = 10;
    qmm_queue_init(&app_queue, queue_size);
	qmm_queue_append(&app_queue, app_buf);
	app_buf = qmm_queue_remove(&app_queue, NULL);
    </code>

  Remarks:
    None
*/

buffer_t* qmm_queue_remove(queue_t *q, search_t *search);

// *****************************************************************************    
/*
  Function:
    buffer_t* qmm_queue_read(queue_t *q, search_t *search)

  Summary:
    Reads a buffer from queue

  Description:
    This function reads either the first buffer if search is NULL or buffer
    matching the given criteria from queue.

  Precondition:
    qmm_queue_init should have called for initilazing the particular queue before 
	using it and buffer should be appended before reading it

  Parameters:
    q 	- Queue from which buffer should be read
	buf - Search criteria. If this parameter is NULL, first buffer in the
		  queue will be read. Otherwise buffer matching the criteria will be
		  read
	
  Returns:
    return - Pointer to the buffer header, if the buffer is
			 successfully read, NULL otherwise.

  Example:
    <code>
	queue_t app_queue;
	buffer_t *app_buf;
	app_buf = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
	
	uint8_t queue_size = 10;
    qmm_queue_init(&app_queue, queue_size);
	qmm_queue_append(&app_queue, app_buf);
	app_buf = qmm_queue_read(&app_queue, NULL);
    </code>

  Remarks:
    None
*/

buffer_t* qmm_queue_read(queue_t *q, search_t *search);

// *****************************************************************************    
/*
  Function:
    void qmm_queue_flush(queue_t *q)

  Summary:
    Internal function for flushing a specific queue

  Description:
    This function flushes the entire queue

  Precondition:
    qmm_queue_init should have called for initilazing the particular queue before 
	using it.

  Parameters:
    q 	- Queue to be flushed
	
  Returns:
    None

  Example:
    <code>
	queue_t app_queue;
	buffer_t *app_buf;

	app_buf = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
	
	uint8_t queue_size = 10;
    qmm_queue_init(&app_queue, queue_size);
	
	qmm_queue_flush(&app_queue);
    </code>

  Remarks:
    None
*/

void qmm_queue_flush(queue_t *q);

#ifdef __cplusplus
} /* extern "C" */
#endif

/* ! @} */
#endif /* QMM_INTERFACE_H */

/* EOF */
