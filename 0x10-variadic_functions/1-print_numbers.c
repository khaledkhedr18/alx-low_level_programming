#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - a function that returns the sum of all its parameters
* Return: void
* @n: the first parameter
* @separator: the string printed between numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nptr;

	va_start(nptr, n);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(nptr, int);

		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nptr);
}
