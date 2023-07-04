#include "main.c"

/**
 * print_diagsums - prints sum of 2 diagonals
 * @a: input
 * @size: input
 *
 * Return: always zero
 */

void print_diagsums(int *a, int size)
{
	int add1, add2, i;

	add1 = 0;
	add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		add2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", add1, add2);
}
