#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: letter to be checked
 *
 * Return: 1 if letter is lowercase. 0 otherwise
 */

int _isalpha(int c)
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
