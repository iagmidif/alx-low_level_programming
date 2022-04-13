#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the newly created string
 * NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *a;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	a = malloc(len1 + len2 + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		if (s1[i] != '\0')
			a[i] = s1[i];
	for (i = len1; i < (len1 + len2); i++)
		if (s2[i - len1] != '\0')
			a[i] = s2[i - len1];
	a[len1 + len2] = '\0';

	return (a);
}
