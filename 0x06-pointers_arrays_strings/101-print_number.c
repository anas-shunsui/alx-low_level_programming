#include "main.h"

/**
 * print_number - prints an inteder
 * @n: integer
 *
 * Return: always zero
 */

void print_number(int n)
{
	unsigned int a;
	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10 != 0)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
}
