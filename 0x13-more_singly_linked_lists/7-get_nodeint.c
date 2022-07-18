#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to list
 * @index: index of node to be returned
 *
 * Return: node at index. NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;
	int flag = 0;

	while (ptr)
	{
		if (i == index)
		{
			flag = 1;
			break;
		}
		i++;
		ptr = ptr->next;
	}

	if (flag)
		return (ptr);
	else
		return (NULL);
}
