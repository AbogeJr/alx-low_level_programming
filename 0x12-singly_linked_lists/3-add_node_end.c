#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to pointer to first element of list
 * @str: string to be copied to new node
 *
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr = NULL;

	ptr = *head;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
