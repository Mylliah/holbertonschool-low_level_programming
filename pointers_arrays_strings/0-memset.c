#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
