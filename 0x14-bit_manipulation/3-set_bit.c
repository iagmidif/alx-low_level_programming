#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to be used
 * @index: index of the bit
 *
 * Return: 1 on success
 * -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* older solution */
	/*
	 * unsigned long int num = 0, weight = 1;
	 * int i = 0;
	 *
	 * if (index >= 64)
	 *	return (-1);
	 *
	 * while (i < 64)
	 * {
	 *	if (index == 0)
	 *		num += weight;
	 *	else
	 *		num += ((*n & 1) ? weight : 0);
	 *	index--;
	 *	weight *= 2;
	 *	*n >>= 1;
	 *	i++;
	 * }
	 * *n = num;
	 * return (1);
	 */
	/* new solution */
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
