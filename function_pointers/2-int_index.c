#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in the array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index i if return O, -1 if size <= 0 or no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
