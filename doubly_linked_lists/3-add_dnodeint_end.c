#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of the doubly linked list
 * @head: pointer to the pointer to head of the list where new node is added
 * @n: integer value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *lastnode = *head;

	if (new == NULL || head == NULL) 
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = new;
	new->prev = lastnode;

	return (new);
}
