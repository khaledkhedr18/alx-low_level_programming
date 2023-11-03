#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - a function that creates an array of integers
* Return: int
* @min: the minimum of the integers
* @max: maximum integer
*/

int *array_range(int min, int max)
{
	int *ptrs;
	int i;

	if (min > max)
	return (NULL);

	ptrs = malloc(sizeof(int) * (max - min + 1));

	if (ptrs == NULL)
	return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptrs[i] = min + i;
	}
	return (ptrs);
}

