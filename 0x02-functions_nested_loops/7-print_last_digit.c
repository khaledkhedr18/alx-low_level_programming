#include "main.h"
#include <stdio.h>
/**
* print_last_digit - Entry point
* Description: a function that prints the last digit of a number.
* @n: a digit for testing
* Return: Always m
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
	m = m * -1;
	}
	putchar(m + '0');
	return(m);

}
