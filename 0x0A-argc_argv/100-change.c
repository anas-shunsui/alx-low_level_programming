#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum num of coins to make change
 * for an amount of money
 *@argc: num of arguments
 *@argv: array

 *Return: 0 if success, 1 if fail
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a, b = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (a = 0; a < 5; a++)
		{
			if (cash >= cents[a])
			{
				b += cash / cents[a];
				cash = cash % cents[a];
				if (money % cnets[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
