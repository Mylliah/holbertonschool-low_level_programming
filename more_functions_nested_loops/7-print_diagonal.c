#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on terminal
 * @n : number of times
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int row, column;

		for (row = 0 ; row < n ; row++) /* row moves forward for n lines */
		{
			for (column = 0 ; column < n ; column++) /* column moves forward for n */
			{
				if (row == column) /* in same alignment */
					_putchar(92); /* or '\\' */
				else if (column < row) /* not in same alignment */
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
