#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list
 * @head: pointer to list
 *
 * Return: sum of data. 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
