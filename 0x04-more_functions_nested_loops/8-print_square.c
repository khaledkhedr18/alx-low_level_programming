#include <stdio.h>
#include "main.h"

/**
* print_square - main function
* @n: testing placeholder parameter
*/

void print_square(int n)
{
	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	int i, j;

		for (i = 0; i < n; i++)
		{
		for (j = 0; j < n; j++)
		{
		putchar('#');
		}
		putchar('\n');
		}
	}
}
