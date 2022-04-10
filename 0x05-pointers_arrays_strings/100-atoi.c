#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer.
 * @s: address to the string to be used
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i, n;
	int len = strlen(s);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		n = (int) *(s + i);
		if (n < 48 || n > 57)
		{
			if (i < len)
				*(s + i) = *(s + i + 1);
			else
				break;
		}
	}
	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
	return (0);
}
