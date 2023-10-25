#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strlen_recursion - a function that prints a string
* Return: int
* @s: the placeholder for our string
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s > '\0')
	{
	counter = _strlen_recursion(s + 1) + 1;
	}
	return (counter);
}
