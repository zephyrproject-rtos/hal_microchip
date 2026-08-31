/*******************************************************************************
  BMM Header

  File Name:
    bmm.h

  Summary:
    This file contains the Buffer Management Module definitions.

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

/* Prevent double inclusion */
#ifndef BMM_INTERFACE_H
#define BMM_INTERFACE_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

/*
 * Buffer Management (large and small buffers): provides services for
 * dynamically allocating and freeing memory buffers.
 */

// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* BMM Buffer Pointer

  Summary:
    This macro provides the pointer to the corresponding body of the supplied
    buffer header

  Description:
    None

  Remarks:
    None
*/

#define BMM_BUFFER_POINTER(buf)  ((buf)->body)

// *****************************************************************************
// *****************************************************************************
// Section: Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Structure Holding the Buffer Details

  Summary:
    Buffer structure holding information of each buffer

  Description:
    buffer_t is used as the data type to get the buffer pointer

  Remarks:
    None
*/

typedef struct buffer_tag
{
	/** Pointer to the buffer body */
	uint8_t *body;

	/** Pointer to next free buffer */
	struct buffer_tag *next;
} buffer_t;

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
extern "C" {
#endif

// *****************************************************************************    
/*
  Function:
   void bmm_buffer_init(void)

  Summary:
    Initializes the buffer module

  Description:
    This function initializes the buffer module.
    This function should be called before using any other functionality
    of buffer module

  Precondition:
    None

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    bmm_buffer_init();
    </code>

  Remarks:
    This routine is called by the PHY Layer during PHY Initialization (PHY_Init).
	Application can directly allocate the buffer and use it. Number of Buffers should 
	be defined as per application needs before ausing the buffer
*/

void bmm_buffer_init(void);

// *****************************************************************************    
/*
  Function:
   buffer_t* bmm_buffer_alloc(uint16_t size)

  Summary:
    Allocates a buffer

  Description:
    This function allocates a buffer and returns a pointer to the buffer.
	The same pointer should be used while freeing the buffer.User should
	call BMM_BUFFER_POINTER(buf) to get the pointer to buffer user area

  Precondition:
    bmm_buffer_init should have been called before using this function

  Parameters:
    param - size size of buffer to be allocated.
 
  Returns:
    return- pointer to the buffer allocated,
			NULL if buffer not available

  Example:
    <code>
		buffer_t *buffer;
		buffer = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
		
		if (buffer == NULL)
		{
			printf("Buffer is unavailable");
		}
		
    </code>

  Remarks:
    This routine is used by the PHY Layer for allocating the buffer for reception.
	Number of Buffers should be defined as per application needs before the buffer
	allocation function. If application allocates the buffer and not freeing them,
	Trx may not able to continuously receive the packet. So care should be taken when
	defining the Number of Buffers.
*/

#if defined(CONFIG_ENABLE_LARGE_BUFFER)
buffer_t* bmm_buffer_alloc(uint16_t size);

#else
buffer_t* bmm_buffer_alloc(uint8_t size);

#endif

// *****************************************************************************    
/*
  Function:
   void bmm_buffer_free(buffer_t *pbuffer)

  Summary:
    Frees up a buffer

  Description:
    This function frees up a buffer. The pointer passed to this function
    should be the pointer returned during buffer allocation. The result is
    unpredictable if an incorrect pointer is passed.

  Precondition:
    bmm_buffer_init should have been called before using this function

  Parameters:
    pbuffer - Pointer to buffer that has to be freed
 
  Returns:
    None

  Example:
    <code>
		buffer_t *buffer;
		buffer = bmm_buffer_alloc(LARGE_BUFFER_SIZE);
		
		if (buffer != NULL)
		{
			printf("Use the buffer");
		}
		
		bmm_buffer_free(buffer);		
    </code>

  Remarks:
    This routine is used by the PHY Layer for allocating the buffer for reception.
	Number of Buffers should be defined as per application needs before the buffer
	allocation function. If application allocates the buffer and not freeing them,
	Trx may not able to continuously receive the packet. So care should be taken when
	defining the Number of Buffers.
*/

void bmm_buffer_free(buffer_t *pbuffer);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* BMM_INTERFACE_H */

/* EOF */
