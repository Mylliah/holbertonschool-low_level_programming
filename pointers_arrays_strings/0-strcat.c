#include "main.h"

/**
 * _strcat - function that concatenates two strings ans terminate by '\0'
 * @dest: destination of strings
 * @src: source of string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *index = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	dest = '\0';
	return (index);
}
