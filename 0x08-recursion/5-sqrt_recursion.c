#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: num
 * @sqr: square root
 *
 * Return: int
 */

int square_root(int n, int sqr);
int _sqrt_recursion(int n)
{
	return (square_root(n - 1));
}

/**
 * square_root - find square root
 * @n: int
 * @sqr: square root
 *
 * Return: int
 */

int square_root(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square_root(n, sqr + 1));
	else
		return (-1);
}
