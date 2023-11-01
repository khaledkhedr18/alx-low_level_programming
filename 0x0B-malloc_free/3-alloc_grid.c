#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - a function that returns a pointer to a 2d array
* Return: int
* @width: the width of the array
* @height: the height of the array
*/

int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;

	if (width == 0)
	return (NULL);

	if (height == 0)
	return (NULL);

	t = malloc(height * sizeof(int *));
	if (t == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
		for (j = 0; j < width; j++)
		{
			free(t[j]);
		}
		free(t);
		return (NULL);
		}
	}
	for (j = 0; j < width; j++)
	{
		t[i][j] = 0;
	}
	return (t);
}
