#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed into it
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}