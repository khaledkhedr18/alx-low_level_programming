#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char comm[] = "ls -l token/";

	char* tokenized;
	char* delimited = " ";

	tokenized = strtok(comm, delimited);

	while (tokenized != NULL)
	{
		printf("Token: %s\n", tokenized);
		tokenized = strtok(NULL, delimited);
	}

	return (0);
}
