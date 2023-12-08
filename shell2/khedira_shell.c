#include "shell_header_file.h"
/**
* main - an entry point to the program
* Return: Void
*/

int main(void)
{
	char khedira_prmpt[128];

	while (true)
	{
		khedira_prmpt();
		khedira_uinput(khedira_prmpt, sizeof(khedira_prmpt));
		khedira_exec(khedira_prmpt);
	}
}
