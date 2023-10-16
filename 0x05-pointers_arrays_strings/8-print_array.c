#include <stdio.h>
#include "main.h"

/**
* print_array - a function that prints string
* @a: a string placeholder
* @n: counter.
* Return: void
*/

void print_array(int *a, int n)
{
	int i;
	if (a != NULL && n > 0)
	{
		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
		putchar('\n');
	}
}
