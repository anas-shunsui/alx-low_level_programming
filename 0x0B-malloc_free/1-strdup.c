#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int a = 0;
	int size = 0;
	char *i;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	i = malloc(size * sizeof(*str) + 1);

	if (i == 0)
		return (NULL);	
	while (a < size)
	{
		a++;
		i[a] = str[a];
	}
	return (i);
}
