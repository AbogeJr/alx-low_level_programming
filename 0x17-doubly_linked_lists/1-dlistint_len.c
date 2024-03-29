#include "lists.h"

/**
 * dlistint_len - gets number of elements in a doubly linked list
 * @h: head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
