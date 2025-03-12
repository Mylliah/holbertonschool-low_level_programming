#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: characters number to copy
 *
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fusion;
	unsigned int i, j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)                                                         s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
                n = len2;

	fusion = malloc((len1 + n + 1) * sizeof(char));
	if (fusion == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		fusion[i] = s1[i];

	for (j = 0 ; j < n ; j++)
		fusion[i + j] = s2[j];

	fusion[i + j] = '\0';

	return (fusion);
}
