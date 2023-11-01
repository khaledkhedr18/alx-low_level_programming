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

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else{
		for (i = 0; i < height; i++)
		{
			t[i] = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (i--)
				free(t[i]);
				free(t);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				t[i][j] = 0;
			}
		}
	}
	return (t);
}
