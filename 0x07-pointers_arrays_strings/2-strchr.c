#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to check for
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr = s;

	for (i = 0; ptr[i] != '\0'; i++;)
	{
		if (ptr[i] == c)
		{
			break;
		}
	}

	if (ptr == '\0')
		ptr = NULL;

	return (ptr);

}
