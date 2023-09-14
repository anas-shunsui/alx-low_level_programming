#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *fmt = (char *)format;
	char a;

	va_start(args, format);
	while ((a = *fmt++))
	{
		switch (a)
		{
			case '1':
				printf("%c", va_arg(args, int));
				break;
			case '2':
				printf("%d", va_arg(args, int));
				break;
			case '3':
				printf("%f", va_arg(args, double));
				break;
			case '4':
				str = va_arg(args, char*);
				printf("%s", str ? str : "(nil)");
				break;
		}
		if (*(fmt) && (a == 'c' || a == 'i' || a == 'f' || (a == 's' && str)))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
