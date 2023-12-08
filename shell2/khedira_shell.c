#include "shell_headerrr.h"
/**
* main - an entry point to the program
* Return: Void
*/
int main(int argc, char *argv[])
{
	char khedira_prmpt[128];

	while (true)
	{
		khedira_prompt();
		khedira_uinput(khedira_prmpt, sizeof(khedira_prmpt));
		khedira_exec(khedira_prmpt);
	}
}
