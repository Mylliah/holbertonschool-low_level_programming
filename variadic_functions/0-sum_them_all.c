#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that adds all its parameters
 * @n: parameter number to add
 *
 * Return: the result of addition
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int result = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
		result += va_arg(args, int);

	va_end(args);
	return (result);
}
