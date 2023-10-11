#include "main.h"
#include <stdio.h>

/**
* print_sign - Entry point
* Description: A function that prints the sign of a number
* @n: the character
* Return: 1-if positive, 0-if zero, -1-if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
	putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	putchar(45);
	return(-1);
	}
	else
	{
	putchar(48);
	return (0);
	}
}
