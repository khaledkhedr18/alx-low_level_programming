#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always (0)
*/

int main(void)

{

int age;
printf("Please Enter Your Age: \n");
scanf("%d", &age);

if (age <= 18)
{
	printf("Wow! You're a teenager.\n");
}

else if (age <= 34)
{
	printf("A young strong man!\n");
}
else
{
	printf("Holy Shit!! You're too old buddy\n");
}

return (0);

}
