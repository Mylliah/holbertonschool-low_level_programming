#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: array
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
