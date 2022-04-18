#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that sums all if its parameters
 * @n: number of parameters passed
 *
 * Return: sum of all passed parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list params;

	va_start(params, n);

	for (; i < n; i++)
		sum += va_arg(params, int);
	return (sum);
}
