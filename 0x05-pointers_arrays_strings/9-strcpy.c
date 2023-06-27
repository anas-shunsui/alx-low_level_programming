#include "main.h"

/**
 * char *_strcpy - copies the string
 *@dest: cpy to
 *@src: cpy from
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j} = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
