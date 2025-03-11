#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		copy[i] = str[i];

	return (copy);
}
