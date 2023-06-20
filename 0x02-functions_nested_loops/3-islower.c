#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: input of functions
 *
 * Return: return 1 if c is lowercase else always zero
 */

int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (1);
	return (0);
}
