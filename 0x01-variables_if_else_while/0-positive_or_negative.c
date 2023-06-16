#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - sees if a number is positive, negative or zero.
 *
 * Return: always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf(n, "%d is positive\n");
	}
	if (n==0)
	{
		printf(n, "%d is zero\n");
	}
	if (n<0)
	{
		printf(n, "%d is positive\n");
	}
	return (0);
}
