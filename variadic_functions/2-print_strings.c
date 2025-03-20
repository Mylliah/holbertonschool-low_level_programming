#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings with separator between
 * @separator: string to separate strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);

			if (i < n - 1)
			{
				if (separator == NULL)
					continue;
				else
					printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
