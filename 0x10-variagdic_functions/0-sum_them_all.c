#include <string.h>
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* Return: int
* @n: the first parameter
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list nptr;
	va_start(nptr, n);

	if (n == 0)
	return 0;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(nptr, int);
		sum += x;
	}
	return (sum);
}
