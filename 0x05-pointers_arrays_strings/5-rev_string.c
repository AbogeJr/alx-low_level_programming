#include "main.h"

/**
 * rev_string -reverses a string
 * @s: pointer to base index of the string
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char *start, *end, tmp;

	while (s[count] != '\0')
	{
		count++;
	}

	end = s;
	start = s;

	for (i = 0; i < count - 1; i++)
	{
		end++;
	}

	for (j = 0; j < count / 2; j++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		start++;
		end--;
	}
}
