#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first int address
 * @b: second int address
 *
 * Return: void, nth
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
