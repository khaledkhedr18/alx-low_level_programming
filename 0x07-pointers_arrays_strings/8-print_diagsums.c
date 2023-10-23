#include <stdio.h>
#include "main.h"

/**
* print_diagsums: a function that sums the diagonals
* Return: Void.
* @a: the array itself
* @size: the size of the diagonal that we want to sum from
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + (size - i -1));
	}
	printf("%d, %d\n", sum, sum2);
}