#include "lists.h"

/**
 * free_list - frees a linked list from memory
 * @head:pointer to list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		free(temp->str);
		free(temp);
		head = head->next;
		temp = head;
	}
	free(head);
}
