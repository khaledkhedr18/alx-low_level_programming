#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - A program that prints the alphabet followed by a new line.
 * Return: void here
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{
	putchar(c);
	putchar('\n')
	c++;
	}
}
