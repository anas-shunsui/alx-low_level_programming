#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: always zero
 */

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *b;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	b = malloc(size * sizeof(*str) + 1);

	if (b == 0)
		return (NULL);
	for (; a < size; a++)
		b[a] = str[a];

	return (b);
}
