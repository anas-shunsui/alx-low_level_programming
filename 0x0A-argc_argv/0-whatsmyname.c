#include <stdio.h>
#include "main.h"

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: int
 * Return: always zero
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
