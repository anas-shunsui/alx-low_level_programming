#include "main.h"

/**
 * *create_array - create an array of chars
 * @size: size of array
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
		a[size] = c;

	return (a);
}
