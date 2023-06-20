#include "main.h"

/**
 * _isalpha - check if character is lowercase or uppercase
 *
 * @c: input
 *
 * Return: 1 is c if true, else zero
 */

int _isalpha(int c)
{
	if (c >= 9 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
