#include <stdio.h>
#include "main.h"

/**
* puts_half - a function that prints string
* @str: a string placeholder
* Return: void
*/

void print_array(int *a, int n)
{
	int i;
	if (a != NULL && n > 0)
	{
		printf("%d", a[0]);

		for(i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
}