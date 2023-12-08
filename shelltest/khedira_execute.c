#include "shell_header_file.h"

/**
* executioner - a function that executes arguments or commands
* Return: Void
* @exec_comm: string argument
*/

void executioner(const char *exec_comm, char const *args[])
{
	char *envp[] = {NULL};
	pid_t child_processid = fork();
	// char *command[4];

	// command[0] = "/bin/sh";
	// command[1] = "-c";
	// command[2] = (char *)exec_comm;
	// command[3] = NULL;

	// char *exec_comm_copy = strdup(exec_comm);

	// char *khedira_token = strtok(exec_comm_copy, " ");
	// while (khedira_token != NULL)
	// {
	// 	command[i++] = khedira_token;
	// 	khedira_token = strtok(NULL, " ");
	// }


	if (child_processid == -1)
	{
		perror("fork failed!");
		exit(EXIT_FAILURE);
	}

	else if (child_processid == 0)
	{

		execve(exec_comm, args, envp);
		perror("exelve");
		exit(EXIT_FAILURE);
	}

	else
	{
		wait(NULL);
	}
}
