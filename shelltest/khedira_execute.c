#include "shell_header_file.h"
#include <unistd.h>

void executioner(const char *exec_comm)
{
	pid_t child_processid = fork();

	if (child_processid == -1)
	{
		perror("fork failed!");
		exit(EXIT_FAILURE);
	}
	
}
