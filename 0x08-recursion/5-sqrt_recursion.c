#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - a function that returns the natural square root of a number
* Return: int
* @n: the number we're going to square root
* @x: is an integer that is going to be declared in a later function.
*/
int square(int n, int x);
int _sqrt_recursion(int n)
{
		return (square(n, 1));
}

/**
* square - find square root for the given number
* Return: int
* @n: the number want to find the square root for
* @x: the value of the square root
*/

int square(int n, int x)
{
	if (x * x == n)
	return (x);
	else if (x * x < n)
	{
		return (square(n, x + 1));
	}
	else
	return (-1);
}
