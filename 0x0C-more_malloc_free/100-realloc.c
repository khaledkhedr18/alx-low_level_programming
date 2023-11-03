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
void *new_ptr = malloc(new_size);

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
	return (malloc(new_size));
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_ptr == NULL)
{
return (NULL);
}

if (new_size > old_size)
{
memcpy(new_ptr, ptr, old_size);
}
else
{
memcpy(new_ptr, ptr, new_size);
}

free(ptr);
return (new_ptr);
}

