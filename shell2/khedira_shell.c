#include "shell_headerrr.h"
/**
* main - an entry point to the program
* Return: Void
*/
#define MYARGS 10
int main(int argc, char *argv[])
{
	char khedira_prmpt[128];
	char *tokens[MYARGS + 1];

	while (true)
	{
		khedira_prompt();
		khedira_uinput(khedira_prmpt, sizeof(khedira_prmpt));
		khedira_tokenize(khedira_prmpt, tokens, MYARGS);
		khedira_exec(khedira_prmpt);
	}
}
