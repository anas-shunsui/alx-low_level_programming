#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; postn <= n; pos++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
