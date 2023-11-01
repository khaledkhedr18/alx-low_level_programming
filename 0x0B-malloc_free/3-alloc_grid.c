#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			/* Free previously allocated rows */
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
		free(t[i]);
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	free(t);
	return (t);
}
