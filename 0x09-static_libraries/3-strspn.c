#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strspn - a function that gets the length of a prefix substring
* Return: 0
* @s: the first string
* @accept: the group of the prefix to be compared
*/

unsigned int _strspn(char *s, char *accept)
{
	if (s != NULL && accept != NULL)
	{
		return (strspn(s, accept));
	}
	return (0);
}
