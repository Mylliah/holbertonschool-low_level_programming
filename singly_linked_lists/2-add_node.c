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
 * add_node - adds a new node at the beginning of a linked list
 * @head: head of the list where the new node is added
 * @str: the string of character in the node
 *
 * Return: the adress of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
