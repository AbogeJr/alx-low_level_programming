#include "main.h"

/**
 * swap_int - swaps teo variable values
 * @a: pointer to value to be swapped
 * @b: pointer to value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
