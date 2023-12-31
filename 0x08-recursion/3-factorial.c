#include <stdio.h>

/**
* factorial - a function tha returns the factorial of a given number
* Return: int
* @n: a placeholder for the number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
