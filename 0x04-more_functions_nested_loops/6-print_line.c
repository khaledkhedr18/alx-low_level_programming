#include <stdio.h>
#include "main.h"

/**
* print_line - main function
* Return: void.
* @n: testing placeholder parameter
*/

void print_line(int n)
{
int lines = 1;
	if (n <= 0)
	{
	putchar('\n');
	}
else
{
	while (lines <= n)
	{
	putchar(95);
	lines++;
	}
}
putchar('\n');
}
