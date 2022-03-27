#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: address to the array
 * @n: number to be used
 *
 * Return: void, nth
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		puts("");
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
