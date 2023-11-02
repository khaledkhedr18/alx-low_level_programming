#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *ptr = (int*)malloc(sizeof(int));
	ptr[0] = 98;

	printf("%d\n", *ptr);
	return (0);
}
