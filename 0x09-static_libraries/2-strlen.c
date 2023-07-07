#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: string
 *
 * Return: input of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		++a;

	return (a);
}
