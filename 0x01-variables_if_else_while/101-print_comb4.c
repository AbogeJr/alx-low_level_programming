#include <stdio.h>

/**
 * main - prints unique number combinations between 00 and 100
 * Return: 0 for sucess
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
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
	}

	putchar('\n');

	return (0);
}
