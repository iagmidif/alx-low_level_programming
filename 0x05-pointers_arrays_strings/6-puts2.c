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
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: address to the string
 *
 * Return: void, nth
 */
void puts2(char *str)
{
	int i, strLength;

	i = 0;
	strLength = _strlen(str);
	while (i < strLength)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
