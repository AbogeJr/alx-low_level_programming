#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci series
 * Return: Always 0
 */

int main(void)
{
	int i, j, k = 1, l = 2;

	printf("%d, ", k);
	printf("%d, ", j);
	for (i = 0; i < 50; i++)
	{
		j = k + l;
		k = l;
		l = j;
		printf("%d", j);
	}

	return (0);
}
