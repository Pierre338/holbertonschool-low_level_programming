#include "main.h"

/**
 * free_grid - free a 2-dimensional array created by alloc_grid
 * @grid: p
 * @height: n
 * Return: v
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
