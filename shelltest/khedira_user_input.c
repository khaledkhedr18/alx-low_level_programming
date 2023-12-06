#include "shell_header_file.h"

/**
* khedira_user_input - a function that receives an input from the user
* Return: void
* @comm: the command that the user is going to enter
* @size: the size of the string of the input
*/

void khedira_user_input(char *comm, size_t size)
{
	if (fgets(comm, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			khedira_print("\n");
			exit(EXIT_SUCCESS);
		}

		else
		{
			khedira_print("Error while reading the input.\n");
			exit(EXIT_FAILURE);
		}
	}
	comm[strcspn(comm, "\n")] = '\0';

}
