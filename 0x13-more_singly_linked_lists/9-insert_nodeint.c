#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	int flag = 0;
	unsigned int i = 0;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	new->n =n;
	new->next = NULL;

	while (ptr)
	{
		if(i == idx-1)
		{
			flag = 1;
			break;
		}
		i++;
		ptr = ptr->next;
	}

	if (!flag)
		return (NULL);

	new->next = ptr->next;
        ptr->next = new;

        return (new);
}
