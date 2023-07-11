#include "main.h"
#include <stdlib.h>

/**
 * _stringlen - length of string
 * @str: string
 * Return: int
 */

int _stringlen(char *str)
{
	int size = 0;
	while (str[size] != '\0')
		size++;

	return (size);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int a, sizeA, sizeB;
	char *b;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sizeA = _stringlen(s1);
	sizeB = _stringlen(s2);
	b = malloc((sizeA + sizeB) * sizeof(char) + 1);
	if (b == 0)
		return (0);

	for (a = 0; a <= sizeA + sizeB; a++)
	{
		if (a < sizeA)
			b[a] = s1[a];
		else
			b[a] = s2[a - sizeA];
	}
	b[a] = '\0';
	return (b);
}
