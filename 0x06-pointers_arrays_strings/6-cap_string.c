#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* cap_string - a function that prints string
* @str: a string placeholder
* Return: void
*/

char *cap_string(char *s)
{
	int i;
	int j;
	char sep[] = {',', ';', '.', '!', '?',
	'"', '(', ')', '}', '{', ' ', '\n', '\t'};

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; sep[j] != '\0'; j++)
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
				s[i + 1] = toupper(s[i + 1]);
				}
			}
		}
	}
	return (s);
}
