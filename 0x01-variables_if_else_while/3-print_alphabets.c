#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
	char letters = 'a';
	char LETTERS = 'A';

	while (letters >= 'a' && letters <= 'z')
	{
	putchar(letters);
	letters++;
	}

	while (LETTERS >= 'A' && LETTERS <= 'Z')
	{
	putchar(LETTERS);
	LETTERS++;
	}
	putchar('\n');
	return (0);
}

