#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: 2D array grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr_grid;

	arr_grid = malloc(sizeof(int) * (width * height));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr_grid[i][j] = 0;
		}
	}

	return (arr_grid);
}
