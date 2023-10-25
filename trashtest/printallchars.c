#include <stdio.h>
#include <unistd.h>
void print_char(char c)
{
	write(1, &c, 1);
}

void _printallchars (char c)
{
if (c > 'z')
{
	return;
}
print_char(c);
_printallchars(c+1);
}

int main()
{
	char x;
	printf("enter a letter: \n");
	scanf("%c", &x);
	_printallchars(x);
	return (0);
}