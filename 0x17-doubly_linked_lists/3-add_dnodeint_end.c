#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: reference to head pointer
 * @n: data for new node
 * Return: address of new node. NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
		ptr = ptr->next;

	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
