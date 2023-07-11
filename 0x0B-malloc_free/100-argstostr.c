#include "main.h"
#include <stdlib.h>

/**
 * _stringlen - length of string
 * @str: str
 *
 * Return: integer
 */

int _stringlen(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: argument
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int a = 0, ab = 0, b = 0, c = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++, ab++)
		ab += _stringlen(av[a]);

	x = malloc(sizeof(char) * ab + 1);
	if (x == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			x[c] = av[a][b];

		x[c] = '\n';
		c++;
	}
	x[c] = '\0';
	return (x);
}
