#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minmaum
 * @max: maximaum
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *result;
	int a, b;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == 0)
		return (NULL);

	a = min;
	b = 0;
	while (a <= max)
	{
		result[b] = a;
		a++;
		b++;
	}

	return (result);
}
