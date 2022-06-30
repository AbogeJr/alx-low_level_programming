#include "main.h"
#include <stdlib.h>

/**
 * getlen - returns the length of a string
 * @str: string to be processed
 *
 * Return: length of string
 */

unsigned int getlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = getlen(s1);
	len2 = getlen(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	if (n > len2)
	{
		n = len2;
	}

	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
