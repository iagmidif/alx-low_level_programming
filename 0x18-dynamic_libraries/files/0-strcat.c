#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: address to the dest string
 * @src: address to the src string
 *
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, destlen;

	destlen = _strlen(dest);
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}
	*(dest + destlen + i) = '\0';
	return (dest);
}
