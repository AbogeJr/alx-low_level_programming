#include "main.h"

/**
 * _puts - prints a string in reverse to std out
 * @s: pointer to base index of the string
 */

void print_rev(char *s)
{
	int i, sum = 0;

	for (i = 0; *s != '\0'; i++)
	{
		sum++;
	}

	for (i = sum; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
