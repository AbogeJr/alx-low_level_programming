#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command line arguments
 * @argv: aray of command line arguments
 *
 * Return: result of operation. Exit code on error
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
