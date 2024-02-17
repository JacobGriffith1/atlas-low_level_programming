#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - FREES a 2D GRID created by 'alloc_grid'.
 * @grid: The GRID to be FREED.
 * @height: The HEIGHT of the GRID.
 * Return: N/A
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
}
