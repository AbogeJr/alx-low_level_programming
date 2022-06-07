#include "main.h"

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		i++;
	}
}
