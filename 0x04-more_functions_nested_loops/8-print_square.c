#include "main.h"

/**
 * print_square - print square
 *
 * @size: size
 *
 * Return: always zero
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
