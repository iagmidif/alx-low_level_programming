#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array to be used
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
