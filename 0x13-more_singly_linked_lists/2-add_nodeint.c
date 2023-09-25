#include "lists.h"

/**
 * print_listint -  prints all the elements of a list.
 * @head: singly linked list
 * @n: valus integer
 *
 * Return: The number of nodes (length).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	
	if (!n_node)
	{
		return (NULL);
	}
	if (!*head)
	{
		n_node->next = NULL;
		n_node->n = n;
		return (n_node)
	}
	else
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (*head);
	
	}
}
