#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: point to array
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int letters; /* to store temporary the value during exchange */
	int start = 0;
	int end = n - 1; /* to begin at the end of array */

	while (start < end)
	{
		letters = a[start];
		a[start] = a[end];
		a[end] = letters;
		start++; /* to move forward */
		end--; /* to go back */
	}
}
