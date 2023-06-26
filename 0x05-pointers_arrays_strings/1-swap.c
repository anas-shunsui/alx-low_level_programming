#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: input one
 * @b: input two
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
