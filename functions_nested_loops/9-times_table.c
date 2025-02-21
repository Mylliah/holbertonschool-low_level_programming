#include "main.h"

/**
 * times_table - Entry point to print times tables from 0 to 9
 *
 */

void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			result = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result < 10)
				_putchar(result + '0');

			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
