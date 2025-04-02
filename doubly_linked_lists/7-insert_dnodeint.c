#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a nex node at a given position
 * @h: double pointer to the end of the list
 * @idx: index where the new node should be added
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	i = 0;

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
