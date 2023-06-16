#include <stdio.h>
/**
 * main - prints hexadecimal
 *
 * Return: always zero
 */
int main(void)
{
	char hexa;

	for (hexa = 48; hexa < 58; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 97; hexa < 103; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
