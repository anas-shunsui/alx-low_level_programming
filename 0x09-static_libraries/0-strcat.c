#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two string
 *
 * @dest: pointer to dest
 * @src: pointer to src
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, a1;

	a = 0;

	while (dest[a])
		a++;

	for (a1 = 0; src[a1]; a1++)
		dest[a++] = src[a1];

	return (dest);
}
