#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - a function that allocates memory for an array
* Return: void
* @nmemb: number of members of the array array
* @size: the size of the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tsize = nmemb * size;
	void *ptr;
	unsigned int i;

	ptr = malloc(tsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < tsize; i++)
	{
		*((char*)ptr + i) = 0;
	}
	return (ptr);
}
