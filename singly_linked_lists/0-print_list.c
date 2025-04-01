#include "lists.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str)
		{
			i = 0;
			_putchar('[');
			print_number(h->len);
			_putchar(']');
			_putchar(' ');
			for (i = 0 ; h->str[i] ; i++)
				_putchar(h->str[i]);
		}
		else
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}

