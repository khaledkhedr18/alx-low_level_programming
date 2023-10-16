#include <stdio.h>
#include "main.h"

/**
* puts2 - a function that prints string
* @str: a string placeholder
* Return: void
*/

void puts2(char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
			putchar(str[i]);
		}
		putchar('\n');
	}
}
