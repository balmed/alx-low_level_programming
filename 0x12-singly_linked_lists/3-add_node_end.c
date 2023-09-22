#include "lists.h"

/**
 * add_node_end - Adds  a new node at the end of a list.
 * @head: Address of pointer to head node.
 * @str: Field of node.
 *
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !n_node)
		return (NULL);
	if (str)
	{
		n_node->str = strdup(str);
		if (!n_node->str)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len  = strlen(n_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n_node;
	}
	else
		*head = n_node;
	return (n_node);
}
