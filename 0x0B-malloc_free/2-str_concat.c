#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* str_concat - a function that concatenates two strings
* Return: char
* @s1: first string
* @s2: second string
*/

char *str_concat(char *s1, char *s2)
{
	int t1 = 0;
	int t2 = 0;
	char *catted;

	t1 = strlen(s1);
	t2 = strlen(s2);
	catted = malloc(t1 + t2 + 1);

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	if (catted == NULL)
	{
		return (NULL);
	}

	strcpy(catted, s1);
	strcat(catted, s2);

	return (catted);

}
