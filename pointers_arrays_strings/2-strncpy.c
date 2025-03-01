#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of copy
 * @src: source of copy
 * @n: n caractère max
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;


	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
