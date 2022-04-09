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
	int i, j, tmp;

	if (n <= 0)
		return;
	i = 0;
	j = n - 1;
	while (i <= n / 2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		i++;
		j--;
	}
}
