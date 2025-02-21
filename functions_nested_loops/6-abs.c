#include "main.h"

/**
 * _abs - Entry point to compute the absolute value of an integer
 * @result: compute the absolute
 *
 * Return: @result absolute value
 */

int _abs(int result)
{
	if (result < 0)
		result = -result;

	return (result);
}
