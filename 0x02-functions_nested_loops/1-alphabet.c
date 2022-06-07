#include <stdio.h>

void print_alphabet(void);

/**
 * main - calls alphabet function
 * Return: 0 if successful
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
