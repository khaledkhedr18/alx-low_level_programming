#include "shell_headerrr.h"

/**
 * khedira_print - a function that prints string
 * Return: Void
 * @output: the output of the string
*/

void khedira(const char *output)
{
	write(STDOUT_FILENO, output, strlen(output));
}
