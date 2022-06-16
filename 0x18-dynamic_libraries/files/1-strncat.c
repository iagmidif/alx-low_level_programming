#include "main.h"

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
