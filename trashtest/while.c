#include <stdio.h>
/**
* main - Entry point
*
* Return: Always (0)
*/

int main(void)
{
int a;
printf("Enter a value for a: \n");
scanf("%d", &a);
if (a > 0)
{
while (a <= 20)
{
	printf("Value of a is: %d \n", a);
	a++;
}
}
else
{
printf("Enter a positive number you idiot!!\n");
}
return (0);
}
