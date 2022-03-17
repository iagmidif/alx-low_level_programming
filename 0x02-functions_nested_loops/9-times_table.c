#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void, nothing
 */

void times_table(void)
{
	int a, i, j;

	for (a = 0; a < 9; a++)
		printf("0,  ");
	puts("0");
	for (i = 1; i < 10; i++)
	{
		printf("0, ");
		for (j = 1; j < 10; j++)
		{
			if (i * j / 10 == 0)
				putchar(32);
			if (j != 9)
				printf("%d, ", i * j);
			else
				printf("%d", i * j);
		}
		putchar('\n');
	}
}
