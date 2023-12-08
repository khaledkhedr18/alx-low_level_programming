#include "shell_headerrr.h"


void khedira_tokenize(const char *myinput, char *const mytokens[], int mylargestargs)
{
    char *command = strtok(myinput, " \n");
    int i = 0;

    while (command != NULL && i < mylargestargs)
	{
        mytokens[i++] = command;
        command = strtok(NULL, " \n");
    }

    mytokens[i] = NULL;
}