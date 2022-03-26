#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: length of the line
 *
 * Return: void, nth
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < n + 1; i++)
		{
			for (j = i - 1; j > 0; j--)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
