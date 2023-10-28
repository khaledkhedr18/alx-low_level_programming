#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that prints it's file name
* Return: 0.
* @argc: number of arguments
* @argv: an array of strings that has the name of the arguments
*/

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
