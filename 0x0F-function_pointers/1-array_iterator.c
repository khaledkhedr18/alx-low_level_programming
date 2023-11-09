#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - a function
* Return: Void
* @array: a pointer to the array
* @size: size of the array
* @action: a pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
	{
		while (array <= last)
		{
			action(*array++);
		}
	}
}
