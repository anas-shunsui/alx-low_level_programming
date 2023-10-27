#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: number
 * @index: bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1L << index);

	return (0);
}
