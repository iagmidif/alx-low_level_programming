#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string to be checked
 * @c: character to be checked for
 *
 * Return: pointer to the first occurrence of c
 * NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
