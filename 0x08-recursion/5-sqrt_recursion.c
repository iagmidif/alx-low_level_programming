#include "main.h"

/**
 * sqrt_check - helper function
 * @n: integer to find a sqrt for
 * @m: potential sqrt
 *
 * Return: natural sqrt of n
 * -1 otherwise
 */
int sqrt_check(int n, int m)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (m <= n / 2)
		if (m * m == n)
			return (m);
		else
			return (sqrt_check(n, m + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds the natural sqrt of a number
 * @n: integer to used
 *
 * Return: natural sqrt of n
 * -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 0));
}
