#include "main.h"

/**
 * _puts - prints a string in reverse to std out
 * @s: pointer to base index of the string
 */

void print_rev(char *s)
{
	int i;
	int len = sizeof(s) / sizeof(char);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
