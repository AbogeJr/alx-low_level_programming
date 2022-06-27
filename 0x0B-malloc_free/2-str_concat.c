#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			ptr[i] = s2[j];
		}

		ptr[i] = '\0';
	}

	return (ptr);
}
