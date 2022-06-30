#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: last value
 *
 * Return: pointer to array. NULL on failure
 */

int *array_range(int min, int max)
{
	int *ptr, i, nums = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		nums++;

	ptr = malloc(sizeof(int) * nums);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= nums; i++)
		ptr[i] = min++;

	return (ptr);
}
