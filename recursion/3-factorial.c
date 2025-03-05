#include "main.h"

/**
 * factorial - function that returns the factorial of a given nb
 * @n: number
 *
 * Return: factorial of nb or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
