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
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 0; space < postn; space++)
			{
				if (space == postn)
					_putchar('\\');
				else if (space < postn)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
