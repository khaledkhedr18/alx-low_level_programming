#include <stdio.h>
/**
* main - Entry point
* Return: Always 0.
*/
int main(void)
{
int sum = 0;
int i;
int reversed = 0;

	for (i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	sum += i;
	}
	if (sum == 0)
	{
	putchar('0');
	}
	else
		{
		if (sum < 0)
		{
			putchar('-');
			sum = -sum;
		}
		while (sum > 0)
		{
		reversed = reversed * 10 + (sum % 10);
		sum /= 10;
		}
		while (reversed > 0)
		{
		putchar('0' + (reversed % 10));
		reversed /= 10;
		}
		}
		putchar('\n');
		return (0);
}
