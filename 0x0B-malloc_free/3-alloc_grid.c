#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a pointer to a two dimensional array of int
 * @width: int
 * @height: int
 *
 * Return: second array
 */

int **alloc_grid(int width, int height)
{
	int **a, b, c;

	a = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			a[b] = malloc(sizeof(**a) * width);
			if (a[b] == 0)
			{
				while (b--)
					free(a[b]);
				free(a);
				return (NULL);
			}

			for (c = 0; c < width; c++)
				a[b][c] = 0;
		}
	}

	return (a);
}
