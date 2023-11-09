#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - main function
* Return: int
* @array: the array to be searched
* @size: size of array
* @cmp: a pointer to a function to be used to compare values
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
