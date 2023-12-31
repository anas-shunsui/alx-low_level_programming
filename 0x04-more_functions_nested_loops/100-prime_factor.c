#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 *
 * Return: always zero
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i))
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
