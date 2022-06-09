#include "main.h"

/**
 * print_line - prints a line
 * @n: number of '_' to be printed
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
