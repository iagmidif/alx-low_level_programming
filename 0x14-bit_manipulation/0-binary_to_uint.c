#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be used
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string to be used
 *
 * Return: the converted number
 * or 0 if unvalid string is passed
 */
unsigned int binary_to_uint(const char *b)
{
	int weight = 1, i;
	unsigned int num = 0;

	if (!(*b))
		return (0);
	/* verify b contains a binary number */
	i = 0;
	while (b[i] != '\0')
	{
		if (!(b[i] == '1' || b[i] == '0'))
			return (0);
		i++;
	}
	i = _strlen(b) - 1;
	while (i >= 0)
	{
		num += (b[i] - 48) * weight;
		weight *= 2;
		i--;
	}
	return (num);
}
