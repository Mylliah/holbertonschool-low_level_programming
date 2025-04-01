#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function that returns the length of string
 * @s: a string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the list where the new node is added
 * @str: the string of characters in the node
 *
 * Return: the adress of the new elements, or NULL of it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}

	return (new);
}
