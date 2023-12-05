#include "shell_header_file.h"
/**
* main - an entry point to the program
* Return: Void
*/

int main(void)
{
	char khedira_prmpt[128];

	while(true)
	{
		khedira_prompt();
		fgets(khedira_prmpt, sizeof(khedira_prmpt), stdin);
	}
}
