#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all digits from any number to 98
 * @n: starting point of printing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("%d\n", 98);
}
