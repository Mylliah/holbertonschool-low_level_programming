#include "main.h"

/**
 * _prime - tests if n is prime number
 * @n: number to test
 * @x: divisor, start to 2
 *
 * Return: returns 1 if n is prime number, otherwise return 0
 */

int _prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (x * x > n)
		return (1);

	if (n % x == 0)
		return (0);

	return (_prime(n, x + 1));
}

/**
 * is_prime_number - checks the prime number of an integer
 * @n: number to test
 *
 * Return: returns 1 n if prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
