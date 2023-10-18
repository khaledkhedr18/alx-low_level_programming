#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strncpy - main function that copies string.
* Return: the value of the function itself
* @dest: 1st string.
* @src: 2nd string.
* @n: number of bytes copied
*/

char *_strncpy(char *dest, char *src, int n)
{
	if (dest != NULL && src != NULL)
	{
		return (strncpy(dest, src, n));
	}
	return (NULL);
}

