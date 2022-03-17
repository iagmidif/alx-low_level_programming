#include <stdio.h>

/**
 * main - entry point
 *  a program that prints all possible different combinations of three digits.
 *
 *  Returns: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
