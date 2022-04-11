#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string to be used
 *
 * Return: length of *s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to be checked
 * @len: length of s
 * @i: increment and decrement variable
 *
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
	if (len == 0)
		return (1);
	if (*(s + i) == *(s + len - i))
		if (i >= ((len + 1) / 2))
			return (1);
		else
			return (check_palindrome(s, len, ++i));
	else
		return (0);
}

/**
 * is_palindrome - checks for a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s) - 1;
	return (check_palindrome(s, len, 0));
}
