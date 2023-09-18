#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all parameters given
 * @n: function parameter
 *
 * Return: if n == 0 - 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list add;

	va_start(add, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(add, int);
	}
	return (sum);
	va_end(add);
}
