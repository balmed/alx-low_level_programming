#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list.
 * @head: address of pointer.
 * @index: index to deletes node
 *
 * Return: 1 on success, -1 on  failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}
	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);
}
