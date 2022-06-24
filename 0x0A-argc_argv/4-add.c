#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - finds sum of numbers passed as arguments to command line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 - success. 1 - error.
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}


	return (0);
}
