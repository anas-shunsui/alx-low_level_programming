#include "main.h"

/**
 * *create_array -  creates an array of chars, and initializes
 * it with a specific char
 * @size: size
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size)

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}
