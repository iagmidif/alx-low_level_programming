#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to array of char pointers
 *
 * Return: pointer to new string if successful
 * NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, len2;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = ac;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len2 = strlen(av[i]);
		for (j = 0; j < len2; j++)
			str[j + k] = av[i][j];
		str[k + len2] = '\n';
		k += len2 + 1;
	}
	str[len] = '\0';

	return (str);
}
