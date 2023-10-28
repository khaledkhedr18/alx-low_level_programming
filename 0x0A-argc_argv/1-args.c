#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that prints it's file name
* Return: 0.
* @argc: number of arguments
* @argv: an array of strings that has the name of the arguments
*/

int main(int argc, char const *argv[] __attribute__ ((unused)))
{
	int num;
	if (argc > 1)
	num = argc - 1;
	printf("%d\n", num);
	return (0);
}
