#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always zero
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alph;

	for (alph = 0; alph < 52; alph++)
	{
		putchar(alphabet[alph]);
	}
	putchar('\n');
	return (0);
}

