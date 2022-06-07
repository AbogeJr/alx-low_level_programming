#include "main.h"
0;276;0c#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci series
 * Return: Always 0
 */

int main(void)
{
	int i, j, k = 1, l = 2;

	printf("%d, ", k);
	printf("%d, ", l);
	for (i = 0; i < 50; i++)
	{
		j = k + l;
		k = l;
		l = j;
		printf("%d", j);
	}

	return (0);
}
