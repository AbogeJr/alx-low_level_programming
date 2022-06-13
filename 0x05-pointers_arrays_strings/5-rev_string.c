#include "main.h"

/**
 * print_rev - prints a string in reverse to std out
 * @s: pointer to base index of the string
 */

void print_rev(char *s)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}

	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
