#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: pointer to the numbers separator
 * @n: numbner of parameters passed
 *
 * Return: void, nth
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
