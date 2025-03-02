#include "main.h"

/**
 * leet - function that encodes a sting into 1337
 * @str: string
 *
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int replace;
	char old_char[] = "aAeEoOtTlL";
	char new_char[] = "4433007711";

	while (str[i] != '\0')
	{
		for (replace = 0; old_char[replace] != '\0' ; replace++)
		{
			if (str[i] == old_char[replace])
			{
				str[i] = new_char[replace];
				break;
			}
		}
	i++;
	}
	return (str);
}
