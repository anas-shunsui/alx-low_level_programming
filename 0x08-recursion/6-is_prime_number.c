#include "main.h"

/**
 * is_prime_number - find if n is a prime number or not
 * @n: num
 *
 * Return: 1 if n is prime num, 0 if not
 */

int prime(int n, int a);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - n is a prime num
 * @n: num
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime(n, a - 1));
}
