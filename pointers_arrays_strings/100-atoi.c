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
	int num;

	while (s[i] == ' ')
		i++;
	

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = s[i] - '0';
		result = result * 10 + num;
		num = 1;
		i++;
	}
	result = result * sign;
	return (result);
}
