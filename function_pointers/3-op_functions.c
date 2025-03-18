#include "3-calc.h"

/**
 * op_add - function that adds two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: the result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substractes two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: the result of substracte
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: the result of multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: the result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that return the rest of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: the result of the rest of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
