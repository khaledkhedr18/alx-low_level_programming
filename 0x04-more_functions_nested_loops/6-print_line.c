#include <stdio.h>
#include "main.h"

/**
* print_line - main function
* Return: void.
*/

void print_line(int n)
{
int lines = 0;

	while(lines <= n)
	{
	putchar(95);
	lines++;
	}
putchar('\n');
}