#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - a function that prints a string
* Return: void
* @s: the placeholder for our string
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
	_puts_recursion(s + 1);
	putchar(*s);
	}
}
