#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of linked list.
 * @head: address of pointer.
 *
 * Return: sum data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


