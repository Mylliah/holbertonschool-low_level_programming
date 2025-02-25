#include "main.h"

/**
 * print_line - function that draws a straight linein th terminal
 * @n: number of times
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
