#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 * NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, subLen, test;

	if (*needle == '\0')
		return (haystack);
	subLen = 0;
	while (*(needle + subLen) != '\0')
		subLen++;
	i = 0;
	test = 0;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			for (j = 0; j < subLen; j++)
			{
				if (*(haystack + i + j) == *(needle + j))
					test = 1;
				else
				{
					test = 0;
					break;
				}
			}
			j = 0;
		}
		if (test == 1)
			return (haystack + i);
		i++;
	}
	return ('\0');
}
