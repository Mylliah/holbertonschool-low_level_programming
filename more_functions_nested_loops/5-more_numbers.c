#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int row, column;

	for (row = 0 ; row < 10 ; row++)
	{
		for (column = 0 ; column < 15 ; column++)
		{
			if (column >= 10)
			{
				_putchar(column / 10 + '0');
				_putchar(column % 10 + '0');
			}
			else
				_putchar(column + '0');
		}
		_putchar('\n');
	}
}
