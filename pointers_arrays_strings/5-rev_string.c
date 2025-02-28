#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char letters; /* temporary variable */
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
		end++;
	end--;

	while (start < end)
	{
		letters = s[start];
		s[start] = s[end];
		s[end] = letters;
		start++;
		end--;
	}
}
