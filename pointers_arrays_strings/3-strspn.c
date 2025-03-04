#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string to find
 *
 * Return: the count of the string containing the string to find
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		int char_found = 0;

		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				char_found = 1;
				break;
			}
		}
		if (!char_found)
			break;
	count++;
	}
	return (count);
}
