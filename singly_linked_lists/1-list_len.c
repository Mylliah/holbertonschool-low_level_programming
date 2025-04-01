#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements of a linked list
 * @h: head of the list whose number is returned
 *
 * Return: the number of elements of the linked list
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
