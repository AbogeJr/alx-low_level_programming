#include "main.h"
0;276;0c
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

	if (count % 2 == 0)
	{
		n = count / 2;

		for (i = n; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (count - 1) / 2;

		for (i = n; i < count - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}


	_putchar('\n');
}
