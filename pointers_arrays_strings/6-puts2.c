#include "main.h"

/**
 * puts2 - function that prints other caracter of a string
 * @str: string
 */

void puts2(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		if (str[string + 1] != '\0')
			string += 2;
		else
			break;
	}
	_putchar('\n');
}
