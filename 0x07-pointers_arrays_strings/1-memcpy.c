#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _memcpy - a function that copies memory area
* Return: always char
* @dest: the destination address of the memory
* @src: the source address which wwe will copy from
* @n: the number of bytes needed to be copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest != NULL && src != NULL)
	{
		return (memcpy(dest, src, n));
	}
	return (NULL);

}
