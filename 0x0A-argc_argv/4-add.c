#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: num of arguments
 * @argv: pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 0;
	char *a;

	while (--argc)
	{
		for (c = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n", 1);
		result = result + atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
