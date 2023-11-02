#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* string_nconcat - a function that concatenates two strings
* Return: char
* @s1: first string
* @s2: second string
* @n: number of bytes from the second string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int t1 = 0;
	char *catted;

	t1 = strlen(s1);
	catted = malloc(t1 + n + 1);

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	if (catted == NULL)
	{
		return (NULL);
	}
	strcpy(catted, s1);
	strncat(catted, s2, n);

	return (catted);
}

