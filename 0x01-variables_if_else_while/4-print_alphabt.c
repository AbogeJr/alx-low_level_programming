#include <stdio.h>
/**
 * main - prints letters of the alphabet except 'q' and 'e'
 * Return: 0 for successful exit status
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
