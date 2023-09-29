#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor)
	{
		i += xor & 1;
		xor >>= 1;
	}

	return (i);
}
