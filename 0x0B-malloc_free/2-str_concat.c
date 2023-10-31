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
	char *t1;
	char *t2;
	char *catted;

	t1 = malloc(strlen(s1) + 1);
	t2 = malloc(strlen(s2) + 1);

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	catted = strcat(t1, t2);
	return (catted);

}
