#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that prints it's file name
* Return: 0.
* @argc: number of arguments
* @argv: an array of strings that has the name of the arguments
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
