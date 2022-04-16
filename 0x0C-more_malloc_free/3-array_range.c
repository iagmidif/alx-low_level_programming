#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * - The array created should contain all the values from min (included)
 * - to max (included), ordered from min to max
 * @min: starting value
 * @max: end value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
