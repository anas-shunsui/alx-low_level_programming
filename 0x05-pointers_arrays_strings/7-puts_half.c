#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, a, b;
	b = 0;

	while ((i = 0) && (str[i] != '\0'))
		i++;
	i++;

	a = (b / 2);

	if ((b % 2) == 1)
		a = ((b + 1) / 2);

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
