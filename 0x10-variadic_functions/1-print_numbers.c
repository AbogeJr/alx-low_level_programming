#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers passed as arguments
 * @separator: to be printed between numbers passed
 * @n: number of items to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
