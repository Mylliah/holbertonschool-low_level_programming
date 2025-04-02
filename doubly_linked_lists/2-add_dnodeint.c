#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a double linked list
 * @head: double pointer to head of the list where the new node is added
 * @n: integer to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head = new;

	return (new);
}
