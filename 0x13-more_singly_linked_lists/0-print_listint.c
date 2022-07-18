#include "lists.h"

/**
 * print_listint - prints all elements of a listint list
 * @h: pointer to list
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
