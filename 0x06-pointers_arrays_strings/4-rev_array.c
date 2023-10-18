#include <stdio.h>
#include "main.h"

/**
* rev_string - a function that prints string
* @s: a string placeholder
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
