#include <stdio.h>
#include <stdlib.h>

void add(int n1, int n2, int n3)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t));
	t[0] = n1;
	t[1] = n2;
	t[2] = n3;
	sum = t[1] + t[2] + t[0];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	free(t);
}


int main(void)
{
	int num1, num2, num3;

	printf("Enter 3 numbers\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	add(num1, num2, num3);
	return (0);
}