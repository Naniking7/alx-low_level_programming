#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: parameter for width
 * @height: parameter for height
 * Return: a pointer and NULL if fail or if height or width == 0
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int h, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc (height  * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		g[h] = malloc(width * sizeof(int));
		if (g[h] == NULL)
		{
			while (h >= 0)
				free(g[h--]);
			free(g);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			g[h][i] = 0;
	}
	return (g);
}
