#include "main.h"

/**
 * main - entry point
 *
 * Description: the 1st 50 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (a = 0; a < 50; a++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}return (0)
}
