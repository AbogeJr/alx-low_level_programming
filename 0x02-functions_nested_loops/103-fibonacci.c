#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of even numbers of the fibonacci series below 4,000,000
 * Return: Always 0
 */

int main(void)
{
	long int i, j, sum = 0, k = 1, l = 2;

	for (i = 2; k <= 4000000; i++)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}

		j = k + l;
		k = l;
		l = j;

	}

	printf("%ld\n", sum);
	return (0);
}
