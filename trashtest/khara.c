#include <stdio.h>

int main(void)
{

int a;
	int i;
	for(i = 0; i <=14; i++)
{
	for (a = 0; a <= 14; a++)
	{
		if (a >= 10)
	{
	putchar('1');
	}
	putchar(a % 10 + '0');
	}
	putchar('\n');
}

}