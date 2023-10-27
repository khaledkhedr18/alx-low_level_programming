#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strncat - main function
* Return: the function itself.
* @dest: 1st string
* @src: 2nd string
* @n: number of bytes
*/

char *_strncat(char *dest, char *src, int n)
{
	if (dest != NULL && src != NULL)
	{
		return (strncat(dest, src, n));
	}
	return (NULL);
}
