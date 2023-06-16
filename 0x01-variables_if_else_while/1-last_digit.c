#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - sees if n is greater than 5, equals is 0, or is less than 6 and not 0
 *
 * Return: always zero
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 5)
        {
                printf(n,"Last digit of %i is %i and is greater than 5\n");
        }
        if (n == 0)
	{
		printf(n,"Last digit of %i is %i and is 0\n");
	}
	if (n < 6 && !(n=0))
	{
		printf(n,"Last digit of %i is %i and is less than 6 and not 0\n");
        return (0);
