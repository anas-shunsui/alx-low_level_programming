#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *n;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				n = &s[a];
				return (n);
			}
			b++;
		}
		a++;
	}

	return (0);
}
