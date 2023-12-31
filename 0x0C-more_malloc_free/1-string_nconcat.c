#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: num of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int x, y, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		result[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		result[x] = s2[y];
		x++;
	}
	result[x] = '\0';

	return (result);
}
