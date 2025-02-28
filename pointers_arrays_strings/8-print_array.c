#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints N elements of an array of integers
 * @a: position
 * @n: number
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0 ; index < n ; index++)
		if (index < n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
	printf("\n");
}
