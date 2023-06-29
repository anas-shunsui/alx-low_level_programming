#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an
 * array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int z, b, c;

	for (z = 0, b = (n - 1); z < b; z++; b--)
	{
		c = a[z];
		a[z] = a[b];
		a[b] = c;
	}
}
