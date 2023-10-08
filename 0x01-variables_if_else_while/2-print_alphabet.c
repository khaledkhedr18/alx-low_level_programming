#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
	char letters = 'a';

	while (letters >= 'a' && letters <= 'z')
	{
	putchar(letters);
	letters++;
	}
	putchar('\n');
	return (0);
}
