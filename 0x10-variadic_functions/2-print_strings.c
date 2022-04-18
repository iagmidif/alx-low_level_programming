#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: pointer to the separator to be used
 * @n: number of params passed
 *
 * Return: void, nth
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *next;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		next = va_arg(params, char *);
		printf("%s", (next ? next : "(nil)"));
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
