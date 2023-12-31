#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* cap_string - a function that prints string
* @str: a string placeholder
* Return: void
*/

char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = {',', ';', '.', '!', '?',
	'"', '(', ')', '}', '{', ' ', '\n', '\t'};

	if (str != NULL)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);

		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; sep[j] != '\0'; j++)
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
				str[i + 1] = toupper(str[i + 1]);
				}
			}
		}
	}
	return (str);
}
