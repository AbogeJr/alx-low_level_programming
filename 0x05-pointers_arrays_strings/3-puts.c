#include "main.h"

/**
 * _puts - prints a string to std out
 * @str: pointer to base index of the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
