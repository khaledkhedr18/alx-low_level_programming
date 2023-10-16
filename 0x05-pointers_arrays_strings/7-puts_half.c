#include <stdio.h>
#include "main.h"

/**
* puts_half - a function that prints string
* @str: a string placeholder
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		putchar(str[i]);
	}
	else
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
