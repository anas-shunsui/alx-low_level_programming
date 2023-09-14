#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string
 * @n: number
 * @...: integers
 *
 * Return: void
 */

#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
	va_list args;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
