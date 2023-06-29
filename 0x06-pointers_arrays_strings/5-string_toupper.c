#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @str: string
 * Return: string
 */

char *string_toupper(char *)
{
	int i, str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
