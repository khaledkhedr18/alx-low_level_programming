#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork failed");
        return 1;
    }
    else if (child_pid == 0)
    {
        printf("Hello from the child process!\n");
    }
    else
    {
        printf("Hello from the parent process! Child PID: %d\n", child_pid);
    }

    return 0;
}
