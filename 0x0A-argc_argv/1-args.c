#include <stdio.h>
#include "main.h"

/**
 * main - prints number of command line arguments
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 - success.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
