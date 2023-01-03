#include "search_algos.h"

void print_array(int *array, size_t i, size_t size);

/**
 * binary_search - binary search algorithm in an array
 * @array: list of elements
 * @size: size of the list
 * @value: target to search
 * Return: element index on success (-1) on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0;

	if (!array)
		return (-1);

	print_array(array, start, size);
	while (start < end)
	{
		mid = (start + end) / 2;
		if (array[mid] < value)
		{
			start = mid + 1;
			print_array(array, start, end + 1);
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
			print_array(array, start, end + 1);
		}
		else
			return (array[mid]);
	}
	return (-1);
}

/**
 * print_array - print all elements in an array
 * @array: list of elements
 * @i: index to init
 * @size: size of the array
 */
void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	} printf("\n");
}
