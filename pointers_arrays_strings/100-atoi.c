#include "main.h"

/**
 * _atoi - function that covert a string to an integer
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int end = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (end == 1)
			break;

		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9' && end == 0)
		{
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				end = 1;
			result = result * 10 + (s[i] - '0');
		}
	}
	result = result * sign;
	return (result);
}
