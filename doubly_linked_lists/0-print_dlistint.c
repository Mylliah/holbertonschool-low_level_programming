#include "lists.h"

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
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		print_number(h->n);
		_putchar ('\n');
		h = h->next;
		count++;
	}
	return (count);
}
