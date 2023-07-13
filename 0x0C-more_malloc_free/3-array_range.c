#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: minimaum
 * @max: maximaum
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, length, *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (a = 0; a < length; a++)
		ptr[a] = min++;

	return (ptr);
}
