#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @str: string
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;
	
	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}

	return (n);
}
