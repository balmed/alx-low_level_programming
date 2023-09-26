#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: address of pointer.
 * @idx: index to insert new node
 * @n: n numbre of new node
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (!head || !n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		i++;
		node = node->next;
	}
	free(n_node);
	return (NULL);
}
