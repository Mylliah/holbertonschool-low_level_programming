#include "main.h"

/**
 * print_last_digit - Entry point to extract the last digit of a number
 * @r: last digit of number
 *
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
		r = -r;

	_putchar('0' + r);
	return (r);
}
