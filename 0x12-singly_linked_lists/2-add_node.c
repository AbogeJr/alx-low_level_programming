#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to a pointer to th first element of the list
 * @str: str value to be stored in new node
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
