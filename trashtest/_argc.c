#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	int count;
	int sum = 0;

	if (argc > 1)
	{
		printf("argc = %d\n", argc);
		printf("what is in argv[] ?\n");
		for (count = 1; count < argc; count++)
		{
			printf("arg[%d] = %s\n", count, argv[count]);
			sum += atoi(argv[count]);
		}
	}
	printf("Sum = %d\n", sum);
	return (0);
}