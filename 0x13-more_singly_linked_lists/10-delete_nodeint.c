#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index-1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	if (i == 0)
		temp = *head;
	else
	{
		temp = ptr->next;
		ptr->next = temp->next;
	}
	free (temp);

	return (1);
}
