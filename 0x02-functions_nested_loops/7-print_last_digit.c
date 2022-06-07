#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: number whose last digit is to be printed
 *
 * Return: last digit of number
 */

int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		x = -x;
	}

	n = x % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(n + '0');
	return (n);
}
