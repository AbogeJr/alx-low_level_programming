#include "lists.h"

/**
 * add_dnodeint - add node to beginning of doubly linked list
 * @head: reference to head node
 * @n: element for node to be added
 * Return: address of new node. NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->next = (*head);
	new_node->prev = NULL;
	new_node->n = n;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
