#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strstr - a function that searches a string for any of a set of bytes
* Return: NULL
* @haystack: the string that needs to be searched for
* @needle: the string that we will search in
*/

char *_strstr(char *haystack, char *needle)
{
	if (haystack != NULL && needle != NULL)
	{
		return (strstr(haystack, needle));
	}
	return (NULL);
}
