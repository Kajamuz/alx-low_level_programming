#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2-dimensional grid created by alloc_grid.
 * @grid: The grid to free
 * @height: The grid's height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
