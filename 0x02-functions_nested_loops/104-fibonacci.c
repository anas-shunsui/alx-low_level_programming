#include "main.h"

/**
 * length - length of string
 *
 * @num: number
 *
 * Return: nubber of digits
 */

int length(int num)
{
	int len = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		len += 1;
	}
	return (len);
}
/**
 * main - entry point
 *
 * Description: 1st 98 fibonacci numbers
 *
 * Return: always zero
 */

int main(void)
{
	int count, init;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, fb1 = 0, fb2 = 0, su = 0;

	for (count = 1; count <= 98; count++)
	{

		if (fb1 > 0)
			printf("%lu", fb1);
		init = length(mx) - 1 - length(f1);

		while (fb1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		su = fb1 + fb2 + (f1 + f2) / mx;
		f1 = f2;
		fb1 = fb2;
		f2 = sum;
		fb2 = su;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
