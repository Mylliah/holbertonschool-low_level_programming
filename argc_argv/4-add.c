#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: numbers of arguments
 * @argv: array of arguments
 *
 * Return: 0 or error
 */

int main(int argc, char **argv)
{
	int n, j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (!isdigit(argv[n][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
	}
	printf("%d\n", add);
	return (0);
}
