#include "shell_header_file.h"

/**
* executioner - a function that executes arguments or commands
* Return: Void
* @exec_comm: string argument
*/

void executioner(const char *exec_comm)
{
	pid_t child_processid = fork();

	if (child_processid == -1)
	{
		perror("fork failed!");
		exit(EXIT_FAILURE);
	}
	
	else if (child_processid == 0)
	{
		execlp(exec_comm, exec_comm, (char*)NULL);
		perror("exelcp");
		exit(EXIT_FAILURE);
	}

	else
	{
		wait(NULL);
	}
}
