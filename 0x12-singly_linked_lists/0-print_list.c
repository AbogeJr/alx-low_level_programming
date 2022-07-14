#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
