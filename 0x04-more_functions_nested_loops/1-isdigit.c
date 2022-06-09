#include "main.h"

/**
 * _isupper - checks for a digit (0 through 9)
 * @c: character to be checked
 *
 * Return: 1 if digit. 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
