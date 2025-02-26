#include <stdio.h>

/**
 * main - Entry point
 * _putchar - function that prints
 *
 * Return: 0 for success
 */

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
	return (0);
}
