#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int var = 0;

	if (*s > '\0')
	{
		var = var + _strlen_recursion(s + 1) + 1;
	}

	return (var);
}
