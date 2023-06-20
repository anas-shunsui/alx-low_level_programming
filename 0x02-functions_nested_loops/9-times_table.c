#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Example Table
 */

void times_table(void)
{
	int num, b, c;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = num * b;

			/*
			 * create space if production is a single number
			 * place the 1st digit if it's two num
			 */
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48); /*get the 1st digit*/
			_putchar((c % 10) + 48); /*get the 2nd digit*/
		}
		_putchar('\n');
	}
}

