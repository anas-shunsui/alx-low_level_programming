#include "main.h"

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
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
