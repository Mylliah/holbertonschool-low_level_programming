#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number 1
 * @y: number 2
 *
 * Return: the value of x raised to the power of y else -1
 */

int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	result = _pow_recursion(x, y - 1);
	return (x * result);
}
