#include <stdio.h>

int main ()
{
	int test[2][3];
	int i, j, x;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter values for the matrix: \n");
			scanf("%d", &test[i][j]);
		}
	}
	for (x = 0; x <= 20; x++)
	{
		putchar('-');
	}

	printf("\n2D array elements are: \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", test[i][j]);

			if (j == 2)
			{
				printf("\n");
			}
		}
	}
	return (0);
}