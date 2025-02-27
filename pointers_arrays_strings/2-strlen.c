#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0; /* to iterate over characters from index 0 */

	while (s[length] != '\0') /* to iterate the string while is not \0 */
		length++; /* to count the total numbers characters */

	return (length);
}
