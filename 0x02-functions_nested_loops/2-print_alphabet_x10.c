#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times.
 * Return: void here.
 */
void print_alphabet_x10(void)
{
	char letters;
	int i = 0;
while (i <= 9)
	{
	letters = 'a';

	while (letters >= 'a' && letters <= 'z')
		{
		putchar(letters);
		letters++;
		}
	putchar('\n');
	i++;
	}
}
