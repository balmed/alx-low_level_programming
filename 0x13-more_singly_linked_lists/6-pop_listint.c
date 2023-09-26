#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: address of pointer.
 *
 * Return: Numbre of node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
