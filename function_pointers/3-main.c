#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the selected operation
 * @argc: numbers of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int calc;
	char *operator;
	int (*f_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	f_op = get_op_func(operator);
	if (f_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = f_op(num1, num2);
	printf("%d\n", calc);
	return (0);
}
