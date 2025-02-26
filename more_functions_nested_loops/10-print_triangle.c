#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, column, space;

		for (row = 0 ; row < size ; row++)
		{
			for (space = 0 ; space < size - row - 1 ; space++)
				_putchar(' ');

			for (column = 0 ; column <= row ; column++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
