#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: entier
 * @b: entier
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
