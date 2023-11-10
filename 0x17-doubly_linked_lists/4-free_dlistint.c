#include "lists.h"

/**
 * free_dlistint - free node to list.
 * @head: pointer of head
 *
 * Return: empty
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}

}
