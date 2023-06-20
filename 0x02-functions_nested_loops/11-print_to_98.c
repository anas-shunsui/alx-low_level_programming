#include "main.h"

/**
 * print_to_98 - print n to 98 counts separated by comma
 *
 * @n: input
 */

void print_to_98(int n)
{
	int b;

	if (n > 98)
		for (b = n; b > 98; b--)
			printf("%d, ", b);
	else
		for (b = n; b < 98; b++)
			printf("%d, ", b);
	printf("98\n");
}
