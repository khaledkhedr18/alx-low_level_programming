#include <stdio.h>
#include <stdlib.h>

int add(int n1, int n2, int n3)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n1;
	t[1] = n2;
	t[2] = n3;
	sum = t[0] + t[1] + t[2];

	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	free(t);

}

int main(void)
{
	int n1, n2, n3;

	printf("Enter 3 numbers\n");
	scanf("%d%d%d", &n1, &n2, &n3);

	add(n1, n2, n3);
	return (0);
}