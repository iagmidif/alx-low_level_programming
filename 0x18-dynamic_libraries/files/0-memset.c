#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to the buffer to be used
 * @b: char to be filled in
 * @n: number of bytes
 *
 * Return: pointer to the new filled buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
