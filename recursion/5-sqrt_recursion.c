#include "main.h"

/**
 * _sqrt_function - function to calculate the square root
 * @n: number whose square root we are looking for
 * @x: the current value tested
 *
 * Return: square root if it exists, else -1
 */

int _sqrt_function(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_function(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: number whose square root we are looking for
 *
 * Return: square root if it exists, else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_function(n, 1));
}
