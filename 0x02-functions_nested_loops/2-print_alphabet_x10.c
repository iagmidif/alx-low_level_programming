#include "main.h"

/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase
 *
 * Return: void, nothing
 */

void print_alphabet_x10(void)
{
	int i = 97, j = 0;

	for (; j < 10; j++)
	{
		for (; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
		i = 97;
	}
}
