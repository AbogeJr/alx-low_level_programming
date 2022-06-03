#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * separated by commas and spaces
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
