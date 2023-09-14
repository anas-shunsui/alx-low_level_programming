#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: string
 * @n: number
 * @...: integers
 *
 * Returns: void
 */

#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *str;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char*);
		printf("%s", str ? str : "(nil)");
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
