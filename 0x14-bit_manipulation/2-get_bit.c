#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be used
 * @index: index of the bit to return
 *
 * Return: the bit at the index
 * -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (n == 0 && index == 0)
		return (0);
	while (i  < 64)
	{
		if (index == 0)
			return ((n & 1) ? 1 : 0);
		index--;
		n >>= 1;
		i++;
	}
	return (-1);
}
