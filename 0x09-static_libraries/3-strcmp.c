#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strcmp - main function
* Return: the value of the function strcmp
* @s1: first string
* @s2: second string
*/

int _strcmp(char *s1, char *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		return (strcmp(s1, s2));
	}
	return (0);
}

