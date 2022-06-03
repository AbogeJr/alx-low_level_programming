#include <stdio.h>
/**
 * main - prints letters of the alphabet except 'q' and 'e'
 * Return: 0 for successful exit status
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
