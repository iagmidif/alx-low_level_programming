#include <stdio.h>

/**
 * main - entry point
 * a program that prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(32);
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i / 10 != 9 || i % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
