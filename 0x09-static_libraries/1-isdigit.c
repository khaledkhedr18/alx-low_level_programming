#include <stdio.h>
#include "main.h"

/**
* _isdigit - Entry point
* Return: always 0.
* @c: testing placeholder
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
