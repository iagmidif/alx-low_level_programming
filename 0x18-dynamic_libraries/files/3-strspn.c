#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the main string
 * @accept: pointer to the string consisiting of the accepted characters
 *
 * Return: number of bytes in the initial segment of s,
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res;
	int i, j;

	i = 0;
	res = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				res++;
				break;
			}
			else if (*(accept + j + 1) == '\0')
				return (res);
			j++;
		}
		i++;
	}
	return (res);
}
