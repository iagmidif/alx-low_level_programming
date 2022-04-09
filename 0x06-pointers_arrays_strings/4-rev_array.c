#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: address to the array
 * @n: number of elements of the array
 *
 * Return: void, nth
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i == 0)
			printf("%d\n", *a);
		else
			printf("%d, ", *(a + i));
		i--;
	}
}
