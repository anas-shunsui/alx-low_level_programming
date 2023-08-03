#include "main.h"

/**
 * is_prime_number - Verify if n is a prime number
 * @n: number
 * @a: int
 *
 * Return: 1 if int is a prime number, else return 0
 */

int checker(int n, int a);
int is_prime_number(int n)
{
	return (checker(n, 2));
}

/**
 * checker - checks all numbers
 * @n: number
 * @a: int
 *
 * Return: int
 */

int checker(int n, int a)
{
	if (a >= n && n > 1)
		return (1);
	if (n % a == 0 || n <= 1)
		return (0);
	else
		return (checker(n, a + 1));
}
