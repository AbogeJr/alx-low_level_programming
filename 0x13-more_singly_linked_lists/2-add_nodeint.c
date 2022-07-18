#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: reference to head pointer
 * @n: integer for new node
 *
 * Return: pointer to new node. NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;

	return (new);
}
