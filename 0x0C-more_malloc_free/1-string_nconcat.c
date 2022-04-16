#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: newly created memory pointer if successful
 * NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *a;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (len2 > n)
		len2 = n;

	a = malloc(sizeof(*a) * (len1 + len2 + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];

	for (i = 0; i < len2; i++)
		a[i + len1] = s2[i];
	a[len1 + len2] = '\0';
	return (a);
}
