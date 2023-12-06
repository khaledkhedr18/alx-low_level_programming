#include "shell_header_file.h"

/**
* executioner - a function that executes arguments or commands
* Return: Void
* @exec_comm: string argument
*/

void executioner(const char *exec_comm)
{
	char *envp[] = {NULL};
	pid_t child_processid = fork();
	char *command[4];
	command[0] = "/bin/sh";
	command[1] = "-c";
	command[2] = (char *)exec_comm;
	command[3] = NULL;


	if (child_processid == -1)
	{
		perror("fork failed!");
		exit(EXIT_FAILURE);
	}
	
	else if (child_processid == 0)
	{

		execve(command[0], command, envp);
		perror("exelve");
		exit(EXIT_FAILURE);
	}

	else
	{
		wait(NULL);
	}
}
