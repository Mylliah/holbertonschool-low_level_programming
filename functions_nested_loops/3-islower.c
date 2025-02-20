#include "main.h"

/**
 * _islower - Entry point to check for lowercase character
 * @result: character to test
 *
 * Return: 1 if lowercase character, else 0
 */

int _islower(int result)
{
	if (result >= 'a' && result <= 'z')
		return (1);
	else
		return (0);
}
