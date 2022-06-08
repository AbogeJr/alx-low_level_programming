#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci series
 * Return: Always 0
 */

int main(void)
{
	long int i, j, k = 1, l = 2;

	printf("%ld, ", k);
	printf("%ld, ", l);
	for (i = 0; i < 50; i++)
	{
		j = k + l;
		k = l;
		l = j;
		printf("%ld, ", j);
	}

	return (0);
}
