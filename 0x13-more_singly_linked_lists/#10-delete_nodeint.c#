#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @index: index to be deleted from
 *
 * Return: 1 is succeeded. -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *temp = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr; i++)
	{
		if (i == index - 1)
		{
			temp = ptr->next;
			ptr->next = temp->next;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
	}

	return (-1);
}
