#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _puts - prints a string followed by a newline.
* @str: pointer
* Return: void.
*/

void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
* _atoi - convert strings to integers
* @s: char
* Return: integer
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int r = 0, firstN, i;

	for (firstN = 0; !(s[firstN] >= 48 && s[firstN] <= 57); firstN++)
	{
		if (s[firstN] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstN; s[i] >= 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
	return (sign * r);
}


/**
* print_int - prints an integer
* @n: int
* Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, r;

	for (i = 0; n / div > 9; i++, div *= 10);

	for (; div >= 1; n%= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
	}
}

/**
* main - mul result
* @argc: an int
* @argv: an array
* Return: always 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(atoi(argv[1])) * _atoi(argv[2]);
	_putchar('\n');

	return (0);
}
