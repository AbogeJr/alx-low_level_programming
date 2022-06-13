#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: pointer to base index of the string
 *
 * Return: length of string (integer)
 */

int _strlen(char *s)
{
	int i, sum = 0;

	for (i = 0; *s != '\0'; i++)
	{
		sum++;
		s++;
	}

	return (sum);
}
