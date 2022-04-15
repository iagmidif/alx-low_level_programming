#include <stdlib.h>

/**
 * free_pta - frees a memory used by a 2d array
 * @pta: pointer to an array of pointers
 * @i: size of the array
 *
 * Return: void, nth
 */
void free_pta(char **pta, int i)
{
	if (pta != NULL && i > 0)
	{
		while (i >= 0)
		{
			free(pta[i]);
			i--;
		}
		free(pta);
	}
}

/**
 * splits a string into words.
 * @str: pointer to the string to be split
 *
 * Return: pointer to an array of char pointers if successful
 * NULL otherwise
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, k, c, words;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = 0;
	for (c = words; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			words++;
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL || words == 0)
	{
		free(arr);
		return (NULL);
	}
	k = 0;
	for(i = k; i < words; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			else if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr[i] = malloc(sizeof(char) * (c - k + 2));
				if (arr[i] == NULL)
				{
					free_pta(arr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; j++, k++)
			arr[i][j] = str[k];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
