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
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			return (printf("Error\n"), 1);
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
