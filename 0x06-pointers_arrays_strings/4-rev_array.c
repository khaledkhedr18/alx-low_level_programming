#include <stdio.h>
#include "main.h"

/**
* reverse_array - a function that reverses string
* @n: a string placeholder
* @a: a string placeholder
* Return: void
*/

void reverse_array(int *a, int n)
{

	int i;
	
	if (a != NULL)
	{
		for (i = 0; i < n / 2; i++)
		{
			int temp = a[i];

			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
}
