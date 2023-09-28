#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num to print
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, result = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			result++;
		}
		else if (result)
			_putchar('0');
	}
	if (!result)
		_putchar('0');
}
