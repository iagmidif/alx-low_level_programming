#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 == s2
 * negative is s1 < s2
 * positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	cmp = 0;
	i = 0;
	while (cmp == 0)
	{
		if (*s1 == '\0' && *s2 != '\0')
			cmp = -1;
		else if (*s1 != '\0' && *s2 == '\0')
			cmp = 1;
		else
			cmp = (int) *(s1 + i) - (int) *(s2 + i);
		i++;
	}
	return (cmp);
}
