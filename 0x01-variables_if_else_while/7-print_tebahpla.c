#include <stdio.h>
/**
 * main - prints lowercase letters of the alphabet in reverse
 * Return: 0 for successful exit status
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}
