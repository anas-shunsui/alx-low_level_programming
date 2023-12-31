#include "main.h"

/**
 * *_memcpy - copies n bytes from memory src to dest
 * @dest: memory area
 * @src: src
 * @n: bytes from memory area src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
