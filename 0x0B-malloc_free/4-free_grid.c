#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: grid
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		a++;
		free(grid[a]);
	}
	free(grid);
}
