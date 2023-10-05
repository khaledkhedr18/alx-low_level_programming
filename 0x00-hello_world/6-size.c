#include <stdio.h>

/**
* main - Entry point
*
* Return: Always (0)
*/

int main(void)
{

char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %c byte(s)\n", (unsigned char)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long long int)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned float)sizeof(e));

return (0);
}
