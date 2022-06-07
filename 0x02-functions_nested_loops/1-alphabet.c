#include <stdio.h>

/**
 * alphabet - prints alphabet in lowercase
 */

void alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}

/**
 * main - calls alphabet function
 * Return: 0 is successful
 */

int main(void)
{
	alphabet();
	return (0);
}
