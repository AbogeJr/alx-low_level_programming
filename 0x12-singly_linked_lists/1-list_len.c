#include "lists.h"

/**
 * list_len - return the number of elements in a list
 * @h: pointer to head of list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
