#include <stdlib.h>

/**
 * _strdup - copies a passed string to a newly created memory
 * @str: pointer to the string to be used
 *
 * Return: pointer to the newly created memory if successful
 * NULL otherwise
 */
char *_strdup(char *str)
{
	int i, size;
	char *a;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	a = malloc(size + 1);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = str[i];
	a[size] = '\0';

	return (a);
}
