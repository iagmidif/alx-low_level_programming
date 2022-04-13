#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to be created
 * @c: character to be used
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = c;

	return (a);
}
