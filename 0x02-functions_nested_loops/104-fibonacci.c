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
	unsigned long fi1 = 1, fi2 = 2, sum, mx = 1000000000, fib1 = 0, fib2 = 0, sum1 = 0;

	for (count = 1; count <= 98; count++)
	{

		if (fib1 > 0)
			printf("%lu", fib1);
		init = length(mx) - 1 - length(fi1);

		while (fib1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}

		printf("%lu", fi1);

		sum = (fi1 + fi2) % mx;
		sum1 = fib1 + fib2 + (fi1 + fi2) / mx;
		fi1 = fi2;
		fib1 = fib2;
		fi2 = sum;
		fib2 = sum1;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
