#include <stdio.h>
/**
 * main - prints combinations of two digits
 *
 * Return: always zero
 */
int main(void)
{
	int comb1, comb2, comb3;

	for (comb1 = 48; comb1 = 58; comb1++)
	{
		for (comb2 = 49; comb2 = 58; comb2++)
		{
			for (comb3 = 50; comb3 < 58; comb3++)
			{
				if (comb3 > comb2 && comb2 > comb1)
				{
					putchar(comb1);
					putchar(comb2);
					putchar(comb3);
					if (comb1 != 56 || comb2 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
