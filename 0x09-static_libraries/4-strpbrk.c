#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strpbrk - a function that searches a string for any of a set of bytes
* Return: NULL
* @s: the string that needs to be searched for
* @accept: the string that we will search in
*/

char *_strpbrk(char *s, char *accept)
{
	if (s != NULL && accept != NULL)
	{
		return (strpbrk(s, accept));
	}
	return (NULL);
}
