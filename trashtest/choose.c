#include <stdio.h>

void add(signed int a, signed int b)
{
	printf("Adding = %d\n", a + b);
}

void subtract(signed int a, signed int b)
{
	printf("Subtracting = %d\n", a - b);
}

void multiply(signed int a, signed int b)
{
	printf("Multiplying = %d \n", a * b);
}

int main()
{
	void (*ptr[])(signed int, signed int) = {add, subtract, multiply};
	signed int a, b;
	unsigned int pr;

	printf("Enter 2 Numbers.\n");
	scanf("%d%d", &a, &b);

	printf("Type 0 for Addition.\nType 1 for Subraction.\nType 2 for Multiplication.\n");
	scanf("%d", &pr);

	if (pr > 2 || pr < 0)
	{
		return 0;
	}

	(*ptr[pr])(a, b);
	return 0;
}