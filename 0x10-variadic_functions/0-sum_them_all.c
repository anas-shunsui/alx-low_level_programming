#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 * @...: integers
 *
 * Return: if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, b = n;
	va_list a;

	if (!n)
		return (0);
	va_start(a, n);
	while (b--)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
