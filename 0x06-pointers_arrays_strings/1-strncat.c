#include "main.h"

/**
 * _strncat - appends a string to another string upto n bytes
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: number of bytes to append
 *
 * Return: appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		if (i >= n)
			break;

		dest[len] = src[i];
		len++;
		i++;
	}

	if (i >= n)
	{
		dest[len] = '\0';
	}

	return (dest);
}
