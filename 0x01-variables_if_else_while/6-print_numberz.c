#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: always zero
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
