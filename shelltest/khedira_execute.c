#include "shell_header_file.h"
#include <unistd.h>

void executioner(const char *exec_comm)
{
	pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork failed");
        return 1;
    }

}