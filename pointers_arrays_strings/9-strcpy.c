#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: destination of copy
 * @src: source of copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
