#include "lists.h"

/**
 * pop_listint - deletes head node from list
 * @head: ref to head node
 *
 * Return: deleted element. 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
