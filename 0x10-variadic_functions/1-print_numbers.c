#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - a function that returns the sum of all its parameters
* Return: int
* @n: the first parameter
* @separator: the string printed between numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nptr;

	va_start(nptr, n);

	if (separator == NULL)
	return;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
		unsigned int x = va_arg(nptr, int);

		printf("%d%s", x, separator);
		}
		else if (i == n - 1)
		{
		unsigned int x = va_arg(nptr, int);

		printf("%d", x);
		}
	}
	printf("\n");
	va_end(nptr);
}
