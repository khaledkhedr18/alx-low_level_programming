#include <stdio.h>
/**
* main - Entry point
*
* Return: Always (0)
*/

int main(void)
{
int a = 21;
int b = 10;
int c;

c = a + b;
printf("Line 1 Value of c: %d \n", c);

c = a - b;
printf("Line 2 value of c: %d \n", c);

c = a * b;
printf("Line 3 value of c: %d \n", c);

c = a / b;
printf("Line 4 value of c: %d \n", c);

c = a % b;
printf("Line 5 value of c: %d \n", c);

c = a++;
printf("Line 6 value of c: %d \n", c);

c = a--;
printf("Line 7 value of c: %d \n", c);

return (0);
}
