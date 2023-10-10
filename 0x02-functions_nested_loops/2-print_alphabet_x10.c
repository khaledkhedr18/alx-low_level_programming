#include <stdio.h>
#include <main.h>
/**
* print_alphabet - Function that prints alphabet 10 times
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
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
print_alphabet();
	return (0);
}
