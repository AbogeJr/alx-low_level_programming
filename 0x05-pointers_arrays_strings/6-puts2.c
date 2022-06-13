#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be processed
 */

void puts2(char *str)
{
	int i, count = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
