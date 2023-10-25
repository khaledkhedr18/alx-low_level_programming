#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

int main()
{
	int f;
	int c;
	printf("Enter a number!: \n");
	scanf("%d", &c);
	if (c != 0)
	{
	f = factorial(c);
	printf ("Factorial of (%d) is %d.\n", c, f);
	}
	return (0);
	}