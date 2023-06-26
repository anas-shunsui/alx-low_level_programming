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
	int i;

	while (i = 0 && str[i] != '\0')
		i++;
	
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
