#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes lowercase to uppercase
 * @a: pointer
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int i;
	
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'Z')
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
