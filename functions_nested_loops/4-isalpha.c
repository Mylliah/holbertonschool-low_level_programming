#include "main.h"

/**
 * _isalpha - Entry point to check for lowercase or uppercase character
 * @result: character to test
 *
 * Return: 1 if lowercase or uppercase character, else 0
 */

int _isalpha(int result)
{
	if ((result >= 97 && result <= 122) || (result >= 65 && result <= 90))
		return (1);
	else
		return (0);
}
