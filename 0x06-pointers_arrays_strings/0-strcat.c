#include "main.h"

/**
 * _strcat - appends a string to another string
 * @dest: string to be appended to
 * @src: string to be appended
 *
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[len] = '\0';

	return dest;
}
