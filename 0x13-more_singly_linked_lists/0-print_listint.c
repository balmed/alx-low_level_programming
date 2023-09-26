#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - Prints all the elements of a list.
 * @h: singly linked list
 *
 * Return: The number of nodes (length).
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
