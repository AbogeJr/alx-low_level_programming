#include "main.h"
0;276;0c
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to check for
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
