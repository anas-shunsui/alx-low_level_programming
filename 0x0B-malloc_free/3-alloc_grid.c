#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		i[a] = malloc(sizeof(int) * width);

		if (i[a] == NULL)
		{
			for (; a >= 0; a--)
				free(i[a]);

			free(i);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			i[a][b] = 0;
	}

	return (i);
}
