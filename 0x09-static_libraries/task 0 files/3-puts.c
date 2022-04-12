#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: address to the string
 *
 * Return: void, nth
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 1;
	}
	_putchar('\n');
}
