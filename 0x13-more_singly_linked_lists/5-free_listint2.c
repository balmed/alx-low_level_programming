#include "lists.h"

/**
 * free_listint2 -  frees a list.
 * @head: address of pointer.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
