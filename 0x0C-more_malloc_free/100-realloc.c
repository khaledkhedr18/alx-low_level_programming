#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - a function that reallocates a memory block using malloc and free
* Return: void
* @ptr: a pointer to the previous memory
* @old_size: the old size of the memory
* @new_size: the new size of the memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrs;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptrs = malloc(new_size);
		if (ptrs == NULL)
		{
			return (NULL);
		}
		return (ptrs);
	}

	if (new_size > old_size)
	{
		ptrs = malloc(new_size);

		if (ptrs == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)ptrs + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (ptrs);
}
