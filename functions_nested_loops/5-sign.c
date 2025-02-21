#include "main.h"

/**
* print_sign - Entry point to print the sign of number
* @result: sign to print
*
* Return: 1 if result greater than zero, 0 if zero, -1 if less than zero
*/

int print_sign(int result)
{
	if (result > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (result == 0)
	{
		_putchar(0);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
