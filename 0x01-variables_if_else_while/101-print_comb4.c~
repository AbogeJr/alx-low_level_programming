#include <stdio.h>

/**
 * main - prints unique number combinations between 00 and 100
 * Return: 0 for sucess
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
