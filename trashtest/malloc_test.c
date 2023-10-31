#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int i = 0;
	char *s;

	while (1)
	{
		s = malloc(INT_MAX);
		if (s == NULL)
		{
			printf("Can't Allocate %d Bytes (After %d Calls)\n", INT_MAX, i);
			return (1);
		}
		s[0] = 'H';
		i++;
	}
	return (0);
}