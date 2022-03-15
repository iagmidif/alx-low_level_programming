#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */

int _islower(int c)
{
	int i = (int)c;

	if (i > 96 && i < 123)
		return (1);
	return (0);
}
