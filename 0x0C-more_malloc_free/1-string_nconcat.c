#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: num of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char s1, char s2, unsigned int n)
{
	char *result;
	unsigned int x, y, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		n = s2_len;
/**	for (s1_len = 0; s1[s1_len] != '\0', s1_len++)
		printf("%d\n", s1_len);**/
/**	for (s2_len = 0; s2[s2_len] != '\0', s2_len++)
		printf("%d\n", s2_len);**/

	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < s1_len; x++)
		result[x] = s1[i];
	for (y = 0; y < x; y++, x++)
		result[x] = s2[y];
	result[x] = '\0';

	return (result);
}
