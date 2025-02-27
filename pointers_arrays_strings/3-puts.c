#include "main.h"

/**
 * _puts - function that prints a string to stdout
 * @str: string
 *
 * Return: string
 */

void _puts(char *str)
{
	int output = 0;

	while (str[output])
	{
		output++;
		_putchar(str[output]);
	}

	_putchar('\n');
}
