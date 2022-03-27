#include "main.h"

/**
 * swap_char - swaps the values of two integers.
 * @a: first char address
 * @b: second char address
 *
 * Return: void, nth
 */
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
 * rev_string - reveses a string.
 * @s: address of the string
 *
 * Return: void, nth
 */
void rev_string(char *s)
{
	int i, strLength;
	char *start, *end;

	strLength = _strlen(s);
	start = s;
	end = s + (strLength - 1);
	for (i = 0; i < strLength / 2; i++)
	{
		swap_char(start, end);
		start += 1;
		end -= 1;
	}
}
