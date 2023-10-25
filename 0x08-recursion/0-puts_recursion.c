#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _puts_recursion - a function that prints a string
* Return: void
* @s: the placeholder for our string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
