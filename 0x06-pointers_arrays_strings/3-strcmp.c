#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 1 if true, 2 if not
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (eq);
}
