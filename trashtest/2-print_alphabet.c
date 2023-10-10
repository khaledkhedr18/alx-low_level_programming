#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
	char letters;
	int i = 0;
while(i <= 10)
{
	letters = 'a';
	while (letters >= 'a' && letters <= 'z')
	{
	putchar(letters);
	letters++;
	}
	putchar('\n');
	i++;
}
	return (0);
}

