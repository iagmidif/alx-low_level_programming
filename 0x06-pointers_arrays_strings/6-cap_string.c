#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be used
 
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int count = 0, i;
	int word_sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == word_sep[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
