#include "main.h"
#include <stdlib.h>

/**
 * *_func - memory with constant byte
 * @str: pointer
 * @c: constant
 * @b: byte
 *
 * Return: pointer
 */

char *_func(char *str, char c, unsigned int b)
{
	char *ptr = str;

	while (b--)
		*str++ = c;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
		return (NULL);

	_func(a, 0, sizeof(int) * nmemb);
	return (a);
}
