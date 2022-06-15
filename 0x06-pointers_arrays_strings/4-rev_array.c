#include "main.h"

/**
 * reverse_array - revrses an array
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j, *temp;

	for (i = 0, j = n - 1; i < n && j >= 0; i++, j--)
	{
		temp[i] = a[j];
	}

	a = temp;
}
