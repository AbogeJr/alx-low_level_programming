#include "main.h"

/**
 * puts_half - prints 2nd half of a string
 * @str: string to be processed
 */

void puts_half(char *str)
{
	int i, n, count = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	n = count % 2 == 0 ? count / 2 : (count - 1) / 2;

	for (i = n; i <= count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
