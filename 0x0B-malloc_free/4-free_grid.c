#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2 dim. array to free
 * @height: parmetwr for height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid != NULL || height != 0)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
	}
}
