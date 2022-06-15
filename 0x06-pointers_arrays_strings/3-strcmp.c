#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: 1 if equal. 0 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	for (i = 0; s1[i] != '\0' && s2 != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return (flag);
}
