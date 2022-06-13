#include "main.h"

/**
 * _strcpy - copies a string from source to destibation
 * @dest: destination for copied string
 * @src: source for copied string
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
