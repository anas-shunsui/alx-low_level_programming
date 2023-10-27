#include "main.h"
/**
 * int get_bit - returns the value of a bit
 * at given index
 * @n: number
 * @index: index
 *
 * Return: value on bit at index, -1 in error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}