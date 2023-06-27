#include "main.h"

/**
 * _atoi - convetrs string to integer
 *
 * @s: string
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int i, a, b, len, digit, c;

	i = 0;
	a = 0;
	b = 0;
	len = 0;
	digit = 0;
	c = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			b = b * 10 + digit;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (b);
}
