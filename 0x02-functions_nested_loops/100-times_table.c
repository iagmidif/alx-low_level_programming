#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: number to be used
 *
 * Return: void, nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	else if (n == 0)
		puts("0");
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					printf("0,"); 
				else if (j < n)
					printf("%4d,", i * j);
				else if (j == n)
					printf("%4d\n", i * j);
			}
		}
	}
}
