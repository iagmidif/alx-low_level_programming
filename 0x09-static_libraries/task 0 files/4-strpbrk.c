#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be checked
 * @accept: pointer to the string the contains the accepted characters
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
