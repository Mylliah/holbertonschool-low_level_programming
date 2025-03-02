#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0; /* index of str */
	int sep_i = 0; /* index of separator's array */
	char separator[] = " \t\n,;.!?\"(){}";
	int uppercase = 1; /* boolean to indicate whether we must capitalize */

	while (str[i] != '\0')
	{
		if (uppercase && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		uppercase = 0;

		for (sep_i = 0 ; separator[sep_i] != '\0' ; sep_i++)
		{
			if (str[i] == separator[sep_i])
			{
				uppercase = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
