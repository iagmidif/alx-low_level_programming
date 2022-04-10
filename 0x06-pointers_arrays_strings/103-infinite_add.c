#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 *
 * Return: void, nth
 */

void rev_string(char *a)
{
	int i , j;
	char tmp;

	i = 0;
	while (*(a + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = tmp;
	}
}

/**
 * infinite_add - adds two numbers to a given buffer
 * @n1: pointer to the first integer string
 * @n2: pointer to the second integer string
 * @r: pointer to the buffer that will be used to store the result
 * @size_r: size of the buffer
 *
 * Return: result of the sum
 * otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, remainder = 0, digits = 0;
	int val1 = 0, val2 = 0, tmp_res = 0;

	while (*(n1 + i) != '\0')
		i++;
	i--;
	while (*(n2 + j) != '\0')
		j++;
	j--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || remainder == 0)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tmp_res = val1 + val2 + remainder;
		if (tmp_res >= 10)
			remainder = 1;
		else
			remainder = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_res % 10) - '0';
		i--;
		j++;
		digits++;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
