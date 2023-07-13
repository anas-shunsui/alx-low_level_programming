#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (!nmemb || !size)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	nmemb = nmemb * size;
	while (nmemb)
		a[nmemb] = 0;
	return (a);
}
