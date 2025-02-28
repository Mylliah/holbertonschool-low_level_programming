#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s : string
 *
 */

void print_rev(char *s)
{
	int letter = 0;
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (letter = length - 1 ; letter >= 0 ; letter--)
		_putchar(s[letter]);

	_putchar('\n');
}
