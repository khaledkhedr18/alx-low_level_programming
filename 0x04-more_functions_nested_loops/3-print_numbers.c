#include <stdio.h>
#include "main.h"

/**
* print_numbers - Entry point
* Return: always void.
*/

void print_numbers(void)
{
	int a;

	for(a = 0; a <= 9; a++)
	{
	putchar(a + '0');
	}
}
