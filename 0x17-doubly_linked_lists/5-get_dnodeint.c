#include "lists.h"

/**
 * get_dnodeint_at_index - get node to list of index.
 * @head: pointer of head
 * @index: index of list
 *
 * Return: empty
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
