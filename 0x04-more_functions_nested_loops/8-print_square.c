#include "main.h"

/**
 * print_square  prints a square
 * @square: size of square
 */

void print_square(int size)
{
	int i, j;

	for (i = square; i > 0; i--)
	{
		for (j = square; j > 0; j--)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}
}