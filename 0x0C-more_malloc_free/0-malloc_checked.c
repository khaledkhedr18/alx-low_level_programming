#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc
* Return: Void.
* @b: an unsigned int.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}