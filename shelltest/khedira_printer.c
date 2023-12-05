#include "shell_header_file.h"

/**
* khedira_print - a function that prints messages to the standard output
* Return: Void
* @output: the message that we want to print.
*/

void khedira_print(const char *output)
{
	write(STDOUT_FILENO, output, strlen(output));
}
