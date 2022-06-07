#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: letter to be checked
 *
 * Return: 1 if letter is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
