#include <stdio.h>
#include "main.h"

/**
* _puts - a function that prints string
* @str: a string placeholder
* Return: void
*/

void _puts(char *str)
{

	if (str != NULL)
	{
		while (*str != '\0')
			{
			putchar(*str);
			str++;
			}

		putchar('\n');
	}
}
