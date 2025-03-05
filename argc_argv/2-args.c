#include <stdio.h>

/**
 * main - that prints the name's program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */


int main(int argc __attribute__((__unused__)), char **argv)
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
