#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @str: pointer
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '61' && str[i] <= '7A')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
