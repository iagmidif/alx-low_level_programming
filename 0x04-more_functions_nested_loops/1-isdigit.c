#include "main.h"

/**
 * _isdigit - checks for uppercase character.
 * @c: variable to be checked
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
