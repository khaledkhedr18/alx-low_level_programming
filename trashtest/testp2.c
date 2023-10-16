#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
	printf("value of c before the call: %d\n", c);
	printf("address of c before the call: %p\n", &c);
	printf("value of p before the call: %p\n", p);
	printf("address of p before the call: %p\n", &p);
	modif_my_char_var(p, c);
	printf("value of c after the call: %d\n", c);
	printf("address of c after the call: %p\n", &c);
return (0);
}