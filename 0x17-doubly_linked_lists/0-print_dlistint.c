#include "lists.h"

/**
 * print_dlistint -print list.
 * @h: pointer of head node
 *
 * Return: size of list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
