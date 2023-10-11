#include <stdio.h>

/**
 * main - The main function
 * Prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
 * The numbers are separated by comma, followed by a space
 * Uses the standard library only
 * Does not use long long, malloc, pointers, arrays/tables, or structures
 * Does not hard code any Fibonacci number (except for 1 and 2)
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	printf("%lu, %lu", fib1, fib2); /* Prints the first two numbers */
	for (count = 0; count < 90; count++) /* Prints the next 90 numbers */
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / 10000000000; /* Splits the 91st number into two halves */
	fib2_half1 = fib2 / 10000000000; /* Splits the 92nd number into two halves */
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (count = 91; count < 98; count++) /* Prints the last six numbers */
	{
		half1 = fib1_half1 + fib2_half1; /* Adds the first halves */
		half2 = fib1_half2 + fib2_half2; /* Adds the second halves */
		if (half2 > 9999999999) /* Checks for overflow */
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf(", %lu%lu", half1, half2); /* Prints the concatenated halves */
		fib1_half1 = fib2_half1; /* Updates the previous halves */
		fib1_half2 = fib2_half2;
		fib2_half1 = half1; /* Updates the current halves */
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
