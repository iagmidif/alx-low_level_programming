#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: address of the string
 *
 * Return: length of *s
 */
int _strlen(char *s)
{
	int i, length;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length += 1;
		i += 1;
	}
	return (length);
}

/**
 * _strncat - concatenates two strings.
 * @dest: address to the dest string
 * @src: address to the src string
 * @n: number of bytes to be concatenated
 *
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destlen, srclen;

	destlen = _strlen(dest);
	srclen = _strlen(src);
	i = 0;
	if (n < srclen)
	{
		while (i < n)
		{
			*(dest + destlen + i) = *(src + i);
			i++;
		}
	}
	else
	{
		while (*(src + i) != '\0')
		{
			*(dest + destlen + i) = *(src + i);
			i++;
		}
	}
	*(dest + destlen + i) = '\0';
	return (dest);
}
