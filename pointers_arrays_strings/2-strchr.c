#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string in which to search
 * @c: character to found
 *
 * Return: s or 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (0);
}
