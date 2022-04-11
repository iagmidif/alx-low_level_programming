#include "main.h"

/**
 * check_prime - helper function
 * @a: number to be checked
 * @b: divider
 *
 * Return: 1 if a is prime
 * 0 otherwise
 */
int check_prime(int a, int b)
{
	if (a < 2)
		return (0);
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (check_prime(a, b + 1));
}

/**
 * is_prime_number - checks if passed integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if n is prime number
 * 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
