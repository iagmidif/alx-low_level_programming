#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest
 * @dest: address of the destination
 * @src: address of the source
 *
 * Return: pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
