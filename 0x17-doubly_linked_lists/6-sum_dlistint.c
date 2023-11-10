#include "lists.h"

/**
 * sum_dlistint - sum the node to list.
 * @head: pointer of head
 *
 * Return: empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

