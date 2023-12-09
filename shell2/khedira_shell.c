#include "shell_headerrr.h"

/**
* main - an entry point to the program
* Return: Void
* @argc: the number of arguments
* @argv: the strings of the arguments
*/

int main(int ac, char *argv[])
{
	char khedira_prmpt[128];

	while (true)
	{
		khedira_prompt();
		khedira_uinput(khedira_prmpt, sizeof(khedira_prmpt));
		khedira_exec(khedira_prmpt, argv);
	}
	return (0);
}
