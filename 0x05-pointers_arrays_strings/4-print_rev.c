#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: address of the string
 *
 * Return: length of *s
 */
int _strlen(char *s)
{
	int i, length;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length += 1;
		i += 1;
	}
	return (length);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: address to the string
 *
 * Return: void, nth
 */
void print_rev(char *s)
{
	int strLength, i;

	strLength = _strlen(s);
	for (i = strLength - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

