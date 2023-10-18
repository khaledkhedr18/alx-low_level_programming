#include <stdio.h>
#include "main.h"

/**
* string_toupper - a function that prints string
* @str: a string placeholder
* Return: void
*/

char *string_toupper(char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}
