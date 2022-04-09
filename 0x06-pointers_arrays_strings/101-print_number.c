#include "main.h"
#include <stdio.h>

/**
 * print_number - prints and integer
 * @n: integer to be printed
 *
 * Return: void, nth
 */
void print_number(int n)
{
	unsigned int i = n;
	
	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
