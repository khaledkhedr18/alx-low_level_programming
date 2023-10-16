#include <stdio.h>
#include "main.h"

/**
* _puts2 - a function that prints string
* @str: a string placeholder
* Return: void
*/

void puts2(char *str)
{

	if (str != NULL)
	{
		while (*str != '\0')
			{
			putchar(*str);
			str = str + 2;
			}

		putchar('\n');
	}
}
