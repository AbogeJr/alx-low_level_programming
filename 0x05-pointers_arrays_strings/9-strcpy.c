#include "main.h"


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
}
