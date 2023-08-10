#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int n;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == 0)
		return (NULL);

	n = 0;
	while (n < nmemb * size)
	{
		result[n] = 0;
		n++;
	}

	return (result);
}
