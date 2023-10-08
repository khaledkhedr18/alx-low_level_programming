#include <stdio.h>

/**
* main - Entry point
* Description: a program that prints all the numbers of base 16 in lowercase
* Return: Always 0
*/

int main(void)
{
	int a = 0;
	char b;

	while (a < 16)
{
	if (a < 10)
{
	putchar(a + '0');
	a++;
}
	else
{
	putchar(a - 10 + 'a');
	a++;
}
}
putchar('\n');
return (0);
}
