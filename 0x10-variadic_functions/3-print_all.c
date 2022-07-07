#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints all arguments passed with format
 * @format: format specifiers for arguments passed
 */

void print_all(const char * const format, ...)
{
	int x, i = 0, num = strlen(format);
	double f;
	char c, *str;
	va_list ap;

	va_start(ap, format);
	while (i < num)
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			x = va_arg(ap, int);
			printf("%d", x);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(ap, char*);
			if (!str)
				printf("(nil)");
			printf("%s", str);
			break;
		default:
			break;
		}
		if (i != num - 1)
		{
			printf(", ");
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
