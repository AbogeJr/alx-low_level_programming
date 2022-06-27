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
	int i, j, **arr_grid, *arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_grid = malloc(sizeof(int) * (width * height));

	if (arr_grid)
	{
		for (i = 0; i < height; i++)
		{
			arr = malloc(sizeof(int)  * width);
			if (arr)
				arr_grid[i] = arr;
			else
			{
				free(arr_grid);
				for (j = 0; j < width; j++)
					free(arr_grid[j]);

				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr_grid[i][j] = 0;
			}
		}
	}
	else
		free(arr_grid);

	return (arr_grid);
}
