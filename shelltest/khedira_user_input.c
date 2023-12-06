#include "shell_header_file.h"

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
