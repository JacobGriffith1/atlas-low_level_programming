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
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
