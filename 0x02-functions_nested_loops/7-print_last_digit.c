#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be used
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + abs(n % 10));
	return (abs(n % 10));
}
