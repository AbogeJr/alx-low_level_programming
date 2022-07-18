#include "lists.h"

/**
 * add_nodeint_end - adds an element to the end of a list
 * @head: ref to head pointer
 * @n: integer for new node
 *
 * Return: address of new node. NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *ptr = *head;

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

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
