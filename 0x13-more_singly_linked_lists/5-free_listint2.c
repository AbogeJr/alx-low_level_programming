#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp->next)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}

	free(temp);
	*head = NULL;
}
