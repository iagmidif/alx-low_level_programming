#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be used
 *
 * Return: 1 if positive, -1 if negative
 * 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
