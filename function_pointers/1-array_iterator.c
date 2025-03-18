#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - dynamically executes the function pointed by action
 * @array: pointer to the array of integers
 * @size: size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
