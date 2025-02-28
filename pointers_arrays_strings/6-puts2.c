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
		string += 2;
	}
	string--;
	_putchar('\n');
}
