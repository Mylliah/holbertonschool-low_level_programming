#include "main.h"

/**
 * print_to_98 - Entry point to print all numbers from n to 98
 * @n: number from start
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n <= 98 ; n++)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for ( ; n >= 98 ; n--)
		{
			if (n < 10)
				_putchar(n + '0');

			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
