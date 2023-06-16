#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabet without e and q
 *
 * Return: always zero
 */
int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		if (alphabet != 101 && alphabet != 113)
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}

