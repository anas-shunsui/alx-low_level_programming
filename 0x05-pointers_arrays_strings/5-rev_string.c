#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	while (s[a] != '\0')
		a++;

	for (b = 0; b < a; b++)
	{
		c = s[a];
		s[a] = s[a - 1 - b];
		s[a - 1 - b] = c;
	}
}
