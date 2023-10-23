#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strchr - function that searches for a letter in a string
* Return: Null
* @s: string
* @c: character
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
