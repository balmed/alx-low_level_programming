#include "lists.h"

/**
 * reverse_listint - reverses list.
 * @head: address of pointer.
 *
 * Return: pointer to the 1 node in the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}

