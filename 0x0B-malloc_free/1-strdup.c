#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _strdup - a function that duplicates a string
* Return: a char
* @str: a string that will be duplicated
*/

char *_strdup(char *str)
{
	char *dup;
	
	if (str == NULL)
	return (NULL);

	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
	return (NULL);

	strcpy(dup, str);
	return (dup);
}
