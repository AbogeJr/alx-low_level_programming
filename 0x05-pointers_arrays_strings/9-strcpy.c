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
	int i, count;
	char *ptr = src;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
