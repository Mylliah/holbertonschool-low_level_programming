#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination of strings
 * @src: source of string
 * @n: size in byte
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *index = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	dest = '\0';
	return (index);
}
