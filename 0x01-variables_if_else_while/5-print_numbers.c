#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print numbers from 0 to 9
 * Return: Always 0
*/

int main(void)
{
	int a = 0;

	while (a >= 0 && a < 10)
	{
	putchar(a + '0');
	a++;
	}

	putchar('\n');
	return (0);
}

