#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strcpy - a function that prints string
* @dest: a string placeholder
* @src: counter.
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		return (strcpy(dest, src));
	}
	return (NULL);
}
