#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always zero
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int alph;
	for (alph = 0; alph < 26; alph++)

	{
		putchar(alphabet[alph]);
	}
	putchar('\n');
	return (0);
}
