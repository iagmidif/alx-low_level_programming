#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything.
 * @format: pointer to the format string
 * - c for char
 * - i for integer
 * - f for float
 * - s for char *
 *
 * Return: void, nth
 */
void print_all(const char * const format, ...)
{
	va_list params;
	int i, len;
	char *str;

	va_start(params, format);
	len = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 's' || format[i] == 'c'
				|| format[i] == 'i' || format[i] == 'f')
			len++;
		i++;
	}
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int)), len--;
				break;
			case 'i':
				printf("%d", va_arg(params, int)), len--;
				break;
			case 'f':
				printf("%f", va_arg(params, double)), len--;
				break;
			case 's':
				str = va_arg(params, char *);
				printf("%s", str ? str : "(nil)"), len--;
				break;
		}
		if (len && (format[i] == 's' || format[i] == 'c'
					|| format[i] == 'i' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	printf("\n"), va_end(params);
}
