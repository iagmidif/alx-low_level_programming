#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void, nothing
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
