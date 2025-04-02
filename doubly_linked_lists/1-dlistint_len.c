#include "lists.h"

/**
 * dlistint_len - returns number of elements of a doubly linked list
 * @h: head of the list whose number is returned
 *
 * Return: the number of elements of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
