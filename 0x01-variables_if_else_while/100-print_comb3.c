#include <stdio.h>
/**
 * main - prints combinations of two digits
 *
 * Return: always zero
 */
int main(void)
{
	int comb1, comb2;

	for (comb1 = 48; comb1 <= 57; comb1++)
	{
		for (comb2 = 49; comb2 <= 57; comb2++)
		{
			if (comb2 > comb1)
			{
				putchar(comb1);
				putchar(comb2);
				if (comb1 != 56 || comb2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
