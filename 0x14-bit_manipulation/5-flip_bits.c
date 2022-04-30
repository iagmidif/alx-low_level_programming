#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;
	unsigned long int xor = n ^ m;

	while (i < 64)
	{
		if (xor & (1 << i))
			count++;
		i++;
	}
	return (count >> 2);
}
