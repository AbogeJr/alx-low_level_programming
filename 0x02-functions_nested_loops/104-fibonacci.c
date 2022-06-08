#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of even numbers of the fibonacci series below 4,000,000
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k = 1, l = 2;

	for (i = 1; i <= 98; i++)
	{
		printf("%lu", k);
		if (i != 98)
		{
			printf(", ");
		}
		j = k + l;
		k = l;
		l = j;

	}

	printf("\n");
	return (0);
}
