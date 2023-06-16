#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: always zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
