#include "main.h"

/**
 * Length - length of string
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
	unsigned long fib1 = 1, fib2 = 2, sum, max = 1000000000, fibo1 = 0, fibo2 = 0, sum1 = 0;

	for (count = 1; count <= 98; count++)
	{

		if (fibo1 > 0)
			printf("%lu", fibo1);
		init = numLength(max) - 1 - numLength(fib1);

		while (fibo1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}

		printf("lu", fib1);

		sum = (fib1 + fib2) % max;
		sum1 = fibo1 + fibo2 + (fib1 + fib2) / max;
		fib1 = fib2;
		fibo1 = fibo2;
		fib2 = sum;
		fibo2 = sum1;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
