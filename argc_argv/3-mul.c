#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the name's program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */


int main(int argc, char **argv)
{
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
