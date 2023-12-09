#include "shell_headerrr.h"

/**
 * khedira_exec - a function that executes commands
 * Return: Void
 * @exec_comm: the command to be executed
 * @exec_args: the arguments to the command
*/


void khedira_exec(const char *exec_comm, char *const exec_args[])
{
    pid_t child_processid = fork();

    if (child_processid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_processid == 0)
    {
        if (execvp(exec_comm, exec_args) == -1)
        {
            perror("execvp");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        int status;
        if (wait(&status) == -1)
        {
            perror("wait");
            exit(EXIT_FAILURE);
        }
    }
}
