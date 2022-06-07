#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');
		i++;
	}
}
