#include "main.h"

/**
 * _isdigit - checks if digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if it's digit. 0 if else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
