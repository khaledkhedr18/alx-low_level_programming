#include "main.h"
#include <stdio.h>
/**
* _islower - Entry point
* Description: function that checks for lowercase character
* @c: Character to check if it is lowercase
* Return: 1-if lowercase, 0-if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

