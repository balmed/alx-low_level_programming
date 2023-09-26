#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: singly linked list
 * @n: valus integer
 *
 * Return: The number of nodes (length).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp;

	n_node = malloc(sizeof(listint_t));

	if (!head || !n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (!*head)
		*head = n_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = n_node;
	}
		return (n_node);
}
