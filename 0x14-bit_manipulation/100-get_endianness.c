#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1; /* Only LSbit is set */
	char *c = (char *) &n; /* will be set to the first bit of n */

	/**
	 * *c = 0 => n is stored as 00 00 00 01 => little endian
	 * *c = 1 => n is stored as 01 00 00 00 => big endian
	 */
	if (*c)
		return (1);
	else
		return (0);
}
