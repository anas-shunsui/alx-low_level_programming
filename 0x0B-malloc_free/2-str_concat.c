#include "main.h"
/**
 * _length - length of string
 * @str: string
 *
 * Return: int
 */

int _length(char *str)
{
	int size0 = 0;
	for (; str[size0] != '\0'; size0++)
		;

	return (size0);
}

/**
 * *str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: NUll on failure
 */

char *str_concat(char *s1, char *s2)
{
	int sizeA, sizeB, a;
	char *i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sizeA = _length(s1);
	sizeB = _length(s2);
	i = malloc((sizeA + sizeB) * sizeof(char) + 1);
	if (i == 0)
		return (0);

	for (a = 0; a <= sizeA + sizeB; a++)
	{
		if (a < sizeA)
			i[a] = s1[a];
		else
			i[a] = s2[a - sizeA];
	}
	i[a] = '\0';
	return (i);
}
