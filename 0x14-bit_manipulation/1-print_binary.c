#include <stdio.h>
/**
* print_binary - a function that prints the binary of a number
* Return: void
* @n: the number which will be converted
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask != 0)
	{
	if ((n & mask) != 0)
	{
		flag = 1;
		printf("1");
	}
	else if (flag == 1)
	{
		printf("0");
	}

	mask >>= 1;
	}
}
