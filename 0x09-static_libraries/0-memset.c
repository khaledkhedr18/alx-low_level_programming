#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _memset - this function fills memory witha constant bite
* Return: always char
* @s: the address of the memory needed to be filled
* @b: the value filled with
* @n: the number of bytes to be set to the value
*/

char *_memset(char *s, char b, unsigned int n)
{
	if (s != NULL)
	{
		return (memset(s, b, n));
	}
	return (NULL);
}
