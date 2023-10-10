#include <stdio.h>

/**
* print_alphabet - Function that prints alphabet 10 times
* Return: void here
*/
void print_alphabet(void)
{
	char letters;
	int i = 0;
while (i <= 10)
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
}
