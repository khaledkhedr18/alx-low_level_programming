#include <stdio.h>
#include "main.h"

/**
* is_prime_number - check if it is a prime number
* Return: maybe 0 or 1
* @n: a test number
* @x: another test number
*/

int primecheck(int n, int x);
int is_prime_number(int n)
{
	return (primecheck(n, 2));
}

/**
* primecheck - a helper function
* @n: a test number
* @x: another test number
* Return: int
*/

int primecheck(int n, int x)
{
	if (x >= n && n > 1)
	return (1);
	else if (n % x == 0 || n <= 1)
	return (0);
	else
	return (primecheck(n, x + 1));
}
