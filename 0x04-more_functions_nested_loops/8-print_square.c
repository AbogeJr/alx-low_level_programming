#include "main.h"

/**
 * print_square  prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}
}
