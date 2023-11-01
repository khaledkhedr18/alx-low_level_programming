#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - a function that frees
* Return: void
* @grid: the grid we're going to free
* @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	int i = 0;
	
	for (; i< height; i++)
	free(grid[i]);
	free(grid);
}
