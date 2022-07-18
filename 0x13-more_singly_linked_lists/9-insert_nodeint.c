#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index to be inserted to
 * @n: integer for new node
 *
 * Return: address of new node. NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (!new || !*head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx && ptr; i++)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
