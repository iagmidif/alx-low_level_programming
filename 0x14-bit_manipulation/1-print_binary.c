#include "main.h"

/**
 * print_binary_help - helper function for print_binary
 * @n: number to be used
 *
 * Return: void, nth
 */
void print_binary_help(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_help(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be used
 *
 * Return: void, nth
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_help(n);
}
