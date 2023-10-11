#include "main.h"
#include <stdio.h>

/**
* jack_bauer - Entry point
* Description: a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
* Return: Void here
*/

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a >= 0 && a <= 2)
	{
	while (b >= 0 && b <= 9)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
	while (c <= 5)
	{
	while (d <= 9)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(58);
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	d++;
	}
	c++;
	}
	
	}
	b++;
	}
	a++;
	}
}
