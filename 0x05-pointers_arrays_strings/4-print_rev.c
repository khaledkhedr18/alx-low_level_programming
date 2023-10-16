#include <stdio.h>
#include "main.h"

/**
* print_rev - a function that prints string
* @s: a string placeholder
* Return: void
*/

void print_rev(char *s)
{
	
	int i;
	int length = 0;

	if (s != NULL)
	{
		while (s[length] != '\0')
		{
			length++;
		}

		
		for(i = length -1; i >= 0; i--)
		{
			putchar(s[i]);
		}

		putchar('\n');
	}
}
