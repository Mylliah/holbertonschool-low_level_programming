#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers with separator between
 * @separator: string to separate numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int numbers = 0;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		numbers = va_arg(args, int);
		printf("%d", numbers);
		if (i < n - 1)
		{
			if (separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
