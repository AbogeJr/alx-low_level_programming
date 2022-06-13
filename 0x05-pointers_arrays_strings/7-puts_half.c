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

	if (count % 2 != 0)
	{
		n = (count - 1) / 2;
	}
	else
	{
		n = count / 2;
	}

	for (i = 0; i < count; i++)
	{
		if (i >= n)
		{
			_putchar(*str + i);
		}
	}

	_putchar('\n');
}
