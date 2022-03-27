#include "main.h"
#include <stdio.h>

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
 * puts_half - prints half of a string, followed by a new line.
 * print the second half of the string
 * @str: the address of the string
 *
 * Return: void, nth
 */
void puts_half(char *str)
{
	int strLength, i;

	strLength = _strlen(str);
	if (strLength % 2 == 0)
	{
		for (i = strLength / 2; i < strLength; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = ((strLength + 1) / 2); i < strLength; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}

