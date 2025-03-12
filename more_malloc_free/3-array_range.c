#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum number of integers in the array
 * @max: maximum number of integers in the array
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		array[i] = min + i;

	return (array);
}
