#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strcat - main function
* Return: the function itself.
* @dest: 1st string
* @src: 2nd string
*/

char *_strcat(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		return (strcat(dest, src));
	}
	return (NULL);
}
