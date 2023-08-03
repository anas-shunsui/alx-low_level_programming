#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number
 * @b: int
 *
 * Return: if n doesn't have natural square root return -1
 */
int sqr(int n, int b);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - square root
 * @n: int
 * @b: int
 *
 * Return: integer
 */

int sqr(int n, int b)
{
	if (b * b == n)
		return (b);
	if (b * b < n)
		return (sqr(a, b + 1));
	else
		return (-1);
}
