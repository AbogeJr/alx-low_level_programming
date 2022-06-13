#include "main.h"



void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("array[%d] = %d", i, a[i]);

		if (i != n)
			printf(", ");
	}
}
