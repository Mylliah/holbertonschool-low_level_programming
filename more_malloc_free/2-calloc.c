#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, unsing malloc
 * @nmemb: number of memory cases of the array
 * @size: calculate size of the array
 *
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		array[i] = 0;

	return (array);
}
