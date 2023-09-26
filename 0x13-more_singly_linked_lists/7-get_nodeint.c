#include "lists.h"

/**
 * get_nodeint_at_index - retturn node at index.
 * @head: address of pointer.
 * @index: index of node get.
 *
 * Return: address ot node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}
