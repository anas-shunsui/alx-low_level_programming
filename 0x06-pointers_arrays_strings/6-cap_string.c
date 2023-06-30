#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@a: string
 *
 *Return: a
 */

char *cap_string(char *a)
{
	int ind = 0;

	while (a[ind])
	{
		while (!(a[ind] >= 'a' && a[ind] <= 'z'))
			ind++;

		if (a[ind - 1] == ' ' ||
		a[ind - 1] == '\t' ||
		a[ind - 1] == '\n' ||
		a[ind - 1] == ',' ||
		a[ind - 1] == ';' ||
		a[ind - 1] == '.' ||
		a[ind - 1] == '!' ||
		a[ind - 1] == '?' ||
		a[ind - 1] == '"' ||
		a[ind - 1] == '(' ||
		a[ind - 1] == ')' ||
		a[ind - 1] == '{' ||
		a[ind - 1] == '}' ||
		ind == 0)
			a[ind] -= 32;
		ind++;
	}

	return (a);
}
