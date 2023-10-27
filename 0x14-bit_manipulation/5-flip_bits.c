#include "main.h"

/**
 * flip_bits - returns number of bits you would need to
 * flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		if (i & 1ul)
			count++;
		i = i >> 1;
	}
	return (count);
}