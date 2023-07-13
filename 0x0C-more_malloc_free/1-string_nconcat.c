#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	s = malloc(len1 + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}

	s[a] = '\0';
	return (s);
}
