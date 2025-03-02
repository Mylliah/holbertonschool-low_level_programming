#include "main.h"

/**
 * string_toupper - function that changes lowercase letter to string uppercase
 * @str: string to change
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
			str[letter] = str[letter] - 32;  /* or '-= 32' */
		letter++;
	}
	return (str);
}
