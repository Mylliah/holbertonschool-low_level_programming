#include "main.h"

/**
 * _isupper - Entry point to check for lowercase character
 * @c: character to check
 *
 * Return: 1 if lowercase character, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
